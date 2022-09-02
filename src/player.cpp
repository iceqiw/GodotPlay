#include "player.h"

using namespace godot;

void Player::_register_methods() {
  register_method("_process", &Player::_process);
  register_property<Player, float>("amplitude", &Player::amplitude, 10.0);
  register_property<Player, float>("speed", &Player::set_speed, &Player::get_speed, 1.0);
}

Player::Player() {}

Player::~Player() {
  // add your cleanup here
}

void Player::_init() {
  // initialize any variables here
  time_passed = 0.0;
  amplitude = 10.0;
  speed = 1.0;
}

void Player::_process(float delta) {
  time_passed += speed * delta;

	Vector2 new_position = Vector2(
		amplitude + (amplitude * sin(time_passed * 2.0)),
		amplitude + (amplitude * cos(time_passed * 1.5))
	);

  set_position(new_position);
  time_emit += delta;
  if (time_emit > 1.0) {
    time_emit = 0.0;
  }

}

void Player::set_speed(float p_speed) { speed = p_speed; }

float Player::get_speed() { return speed; }
