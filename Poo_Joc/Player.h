#pragma once

#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\System.hpp>
//#include <SFML\Audio.hpp>
//#include <SFML\Window.hpp>
//#include <SFML\Network.hpp>

class Player
{
private:
	sf::Sprite sprite;
	sf::Texture texture;

	float movementSpeed;
	float attackCooldown;
	float attackCooldawnMax;
	
	int hp;
	int hpMax;


	//Private functions
	void initVariables();
	void initTexture();
	void initSprite();

public:
	Player();
	virtual ~Player();

	//Accesor
	const sf::Vector2f& getPos() const;
	const sf::FloatRect getBounds() const;
	const int& getHp() const;
	const int& getHpMax() const;

	//Modifiers
	void setPosition(const float x, const float y);
	void setHp(const int hp);
	void loseHp(const int value);

	//Functions
	void move(const float dirX, const float dirY);
	const bool canAttack();

	void updateAttack();
	void update();
	void render(sf::RenderTarget& target);

};

