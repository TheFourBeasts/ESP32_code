const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 646;
const signed char knockSamples[] = {
0, 0, 0, 3, 9, 15, 22, 25, 28, 32, 34, 36, 43, 48, 50, 53, 
58, 62, 65, 67, 67, 67, 66, 69, 71, 73, 75, 77, 80, 87, 91, 94, 
97, 99, 94, 92, 93, 90, 84, 78, 72, 68, 65, 63, 61, 59, 58, 56, 
57, 59, 56, 51, 54, 60, 62, 65, 70, 77, 82, 86, 86, 86, 86, 86, 
88, 92, 94, 96, 101, 103, 106, 108, 109, 109, 107, 106, 103, 103, 102, 98, 
92, 84, 75, 66, 56, 44, 35, 29, 25, 21, 19, 21, 24, 28, 33, 38, 
42, 47, 48, 48, 46, 44, 38, 34, 29, 24, 22, 18, 14, 11, 6, 1, 
0, 3, 9, 15, 21, 22, 18, 8, 3, -4, -12, -20, -26, -30, -28, -25, 
-22, -20, -22, -24, -22, -18, -12, -9, -5, -4, -2, 3, 7, 8, 5, -1, 
-7, -13, -19, -29, -37, -42, -45, -44, -38, -25, -16, -5, 4, 9, 14, 13, 
9, 5, -2, -10, -19, -22, -25, -28, -31, -32, -30, -28, -26, -22, -19, -18, 
-16, -15, -17, -19, -23, -24, -21, -18, -21, -27, -30, -35, -39, -42, -45, -45, 
-44, -36, -27, -19, -13, -9, -1, 1, 1, 3, 7, 8, 7, 6, 2, -3, 
-7, -10, -12, -14, -20, -24, -24, -22, -19, -19, -22, -25, -27, -28, -29, -30, 
-30, -30, -29, -23, -19, -17, -16, -13, -13, -12, -7, -4, -5, -7, -13, -15, 
-18, -23, -25, -24, -23, -18, -14, -14, -14, -18, -21, -23, -26, -29, -31, -30, 
-27, -24, -20, -18, -18, -18, -19, -18, -16, -15, -7, -3, 1, 3, 3, 4, 
5, 2, 3, 4, 4, 4, 3, 2, 0, -5, -10, -15, -16, -15, -13, -9, 
-6, -2, -2, -5, -9, -11, -15, -22, -30, -38, -44, -49, -56, -59, -63, -69, 
-73, -74, -71, -70, -68, -64, -59, -45, -36, -32, -30, -29, -30, -28, -23, -23, 
-27, -33, -38, -41, -37, -34, -35, -34, -32, -29, -24, -22, -24, -25, -29, -30, 
-26, -22, -23, -28, -37, -44, -49, -51, -48, -44, -47, -47, -43, -40, -37, -36, 
-35, -35, -32, -25, -18, -14, -12, -9, -10, -12, -15, -15, -15, -14, -13, -11, 
-5, 1, 7, 12, 15, 15, 17, 20, 22, 23, 21, 18, 19, 22, 24, 26, 
27, 27, 26, 22, 18, 15, 11, 5, 5, 8, 10, 13, 20, 25, 29, 33, 
35, 39, 41, 37, 33, 31, 29, 27, 23, 21, 22, 26, 33, 43, 45, 46, 
47, 48, 49, 50, 47, 44, 45, 46, 49, 51, 49, 47, 48, 49, 48, 49, 
51, 50, 48, 49, 53, 54, 57, 57, 57, 61, 64, 67, 69, 71, 74, 77, 
81, 85, 87, 88, 89, 90, 90, 91, 92, 94, 92, 89, 89, 90, 90, 91, 
92, 90, 87, 86, 85, 84, 82, 81, 84, 85, 84, 85, 85, 83, 81, 80, 
79, 79, 81, 81, 82, 84, 82, 78, 75, 72, 70, 70, 70, 69, 69, 68, 
66, 64, 57, 53, 49, 44, 39, 36, 33, 30, 26, 20, 14, 6, 2, -4, 
-6, -6, -4, 1, 4, 8, 11, 13, 15, 17, 16, 15, 12, 11, 11, 9, 
5, 2, 0, -3, -14, -22, -28, -32, -35, -38, -40, -41, -42, -45, -46, -50, 
-54, -59, -63, -67, -71, -72, -70, -68, -66, -65, -65, -68, -70, -73, -77, -78, 
-81, -83, -88, -95, -101, -105, -111, -115, -120, -124, -126, -127, -126, -123, -120, -116, 
-111, -104, -101, -100, -101, -102, -105, -110, -112, -113, -113, -113, -109, -103, -98, -92, 
-91, -93, -98, -100, -103, -105, -107, -110, -111, -109, -105, -102, -101, -105, -108, -110, 
-111, -113, -114, -113, -112, -114, -117, -117, -118, -117, -117, -117, -116, -113, -105, -99, 
-91, -87, -85, -84, -83, -80, -77, -74, -72, -70, -66, -63, -60, -57, -53, -47, 
-46, -45, -41, -32, -15, 0, };
