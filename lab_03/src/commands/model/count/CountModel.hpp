//
// Created by Pavel Ivanov on 14.05.2022.
//

#ifndef LAB_03_COUNTMODEL_HPP
#define LAB_03_COUNTMODEL_HPP

#include <memory>

#include "commands/model/BaseModelCommand.hpp"
#include "managers/SceneManager/SceneManager.hpp"

class CountModel : public BaseModelCommand
{
    using Action = size_t(SceneManager::*)();

public:
    CountModel() = delete;
    explicit CountModel(std::shared_ptr<size_t>& cnt);
    ~CountModel() override = default;

    void execute() override;

private:
    Action _act;

    std::shared_ptr<size_t> _cnt;

    std::shared_ptr<SceneManager> _manager;
};


#endif//LAB_03_COUNTMODEL_HPP
