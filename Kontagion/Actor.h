#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"

// Students:  Add code to this file, Actor.cpp, StudentWorld.h, and StudentWorld.cpp

class StudentWorld;

class Actor : public GraphObject { //Part 1
public:
    Actor(int ID, int x, int y, Direction dir, int d, bool ind);
    virtual void doSomething() = 0;
    virtual ~Actor();
    bool isAlive();
    void setDead();
    virtual void damage() = 0;
    virtual bool blocks();
    virtual bool allowsOverlap();
private:
    bool m_isAlive;
};

class Socrates : public Actor { //Part 1
public:
    Socrates(StudentWorld* w_ptr);
    void doSomething();
    ~Socrates();
    void damage();
    int getSpray();
    int getFlame();
    int getHP();
private:
    int m_spray;
    int m_flame;
    int m_hp;
    StudentWorld* m_world;
};

class Bacteria : public Actor {
public:
    Bacteria();
    ~Bacteria();
private:
    int m_hp;
};

class regSal : public Bacteria {
    
};

class aggSal : public Bacteria {
    
};

class eColi : public Bacteria {
    
};

class Pit : public Actor {
    
};

class Projectile : public Actor {

};

class flameProj : public Projectile {
    
};

class sprayProj : public Projectile {
    
};

class Dirt : public Actor { //Part 1
public:
    Dirt(int xFromCenter, int yFromCenter);
    void doSomething();
    void damage();
    ~Dirt();
    bool blocks();
    bool allowsOverlap();
};

class Food : public Actor {
public:
    Food(int xFromCenter, int yFromCenter);
    void doSomething();
    void damage();
    ~Food();
};

class Goody : public Actor {
    
};

class healthG : public Goody {
    
};

class flameG : public Goody {
    
};

class lifeG : public Goody {
    
};

class Fungi : public Actor {
    
};

void polarToRect(int r, double theta, int& x, int& y);

void rectToPolar(int x, int y, int& r, double& theta);

bool overlap(const Actor& a1, const Actor& a2);

bool overlap(int x1, int y1, int x2, int y2);

bool MovementOverlap(const Bacteria& b, const Dirt& d);

void randPolar(int r, int& x, int& y);

#endif // ACTOR_H_
