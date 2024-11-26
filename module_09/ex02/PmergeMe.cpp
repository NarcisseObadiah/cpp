#include "PmergeMe.hpp"
#include <algorithm>
#include <ctime>
#include <iostream>

// Constructor to initialize with a sequence of integers
PmergeMe::PmergeMe(const std::vector<int>& sequence) : sequence_(sequence), sortingTime_(0.0) {}

// Helper function to merge two halves
template <typename Container>
void PmergeMe::merge(Container& container, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    Container L(container.begin() + left, container.begin() + left + n1);
    Container R(container.begin() + mid + 1, container.begin() + mid + 1 + n2);

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            container[k] = L[i];
            i++;
        } else {
            container[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        container[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        container[k] = R[j];
        j++;
        k++;
    }
}

// Helper function to perform merge-insertion sort
template <typename Container>
void PmergeMe::mergeInsertSort(Container& container, int left, int right)
{
    if (left < right)
	{
        if (right - left > 16)
		{ // Use merge sort for larger subarrays
            int mid = left + (right - left) / 2;
            mergeInsertSort(container, left, mid);
            mergeInsertSort(container, mid + 1, right);
            merge(container, left, mid, right);
        } 
		else // Use insertion sort for smaller subarrays
		{ 
            for (int i = left + 1; i <= right; ++i)
			{
                typename Container::value_type key = container[i];
                int j = i - 1;
                while (j >= left && container[j] > key) {
                    container[j + 1] = container[j];
                    j--;
                }
                container[j + 1] = key;
            }
        }
    }
}

// Ford-Johnson sorting algorithm for std::vector
void PmergeMe::fordJohnsonSort(std::vector<int>& vec) 
{
    mergeInsertSort(vec, 0, vec.size() - 1);
}

// Ford-Johnson sorting algorithm for std::deque
void PmergeMe::fordJohnsonSort(std::deque<int>& deq) 
{
    mergeInsertSort(deq, 0, deq.size() - 1);
}

// Sort the sequence using std::vector
void PmergeMe::sortWithVector() 
{
    std::vector<int> vec = sequence_;
    clock_t start = clock();
    fordJohnsonSort(vec);
    clock_t end = clock();
    sortingTime_ = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6; // Convert to microseconds
    sequence_ = vec;
}

// Sort the sequence using std::deque
void PmergeMe::sortWithDeque()
{
    std::deque<int> deq(sequence_.begin(), sequence_.end());
    clock_t start = clock();
    fordJohnsonSort(deq);
    clock_t end = clock();
    sequence_ = std::vector<int>(deq.begin(), deq.end());
    sortingTime_ = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1e6;
}

// Get the sorted sequence
std::vector<int> PmergeMe::getSortedSequence() const {
    return sequence_;
}

// Get the sorting time in microseconds
double PmergeMe::getSortingTime() const {
    return sortingTime_;
}
