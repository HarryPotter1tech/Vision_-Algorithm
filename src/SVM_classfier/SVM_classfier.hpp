#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/ml.hpp>
#include <string>
#include <vector>
#include "interface/algorithm_.hpp"

namespace interface::algorithm::svm{
    class SVM_classifier final : public IAlgorithm {
    public:
        SVM_classifier();
        ~SVM_classifier();

        void algorithm() override;

    private:
        cv::Ptr<cv::ml::SVM> svm;
    };
}
