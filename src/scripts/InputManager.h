#ifndef INPUT_MANAGER_H
#define INPUT_MANAGER_H

#include <Godot.hpp>
#include <Node.hpp>
#include <Input.hpp>

namespace godot{

class InputManager : public Node {

private:
    
public:
    static void _register_methods();

    InputManager();
    ~InputManager();

    

};
}

#endif