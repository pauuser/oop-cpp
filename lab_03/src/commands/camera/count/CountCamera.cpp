//
// Created by Pavel Ivanov on 14.05.2022.
//

#include "CountCamera.hpp"

CountCamera::CountCamera(std::shared_ptr<size_t> &size): _count(size) {
    _manager = SceneManagerCreator().getManager();
    _act = &SceneManager::getCameraCount;
}

void CountCamera::execute()
{
    *(this->_count) = ((*_manager).*_act)();
}