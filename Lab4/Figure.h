#pragma once
#include <SFML/Graphics.hpp>
#include "MyColor.h"
using namespace sf;
class Figure
{
protected:
	Color color;
	bool trailMovement;
public:
	void setTrailMovement(bool move);
	bool getTrailMovement();
	virtual FloatRect getGlobalBounds() = 0;
	virtual void setScale(float x, float y) = 0;
	virtual Vector2f getPosition() = 0;
	virtual bool checkIntersection(Figure* figure) = 0;
	virtual bool updateWindowCollision(RenderWindow& window) = 0;
	virtual void autoMove(RenderWindow& window) = 0;
	virtual void hide() = 0;
	virtual void show() = 0;
	virtual void draw(RenderWindow& window, bool withTrail) = 0;
	virtual void move(float x, float y, RenderWindow& window) = 0;
	virtual void setOutline(float thickness, Color color) = 0;
	virtual void setColor(MyColor color) = 0;
};

