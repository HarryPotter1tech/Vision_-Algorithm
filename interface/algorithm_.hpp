#pragma once

namespace interface::algirthm{
    /**
     * @brief Abstract base class for all algorithms.
     * all algorithms class should inherit from this class and implement the algorithm method.
     */
    class IAlgorithm{
    public:
        virtual ~IAlgorithm() = 0;
        virtual void algorithm() = 0;
    
    private:
        // Add any necessary private members here
    };
}