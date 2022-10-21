#ifndef TANK_H
#define TANK_H

#include <Godot.hpp>
#include <KinematicBody.hpp>
#include <MeshInstance.hpp>
#include <Spatial.hpp>
#include <Ref.hpp>
#include <PackedScene.hpp>
#include <Vector3.hpp>
#include "./InputManager.h"

namespace godot {

class Tank : public KinematicBody {
    GODOT_CLASS(Tank, KinematicBody)

private:
    MeshInstance* _head;
    Spatial* _cannon;
    Ref<PackedScene>* _bullet;
    InputManager* _input_manager;

    float _move_speed;
    float _turn_speed;

    float _head_turn_speed;

public:

    static void _register_methods();

    Tank();
    ~Tank();

    void _ready();
    void _init();

    void _point_head_towards();


};

}

#endif