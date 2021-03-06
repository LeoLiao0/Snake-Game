// 4.16.1 0x32439257
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_food[]; // BITMAP_FOOD_ID = 0, Size: 20x20 pixels
extern const unsigned char image_sankehead[]; // BITMAP_SANKEHEAD_ID = 1, Size: 40x40 pixels
extern const unsigned char image_sankehead_extra_data[];
extern const unsigned char image_snakebody[]; // BITMAP_SNAKEBODY_ID = 2, Size: 40x40 pixels
extern const unsigned char image_snakebody_extra_data[];

const touchgfx::Bitmap::BitmapData bitmap_database[] =
{
    { image_food, 0, 20, 20, 3, 3, 14, (uint8_t)(touchgfx::Bitmap::ARGB8888) >> 3, 14, (uint8_t)(touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_sankehead, image_sankehead_extra_data, 40, 40, 6, 6, 28, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 28, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 },
    { image_snakebody, image_snakebody_extra_data, 40, 40, 6, 6, 28, (uint8_t)(touchgfx::Bitmap::RGB565) >> 3, 28, (uint8_t)(touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
}
