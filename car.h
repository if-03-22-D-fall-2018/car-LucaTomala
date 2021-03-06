/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H
enum Type { AIXAM, FIAT_MULTIPLA, JEEP };
enum Color { RED, GREEN, BLACK, BLUE, ORANGE, SILVER };

typedef struct CarImplementation* Car;

Car get_car(enum Type type);
void init();
void accelerate(Car car);
void set_acceleration_rate(Car car, int rate);
int get_speed(Car car);
enum Color get_color(Car car);
double get_fill_level(Car car);
enum Type get_type(Car car);
double get_acceleration_rate(Car car);

#endif
