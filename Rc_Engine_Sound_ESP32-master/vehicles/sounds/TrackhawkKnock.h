const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 534;
const signed char knockSamples[] = {
0, -1, 0, 0, 0, 1, 0, 1, 1, 1, 0, -2, -1, -1, 0, 1, 
5, 13, 17, 19, 22, 26, 28, 32, 35, 35, 36, 37, 37, 37, 35, 31, 
29, 27, 23, 25, 27, 27, 29, 34, 36, 37, 40, 44, 50, 54, 55, 57, 
59, 60, 64, 64, 62, 63, 65, 66, 68, 71, 71, 72, 71, 68, 67, 63, 
60, 57, 53, 49, 43, 41, 40, 41, 43, 47, 51, 50, 52, 54, 52, 47, 
40, 38, 35, 30, 25, 18, 12, 8, 5, 0, -5, -9, -12, -14, -19, -23, 
-26, -25, -25, -25, -23, -23, -24, -24, -25, -26, -27, -30, -30, -29, -28, -24, 
-21, -19, -13, -12, -14, -16, -19, -26, -32, -37, -41, -42, -41, -38, -36, -34, 
-29, -20, -11, 2, 10, 15, 18, 17, 11, 7, 2, -5, -14, -20, -19, -13, 
-5, 4, 13, 28, 35, 36, 33, 23, 11, -8, -22, -29, -32, -29, -17, 8, 
29, 52, 70, 85, 94, 91, 86, 73, 54, 38, 16, 5, 3, 3, 8, 19, 
36, 50, 58, 63, 62, 55, 46, 36, 25, 16, 13, 13, 19, 26, 37, 49, 
56, 65, 63, 58, 51, 39, 20, 6, -7, -16, -26, -31, -30, -28, -24, -23, 
-23, -23, -28, -34, -38, -41, -46, -51, -52, -53, -53, -51, -48, -46, -47, -46, 
-46, -50, -56, -66, -74, -81, -84, -88, -95, -97, -97, -96, -96, -94, -94, -93, 
-90, -87, -86, -86, -80, -78, -73, -67, -64, -60, -59, -57, -58, -61, -61, -63, 
-68, -73, -76, -79, -81, -85, -87, -86, -84, -81, -76, -72, -66, -61, -54, -47, 
-40, -33, -25, -22, -19, -16, -11, -9, -9, -8, -7, -7, -5, -1, -1, -1, 
1, 3, 4, 3, 4, 4, 6, 10, 12, 18, 23, 29, 40, 47, 53, 61, 
68, 74, 88, 95, 102, 110, 116, 123, 126, 127, 127, 126, 125, 123, 122, 120, 
121, 121, 117, 111, 103, 94, 84, 76, 66, 61, 60, 62, 66, 71, 78, 81, 
82, 82, 82, 83, 82, 80, 80, 83, 85, 85, 84, 84, 85, 85, 83, 81, 
81, 82, 84, 84, 84, 84, 83, 79, 79, 79, 74, 73, 74, 73, 70, 71, 
67, 64, 59, 54, 51, 46, 39, 34, 27, 21, 15, 6, 1, -3, -10, -13, 
-16, -24, -28, -31, -36, -42, -44, -50, -52, -53, -54, -56, -62, -65, -67, -69, 
-74, -79, -89, -96, -100, -105, -109, -113, -113, -112, -113, -113, -112, -110, -111, -109, 
-110, -114, -114, -115, -116, -114, -114, -116, -115, -109, -105, -102, -100, -97, -98, -100, 
-102, -105, -110, -113, -114, -114, -110, -103, -98, -90, -81, -72, -65, -61, -60, -57, 
-54, -51, -49, -50, -49, -40, -35, -29, -23, -19, -12, -11, -11, -12, -16, -16, 
-13, -14, -13, -8, 0, 9, 19, 26, 34, 41, 47, 58, 64, 69, 73, 76, 
78, 78, 77, 75, 74, 72, 71, 72, 69, 67, 67, 68, 71, 74, 78, 83, 
88, 93, 105, 112, 116, 121, 124, 124, 124, 120, 116, 111, 107, 99, 98, 95, 
96, 98, 96, 95, 93, 92, 88, 84, 79, 70, 65, 61, 57, 50, 44, 41, 
38, 35, 27, 15, 6, 0, };
