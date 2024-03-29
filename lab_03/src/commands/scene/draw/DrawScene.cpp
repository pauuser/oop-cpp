//
// Created by Pavel Ivanov on 14.05.2022.
//

#include "DrawScene.hpp"
#include "managers/SceneManager/SceneManager.hpp"

DrawScene::DrawScene(std::shared_ptr<BaseDrawer> &drawer) : _drawer(drawer) {
    _manager = DrawManagerCreator().getManager(drawer);
    _act = &DrawManager::draw;
}

void DrawScene::execute()
{
    ((*_manager).*_act)();
}