/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/FoodBase.hpp>
#include <touchgfx/Color.hpp>

FoodBase::FoodBase()
{
    setWidth(1024);
    setHeight(600);
    circle_food.setPosition(0, 0, 40, 40);
    circle_food.setCenter(20, 20);
    circle_food.setRadius(20);
    circle_food.setLineWidth(0);
    circle_food.setArc(0, 360);
    circle_foodPainter.setColor(touchgfx::Color::getColorFrom24BitRGB(255, 255, 255));
    circle_food.setPainter(circle_foodPainter);

    add(circle_food);
}

void FoodBase::initialize()
{

}

