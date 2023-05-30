#pragma once

#include <QObject>

#include "interfaces/IDrawable.h"
#include "interfaces/IMovable.h"

class IBullet : public IDrawable, public IMovable
{
protected:
    int damage_;
};

Q_DECLARE_INTERFACE(IBullet, "com.example.IBullet")