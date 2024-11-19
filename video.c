#include <string.h>
#include "config/video.h"
// Parameters:
//   w: width of the image
//   h: height of the image
//   durationMovie: duration in second of movie (colored image)
//   durationCredits: duration in second of credit (image Black/White)
//   unit: Unit of the output value. It could be 'bt' byte, 'ko' kilobits, 'mo' megabits, 'go' gigabits
// Return value
//   colored video size (based on the unit passed parametter)
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
   // YOUR CODE HERE - BEGIN
float video(int w, int h, int durationMovie, int durationCredits, int fps, char* unit) {
    // Calculate the total size of the movie images (colored images)
    long movieImageSizeBits = w * h * 24 * durationMovie * fps;  // 24 bits per pixel, movie part

    // Calculate the total size of the credits images (black/white images)
    long creditsImageSizeBits = w * h * 8 * durationCredits * fps;  // 8 bits per pixel, credits part

    // Total size in bits
    long totalSizeBits = movieImageSizeBits + creditsImageSizeBits;

    // Convert the total size to the desired unit
    if (strcmp(unit, "byte") == 0) {
        // 1 byte = 8 bits
        return totalSizeBits / 8.0;
    } 
    else if (strcmp(unit, "ko") == 0) {
        // 1 kilobit = 1000 bits
        return totalSizeBits / 1000.0;
    } 
    else if (strcmp(unit, "mo") == 0) {
        // 1 megabit = 1,000,000 bits
        return totalSizeBits / 1000000.0;
    } 
    else if (strcmp(unit, "go") == 0) {
        // 1 gigabit = 1,000,000,000 bits
        return totalSizeBits / 1000000000.0;
    } 
    else {
        // If the unit is invalid, return 0 or an error value
        return 0;
    }
   // YOUR CODE HERE - END
   return 0;
}
