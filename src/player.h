#ifndef GDEXAMPLE_H
#define GDEXAMPLE_H

#include <Godot.hpp>
#include <Sprite.hpp>

namespace godot {

class Player : public Sprite {
	GODOT_CLASS(Player, Sprite)

private:
	float time_passed;
	float time_emit;
	float amplitude;
	float speed;

    
public:
	static void _register_methods();

	Player();
	~Player();

	void _init(); // our initializer called by Godot

	void _process(float delta);
	void set_speed(float p_speed);
	float get_speed();
};

}

#endif
