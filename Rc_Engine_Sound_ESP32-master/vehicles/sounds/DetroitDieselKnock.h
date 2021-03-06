const unsigned int knockSampleRate = 22050;
const unsigned int knockSampleCount = 390;
const signed char knockSamples[] = {
0, -3, -6, -1, 4, 7, 13, 16, 17, 17, 19, 17, 12, 9, 6, 3,
1, -10, -14, -13, -13, -13, -12, -11, -9, -8, -6, -1, 6, 14, 16, 18, 
19, 20, 20, 20, 18, 15, 11, 7, 6, 9, 11, 10, 12, 16, 13, 13, 
20, 25, 27, 34, 36, 38, 44, 50, 52, 59, 62, 66, 72, 72, 70, 68, 
74, 81, 82, 82, 77, 73, 71, 72, 74, 74, 76, 78, 80, 88, 95, 98, 
99, 99, 98, 100, 102, 108, 112, 110, 111, 115, 117, 122, 122, 121, 123, 124, 
122, 122, 123, 123, 123, 124, 122, 122, 123, 122, 118, 116, 119, 122, 124, 127, 
125, 120, 115, 112, 110, 106, 101, 96, 90, 86, 89, 89, 87, 85, 83, 80, 
81, 83, 84, 86, 87, 86, 84, 85, 94, 94, 92, 92, 94, 98, 105, 106, 
103, 98, 90, 84, 82, 78, 75, 72, 70, 66, 69, 75, 78, 77, 78, 78, 
72, 67, 62, 57, 50, 45, 36, 26, 19, 8, -3, -2, -6, -11, -11, -12, 
-19, -20, -22, -27, -28, -29, -34, -36, -40, -46, -50, -57, -60, -60, -59, -59, 
-60, -57, -57, -56, -53, -53, -55, -55, -58, -61, -62, -65, -69, -72, -75, -76, 
-74, -72, -73, -71, -69, -66, -62, -60, -56, -56, -60, -57, -53, -56, -54, -54, 
-57, -57, -54, -51, -53, -56, -56, -56, -55, -53, -51, -52, -55, -55, -58, -60, 
-57, -51, -49, -51, -47, -42, -35, -28, -22, -14, -15, -20, -21, -20, -21, -18, 
-18, -17, -19, -22, -23, -30, -31, -30, -28, -23, -20, -18, -17, -20, -22, -24, 
-29, -33, -36, -38, -40, -44, -46, -48, -51, -56, -60, -65, -67, -64, -63, -66, 
-68, -70, -72, -74, -77, -78, -76, -74, -72, -70, -68, -65, -68, -69, -65, -60, 
-54, -50, -51, -51, -51, -51, -52, -53, -57, -61, -64, -69, -75, -79, -80, -81, 
-83, -85, -85, -86, -90, -91, -89, -85, -73, -69, -66, -62, -60, -60, -60, -62, 
-64, -66, -63, -58, -60, -59, -55, -50, -49, -48, -44, -42, -43, -45, -48, -54, 
-58, -61, -66, -70, -72, -70, -69, -65, -59, -56, -54, -52, -52, -47, -42, -39, 
-30, -26, -23, -22, -21, -21, -25, -24, -23, -21, -17, -13, -12, -8, -6, -7, 
-8, -9, -9, -7, -4, 0, };
