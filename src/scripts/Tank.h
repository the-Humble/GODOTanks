#ifndef TANK_H
#define TANK_H

#include <Godot.hpp>
#include <KinematicBody.hpp>
#include <MeshInstance.hpp>
#include <Spatial.hpp>
#include <Ref.hpp>
#include <PackedScene.hpp>
#include <Input.hpp>

namespace godot {

class Tank : public KinematicBody{
    GODOT_CLASS(Tank, KinematicBody)

private:
    MeshInstance* _head;
    Spatial* _cannon;
    Ref<PackedScene>* _bullet;

};

}

#endif