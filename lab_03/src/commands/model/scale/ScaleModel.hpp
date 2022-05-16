//
// Created by Pavel Ivanov on 14.05.2022.
//

#ifndef LAB_03_SCALEMODEL_HPP
#define LAB_03_SCALEMODEL_HPP

#include <memory>

#include "commands/model/BaseModelCommand.hpp"

class ScaleModel : public BaseModelCommand
{
public:
    ScaleModel() = delete;
    explicit ScaleModel(std::size_t id, double kx, double ky, double kz);
    ~ScaleModel() override = default;

    void execute() override;

private:
    std::size_t _id = 0;
    double _kx = 0, _ky = 0, _kz = 0;
};


#endif//LAB_03_SCALEMODEL_HPP