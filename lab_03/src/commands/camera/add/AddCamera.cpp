//
// Created by Pavel Ivanov on 14.05.2022.
//

#include "AddCamera.hpp"

AddCamera::AddCamera(double posx, double posy, double posz, double ax, double ay, double az): _posx(posx), _posy(posy), _posz(posz),
                                                             _ax(ax), _ay(ay), _az(az){
    _camera = CameraCreator(Point{_posx, _posy, _posz}, _ax, _ay, _az).create();
    _manager = SceneManagerCreator().getManager();
    _act = &SceneManager::addObject;
}

void AddCamera::execute()
{
    ((*_manager).*_act)(_camera);
}