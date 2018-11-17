#ifndef TAMAGOCHI_H
#define TAMAGOCHI_H


#include <QObject>

class tamagochi : public QObject
{
    Q_OBJECT
public:
    explicit tamagochi(QObject *parent = nullptr);

private:
    QString name; //имя
    int health; //здоровье
    int happiness; //счастье
    int food; //сытость
    int last_action; // время(!) последнего действия
public:
    QString getName();
    int getHealth();
    int getHappiness();
    int getFood();

    void feed();
    void play();
    void wash();

    bool isAlive();

    void decrieseHealth();
    void decrieseHappinneess();
    void decrieseFood();
};

#endif // TAMAGOCH_H
