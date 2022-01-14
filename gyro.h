// ----------------------------------------
// gyro.h
// 创建者：seesea <seesea2517#gmail#com>
// 时  间：2022-01-11
// 功  能：九轴传感器封装
// ----------------------------------------

#ifndef _GYRO_H_
#define _GYRO_H_

class Gyro
{
private:
    int xSpeed;
    int ySpeed;
    int scale;
    int accelgyro;
    int ax, ay, az;
    int offsetX, offsetY, offsetZ;
    bool status;

public:
    Gyro()
    {
        status = false;
    }

    void init(int scale = 1000)
    {
        this->scale = scale;
    }

    void update()
    {

    }

    int getXAcc()
    {
        return xSpeed;
    }

    int getYAcc()
    {
        return ySpeed;
    }

    int getZAcc()
    {
        return ySpeed;
    }

    bool isMoving(int threshold)
    {
        return xSpeed >= threshold;
    }

};

#endif
