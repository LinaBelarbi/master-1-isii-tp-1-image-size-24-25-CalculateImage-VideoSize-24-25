#include <string.h>
#include "config/coloredBitmap.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   u: Unit of the output value. It could be 'bt' bits, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored image size Bitmap (based on the unit passed parametter)
float coloredBitmap(int w, int h, char* unit) {
   // YOUR CODE HERE - BEGIN
 // Calculate the size of the image in bits
   long imageSizeBits = w * h * 24;  // 24 bits per pixel (3 bytes per pixel for RGB)

   // Convert the size to the desired unit
   if (strcmp(unit, "bt") == 0) {
       // Return size in bits
       return imageSizeBits;
   } 
   else if (strcmp(unit, "ko") == 0) {
       // Return size in kilobits (1 kilobit = 1000 bits)
       return imageSizeBits / 1000.0;
   } 
   else if (strcmp(unit, "mo") == 0) {
       // Return size in megabits (1 megabit = 1,000,000 bits)
       return imageSizeBits / 1000000.0;
   } 
   else if (strcmp(unit, "go") == 0) {
       // Return size in gigabits (1 gigabit = 1,000,000,000 bits)
       return imageSizeBits / 1000000000.0;
   } 
   else {
       // If the unit is invalid, return 0 or an error value (could also use NaN for invalid input)
       return 0;
   }

   // YOUR CODE HERE - END
   return 0;
}
