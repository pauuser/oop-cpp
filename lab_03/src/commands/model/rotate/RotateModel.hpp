//
// Created by Pavel Ivanov on 14.05.2022.
//

#ifndef LAB_03_ROTATEMODEL_HPP
#define LAB_03_ROTATEMODEL_HPP

#include <memory>

#include "commands/model/BaseModelCommand.hpp"
#include "managers/TransformManager/TransformManager.hpp"

class RotateModel : public BaseModelCommand
{
    using Action = void(TransformManager::*)(size_t, const Point &, const Point &, const Point &);

public:
    RotateModel() = delete;
    explicit RotateModel(std::size_t id, double ax, double ay, double az);
    ~RotateModel() override = default;

    void execute() override;

private:
    Action _act;

    std::size_t _id = 0;
    double _ax = 0, _ay = 0, _az = 0;

    std::shared_ptr<TransformManager> _manager;
};


#endif//LAB_03_ROTATEMODEL_HPP
