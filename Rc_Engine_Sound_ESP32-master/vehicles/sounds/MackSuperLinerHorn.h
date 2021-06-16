const unsigned int hornSampleRate = 22050;
const unsigned int hornSampleCount = 5686;
#define HORN_LOOP
const unsigned int hornLoopBegin = 3123; // Adjust start of loop manually
const unsigned int hornLoopEnd = 3240; // Adjust end of loop manually
const signed char hornSamples[] = {//0
1, 8, 12, 12, 12, 15, 24, 21, 15, 6, -6, -11, -5, 2, 5, 2, //16
0, 0, 4, 8, 9, 2, -7, -6, -4, -2, -2, -6, -10, -12, -11, -10, //32
-9, -8, -9, -7, -1, 5, 10, 13, 13, 8, 4, 5, 3, -6, -19, -26, //48
-24, -17, -7, -1, -8, -17, -21, -19, -17, -24, -27, -26, -18, -8, -3, -5, //64
-12, -19, -19, -9, 2, 9, 22, 33, 37, 42, 50, 43, 30, 21, 16, 11, //80
5, 0, -10, -20, -22, -32, -40, -48, -54, -54, -50, -36, -26, -13, -1, 8, //96
21, 35, 44, 51, 58, 61, 57, 55, 57, 61, 58, 55, 49, 41, 33, 25, //112
21, 13, -11, -22, -23, -21, -25, -40, -43, -43, -50, -54, -59, -67, -65, -59, //128
-47, -31, -13, 7, 17, 21, 23, 28, 41, 54, 64, 67, 64, 65, 62, 53, //144
40, 21, 1, -25, -38, -48, -54, -55, -54, -52, -48, -43, -37, -33, -27, -13, //160
-9, -10, -12, -14, -25, -30, -37, -40, -39, -39, -39, -41, -38, -29, -17, -8, //176
10, 28, 48, 65, 75, 88, 93, 93, 90, 81, 74, 63, 46, 29, 15, 0, //192
-17, -48, -67, -81, -94, -104, -105, -100, -95, -86, -66, -42, -12, 11, 35, 53, //208
64, 74, 81, 88, 96, 93, 85, 69, 59, 51, 44, 38, 26, 6, -9, -13, //224
-11, -12, -15, -40, -51, -62, -70, -71, -71, -71, -72, -71, -64, -51, -36, -28, //240
-18, -7, 6, 19, 40, 57, 75, 88, 98, 107, 106, 95, 78, 63, 47, 17, //256
-6, -25, -32, -40, -51, -60, -62, -61, -62, -59, -53, -49, -46, -42, -39, -34, //272
-36, -43, -47, -52, -54, -56, -57, -54, -49, -38, -20, 0, 7, 16, 23, 29, //288
37, 58, 70, 75, 82, 92, 109, 122, 122, 104, 82, 63, 32, 10, -18, -52, //304
-79, -95, -115, -124, -119, -109, -103, -82, -62, -41, -22, -5, 15, 33, 44, 62, //320
74, 79, 80, 75, 77, 79, 79, 81, 74, 63, 52, 44, 40, 30, 10, -6, //336
-20, -32, -46, -48, -56, -67, -74, -79, -85, -94, -89, -84, -81, -77, -68, -26, //352
2, 22, 40, 58, 75, 97, 113, 127, 126, 113, 96, 83, 61, 44, 27, -1, //368
-43, -60, -68, -71, -72, -68, -62, -55, -46, -33, -20, -20, -23, -23, -23, -28, //384
-38, -50, -63, -70, -68, -63, -61, -55, -50, -45, -34, -25, -9, 2, 14, 32, //400
54, 74, 90, 101, 108, 108, 107, 99, 83, 72, 54, 41, 27, 1, -16, -32, //416
-50, -70, -81, -91, -100, -101, -91, -73, -53, -24, -6, 9, 16, 18, 27, 36, //432
36, 30, 33, 42, 48, 56, 66, 68, 67, 72, 66, 57, 50, 43, 34, 9, //448
-4, -14, -27, -42, -51, -57, -71, -84, -91, -95, -97, -86, -72, -61, -50, -32, //464
4, 21, 33, 46, 57, 67, 87, 101, 108, 102, 90, 74, 62, 43, 29, 18, //480
-3, -40, -53, -56, -63, -65, -54, -48, -43, -33, -26, -27, -28, -30, -37, -39, //496
-39, -39, -47, -51, -40, -32, -36, -39, -38, -32, -26, -20, -7, 11, 14, 25, //512
44, 56, 62, 68, 69, 65, 56, 49, 47, 50, 52, 52, 47, 37, 19, 13, //528
9, 3, -9, -18, -24, -26, -23, -21, -26, -33, -34, -28, -23, -17, -10, -12, //544
-11, -12, -17, -19, -15, -5, -3, 1, 10, 22, 39, 47, 51, 55, 58, 61, //560
52, 43, 27, 10, 0, -1, -9, -22, -30, -37, -45, -47, -48, -51, -53, -51, //576
-40, -20, -8, -1, 1, 5, 8, 15, 23, 28, 32, 34, 35, 31, 29, 28, //592
21, 10, -2, -7, -12, -16, -19, -21, -23, -25, -24, -26, -27, -20, -12, -12, //608
-18, -19, -20, -24, -32, -37, -33, -30, -32, -36, -33, -31, -27, -21, -20, -18, //624
-15, -10, -7, -6, 1, 2, -1, 3, 18, 27, 38, 45, 53, 61, 66, 71, //640
74, 74, 67, 62, 59, 48, 41, 30, 14, -10, -34, -57, -63, -65, -74, -81, //656
-70, -64, -59, -56, -52, -42, -22, -7, 2, 7, 14, 25, 49, 65, 75, 77, //672
76, 73, 71, 70, 59, 43, 31, 18, 13, 12, 12, 1, -21, -49, -58, -60, //688
-62, -59, -50, -41, -34, -27, -21, -21, -22, -20, -18, -14, -4, 9, 12, 17, //704
17, 11, 12, 32, 36, 35, 36, 34, 27, 15, 10, 1, -5, -10, -20, -32, //720
-39, -41, -38, -36, -39, -44, -46, -47, -49, -48, -40, -37, -40, -39, -33, -26, //736
-23, -24, -16, -11, -13, -2, 5, 7, 10, 21, 33, 46, 50, 54, 60, 69, //752
79, 74, 70, 68, 65, 53, 32, 28, 18, -4, -21, -28, -45, -57, -62, -65, //768
-67, -68, -64, -58, -49, -40, -30, -18, -10, 4, 18, 30, 36, 46, 55, 58, //784
57, 61, 62, 61, 63, 62, 56, 46, 36, 32, 26, 17, 9, 3, -3, -12, //800
-24, -37, -54, -75, -85, -87, -81, -69, -57, -52, -42, -32, -25, -20, -12, 5, //816
18, 28, 41, 58, 71, 73, 71, 70, 65, 54, 38, 30, 20, 7, -2, -9, //832
-9, -9, -10, -11, -13, -19, -16, -21, -31, -36, -41, -48, -52, -53, -56, -64, //848
-66, -61, -61, -61, -53, -45, -29, -15, -6, 6, 22, 34, 35, 31, 31, 41, //864
49, 47, 60, 78, 87, 90, 89, 83, 68, 47, 35, 30, 18, -7, -18, -27, //880
-38, -49, -53, -53, -59, -64, -64, -60, -46, -34, -23, -15, -4, 5, 11, 16, //896
19, 25, 30, 32, 42, 54, 61, 64, 65, 63, 54, 46, 44, 37, 25, 12, //912
3, -8, -22, -37, -59, -71, -79, -83, -82, -78, -68, -62, -61, -53, -41, -36, //928
-23, -9, 8, 26, 38, 49, 60, 69, 68, 65, 64, 57, 48, 41, 33, 22, //944
8, -7, -14, -21, -27, -34, -29, -23, -20, -16, -16, -19, -29, -43, -57, -70, //960
-80, -86, -86, -79, -66, -50, -41, -23, -13, -5, 5, 9, 12, 22, 28, 29, //976
31, 35, 40, 52, 56, 70, 86, 91, 78, 76, 72, 56, 38, 24, 11, 6, //992
1, -3, -8, -20, -38, -45, -54, -61, -63, -61, -57, -50, -42, -35, -30, -31, //1008
-28, -16, -3, 8, 18, 30, 35, 44, 57, 66, 68, 67, 64, 63, 59, 55, //1024
47, 34, 26, 16, 3, -12, -24, -39, -54, -69, -76, -77, -79, -77, -76, -73, //1040
-66, -38, -21, -11, -3, 9, 32, 43, 46, 51, 59, 61, 64, 72, 76, 69, //1056
58, 46, 26, 11, -4, -17, -25, -33, -37, -37, -33, -28, -26, -29, -36, -36, //1072
-40, -51, -58, -65, -72, -78, -75, -63, -49, -44, -35, -23, -17, -11, 3, 9, //1088
12, 14, 15, 16, 13, 19, 29, 32, 34, 55, 66, 71, 81, 84, 79, 67, //1104
62, 57, 45, 22, -1, -26, -39, -46, -50, -56, -65, -61, -54, -50, -46, -43, //1120
-47, -46, -36, -24, -11, 4, 26, 37, 43, 49, 55, 56, 58, 61, 62, 59, //1136
57, 55, 50, 46, 34, 22, 17, 10, -3, -16, -25, -38, -57, -70, -79, -83, //1152
-87, -81, -64, -62, -60, -49, -30, -14, 8, 23, 35, 45, 53, 70, 75, 67, //1168
56, 48, 42, 29, 19, 14, 6, -10, -21, -22, -21, -22, -24, -26, -20, -10, //1184
-4, 0, 0, -7, -27, -34, -36, -44, -53, -59, -52, -43, -42, -41, -34, -25, //1200
-27, -20, -7, 4, 16, 27, 35, 38, 39, 44, 48, 45, 48, 60, 70, 76, //1216
82, 78, 69, 56, 44, 39, 25, 12, 11, 10, -4, -22, -34, -52, -66, -67, //1232
-63, -56, -48, -35, -24, -19, -15, -10, -4, 1, 8, 15, 20, 26, 34, 42, //1248
46, 44, 39, 39, 35, 28, 22, 19, 6, -4, -6, -3, -4, -19, -20, -23, //1264
-30, -34, -38, -45, -53, -60, -61, -55, -50, -38, -28, -15, 0, 13, 41, 47, //1280
51, 56, 54, 51, 46, 43, 35, 20, 7, -4, -12, -9, -11, -14, -12, -14, //1296
-14, -9, -10, -18, -19, -22, -24, -29, -39, -49, -54, -67, -75, -69, -59, -56, //1312
-54, -54, -47, -33, -20, -7, 7, 12, 10, 13, 19, 18, 25, 35, 46, 53, //1328
60, 69, 67, 63, 60, 61, 62, 55, 51, 46, 34, 17, 0, -8, -26, -42, //1344
-50, -59, -63, -62, -61, -57, -52, -53, -49, -42, -37, -33, -25, -4, 13, 28, //1360
37, 45, 53, 59, 58, 60, 62, 56, 50, 46, 52, 53, 45, 37, 32, 21, //1376
0, -17, -24, -35, -58, -70, -74, -74, -72, -63, -54, -49, -43, -37, -28, -12, //1392
-5, 2, 18, 30, 34, 50, 59, 58, 52, 51, 48, 42, 40, 34, 25, 17, //1408
2, -2, -1, -5, -7, -11, -20, -19, -14, -12, -16, -25, -41, -49, -60, -69, //1424
-71, -69, -74, -76, -69, -59, -45, -21, -10, 3, 13, 21, 29, 40, 37, 34, //1440
38, 48, 68, 72, 81, 87, 82, 70, 60, 55, 44, 37, 35, 34, 27, 11, //1456
-4, -16, -27, -48, -63, -66, -67, -71, -71, -55, -43, -40, -36, -29, -13, -6, //1472
-4, 4, 9, 8, 21, 41, 56, 62, 65, 66, 61, 56, 52, 46, 43, 24, //1488
16, 22, 30, 24, 5, -19, -35, -49, -61, -69, -72, -86, -85, -75, -63, -48, //1504
-30, -23, -17, -9, 5, 22, 41, 48, 49, 47, 48, 53, 52, 39, 26, 17, //1520
10, -8, -14, -13, -18, -24, -27, -18, -13, -13, -10, -11, -14, -20, -26, -30, //1536
-38, -50, -67, -74, -66, -56, -55, -56, -47, -41, -37, -31, -21, -11, -1, 9, //1552
24, 35, 39, 46, 53, 59, 65, 72, 80, 83, 78, 70, 58, 46, 38, 27, //1568
21, 12, 1, -7, -18, -26, -33, -40, -53, -58, -57, -60, -54, -44, -39, -35, //1584
-16, -4, 5, 12, 20, 31, 33, 33, 37, 43, 50, 57, 57, 51, 41, 39, //1600
32, 23, 18, 9, 5, 5, 5, -5, -15, -24, -38, -50, -59, -57, -63, -73, //1616
-75, -67, -55, -44, -32, -19, -4, 16, 28, 47, 59, 59, 66, 74, 74, 74, //1632
67, 56, 38, 25, 12, 0, -12, -23, -31, -28, -18, -14, -14, -12, -8, -6, //1648
-6, -7, -11, -31, -50, -62, -71, -75, -78, -85, -87, -84, -74, -62, -51, -34, //1664
-22, -11, -1, 9, 18, 22, 26, 30, 38, 53, 74, 79, 83, 83, 85, 85, //1680
76, 73, 72, 66, 51, 28, 14, -6, -31, -52, -57, -67, -65, -55, -55, -54, //1696
-48, -38, -38, -39, -35, -31, -20, -16, -11, 0, 6, 10, 22, 30, 41, 50, //1712
57, 61, 60, 55, 47, 40, 33, 21, 19, 19, 15, 11, 6, -3, -13, -30, //1728
-43, -52, -63, -78, -80, -73, -65, -55, -32, -11, 6, 18, 31, 40, 42, 44, //1744
47, 49, 46, 35, 20, 12, -1, -11, -17, -21, -17, -14, -10, 0, 5, 6, //1760
3, 3, 5, 4, 2, -5, -13, -15, -27, -42, -58, -64, -69, -75, -76, -71, //1776
-55, -47, -40, -28, -10, -1, 0, 8, 12, 18, 28, 47, 58, 73, 83, 86, //1792
89, 87, 81, 71, 61, 57, 48, 41, 36, 30, 19, 8, -6, -12, -22, -36, //1808
-51, -62, -71, -75, -72, -67, -65, -61, -50, -40, -37, -36, -35, -34, -29, -18, //1824
-1, 20, 44, 74, 87, 100, 108, 105, 89, 84, 79, 74, 71, 65, 41, 23, //1840
6, -14, -37, -58, -76, -89, -100, -101, -96, -83, -80, -76, -68, -57, -44, -18, //1856
0, 20, 32, 36, 50, 65, 64, 66, 63, 58, 52, 53, 52, 43, 32, 19, //1872
5, 0, 0, -2, -8, -14, -21, -27, -35, -38, -42, -65, -83, -91, -91, -92, //1888
-89, -87, -88, -78, -65, -52, -35, -17, -9, 0, 14, 30, 55, 60, 61, 70, //1904
76, 87, 97, 96, 92, 84, 80, 73, 72, 70, 63, 51, 36, 20, 6, -9, //1920
-31, -56, -74, -90, -90, -88, -85, -81, -71, -60, -53, -42, -29, -20, -8, -1, //1936
10, 23, 30, 32, 41, 52, 66, 78, 81, 76, 69, 62, 53, 47, 43, 39, //1952
32, 26, 17, 6, -1, -25, -45, -60, -74, -85, -97, -98, -91, -82, -74, -63, //1968
-39, -27, -12, 7, 24, 40, 54, 61, 68, 70, 70, 64, 48, 35, 30, 22, //1984
12, -7, -19, -25, -36, -42, -39, -42, -42, -40, -39, -36, -35, -38, -41, -53, //2000
-76, -90, -90, -83, -72, -63, -52, -35, -12, 3, 16, 27, 33, 35, 44, 55, //2016
63, 72, 75, 71, 76, 83, 86, 87, 80, 69, 62, 52, 44, 33, 15, 3, //2032
-12, -24, -35, -47, -66, -71, -75, -84, -84, -79, -74, -65, -53, -42, -34, -25, //2048
-10, 9, 20, 23, 30, 36, 38, 44, 53, 62, 63, 60, 61, 62, 64, 64, //2064
50, 41, 34, 33, 34, 31, 12, -5, -26, -42, -56, -75, -85, -101, -117, -122, //2080
-111, -83, -69, -60, -44, -22, 1, 35, 49, 64, 67, 67, 82, 84, 85, 81, //2096
70, 50, 28, 17, 5, -1, -11, -25, -29, -26, -22, -22, -23, -20, -22, -19, //2112
-16, -17, -18, -39, -58, -71, -78, -77, -72, -72, -70, -61, -50, -35, -8, 1, //2128
2, 1, 6, 17, 42, 57, 61, 64, 70, 80, 86, 86, 88, 86, 75, 63, //2144
58, 49, 42, 33, 25, 14, 2, -12, -28, -42, -54, -71, -76, -78, -77, -75, //2160
-67, -57, -48, -46, -45, -40, -30, -23, -14, -3, 5, 12, 36, 54, 73, 82, //2176
84, 87, 90, 92, 84, 71, 62, 58, 54, 52, 43, 26, 5, -27, -44, -58, //2192
-70, -88, -107, -111, -101, -87, -82, -75, -61, -51, -30, 1, 23, 45, 52, 58, //2208
65, 73, 84, 74, 59, 52, 46, 38, 26, 1, -18, -34, -43, -40, -31, -30, //2224
-27, -24, -18, -11, -25, -36, -45, -54, -62, -64, -70, -76, -77, -78, -70, -48, //2240
-38, -23, -8, 8, 22, 29, 38, 38, 37, 39, 44, 64, 78, 84, 84, 82, //2256
78, 80, 75, 60, 45, 32, 19, 13, 2, -8, -24, -47, -68, -69, -69, -73, //2272
-75, -73, -70, -65, -57, -46, -40, -36, -26, -11, 0, 13, 24, 36, 42, 47, //2288
62, 79, 94, 94, 94, 89, 82, 78, 62, 57, 49, 39, 36, 35, 19, 2, //2304
-18, -33, -48, -75, -91, -108, -117, -122, -123, -112, -103, -88, -66, -43, -20, 11, //2320
32, 53, 65, 74, 94, 103, 101, 91, 76, 63, 47, 34, 23, 10, -4, -12, //2336
-20, -21, -21, -24, -21, -14, -15, -21, -29, -30, -37, -60, -76, -81, -80, -80, //2352
-65, -60, -58, -53, -46, -40, -42, -36, -25, -14, 5, 18, 38, 48, 55, 61, //2368
63, 69, 64, 65, 70, 68, 58, 43, 39, 31, 24, 21, 16, 6, 4, 0, //2384
-10, -27, -46, -54, -60, -60, -57, -54, -47, -34, -20, -14, -16, -13, -7, -3, //2400
3, 10, 15, 25, 38, 50, 62, 68, 72, 75, 76, 70, 58, 52, 52, 51, //2416
41, 31, 16, 2, -15, -33, -49, -62, -74, -91, -107, -108, -107, -108, -101, -77, //2432
-34, -17, 0, 23, 41, 65, 69, 70, 66, 61, 61, 56, 53, 43, 32, 20, //2448
5, -15, -27, -32, -38, -41, -39, -33, -26, -26, -25, -28, -32, -27, -25, -29, //2464
-38, -45, -63, -70, -67, -64, -56, -37, -26, -21, -8, 6, 9, 17, 29, 36, //2480
37, 39, 47, 58, 59, 56, 52, 46, 42, 43, 38, 36, 35, 32, 28, 31, //2496
30, 26, 24, 5, -6, -17, -34, -49, -60, -60, -61, -64, -62, -55, -45, -34, //2512
-25, -13, -6, -3, 6, 20, 31, 40, 50, 57, 65, 69, 72, 78, 80, 75, //2528
59, 56, 56, 53, 47, 37, 24, 9, -4, -17, -30, -48, -64, -82, -99, -111, //2544
-113, -109, -102, -90, -76, -58, -19, 6, 27, 41, 50, 60, 68, 70, 64, 61, //2560
58, 51, 40, 35, 31, 23, 12, -7, -24, -36, -40, -38, -33, -27, -23, -22, //2576
-14, -8, -13, -28, -41, -51, -59, -66, -68, -71, -72, -65, -55, -47, -29, -19, //2592
-13, -4, 10, 18, 28, 37, 44, 53, 62, 74, 76, 73, 73, 71, 62, 51, //2608
48, 43, 36, 31, 30, 19, 6, -9, -21, -32, -56, -64, -67, -66, -65, -65, //2624
-58, -49, -38, -30, -22, -14, -6, -2, 0, 8, 18, 35, 48, 59, 67, 73, //2640
78, 79, 70, 63, 60, 56, 54, 47, 33, 19, 2, -15, -29, -41, -56, -67, //2656
-75, -86, -93, -89, -86, -82, -74, -53, -40, -27, -10, 9, 26, 52, 70, 84, //2672
91, 89, 80, 63, 53, 36, 14, -1, -10, -11, -17, -22, -23, -28, -40, -39, //2688
-33, -29, -23, -19, -13, -11, -16, -26, -31, -45, -57, -59, -53, -45, -41, -37, //2704
-29, -22, -13, -6, -12, -14, -6, 8, 23, 34, 42, 48, 58, 67, 70, 67, //2720
53, 43, 36, 36, 35, 30, 23, 14, 4, -3, -11, -19, -24, -34, -43, -47, //2736
-46, -44, -45, -46, -46, -42, -34, -15, -3, 7, 16, 21, 18, 19, 22, 28, //2752
35, 42, 63, 71, 76, 79, 80, 72, 52, 41, 34, 31, 28, 21, 14, 1, //2768
-16, -32, -46, -66, -83, -101, -108, -107, -101, -84, -70, -56, -45, -39, -11, 21, //2784
41, 53, 65, 76, 85, 84, 79, 68, 52, 17, 5, 3, -1, -9, -21, -31, //2800
-35, -37, -35, -29, -22, -19, -16, -10, -2, -1, -19, -33, -42, -42, -40, -38, //2816
-35, -40, -40, -36, -38, -36, -24, -21, -19, -10, 3, 12, 16, 23, 25, 22, //2832
25, 39, 47, 56, 60, 58, 50, 42, 37, 30, 22, 14, 5, 2, -1, -4, //2848
-3, -8, -18, -24, -27, -27, -32, -40, -47, -48, -47, -39, -31, -19, -9, -1, //2864
8, 17, 28, 42, 49, 55, 64, 68, 68, 72, 69, 60, 47, 39, 36, 33, //2880
28, 21, 11, -3, -22, -37, -53, -64, -74, -89, -95, -92, -92, -85, -74, -43, //2896
-25, -10, 9, 32, 49, 59, 64, 69, 76, 75, 66, 55, 49, 39, 30, 22, //2912
4, -11, -25, -30, -31, -37, -41, -39, -37, -36, -34, -29, -17, -14, -20, -32, //2928
-38, -44, -48, -50, -52, -53, -54, -45, -32, -17, -7, -5, -4, 3, 13, 14, //2944
18, 26, 34, 34, 42, 54, 58, 59, 60, 55, 42, 33, 34, 31, 27, 22, //2960
19, 19, 18, 13, 6, -8, -22, -38, -49, -50, -51, -54, -57, -60, -56, -46, //2976
-40, -37, -27, -17, -8, 7, 23, 36, 42, 49, 71, 75, 79, 85, 85, 75, //2992
70, 65, 58, 53, 44, 23, 3, -11, -18, -33, -50, -68, -91, -114, -124, -122, //3008
-113, -104, -89, -66, -41, -22, 12, 37, 46, 48, 56, 66, 77, 81, 77, 71, //3024
64, 50, 44, 36, 22, 5, -12, -24, -36, -48, -51, -50, -48, -44, -39, -30, //3040
-19, -12, -20, -26, -30, -30, -31, -35, -38, -44, -48, -43, -34, -23, -14, -9, //3056
-2, 8, 20, 21, 24, 30, 33, 35, 40, 54, 53, 48, 42, 35, 29, 21, //3072
17, 14, 13, 6, 3, 6, 6, 0, -6, -12, -16, -23, -28, -24, -27, -40, //3088
-46, -46, -40, -33, -27, -19, -7, 2, 10, 23, 33, 40, 43, 52, 64, 71, //3104
79, 83, 76, 65, 59, 55, 43, 36, 26, 11, -3, -13, -29, -45, -63, -78, //3120
-91, -105, -106, -104, -100, -88, -68, -25, -5, 7, 23, 37, 48, 68, 79, 84, //3136 ----- 3123
74, 64, 61, 57, 52, 41, 25, 6, -10, -16, -28, -38, -50, -63, -71, -66, //3152
-57, -50, -44, -24, -12, -9, -12, -14, -19, -38, -48, -54, -49, -45, -43, -30, //3168
-22, -13, -7, -1, 1, -2, 8, 15, 21, 31, 35, 33, 32, 37, 41, 38, //3184
28, 28, 32, 34, 36, 38, 39, 35, 33, 31, 24, 8, 2, 0, -5, -12, //3200
-17, -24, -30, -36, -36, -34, -42, -39, -32, -24, -15, -8, 5, 13, 20, 28, //3216
30, 34, 54, 58, 58, 64, 72, 67, 66, 62, 54, 44, 35, 24, 6, -11, //3232
-19, -30, -51, -62, -73, -87, -98, -107, -107, -98, -85, -66, -43, -19, 14, 36, //3248 ----- 3240
50, 60, 70, 77, 76, 74, 69, 57, 47, 33, 22, 14, 5, -4, -20, -32, //3264
-36, -48, -60, -66, -63, -52, -43, -31, -18, -13, -8, -8, -14, -21, -28, -36, //3280
-41, -37, -32, -27, -22, -13, -5, 1, 6, 13, 20, 21, 20, 21, 24, 29, //3296
28, 28, 28, 25, 26, 28, 31, 33, 34, 37, 40, 41, 43, 42, 39, 30, //3312
19, 9, -14, -29, -36, -40, -48, -62, -62, -59, -57, -50, -43, -31, -22, -13, //3328
1, 13, 22, 35, 45, 56, 63, 70, 80, 81, 74, 62, 55, 48, 34, 26, //3344
20, 15, 5, -5, -18, -34, -50, -61, -71, -91, -99, -104, -101, -93, -84, -56, //3360
-37, -21, -1, 22, 38, 48, 56, 64, 68, 70, 70, 60, 47, 38, 29, 19, //3376
6, -9, -25, -33, -38, -49, -61, -67, -60, -53, -44, -24, -17, -16, -16, -15, //3392
-14, -21, -25, -29, -34, -32, -31, -24, -19, -13, -1, 7, 18, 20, 23, 23, //3408
17, 15, 20, 19, 19, 26, 33, 29, 29, 33, 28, 20, 17, 14, 10, 11, //3424
21, 25, 26, 30, 20, 6, -6, -16, -24, -28, -35, -43, -52, -56, -50, -46, //3440
-41, -35, -31, -28, -12, 5, 19, 24, 27, 34, 49, 68, 76, 78, 74, 59, //3456
53, 51, 47, 33, 20, 11, 2, -5, -9, -14, -38, -52, -61, -71, -75, -70, //3472
-58, -47, -42, -38, -30, -18, 13, 28, 29, 32, 43, 62, 69, 72, 65, 51, //3488
37, 22, 12, 0, -10, -20, -30, -40, -42, -46, -51, -53, -46, -39, -29, -15, //3504
-9, -7, -10, -15, -18, -19, -17, -18, -20, -16, -15, -18, -14, -3, 3, 7, //3520
6, 3, 6, 15, 18, 24, 28, 26, 21, 19, 20, 16, 9, 12, 14, 17, //3536
19, 19, 23, 27, 33, 30, 26, 26, 22, 10, 4, -2, -12, -20, -24, -29, //3552
-36, -43, -42, -39, -40, -32, -23, -23, -20, -15, -5, 2, 15, 31, 44, 54, //3568
57, 60, 62, 60, 57, 48, 38, 35, 35, 40, 34, 15, 2, -13, -25, -35, //3584
-45, -62, -75, -82, -78, -68, -60, -46, -30, -19, -3, 18, 33, 36, 39, 42, //3600
38, 36, 40, 35, 28, 25, 18, 6, -9, -17, -30, -39, -41, -43, -43, -38, //3616
-29, -22, -18, 0, 9, 11, 12, 9, 0, -14, -23, -27, -29, -26, -21, -19, //3632
-14, -14, -12, -7, -2, -5, -9, -10, -11, -10, 3, 6, 4, 5, 8, 13, //3648
16, 19, 20, 17, 20, 26, 26, 28, 33, 32, 29, 39, 41, 36, 26, 16, //3664
-6, -16, -20, -30, -42, -52, -61, -59, -55, -50, -44, -38, -31, -19, -6, 1, //3680
8, 26, 38, 48, 52, 60, 68, 68, 62, 53, 52, 53, 44, 36, 25, 15, //3696
7, -2, -22, -37, -51, -66, -76, -80, -80, -71, -59, -44, -30, -6, 17, 35, //3712
43, 45, 49, 50, 47, 46, 45, 41, 38, 35, 30, 22, 16, 8, -15, -34, //3728
-45, -54, -63, -61, -49, -47, -40, -24, -9, -4, -1, -1, -9, -23, -36, -42, //3744
-49, -56, -57, -56, -51, -36, -27, -14, -3, 5, 14, 28, 34, 37, 46, 51, //3760
44, 45, 41, 41, 40, 33, 28, 24, 21, 20, 20, 23, 21, 12, 9, 10, //3776
12, 5, -1, -6, -17, -26, -28, -28, -30, -41, -42, -40, -42, -40, -32, -28, //3792
-31, -24, -7, 2, 12, 22, 30, 40, 48, 58, 66, 66, 63, 55, 45, 45, //3808
44, 41, 35, 19, 6, -5, -19, -32, -43, -65, -79, -85, -80, -69, -55, -49, //3824
-43, -33, -20, -1, 21, 28, 35, 46, 53, 57, 64, 61, 51, 37, 24, 12, //3840
1, -9, -19, -32, -39, -49, -50, -46, -42, -43, -44, -25, -17, -15, -11, -7, //3856
-12, -19, -23, -25, -31, -36, -33, -32, -25, -13, -5, 0, 10, 16, 19, 17, //3872
14, 25, 36, 38, 36, 36, 30, 17, 12, 10, 6, 1, 3, 10, 15, 27, //3888
40, 40, 32, 38, 37, 28, 19, 15, -7, -25, -32, -37, -41, -47, -47, -46, //3904
-49, -45, -38, -28, -23, -17, -5, 13, 30, 51, 60, 71, 77, 82, 85, 79, //3920
72, 62, 51, 43, 34, 21, 6, -2, -7, -13, -33, -50, -64, -79, -92, -94, //3936
-82, -71, -59, -49, -33, -8, 8, 19, 24, 33, 41, 52, 56, 61, 61, 51, //3952
41, 32, 25, 16, 8, 1, -20, -38, -48, -54, -61, -65, -60, -58, -50, -36, //3968
-26, -16, -13, -12, -17, -18, -17, -15, -22, -31, -31, -27, -19, -11, -4, 1, //3984
10, 16, 22, 20, 9, 5, 5, 6, 9, 19, 24, 17, 9, 6, 1, -2, //4000
4, 12, 18, 24, 33, 39, 45, 55, 58, 46, 30, 23, 17, 7, -2, -18, //4016
-35, -53, -59, -59, -67, -70, -70, -65, -55, -39, -18, -6, 10, 24, 36, 51, //4032
76, 84, 86, 88, 85, 70, 70, 64, 52, 40, 25, 11, 4, -6, -19, -31, //4048
-44, -69, -77, -80, -78, -72, -58, -49, -39, -28, -19, -10, 8, 15, 25, 35, //4064
39, 42, 47, 44, 38, 34, 26, 2, -3, -4, -8, -16, -21, -26, -36, -41, //4080
-38, -37, -39, -26, -17, -11, -6, -4, -12, -19, -18, -17, -19, -19, -14, -11, //4096
-9, -5, -1, -4, -11, -5, 5, 13, 17, 22, 23, 17, 14, 16, 17, 2, //4112
-7, -5, 2, 9, 24, 33, 33, 29, 32, 34, 30, 33, 25, 12, 3, -1, //4128
0, -8, -14, -17, -27, -51, -54, -51, -50, -51, -50, -42, -35, -26, -13, 2, //4144
18, 39, 52, 67, 82, 92, 102, 97, 89, 74, 59, 51, 34, 24, 13, -1, //4160
-11, -20, -40, -52, -63, -71, -77, -78, -66, -55, -49, -45, -39, -25, -15, -2, //4176
12, 22, 34, 42, 38, 35, 31, 23, 10, 12, 17, 19, 21, 16, -2, -13, //4192
-21, -24, -28, -31, -31, -33, -31, -26, -23, -24, -24, -25, -36, -40, -33, -30, //4208
-30, -30, -24, -20, -18, -9, -3, 0, 1, 7, 20, 26, 28, 27, 24, 18, //4224
10, 14, 16, 13, 10, 11, 17, 21, 20, 16, 12, 11, 15, 21, 26, 29, //4240
27, 17, 13, 8, -1, -15, -32, -38, -41, -44, -45, -42, -41, -36, -30, -21, //4256
-11, -6, 3, 11, 18, 26, 31, 45, 56, 68, 78, 83, 87, 81, 68, 58, //4272
49, 31, 15, -3, -10, -18, -26, -34, -44, -53, -65, -71, -69, -64, -58, -47, //4288
-33, -20, -5, 2, 11, 20, 27, 30, 31, 37, 36, 34, 34, 34, 35, 27, //4304
25, 22, 10, -6, -18, -28, -30, -27, -28, -32, -24, -19, -20, -21, -20, -22, //4320
-41, -50, -54, -57, -62, -61, -56, -47, -36, -21, -4, 11, 16, 17, 27, 36, //4336
36, 30, 25, 19, 13, 13, 16, 12, 5, 3, 4, 9, 13, 11, 9, 9, //4352
12, 19, 23, 22, 17, 11, 5, 3, -1, -11, -23, -31, -33, -38, -38, -35, //4368
-34, -33, -31, -26, -15, -2, 8, 22, 36, 51, 56, 59, 64, 61, 58, 54, //4384
46, 39, 29, 24, 20, 14, 1, -9, -8, -8, -19, -25, -24, -24, -30, -40, //4400
-40, -39, -37, -32, -24, -6, -4, 0, 7, 15, 23, 17, 17, 15, 11, 6, //4416
1, 2, -6, -13, -16, -16, -14, -17, -20, -24, -28, -29, -31, -23, -12, -4, //4432
-2, -5, 0, 4, 4, -1, -4, -12, -20, -20, -20, -19, -17, -17, -19, -17, //4448
-10, -6, -4, -1, 3, 6, 9, 12, 14, 12, 15, 26, 31, 36, 36, 38, //4464
39, 36, 32, 28, 29, 27, 28, 26, 15, -5, -16, -20, -29, -41, -44, -45, //4480
-44, -38, -32, -27, -20, -14, -13, -14, -6, 2, 11, 16, 25, 35, 42, 53, //4496
56, 58, 59, 54, 49, 39, 32, 24, 15, 4, -7, -13, -10, -15, -27, -33, //4512
-28, -25, -28, -27, -24, -25, -26, -21, -10, -2, -2, -5, -2, 11, 19, 18, //4528
19, 15, 9, 1, -1, -3, -10, -21, -29, -32, -27, -21, -16, -12, -14, -13, //4544
-6, 1, 2, -2, -2, -5, -4, 3, 5, 3, -3, -8, -12, -9, -11, -15, //4560
-21, -29, -28, -11, -4, -6, -5, -4, -11, -7, 8, 18, 15, 11, 12, 16, //4576
22, 27, 31, 26, 16, 18, 23, 33, 40, 45, 39, 32, 24, 14, 2, -17, //4592
-28, -40, -48, -50, -50, -48, -50, -50, -47, -37, -24, -6, 5, 12, 17, 27, //4608
38, 45, 55, 54, 46, 45, 54, 52, 43, 38, 32, 23, 15, 11, 5, -6, //4624
-16, -22, -24, -26, -31, -33, -35, -45, -42, -36, -30, -21, -13, -6, -1, 6, //4640
9, 12, 15, 14, 16, 18, 18, 17, 14, 11, 5, -1, -8, -14, -19, -20, //4656
-19, -18, -12, -11, -13, -14, -14, -16, -19, -18, -18, -17, -14, -12, -14, -12, //4672
-10, -12, -13, -16, -18, -19, -15, -6, 2, 11, 12, 11, 11, 9, 13, 17, //4688
13, 12, 12, 12, 10, 9, 5, 2, 3, 4, 10, 20, 20, 19, 18, 12, //4704
-1, -8, -15, -21, -27, -29, -21, -19, -17, -14, -17, -20, -21, -23, -21, -17, //4720
-14, -7, 4, 15, 24, 29, 32, 36, 37, 41, 42, 39, 37, 29, 27, 26, //4736
21, 12, 6, 7, 9, 8, 3, 1, 0, -8, -16, -20, -25, -27, -22, -21, //4752
-23, -24, -22, -15, -16, -18, -13, -3, 6, 18, 20, 19, 18, 17, 9, -7, //4768
-14, -18, -21, -24, -19, -16, -11, -3, 1, -3, -13, -16, -17, -15, -13, -12, //4784
-10, -12, -13, -10, -7, 3, 8, 3, -2, -5, -4, 5, 4, 2, 0, -2, //4800
0, 12, 14, 7, 5, 7, 6, 10, 12, 12, 10, 4, -1, 0, 5, 9, //4816
11, 14, 13, 10, 9, 9, 5, -11, -20, -23, -19, -16, -16, -14, -15, -15, //4832
-13, -14, -15, -21, -19, -11, 0, 17, 30, 32, 32, 30, 28, 24, 20, 17, //4848
14, 11, 12, 16, 19, 20, 14, 8, 2, -1, 1, 1, -4, -7, -9, -10, //4864
-10, -11, -10, -9, -11, -11, -5, 0, 0, -2, -1, 0, 2, 9, 12, 12, //4880
8, 6, 4, -1, -2, -8, -14, -19, -22, -16, -13, -8, -6, -8, -8, -10, //4896
-9, -5, -9, -13, -16, -18, -15, -12, -11, -12, -10, -8, -7, -4, 0, 3, //4912
1, -1, 3, 5, 9, 12, 13, 7, 5, 5, 5, 9, 12, 13, 13, 11, //4928
12, 18, 21, 18, 14, 15, 16, 18, 21, 14, 6, -3, -13, -22, -29, -31, //4944
-37, -44, -47, -41, -33, -31, -28, -26, -21, -12, -2, 10, 19, 26, 31, 38, //4960
38, 37, 38, 34, 24, 9, 7, 11, 16, 18, 11, 7, 9, 9, 9, 10, //4976
3, -6, -10, -9, -10, -15, -21, -24, -24, -18, -12, -9, -4, -7, -10, -10, //4992
-5, 8, 11, 14, 16, 13, 11, 16, 13, 6, 3, 0, 2, 2, -1, -5, //5008
-9, -11, -19, -23, -27, -27, -27, -30, -28, -22, -17, -12, -7, 0, 3, 7, //5024
15, 19, 17, 16, 15, 17, 16, 12, 7, 2, 2, 4, 4, 4, 7, 7, //5040
5, 3, 7, 10, 3, 0, -1, -2, 1, 8, 5, -2, -7, -6, -5, -7, //5056
-10, -13, -14, -14, -14, -13, -16, -23, -26, -22, -18, -20, -20, -17, -9, 0, //5072
10, 18, 24, 25, 25, 23, 21, 20, 20, 18, 14, 11, 13, 17, 18, 16, //5088
9, -2, -4, -3, -4, -3, -2, -5, -8, -9, -8, -8, -7, -10, -11, -11, //5104
-10, -8, -4, -4, -7, -9, -7, -2, 3, 6, 5, 0, -2, 2, 2, 0, //5120
0, -5, -10, -10, -10, -8, -8, -14, -19, -17, -15, -12, -13, -14, -16, -13, //5136
-6, -4, -3, 0, 6, 10, 14, 18, 20, 20, 18, 11, 8, 8, 4, 2, //5152
-2, -7, -13, -16, -14, -17, -17, -16, -13, -7, 1, 5, 7, 7, 7, 8, //5168
8, 8, 7, 7, 4, 3, 7, 6, 8, 9, 3, 1, -3, -6, -8, -14, //5184
-15, -14, -12, -9, -10, -8, -8, -6, 1, 4, 8, 13, 23, 30, 34, 33, //5200
28, 23, 18, 16, 13, 10, 5, 1, 0, -2, -5, -5, -6, -4, 0, 2, //5216
3, 1, -1, -1, -4, -4, -6, -10, -13, -11, -4, -3, -3, -1, 6, 8, //5232
7, 7, 3, -4, -12, -15, -16, -19, -24, -28, -24, -20, -13, -6, -5, -8, //5248
-6, -2, 0, -3, -3, -4, 0, 8, 12, 14, 13, 10, 10, 11, 10, 8, //5264
6, 1, -6, -9, -11, -13, -16, -22, -20, -17, -14, -8, 1, 6, 8, 6, //5280
10, 15, 15, 14, 12, 14, 14, 16, 17, 13, 9, 5, 3, 1, -2, -3, //5296
-7, -13, -18, -20, -19, -17, -17, -16, -15, -10, -5, -2, 1, 3, 7, 11, //5312
13, 16, 18, 15, 15, 15, 15, 13, 14, 16, 14, 9, 7, 8, 6, 2, //5328
-4, -9, -10, -13, -17, -17, -15, -14, -14, -11, -6, -1, 2, 3, 1, -7, //5344
-6, -7, -9, -10, -11, -10, -8, -7, -4, -3, -4, -4, -2, 4, 8, 11, //5360
9, 4, 1, 0, -1, -3, -6, -8, -7, -6, -6, -5, -1, -2, -7, -7, //5376
-3, 8, 11, 10, 7, 4, 5, 10, 13, 10, 5, 0, 0, 3, 2, 2, //5392
-3, -8, -14, -11, -5, -2, 0, 3, 5, 7, 9, 11, 11, 7, 1, -1, //5408
-3, -1, 1, 3, 1, -2, -4, -5, -8, -16, -18, -16, -14, -12, -9, -5, //5424
-4, -1, 4, 8, 12, 16, 19, 22, 23, 27, 29, 28, 26, 20, 11, 3, //5440
0, -6, -10, -14, -19, -20, -18, -14, -14, -13, -9, -6, -3, -1, 2, 5, //5456
5, 5, 3, 0, 1, 1, 3, 4, 4, 3, 3, 5, 5, 1, -1, -1, //5472
-4, -3, -1, 0, -4, -6, -6, -8, -7, -6, -7, -12, -18, -14, -16, -18, //5488
-15, -11, -5, -1, 5, 3, -2, -4, -7, -10, -13, -18, -21, -18, -11, -8, //5504
-5, -2, -3, -7, -4, 2, 8, 13, 14, 19, 21, 24, 24, 25, 27, 19, //5520
13, 9, 7, 3, -5, -11, -17, -21, -23, -21, -17, -18, -18, -16, -12, -10, //5536
-11, -13, -14, -9, -4, 2, 5, 7, 7, 8, 13, 24, 27, 27, 28, 30, //5552
30, 28, 25, 18, 11, 7, 8, 8, 4, 0, -5, -14, -21, -25, -29, -30, //5568
-29, -24, -16, -8, 3, 11, 13, 9, 7, 5, 2, 3, 5, 0, -1, 2, //5584
3, 0, 0, 0, -2, -3, -1, 4, 9, 10, 7, 2, -2, -5, -9, -12, //5600
-16, -18, -14, -9, -9, -9, -11, -14, -18, -20, -18, -17, -17, -16, -10, 1, //5616
5, 7, 10, 9, 11, 16, 17, 17, 15, 14, 16, 18, 18, 17, 17, 15, //5632
10, 10, 13, 15, 13, 8, 0, -7, -7, -8, -11, -15, -18, -21, -20, -15, //5648
-11, -10, -12, -14, -16, -14, -5, -2, -3, -5, -4, 0, 7, 11, 14, 15, //5664
15, 14, 19, 22, 20, 15, 10, 3, -1, -1, -2, -3, -4, -7, -6, -7, //5680
-13, -18, -18, -22, -22, -17, };
