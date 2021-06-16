const unsigned int jakeBrakeSampleRate = 22050;
const unsigned int jakeBrakeSampleCount = 4546;
const signed char jakeBrakeSamples[] = {
0, 3, 6, 8, 11, 14, 18, 20, 23, 25, 27, 29, 31, 32, 34, 34, 
35, 36, 36, 37, 39, 40, 42, 45, 48, 49, 51, 51, 51, 51, 51, 51, 
50, 52, 54, 55, 57, 57, 58, 59, 61, 61, 62, 62, 63, 65, 66, 65, 
66, 67, 66, 67, 66, 65, 64, 63, 62, 61, 61, 62, 64, 65, 66, 68, 
67, 66, 66, 65, 64, 63, 62, 61, 60, 59, 56, 55, 54, 54, 53, 52, 
51, 48, 46, 46, 46, 46, 46, 45, 45, 45, 46, 47, 47, 46, 45, 44, 
46, 49, 52, 54, 55, 56, 58, 58, 58, 57, 56, 55, 52, 51, 50, 49, 
48, 47, 47, 47, 47, 46, 44, 42, 39, 36, 34, 31, 28, 24, 21, 18, 
16, 14, 11, 7, 4, 2, 1, -1, -3, -6, -8, -11, -13, -16, -18, -19, 
-20, -20, -21, -23, -25, -27, -28, -31, -34, -38, -40, -41, -43, -42, -42, -41, 
-40, -40, -40, -40, -41, -42, -42, -43, -44, -45, -46, -47, -47, -48, -48, -48, 
-48, -47, -47, -47, -47, -46, -45, -44, -43, -43, -43, -44, -44, -44, -43, -42, 
-41, -41, -40, -38, -36, -34, -34, -35, -35, -35, -36, -35, -33, -32, -30, -30, 
-30, -29, -30, -31, -32, -32, -34, -36, -36, -36, -36, -38, -37, -37, -36, -35, 
-35, -35, -35, -36, -36, -36, -37, -36, -35, -34, -34, -34, -35, -36, -37, -37, 
-37, -37, -36, -35, -33, -32, -31, -30, -28, -26, -24, -23, -21, -20, -19, -16, 
-14, -11, -7, -3, 2, 7, 10, 13, 15, 17, 19, 22, 23, 24, 26, 27, 
30, 31, 32, 32, 34, 36, 39, 40, 42, 45, 50, 55, 58, 61, 64, 67, 
68, 69, 71, 72, 72, 73, 75, 75, 76, 78, 79, 80, 81, 81, 80, 79, 
77, 76, 76, 74, 74, 73, 72, 72, 73, 76, 78, 80, 82, 82, 82, 82, 
82, 80, 78, 76, 72, 68, 65, 60, 55, 51, 46, 43, 38, 34, 30, 27, 
24, 22, 21, 19, 19, 19, 18, 18, 17, 16, 15, 14, 13, 11, 9, 6, 
3, 2, 1, 1, 2, 2, 3, 3, 2, 1, -1, -2, -3, -3, -2, -1, 
2, 3, 3, 3, 2, 1, 0, -1, -1, -2, -3, -3, -3, -3, -3, -2, 
-2, -2, -2, -2, -1, 0, 1, 1, 1, 1, 0, 0, 0, -1, -1, -1, 
0, 1, 2, 4, 6, 7, 7, 9, 11, 11, 10, 9, 8, 5, 4, 3, 
3, 3, 2, 3, 3, 3, 3, 3, 3, 2, 0, -2, -3, -4, -5, -6, 
-8, -9, -10, -13, -15, -16, -17, -17, -20, -23, -25, -27, -28, -29, -31, -32, 
-34, -35, -35, -35, -35, -35, -36, -37, -37, -38, -40, -40, -40, -40, -40, -40, 
-39, -37, -35, -34, -33, -33, -33, -34, -36, -35, -34, -33, -32, -31, -31, -31, 
-31, -33, -34, -35, -35, -36, -35, -32, -30, -28, -26, -25, -24, -23, -22, -21, 
-21, -20, -21, -22, -23, -25, -26, -25, -24, -21, -20, -19, -18, -18, -19, -19, 
-20, -20, -20, -20, -21, -22, -22, -24, -26, -28, -28, -28, -27, -27, -26, -25, 
-24, -23, -22, -21, -21, -21, -22, -22, -22, -23, -24, -23, -23, -24, -24, -23, 
-22, -20, -19, -18, -17, -15, -13, -12, -11, -10, -10, -11, -11, -12, -12, -12, 
-14, -14, -15, -14, -13, -13, -12, -12, -11, -10, -8, -6, -3, -2, -2, -1, 
-1, -1, -1, 0, 1, 1, 2, 2, 3, 4, 5, 7, 8, 9, 10, 11, 
12, 15, 19, 22, 24, 27, 30, 32, 34, 35, 37, 38, 40, 43, 44, 45, 
46, 46, 46, 45, 44, 44, 43, 41, 40, 39, 38, 38, 38, 37, 36, 34, 
31, 29, 27, 26, 24, 23, 21, 19, 17, 14, 12, 11, 10, 11, 11, 9, 
8, 6, 5, 4, 2, 2, 2, 2, 3, 4, 5, 5, 5, 5, 4, 4, 
2, 2, 1, 1, 1, 1, 2, 3, 5, 5, 5, 5, 5, 4, 3, 4, 
4, 4, 3, 3, 4, 5, 7, 8, 10, 12, 16, 19, 22, 27, 30, 35, 
39, 42, 45, 46, 48, 50, 50, 50, 50, 49, 49, 50, 50, 50, 49, 49, 
49, 48, 47, 46, 45, 43, 42, 41, 40, 38, 37, 37, 36, 33, 32, 28, 
26, 24, 22, 21, 18, 16, 16, 15, 14, 14, 13, 12, 10, 8, 7, 3, 
-1, -4, -7, -9, -11, -13, -14, -15, -17, -19, -21, -23, -24, -25, -25, -25, 
-26, -27, -28, -29, -31, -32, -32, -31, -29, -27, -23, -21, -18, -17, -17, -17, 
-17, -18, -17, -16, -15, -14, -13, -11, -9, -8, -8, -8, -6, -4, -2, 0, 
2, 4, 6, 8, 10, 11, 13, 14, 16, 17, 18, 18, 18, 20, 20, 20, 
19, 19, 19, 21, 23, 24, 25, 24, 24, 25, 25, 26, 27, 27, 27, 28, 
29, 30, 30, 32, 32, 33, 32, 30, 29, 28, 27, 26, 26, 26, 27, 28, 
30, 30, 29, 28, 27, 25, 22, 19, 17, 16, 16, 16, 17, 18, 18, 17, 
16, 14, 13, 11, 10, 10, 9, 10, 10, 10, 10, 10, 9, 9, 8, 8, 
8, 8, 8, 9, 10, 11, 13, 14, 14, 13, 13, 13, 14, 14, 16, 19, 
20, 21, 21, 21, 21, 21, 20, 20, 20, 20, 18, 16, 13, 11, 10, 10, 
10, 9, 8, 5, 2, -1, -4, -7, -12, -19, -22, -25, -29, -31, -32, -35, 
-37, -39, -42, -44, -46, -47, -48, -48, -49, -48, -46, -43, -39, -37, -35, -35, 
-34, -34, -35, -36, -37, -40, -42, -43, -42, -41, -39, -36, -33, -30, -28, -26, 
-26, -26, -26, -25, -25, -25, -24, -24, -24, -23, -22, -21, -18, -17, -15, -15, 
-14, -14, -13, -12, -12, -11, -10, -9, -7, -5, -3, -2, -2, -4, -5, -5, 
-5, -5, -5, -6, -5, -4, -2, 2, 6, 9, 11, 12, 14, 16, 18, 17, 
16, 15, 14, 14, 15, 16, 17, 19, 19, 21, 22, 22, 23, 22, 21, 18, 
16, 14, 12, 11, 11, 13, 14, 14, 13, 12, 9, 6, 3, 0, -3, -6, 
-9, -11, -13, -15, -17, -19, -18, -17, -16, -16, -15, -13, -11, -10, -11, -11, 
-11, -13, -14, -14, -15, -17, -18, -19, -19, -18, -17, -17, -17, -17, -17, -17, 
-16, -15, -13, -12, -11, -10, -9, -8, -7, -6, -5, -4, -4, 0, 3, 5, 
7, 7, 5, 1, -1, -3, -5, -7, -9, -11, -13, -15, -18, -21, -26, -29, 
-33, -36, -38, -42, -47, -50, -52, -55, -57, -58, -59, -59, -58, -56, -54, -53, 
-53, -54, -56, -58, -60, -63, -65, -66, -68, -69, -69, -70, -70, -69, -67, -65, 
-62, -61, -60, -58, -57, -56, -54, -52, -49, -47, -44, -40, -38, -35, -32, -30, 
-26, -23, -21, -20, -19, -17, -16, -17, -18, -19, -20, -20, -20, -16, -12, -7, 
0, 5, 11, 13, 14, 14, 13, 12, 7, 5, 3, 0, 0, 2, 5, 7, 
9, 11, 11, 12, 11, 9, 8, 6, 3, 2, 0, -1, -2, -4, -6, -7, 
-8, -10, -11, -13, -16, -17, -18, -18, -18, -21, -21, -20, -19, -18, -17, -16, 
-15, -16, -17, -19, -19, -21, -21, -21, -20, -19, -17, -16, -16, -16, -16, -16, 
-17, -16, -15, -14, -13, -12, -10, -8, -6, -4, -3, -2, -2, -1, 0, 2, 
3, 6, 7, 8, 10, 12, 14, 15, 16, 17, 19, 22, 29, 33, 35, 37, 
37, 36, 35, 34, 33, 33, 33, 34, 35, 34, 33, 31, 30, 30, 31, 32, 
33, 36, 39, 42, 43, 43, 43, 42, 41, 40, 38, 36, 31, 27, 20, 16, 
13, 11, 10, 10, 13, 15, 16, 16, 15, 14, 11, 8, 5, 1, -2, -5, 
-6, -6, -5, -3, -2, -1, 1, 3, 4, 4, 2, 0, -2, -3, -3, -3, 
-1, -1, 0, 2, 5, 7, 10, 12, 13, 14, 16, 18, 20, 21, 22, 24, 
26, 31, 33, 36, 38, 39, 41, 43, 44, 46, 46, 48, 51, 53, 56, 58, 
59, 60, 61, 60, 61, 61, 59, 57, 57, 58, 59, 61, 63, 65, 65, 66, 
65, 64, 63, 60, 57, 53, 49, 46, 43, 38, 35, 34, 34, 35, 38, 39, 
41, 41, 40, 39, 34, 30, 27, 22, 18, 15, 13, 14, 15, 16, 17, 21, 
24, 25, 27, 29, 28, 26, 23, 20, 18, 15, 14, 13, 14, 14, 14, 16, 
17, 18, 18, 17, 16, 15, 11, 10, 9, 9, 9, 7, 3, 1, -2, -5, 
-7, -10, -12, -11, -9, -8, -6, -3, -3, -3, -4, -5, -5, -8, -10, -13, 
-16, -18, -20, -20, -20, -19, -19, -20, -21, -22, -24, -28, -31, -35, -42, -46, 
-50, -52, -54, -55, -55, -55, -56, -56, -55, -54, -53, -53, -53, -53, -54, -55, 
-57, -57, -56, -58, -60, -60, -61, -63, -67, -70, -74, -76, -78, -79, -80, -79, 
-78, -78, -77, -78, -77, -76, -75, -74, -73, -72, -71, -70, -69, -70, -69, -68, 
-66, -63, -61, -58, -56, -53, -49, -46, -42, -39, -37, -34, -31, -29, -28, -27, 
-25, -22, -20, -17, -15, -14, -12, -11, -11, -9, -8, -7, -6, -4, -2, 0, 
1, 2, 4, 4, 3, 2, 2, 2, 0, -1, -3, -4, -5, -7, -7, -6, 
-4, -2, -2, -3, -3, -4, -6, -7, -7, -9, -9, -9, -8, -7, -6, -5, 
-4, -3, -3, -3, -3, -4, -4, -5, -6, -7, -10, -13, -14, -15, -15, -14, 
-14, -12, -11, -10, -7, -2, 1, 3, 4, 6, 9, 12, 14, 15, 15, 14, 
13, 13, 12, 12, 13, 14, 15, 18, 19, 19, 21, 24, 26, 26, 26, 25, 
23, 18, 14, 11, 9, 8, 6, 3, 2, 1, 0, -1, -1, -2, -4, -6, 
-9, -11, -15, -17, -19, -20, -21, -21, -20, -19, -19, -20, -20, -19, -19, -20, 
-21, -21, -21, -22, -23, -23, -23, -23, -24, -26, -27, -27, -27, -29, -29, -32, 
-33, -33, -32, -31, -28, -27, -27, -27, -27, -29, -32, -33, -35, -37, -38, -38, 
-37, -36, -36, -35, -35, -35, -36, -36, -37, -38, -40, -41, -41, -40, -39, -38, 
-37, -35, -33, -31, -31, -31, -31, -31, -30, -28, -26, -26, -26, -26, -27, -29, 
-32, -34, -38, -41, -42, -44, -44, -43, -43, -42, -42, -43, -43, -42, -41, -39, 
-37, -35, -32, -28, -26, -24, -23, -20, -16, -13, -10, -9, -8, -6, -2, 1, 
5, 9, 11, 13, 15, 16, 18, 20, 20, 19, 18, 16, 15, 15, 15, 17, 
18, 19, 20, 23, 28, 32, 33, 33, 32, 29, 26, 24, 23, 23, 23, 25, 
30, 33, 37, 41, 43, 43, 44, 44, 43, 43, 43, 43, 44, 47, 50, 53, 
55, 57, 58, 59, 59, 58, 58, 57, 56, 56, 56, 58, 61, 62, 63, 64, 
64, 62, 60, 57, 54, 50, 47, 43, 40, 38, 38, 38, 38, 40, 42, 44, 
46, 47, 46, 44, 41, 39, 37, 36, 35, 36, 37, 39, 44, 46, 51, 52, 
53, 54, 53, 52, 52, 51, 50, 48, 45, 43, 41, 39, 38, 37, 36, 36, 
36, 36, 36, 36, 36, 36, 36, 35, 34, 34, 36, 36, 34, 32, 30, 29, 
25, 24, 23, 23, 23, 23, 23, 24, 25, 27, 28, 27, 26, 24, 22, 19, 
17, 13, 11, 10, 9, 9, 8, 8, 8, 8, 8, 8, 10, 11, 11, 11, 
10, 9, 7, 7, 8, 8, 11, 15, 18, 20, 22, 24, 23, 22, 20, 20, 
20, 20, 22, 23, 25, 28, 31, 34, 39, 42, 43, 43, 41, 39, 36, 32, 
29, 27, 24, 24, 25, 26, 28, 30, 31, 33, 33, 31, 29, 27, 24, 19, 
17, 15, 13, 12, 10, 9, 9, 9, 9, 9, 9, 7, 5, 3, 1, -1, 
-7, -10, -12, -14, -16, -19, -22, -24, -25, -26, -28, -29, -30, -31, -33, -36, 
-38, -41, -42, -42, -44, -46, -48, -50, -53, -56, -58, -60, -63, -64, -66, -69, 
-72, -73, -74, -77, -80, -82, -84, -88, -92, -95, -98, -100, -103, -105, -107, -110, 
-111, -111, -112, -114, -115, -116, -117, -119, -121, -122, -123, -124, -125, -127, -126, -125, 
-124, -123, -122, -119, -115, -113, -108, -104, -100, -99, -97, -96, -93, -90, -87, -82, 
-79, -76, -74, -72, -70, -69, -68, -67, -66, -65, -63, -61, -60, -58, -56, -53, 
-50, -48, -46, -44, -42, -39, -35, -32, -29, -25, -21, -17, -15, -13, -12, -11, 
-10, -10, -9, -9, -9, -10, -10, -9, -8, -7, -6, -6, -6, -6, -7, -9, 
-10, -12, -15, -16, -16, -15, -14, -12, -8, -5, -3, -1, -1, 0, 0, 1, 
1, 1, 3, 4, 5, 5, 6, 7, 9, 12, 13, 13, 13, 13, 15, 17, 
18, 19, 20, 20, 21, 21, 22, 23, 23, 24, 24, 25, 26, 27, 29, 31, 
31, 31, 31, 31, 33, 36, 37, 40, 43, 45, 47, 51, 54, 55, 56, 57, 
57, 57, 59, 62, 64, 66, 70, 71, 73, 74, 74, 75, 74, 73, 73, 71, 
69, 67, 66, 65, 64, 63, 64, 65, 64, 65, 64, 62, 60, 56, 54, 51, 
49, 48, 45, 42, 39, 37, 34, 33, 31, 29, 27, 25, 24, 21, 20, 19, 
18, 17, 15, 14, 13, 11, 9, 8, 7, 5, 6, 7, 8, 10, 12, 12, 
12, 12, 12, 11, 10, 9, 8, 8, 7, 6, 6, 6, 7, 7, 7, 6, 
5, 4, 3, 4, 4, 5, 7, 9, 10, 10, 10, 11, 10, 8, 8, 8, 
5, 4, 3, 3, 2, 2, 4, 6, 8, 9, 11, 13, 16, 17, 17, 17, 
16, 14, 13, 12, 12, 12, 12, 13, 14, 15, 16, 18, 18, 18, 18, 17, 
16, 15, 14, 13, 12, 11, 10, 10, 10, 9, 8, 7, 5, 3, 0, -1, 
-1, -1, 0, 1, 2, 3, 4, 5, 6, 9, 10, 11, 13, 13, 14, 17, 
18, 19, 21, 22, 24, 24, 24, 24, 25, 24, 23, 23, 23, 23, 23, 24, 
28, 31, 35, 38, 42, 47, 48, 50, 52, 53, 54, 56, 58, 58, 60, 62, 
64, 64, 65, 64, 62, 60, 57, 53, 50, 47, 44, 41, 36, 32, 29, 25, 
21, 16, 12, 8, 5, 1, -2, -6, -8, -9, -10, -11, -13, -15, -16, -17, 
-18, -19, -22, -22, -22, -21, -20, -20, -19, -18, -18, -19, -18, -17, -16, -16, 
-16, -16, -17, -17, -18, -18, -16, -15, -13, -10, -8, -6, -3, -2, 0, 3, 
5, 7, 8, 10, 13, 14, 15, 16, 17, 17, 20, 22, 23, 25, 27, 27, 
27, 26, 25, 24, 23, 20, 20, 19, 17, 16, 14, 13, 13, 13, 13, 12, 
12, 11, 9, 7, 4, 1, -5, -9, -11, -13, -16, -18, -20, -20, -20, -20, 
-20, -20, -21, -22, -23, -24, -25, -28, -29, -30, -32, -32, -33, -33, -33, -33, 
-33, -32, -32, -31, -31, -31, -31, -30, -30, -29, -27, -25, -23, -22, -20, -18, 
-16, -14, -11, -8, -6, -5, -4, -3, -2, 0, 0, 1, 2, 4, 7, 10, 
12, 15, 18, 21, 25, 27, 28, 30, 31, 33, 35, 36, 37, 37, 37, 36, 
36, 35, 35, 37, 37, 39, 41, 42, 43, 45, 45, 46, 45, 44, 43, 42, 
39, 36, 34, 32, 30, 28, 24, 21, 18, 15, 12, 9, 4, 0, -3, -5, 
-8, -10, -14, -16, -18, -21, -24, -30, -32, -35, -35, -37, -40, -45, -47, -49, 
-51, -53, -57, -61, -63, -65, -65, -66, -66, -66, -65, -66, -65, -64, -64, -61, 
-57, -54, -52, -50, -49, -48, -49, -49, -49, -48, -45, -43, -41, -40, -39, -36, 
-36, -36, -36, -36, -36, -35, -34, -34, -33, -32, -30, -28, -26, -25, -24, -22, 
-19, -17, -15, -13, -12, -12, -13, -12, -10, -9, -8, -9, -11, -13, -14, -17, 
-20, -23, -24, -25, -27, -27, -27, -27, -27, -28, -27, -27, -27, -28, -29, -31, 
-31, -32, -32, -32, -31, -31, -30, -29, -28, -29, -29, -29, -29, -30, -30, -29, 
-28, -28, -27, -27, -27, -27, -27, -26, -27, -27, -28, -30, -30, -31, -33, -33, 
-32, -31, -30, -28, -28, -27, -27, -28, -28, -28, -27, -25, -23, -19, -15, -9, 
-5, -2, 1, 2, 4, 4, 5, 6, 8, 10, 13, 16, 19, 23, 27, 30, 
34, 37, 41, 44, 46, 47, 49, 49, 49, 50, 49, 50, 51, 51, 52, 53, 
53, 53, 53, 53, 53, 53, 52, 51, 50, 49, 50, 50, 50, 49, 47, 45, 
43, 40, 38, 35, 33, 31, 28, 26, 23, 21, 19, 16, 15, 11, 7, 3, 
-1, -4, -6, -7, -8, -9, -9, -9, -9, -12, -12, -13, -14, -15, -17, -18, 
-18, -18, -17, -17, -16, -15, -14, -14, -13, -13, -12, -11, -10, -10, -9, -6, 
-3, 1, 5, 8, 11, 16, 18, 21, 24, 27, 32, 34, 37, 40, 42, 44, 
49, 53, 57, 60, 64, 66, 68, 69, 70, 72, 73, 73, 74, 75, 75, 74, 
74, 75, 75, 74, 73, 73, 74, 73, 72, 72, 71, 71, 69, 68, 66, 64, 
62, 60, 58, 57, 55, 52, 50, 47, 44, 42, 41, 40, 37, 34, 32, 31, 
29, 26, 24, 20, 18, 15, 14, 13, 12, 11, 9, 7, 6, 4, 2, 1, 
0, 1, 2, 3, 5, 6, 8, 8, 8, 9, 8, 8, 8, 8, 8, 8, 
7, 7, 7, 6, 6, 6, 7, 7, 7, 7, 7, 10, 12, 13, 13, 13, 
12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 3, 3, 1, -1, -2, -5, 
-7, -10, -12, -13, -14, -15, -15, -17, -19, -21, -23, -26, -29, -31, -33, -34, 
-34, -34, -35, -35, -35, -37, -39, -41, -44, -45, -47, -49, -51, -54, -55, -57, 
-57, -57, -58, -60, -62, -65, -68, -70, -72, -74, -75, -75, -77, -78, -78, -78, 
-77, -77, -76, -75, -76, -77, -77, -78, -79, -80, -81, -82, -83, -83, -82, -80, 
-78, -76, -73, -70, -68, -65, -62, -60, -57, -56, -54, -51, -48, -46, -44, -42, 
-39, -37, -36, -34, -32, -31, -28, -26, -25, -24, -24, -24, -24, -23, -23, -23, 
-24, -25, -24, -23, -21, -19, -18, -17, -16, -16, -17, -19, -21, -21, -20, -19, 
-18, -15, -9, -5, -2, 0, 3, 6, 10, 13, 17, 21, 24, 28, 32, 33, 
34, 34, 33, 32, 30, 30, 30, 30, 31, 32, 33, 34, 34, 35, 36, 38, 
39, 42, 45, 47, 52, 53, 55, 56, 57, 58, 59, 58, 57, 55, 53, 52, 
50, 49, 49, 49, 50, 49, 48, 47, 46, 45, 44, 41, 40, 39, 38, 37, 
34, 32, 29, 27, 23, 20, 16, 13, 12, 11, 10, 8, 6, 5, 4, 4, 
3, 2, 0, -1, -2, -4, -6, -12, -15, -17, -21, -24, -26, -30, -32, -33, 
-34, -33, -32, -31, -30, -29, -28, -27, -26, -25, -24, -23, -22, -21, -20, -19, 
-19, -20, -20, -23, -24, -25, -26, -27, -28, -31, -31, -31, -31, -30, -30, -31, 
-32, -35, -38, -40, -41, -41, -40, -39, -37, -36, -36, -36, -36, -36, -37, -37, 
-38, -38, -40, -40, -39, -38, -37, -36, -35, -33, -33, -32, -32, -30, -28, -27, 
-26, -23, -21, -19, -18, -18, -17, -14, -11, -7, -4, -1, 3, 5, 7, 10, 
13, 16, 19, 21, 22, 23, 23, 23, 23, 22, 22, 22, 21, 21, 20, 19, 
19, 20, 20, 21, 22, 23, 24, 24, 25, 25, 25, 26, 26, 26, 25, 25, 
25, 25, 27, 30, 32, 33, 33, 34, 36, 39, 40, 43, 45, 47, 49, 48, 
48, 48, 48, 49, 49, 50, 50, 51, 51, 52, 53, 53, 53, 54, 54, 55, 
55, 54, 54, 55, 54, 53, 51, 50, 48, 46, 45, 44, 42, 42, 42, 41, 
41, 40, 40, 39, 37, 36, 38, 39, 40, 40, 40, 40, 41, 42, 44, 46, 
47, 48, 50, 49, 47, 47, 47, 46, 45, 43, 41, 39, 38, 40, 40, 40, 
39, 38, 37, 33, 32, 30, 27, 23, 19, 16, 13, 11, 8, 7, 5, 3, 
2, -2, -5, -10, -17, -21, -26, -30, -33, -36, -37, -37, -38, -38, -38, -38, 
-37, -37, -36, -35, -35, -34, -34, -33, -33, -33, -35, -36, -35, -34, -33, -31, 
-27, -24, -21, -19, -17, -13, -10, -7, -5, -2, 1, 6, 10, 12, 13, 15, 
16, 16, 16, 14, 13, 13, 14, 15, 16, 17, 18, 20, 21, 22, 23, 24, 
23, 23, 22, 22, 23, 23, 22, 22, 21, 21, 21, 21, 21, 21, 21, 20, 
19, 17, 14, 10, 7, 3, -1, -4, -7, -10, -11, -12, -13, -14, -17, -19, 
-21, -24, -27, -31, -36, -37, -39, -40, -42, -44, -45, -46, -46, -48, -49, -51, 
-53, -55, -56, -55, -54, -51, -50, -48, -46, -46, -46, -46, -46, -47, -49, -50, 
-51, -52, -52, -51, -50, -49, -47, -47, -46, -46, -46, -47, -47, -46, -45, -45, 
-44, -43, -42, -40, -38, -36, -36, -36, -36, -35, -35, -35, -35, -35, -35, -35, 
-35, -34, -33, -30, -28, -26, -23, -21, -19, -20, -21, -22, -22, -25, -26, -27, 
-28, -28, -27, -26, -26, -26, -26, -27, -27, -28, -27, -27, -28, -27, -27, -27, 
-27, -28, -28, -30, -32, -33, -33, -33, -33, -34, -35, -36, -38, -38, -39, -42, 
-44, -45, -44, -43, -43, -44, -44, -43, -43, -43, -42, -41, -40, -40, -40, -40, 
-40, -41, -42, -42, -41, -40, -36, -33, -30, -28, -27, -24, -21, -18, -16, -13, 
-12, -10, -9, -7, -4, -2, 0, 2, 3, 5, 6, 6, 7, 9, 11, 14, 
17, 21, 27, 30, 31, 32, 32, 31, 31, 30, 30, 31, 31, 33, 34, 36, 
36, 36, 36, 35, 35, 34, 32, 30, 29, 27, 24, 22, 21, 21, 22, 24, 
26, 29, 31, 34, 36, 36, 35, 33, 32, 31, 30, 31, 31, 31, 32, 35, 
36, 36, 36, 35, 34, 33, 32, 30, 29, 28, 27, 26, 26, 26, 27, 29, 
29, 28, 27, 25, 23, 22, 19, 17, 16, 15, 15, 14, 13, 13, 12, 11, 
9, 9, 8, 7, 5, 5, 5, 3, 2, 2, 1, 0, 0, -1, -3, -3, 
-3, -4, -3, -1, 1, 3, 4, 4, 7, 8, 8, 8, 8, 8, 9, 11, 
12, 12, 14, 13, 13, 12, 10, 9, 8, 8, 8, 8, 9, 10, 12, 14, 
15, 17, 19, 21, 23, 22, 22, 21, 20, 19, 17, 16, 16, 16, 16, 16, 
15, 13, 12, 11, 9, 7, 5, 3, 2, 0, -1, -1, -1, 0, 1, 0, 
0, 1, 1, 0, -1, -3, -5, -4, -3, -2, -1, 0, 0, 0, 1, 1, 
1, 2, 1, 0, -1, -3, -4, -4, -4, -4, -4, -5, -5, -3, -1, 1, 
3, 6, 10, 12, 14, 15, 15, 17, 18, 20, 22, 25, 28, 31, 36, 39, 
42, 45, 47, 49, 51, 53, 55, 58, 61, 67, 70, 73, 75, 77, 78, 78, 
79, 79, 78, 77, 75, 75, 73, 72, 71, 70, 68, 66, 63, 60, 57, 53, 
51, 49, 48, 46, 44, 43, 41, 38, 36, 33, 30, 26, 23, 20, 18, 17, 
15, 13, 12, 11, 11, 11, 14, 15, 16, 18, 20, 20, 20, 19, 18, 17, 
15, 12, 11, 10, 10, 9, 8, 6, 5, 5, 4, 3, 2, 1, -1, -3, 
-6, -9, -13, -15, -16, -18, -20, -21, -23, -23, -23, -23, -25, -28, -31, -32, 
-34, -36, -38, -40, -41, -42, -42, -43, -44, -47, -49, -53, -57, -59, -61, -63, 
-65, -66, -67, -68, -70, -75, -79, -82, -84, -86, -87, -88, -88, -88, -89, -88, 
-88, -88, -89, -90, -89, -89, -89, -90, -92, -94, -96, -99, -101, -102, -102, -102, 
-101, -99, -100, -100, -100, -100, -100, -100, -100, -100, -100, -98, -93, -90, -86, -80, 
-75, -68, -66, -63, -61, -59, -57, -55, -53, -50, -48, -44, -41, -36, -34, -32, 
-29, -28, -26, -24, -23, -23, -23, -23, -23, -24, -25, -24, -23, -21, -18, -16, 
-14, -13, -12, -13, -14, -15, -18, -19, -19, -20, -19, -17, -15, -14, -12, -9, 
-8, -7, -7, -8, -9, -11, -13, -16, -17, -17, -19, -19, -18, -17, -16, -14, 
-13, -13, -12, -12, -13, -13, -14, -14, -15, -17, -17, -18, -17, -17, -16, -16, 
-16, -15, -15, -14, -13, -12, -10, -8, -6, -5, -2, 1, 5, 8, 11, 12, 
14, 15, 17, 17, 16, 16, 18, 19, 21, 22, 25, 27, 29, 30, 28, 27, 
26, 23, 22, 19, 18, 16, 15, 15, 17, 18, 19, 20, 20, 20, 21, 23, 
23, 22, 22, 21, 21, 21, 21, 23, 26, 30, 32, 35, 36, 36, 36, 36, 
36, 35, 35, 34, 33, 32, 31, 29, 28, 25, 21, 17, 14, 12, 11, 9, 
6, 4, 2, -1, -4, -8, -11, -12, -13, -15, -16, -19, -20, -20, -23, -25, 
-26, -28, -29, -30, -32, -33, -36, -38, -39, -41, -42, -43, -45, -45, -45, -44, 
-43, -43, -42, -42, -42, -41, -40, -39, -38, -37, -36, -36, -36, -38, -39, -40, 
-41, -40, -39, -36, -33, -31, -28, -26, -23, -21, -19, -18, -17, -15, -11, -10, 
-9, -8, -7, -5, -3, -1, 1, 3, 3, 5, 6, 8, 9, 10, 11, 15, 
17, 18, 20, 21, 23, 22, 22, 21, 20, 19, 18, 18, 18, 17, 17, 17, 
18, 18, 18, 18, 17, 17, 17, 17, 16, 15, 13, 11, 9, 8, 9, 10, 
13, 17, 19, 22, 24, 24, 25, 25, 25, 25, 25, 25, 25, 26, 27, 28, 
30, 32, 36, 38, 39, 40, 41, 41, 41, 41, 41, 42, 43, 46, 47, 49, 
50, 52, 54, 56, 58, 58, 59, 59, 59, 59, 61, 62, 63, 65, 67, 69, 
72, 75, 76, 77, 78, 78, 79, 79, 80, 81, 81, 82, 83, 82, 80, 77, 
76, 75, 74, 73, 73, 71, 70, 69, 67, 66, 63, 61, 58, 57, 56, 53, 
49, 45, 42, 40, 37, 35, 32, 30, 28, 27, 26, 25, 24, 22, 20, 18, 
15, 12, 11, 10, 9, 9, 9, 12, 14, 17, 21, 23, 26, 27, 27, 26, 
25, 23, 20, 18, 17, 17, 17, 19, 21, 23, 23, 23, 25, 24, 23, 21, 
20, 19, 18, 18, 19, 22, 23, 24, 24, 24, 24, 23, 20, 19, 16, 15, 
15, 15, 16, 18, 19, 19, 20, 21, 22, 24, 26, 25, 24, 23, 21, 17, 
14, 12, 9, 7, 5, 2, 0, -1, -2, -4, -9, -13, -17, -21, -24, -26, 
-29, -30, -30, -30, -31, -33, -36, -38, -41, -43, -45, -48, -49, -54, -58, -61, 
-64, -66, -68, -68, -67, -66, -67, -68, -70, -74, -77, -79, -82, -85, -87, -89, 
-91, -94, -96, -98, -101, -103, -105, -107, -112, -115, -117, -119, -120, -123, -125, -125, 
-125, -124, -124, -122, -120, -119, -118, -116, -113, -111, -110, -111, -111, -111, -108, -106, 
-104, -100, -96, -91, -85, -84, -81, -79, -77, -75, -74, -73, -71, -69, -68, -67, 
-66, -64, -62, -60, -58, -54, -51, -48, -46, -43, -40, -35, -33, -31, -30, -29, 
-28, -27, -26, -25, -25, -25, -25, -25, -23, -22, -18, -15, -10, -8, -7, -6, 
-5, -5, -6, -8, -9, -10, -10, -9, -7, -5, -3, -1, 1, 4, 4, 3, 
2, 0, };
