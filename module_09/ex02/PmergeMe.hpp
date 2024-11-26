#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>

class PmergeMe
{
public:
    PmergeMe(const std::vector<int>& sequence);

    void sortWithVector();
    void sortWithDeque();

    std::vector<int> getSortedSequence() const;
    double getSortingTime() const;

private:
    void fordJohnsonSort(std::vector<int>& vec);
    void fordJohnsonSort(std::deque<int>& deq);

    template <typename Container>
    void mergeInsertSort(Container& container, int left, int right);

    template <typename Container>
    void merge(Container& container, int left, int mid, int right);

    std::vector<int> sequence_;
    double sortingTime_;
};

#endif
