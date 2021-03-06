const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 4947;
const signed char revSamples[] = {//0
0, 0, 0, 1, 1, -1, 0, 1, 3, 3, 0, -5, -13, -16, -19, -20, //16
-22, -25, -27, -29, -29, -29, -28, -26, -26, -25, -24, -21, -16, -11, -10, -11, //32
-14, -16, -17, -16, -15, -14, -13, -12, -11, -10, -9, -10, -13, -17, -20, -19, //48
-17, -13, -11, -8, -8, -8, -8, -8, -8, -9, -11, -12, -13, -14, -15, -18, //64
-20, -21, -21, -20, -20, -19, -18, -17, -17, -19, -23, -27, -29, -30, -33, -35, //80
-38, -38, -38, -37, -37, -39, -40, -40, -41, -41, -40, -40, -40, -42, -43, -43, //96
-43, -41, -40, -39, -38, -38, -37, -35, -33, -30, -28, -28, -29, -28, -26, -24, //112
-24, -24, -27, -28, -27, -25, -23, -22, -23, -25, -25, -24, -24, -24, -24, -26, //128
-27, -28, -28, -28, -30, -32, -35, -39, -42, -43, -42, -41, -40, -41, -45, -48, //144
-50, -53, -54, -54, -55, -56, -57, -58, -61, -66, -69, -71, -72, -72, -72, -71, //160
-73, -77, -82, -86, -91, -92, -91, -90, -89, -87, -87, -86, -86, -85, -85, -85, //176
-89, -91, -93, -93, -93, -93, -94, -94, -94, -93, -91, -88, -87, -87, -87, -87, //192
-85, -82, -80, -80, -80, -81, -82, -84, -86, -87, -88, -88, -86, -86, -87, -88, //208
-90, -92, -94, -95, -95, -94, -92, -88, -86, -85, -82, -79, -75, -69, -65, -61, //224
-58, -56, -56, -56, -56, -58, -59, -60, -62, -61, -60, -58, -55, -52, -48, -46, //240
-44, -45, -46, -47, -52, -54, -56, -56, -55, -53, -53, -55, -58, -61, -65, -68, //256
-71, -73, -75, -77, -79, -81, -81, -82, -82, -80, -79, -77, -76, -75, -74, -74, //272
-73, -73, -74, -75, -76, -77, -77, -76, -75, -74, -73, -73, -73, -73, -72, -70, //288
-68, -65, -64, -63, -61, -61, -60, -60, -59, -60, -61, -63, -67, -68, -67, -66, //304
-64, -64, -65, -66, -66, -63, -60, -55, -52, -52, -52, -52, -52, -50, -49, -48, //320
-49, -50, -51, -50, -48, -47, -45, -43, -42, -39, -35, -31, -28, -26, -23, -20, //336
-17, -12, -8, -4, 0, 2, 3, 3, 6, 10, 12, 11, 9, 8, 6, 7, //352
9, 10, 11, 11, 11, 12, 13, 15, 16, 17, 19, 20, 19, 19, 18, 18, //368
18, 18, 18, 18, 18, 17, 17, 16, 15, 14, 12, 10, 9, 9, 10, 11, //384
12, 12, 12, 12, 12, 12, 10, 7, 5, 3, 3, 3, -1, -4, -6, -9, //400
-11, -11, -11, -13, -15, -16, -17, -16, -16, -15, -16, -16, -16, -15, -14, -14, //416
-14, -15, -17, -18, -17, -15, -14, -13, -14, -19, -22, -24, -24, -23, -22, -22, //432
-23, -24, -24, -23, -23, -24, -26, -27, -29, -32, -33, -32, -31, -30, -28, -26, //448
-23, -19, -15, -11, -9, -7, -5, -3, -1, 1, 3, 4, 4, 3, 2, -1, //464
-3, -2, 0, 4, 7, 9, 10, 9, 9, 9, 9, 6, 3, 0, -3, -4, //480
-6, -7, -8, -8, -8, -7, -6, -4, -2, -1, 0, 1, 1, 1, 2, 2, //496
2, 3, 4, 5, 7, 8, 10, 13, 17, 20, 21, 21, 20, 16, 13, 11, //512
8, 6, 4, 3, 2, 1, -2, -5, -7, -10, -11, -12, -12, -13, -13, -14, //528
-15, -15, -15, -15, -14, -13, -12, -9, -5, -1, 6, 9, 12, 13, 13, 13, //544
13, 15, 17, 18, 20, 24, 28, 31, 35, 38, 40, 43, 44, 44, 44, 41, //560
38, 36, 35, 34, 34, 33, 33, 32, 30, 28, 25, 22, 20, 20, 21, 23, //576
26, 28, 29, 31, 32, 33, 36, 40, 42, 42, 42, 42, 39, 38, 36, 34, //592
33, 32, 30, 30, 30, 30, 28, 25, 22, 21, 22, 24, 24, 22, 19, 17, //608
18, 19, 19, 18, 15, 13, 12, 11, 11, 10, 9, 9, 9, 9, 12, 15, //624
18, 22, 26, 29, 33, 37, 40, 42, 42, 42, 41, 42, 43, 45, 47, 47, //640
47, 46, 44, 40, 36, 29, 27, 25, 25, 25, 25, 23, 22, 21, 20, 20, //656
19, 17, 14, 10, 7, 4, 1, 0, 0, 1, 2, 4, 8, 10, 12, 14, //672
17, 20, 22, 23, 24, 26, 27, 28, 27, 26, 23, 20, 17, 16, 17, 18, //688
20, 20, 18, 16, 14, 12, 12, 13, 15, 17, 19, 19, 20, 20, 23, 23, //704
24, 25, 27, 31, 35, 37, 37, 36, 34, 30, 27, 25, 23, 21, 19, 18, //720
18, 17, 16, 16, 19, 22, 25, 28, 29, 30, 28, 26, 24, 21, 18, 12, //736
7, 2, -4, -10, -16, -23, -26, -28, -28, -27, -27, -28, -30, -31, -31, -31, //752
-26, -22, -19, -17, -16, -15, -14, -13, -11, -10, -7, -4, 0, 3, 5, 9, //768
13, 19, 24, 27, 31, 34, 34, 34, 33, 32, 33, 34, 37, 40, 40, 39, //784
37, 35, 33, 33, 35, 36, 36, 36, 36, 37, 39, 40, 40, 38, 35, 35, //800
35, 36, 36, 36, 36, 36, 37, 38, 39, 41, 43, 45, 46, 49, 51, 55, //816
57, 59, 59, 60, 60, 59, 58, 54, 50, 47, 42, 39, 37, 33, 30, 28, //832
27, 27, 26, 23, 20, 15, 13, 11, 10, 9, 10, 10, 11, 10, 10, 10, //848
9, 10, 9, 8, 7, 6, 4, 3, 4, 5, 6, 9, 16, 21, 28, 33, //864
39, 44, 50, 54, 59, 62, 64, 65, 64, 63, 62, 63, 63, 61, 58, 54, //880
51, 51, 53, 56, 57, 57, 57, 57, 60, 63, 66, 68, 69, 71, 72, 72, //896
71, 71, 68, 61, 56, 51, 48, 47, 45, 37, 31, 25, 20, 16, 13, 7, //912
4, 1, 0, 0, 1, 2, 1, 0, -1, -3, -3, -2, -1, -2, -3, -5, //928
-9, -10, -9, -7, -3, 0, 2, 2, 3, 4, 7, 12, 14, 16, 17, 18, //944
19, 20, 19, 18, 17, 17, 19, 20, 21, 22, 21, 21, 21, 21, 23, 24, //960
26, 28, 27, 25, 24, 25, 26, 31, 34, 37, 41, 45, 50, 57, 61, 64, //976
65, 68, 70, 74, 76, 77, 80, 81, 81, 81, 82, 85, 90, 96, 104, 107, //992
108, 108, 108, 107, 104, 101, 96, 92, 89, 86, 86, 86, 87, 88, 89, 89, //1008
89, 88, 86, 86, 86, 86, 88, 89, 89, 88, 85, 83, 84, 88, 94, 99, //1024
104, 107, 109, 112, 115, 115, 112, 109, 106, 105, 105, 104, 101, 96, 91, 88, //1040
87, 88, 90, 90, 90, 90, 90, 90, 90, 89, 88, 86, 83, 81, 81, 81, //1056
81, 80, 80, 80, 82, 85, 88, 90, 89, 87, 86, 87, 87, 88, 87, 86, //1072
85, 86, 86, 86, 85, 82, 78, 72, 64, 59, 55, 52, 48, 44, 35, 29, //1088
25, 23, 24, 24, 20, 16, 11, 8, 6, 7, 8, 9, 8, 7, 7, 9, //1104
12, 14, 16, 18, 20, 23, 24, 23, 22, 21, 19, 21, 25, 30, 34, 37, //1120
37, 38, 40, 44, 48, 51, 49, 46, 43, 42, 43, 46, 48, 48, 48, 49, //1136
51, 55, 58, 59, 59, 56, 53, 44, 41, 38, 35, 32, 28, 25, 23, 23, //1152
23, 23, 22, 20, 18, 15, 14, 14, 17, 19, 20, 21, 21, 19, 17, 15, //1168
13, 11, 10, 12, 15, 17, 17, 16, 11, 8, 7, 8, 8, 8, 6, 4, //1184
2, -1, -5, -8, -13, -15, -16, -16, -14, -10, -8, -7, -8, -11, -13, -15, //1200
-14, -13, -12, -12, -12, -12, -11, -11, -11, -9, -7, -5, -2, 3, 7, 12, //1216
15, 16, 16, 17, 19, 21, 22, 20, 18, 17, 17, 20, 22, 24, 24, 22, //1232
20, 19, 20, 22, 22, 21, 18, 15, 14, 13, 12, 10, 6, 6, 8, 11, //1248
16, 21, 24, 24, 23, 20, 18, 17, 18, 20, 21, 21, 21, 20, 18, 17, //1264
15, 12, 12, 12, 14, 16, 18, 18, 18, 18, 18, 18, 18, 18, 15, 13, //1280
11, 8, 7, 5, 1, -2, -4, -5, -5, -5, -2, -1, 0, 0, -1, -2, //1296
-4, -5, -6, -8, -10, -13, -12, -10, -6, -2, 1, 3, 4, 3, 3, 5, //1312
7, 8, 9, 8, 7, 6, 6, 5, 4, 3, 1, 0, 1, 3, 4, 6, //1328
8, 10, 11, 12, 13, 13, 13, 13, 12, 11, 10, 8, 2, -5, -13, -21, //1344
-27, -32, -38, -42, -45, -50, -55, -58, -62, -62, -61, -60, -59, -56, -53, -51, //1360
-49, -45, -42, -39, -38, -36, -35, -33, -31, -29, -29, -31, -32, -33, -35, -36, //1376
-38, -40, -42, -44, -45, -46, -48, -51, -54, -59, -62, -65, -67, -69, -72, -76, //1392
-78, -81, -85, -89, -93, -98, -99, -99, -96, -92, -87, -79, -73, -67, -63, -58, //1408
-53, -52, -51, -50, -51, -51, -52, -53, -54, -56, -60, -62, -65, -66, -67, -68, //1424
-68, -69, -70, -72, -73, -74, -75, -77, -79, -82, -85, -87, -88, -86, -84, -80, //1440
-76, -71, -66, -64, -62, -61, -59, -56, -51, -49, -48, -46, -44, -43, -42, -40, //1456
-39, -38, -36, -33, -31, -31, -32, -34, -37, -44, -47, -49, -51, -52, -55, -59, //1472
-62, -64, -66, -67, -67, -67, -66, -67, -68, -69, -71, -69, -67, -64, -62, -61, //1488
-61, -60, -58, -55, -52, -49, -47, -45, -41, -36, -32, -26, -24, -23, -22, -22, //1504
-18, -16, -16, -17, -21, -24, -26, -26, -27, -28, -30, -33, -35, -36, -38, -39, //1520
-42, -49, -53, -56, -58, -60, -61, -64, -67, -68, -67, -65, -61, -54, -51, -46, //1536
-42, -39, -33, -31, -30, -29, -29, -31, -34, -36, -37, -38, -39, -41, -40, -38, //1552
-35, -31, -28, -24, -23, -23, -24, -25, -26, -28, -31, -33, -35, -35, -34, -31, //1568
-29, -28, -28, -29, -30, -30, -30, -30, -30, -31, -32, -33, -34, -34, -35, -36, //1584
-36, -35, -32, -28, -24, -18, -15, -12, -10, -8, -7, -5, -4, -3, -2, -1, //1600
0, 1, 3, 3, 2, 1, -2, -3, -4, -4, -3, -1, 1, 2, 2, 2, //1616
1, 1, 1, 1, 2, 3, 5, 9, 11, 11, 10, 9, 9, 10, 10, 9, //1632
8, 6, 5, 6, 8, 11, 14, 16, 17, 17, 17, 18, 19, 20, 20, 21, //1648
21, 22, 22, 20, 17, 15, 14, 15, 16, 17, 16, 13, 9, 3, -2, -6, //1664
-8, -8, -8, -9, -8, -8, -8, -9, -10, -11, -14, -16, -18, -19, -20, -20, //1680
-19, -18, -19, -20, -21, -24, -25, -26, -27, -28, -30, -35, -39, -42, -43, -43, //1696
-42, -39, -37, -34, -32, -32, -34, -35, -34, -32, -28, -25, -24, -24, -23, -21, //1712
-17, -14, -7, -4, 0, 3, 4, 6, 7, 8, 9, 10, 13, 20, 24, 28, //1728
30, 30, 30, 30, 32, 33, 34, 36, 38, 38, 38, 37, 36, 35, 34, 33, //1744
33, 32, 32, 30, 25, 22, 21, 22, 22, 22, 20, 19, 19, 18, 18, 14, //1760
11, 7, 3, 0, -4, -7, -10, -13, -13, -13, -14, -16, -19, -22, -24, -26, //1776
-30, -33, -39, -43, -45, -46, -45, -45, -45, -45, -45, -45, -45, -44, -43, -42, //1792
-40, -38, -38, -37, -37, -36, -34, -33, -33, -34, -34, -35, -34, -33, -31, -30, //1808
-29, -27, -27, -27, -28, -29, -32, -36, -38, -40, -40, -39, -39, -39, -39, -39, //1824
-38, -35, -32, -28, -25, -23, -20, -19, -18, -18, -18, -18, -17, -14, -10, -6, //1840
-4, -2, 0, 0, 3, 3, 3, 2, -1, -6, -8, -9, -8, -7, -6, -4, //1856
-4, -4, -5, -6, -7, -7, -5, -4, 0, 3, 9, 13, 17, 21, 25, 29, //1872
32, 35, 37, 39, 41, 43, 46, 48, 50, 53, 56, 60, 61, 62, 62, 61, //1888
58, 52, 48, 43, 39, 35, 30, 23, 17, 14, 12, 12, 14, 13, 11, 6, //1904
2, -1, -3, -5, -7, -8, -11, -13, -14, -14, -14, -14, -15, -18, -21, -25, //1920
-27, -29, -31, -36, -40, -44, -47, -50, -53, -55, -54, -53, -50, -48, -46, -47, //1936
-49, -51, -52, -55, -58, -59, -58, -57, -56, -53, -51, -49, -46, -42, -39, -37, //1952
-37, -37, -35, -30, -24, -17, -16, -17, -17, -15, -11, -9, -9, -9, -10, -10, //1968
-10, -11, -13, -15, -19, -22, -27, -28, -28, -28, -28, -25, -24, -22, -19, -18, //1984
-18, -17, -17, -16, -16, -17, -17, -18, -19, -19, -18, -17, -16, -16, -17, -17, //2000
-17, -14, -11, -10, -10, -9, -8, -5, -2, -2, -3, -4, -7, -14, -18, -21, //2016
-23, -23, -23, -21, -21, -20, -20, -19, -19, -18, -17, -16, -14, -11, -6, -1, //2032
5, 10, 16, 19, 22, 24, 26, 28, 31, 35, 40, 42, 43, 43, 42, 42, //2048
41, 40, 40, 41, 42, 43, 40, 38, 34, 31, 31, 30, 28, 25, 21, 18, //2064
15, 13, 10, 5, 1, -4, -8, -8, -8, -8, -9, -14, -17, -19, -19, -18, //2080
-16, -13, -13, -14, -14, -14, -14, -11, -9, -9, -10, -13, -19, -24, -27, -29, //2096
-29, -28, -24, -21, -19, -15, -12, -9, -6, -4, 0, 5, 10, 13, 13, 12, //2112
13, 14, 15, 15, 13, 11, 8, 7, 7, 7, 8, 8, 9, 9, 11, 14, //2128
17, 21, 23, 23, 23, 23, 24, 25, 25, 22, 14, 8, 2, -1, -4, -6, //2144
-8, -9, -9, -9, -10, -9, -7, -5, -2, 1, 3, 8, 11, 14, 17, 18, //2160
19, 21, 24, 27, 30, 32, 33, 35, 39, 44, 51, 58, 65, 67, 68, 69, //2176
72, 76, 78, 79, 79, 79, 79, 79, 80, 79, 78, 76, 73, 67, 64, 60, //2192
55, 50, 39, 33, 30, 27, 26, 25, 23, 22, 22, 22, 22, 21, 21, 22, //2208
23, 25, 28, 32, 35, 37, 38, 40, 42, 43, 44, 45, 47, 50, 54, 57, //2224
60, 65, 69, 73, 74, 73, 71, 67, 65, 63, 60, 58, 56, 53, 50, 46, //2240
43, 41, 38, 37, 36, 35, 35, 35, 35, 35, 35, 36, 38, 39, 40, 41, //2256
42, 43, 45, 47, 48, 50, 51, 52, 54, 57, 59, 61, 63, 64, 64, 65, //2272
66, 67, 69, 71, 73, 73, 73, 69, 66, 62, 59, 57, 56, 55, 54, 53, //2288
51, 49, 47, 45, 44, 43, 40, 37, 34, 33, 31, 30, 30, 30, 33, 35, //2304
36, 39, 42, 46, 50, 53, 56, 60, 64, 72, 75, 76, 76, 75, 73, 73, //2320
72, 71, 69, 65, 58, 53, 47, 42, 38, 35, 31, 30, 28, 28, 28, 28, //2336
29, 29, 29, 30, 31, 33, 36, 39, 42, 45, 47, 50, 50, 49, 48, 45, //2352
40, 37, 36, 35, 34, 34, 30, 27, 25, 24, 24, 22, 20, 19, 17, 16, //2368
15, 12, 8, 5, 1, -2, -4, -7, -8, -8, -9, -9, -8, -7, -5, -2, //2384
2, 7, 15, 21, 25, 29, 32, 34, 38, 40, 42, 45, 47, 49, 49, 47, //2400
45, 41, 38, 33, 30, 27, 24, 20, 18, 15, 14, 15, 16, 18, 20, 22, //2416
21, 21, 21, 21, 22, 23, 23, 23, 22, 22, 22, 23, 25, 26, 29, 31, //2432
33, 34, 33, 32, 32, 29, 28, 27, 26, 26, 25, 23, 22, 21, 20, 17, //2448
12, 4, -4, -10, -15, -20, -26, -29, -31, -30, -30, -30, -30, -30, -29, -25, //2464
-21, -18, -14, -11, -6, -3, 0, 1, 2, 4, 8, 15, 21, 26, 26, 25, //2480
23, 21, 21, 21, 20, 19, 16, 13, 6, 2, -3, -7, -11, -16, -24, -27, //2496
-31, -34, -37, -41, -44, -46, -45, -44, -42, -40, -41, -42, -43, -44, -46, -47, //2512
-48, -48, -47, -47, -47, -49, -50, -51, -53, -53, -51, -48, -45, -40, -36, -33, //2528
-30, -28, -24, -20, -17, -13, -14, -16, -19, -20, -21, -22, -25, -28, -30, -33, //2544
-35, -35, -34, -32, -31, -32, -36, -39, -41, -41, -40, -38, -37, -37, -38, -39, //2560
-40, -43, -48, -51, -53, -54, -56, -59, -62, -64, -64, -62, -60, -54, -52, -50, //2576
-49, -49, -49, -49, -50, -52, -53, -55, -58, -58, -58, -57, -57, -58, -59, -61, //2592
-62, -63, -63, -63, -60, -57, -54, -53, -52, -51, -48, -43, -36, -29, -23, -19, //2608
-17, -15, -14, -12, -12, -12, -14, -14, -15, -15, -15, -16, -16, -17, -18, -20, //2624
-24, -25, -26, -27, -27, -27, -24, -22, -18, -16, -17, -19, -22, -24, -26, -26, //2640
-26, -27, -27, -28, -29, -32, -39, -43, -46, -47, -47, -48, -49, -50, -50, -51, //2656
-52, -55, -60, -64, -66, -69, -73, -77, -80, -81, -81, -81, -78, -75, -74, -75, //2672
-77, -77, -76, -72, -69, -68, -68, -68, -68, -67, -66, -66, -65, -63, -61, -59, //2688
-58, -58, -59, -60, -60, -60, -59, -58, -58, -58, -59, -58, -57, -54, -52, -50, //2704
-51, -54, -58, -62, -64, -64, -64, -65, -67, -70, -71, -69, -66, -61, -57, -55, //2720
-54, -54, -53, -52, -50, -50, -49, -51, -52, -52, -51, -46, -42, -40, -40, -40, //2736
-43, -47, -50, -51, -51, -52, -52, -52, -54, -56, -60, -63, -67, -70, -73, -75, //2752
-79, -82, -86, -89, -90, -90, -87, -85, -79, -77, -76, -73, -69, -61, -57, -53, //2768
-51, -51, -51, -51, -50, -50, -51, -53, -57, -64, -68, -71, -71, -71, -72, -73, //2784
-74, -74, -73, -71, -70, -71, -73, -74, -74, -73, -73, -73, -73, -74, -75, -76, //2800
-75, -74, -73, -73, -72, -72, -71, -68, -64, -61, -54, -50, -48, -45, -44, -45, //2816
-46, -48, -50, -52, -54, -56, -59, -61, -63, -66, -67, -67, -68, -69, -71, -71, //2832
-70, -66, -63, -61, -60, -59, -59, -56, -53, -51, -47, -42, -35, -30, -27, -25, //2848
-24, -24, -23, -22, -21, -21, -22, -22, -25, -26, -27, -27, -26, -23, -20, -18, //2864
-16, -14, -12, -9, -9, -9, -10, -12, -14, -17, -18, -19, -20, -21, -21, -21, //2880
-20, -18, -17, -17, -15, -13, -11, -9, -6, -4, 0, 3, 5, 6, 7, 9, //2896
11, 13, 13, 12, 11, 4, -1, -7, -12, -16, -18, -21, -23, -24, -25, -25, //2912
-26, -27, -29, -32, -34, -36, -37, -37, -36, -35, -35, -35, -34, -34, -34, -34, //2928
-34, -30, -28, -26, -26, -29, -32, -36, -37, -37, -36, -35, -35, -36, -36, -35, //2944
-34, -33, -31, -29, -27, -25, -23, -21, -21, -23, -25, -28, -29, -29, -27, -25, //2960
-25, -26, -26, -25, -22, -20, -17, -14, -12, -8, -5, -2, 0, 2, 3, 5, //2976
8, 12, 15, 17, 17, 17, 18, 21, 26, 31, 38, 41, 42, 43, 44, 45, //2992
46, 46, 45, 44, 42, 39, 38, 37, 34, 31, 29, 26, 25, 25, 24, 23, //3008
22, 21, 20, 19, 16, 13, 7, 4, 0, -3, -6, -8, -5, -4, -3, -3, //3024
-4, -4, -3, -1, 1, 5, 8, 13, 16, 17, 18, 18, 18, 20, 22, 23, //3040
22, 22, 18, 15, 13, 12, 12, 12, 11, 10, 8, 5, 3, 1, 1, 1, //3056
0, -2, -5, -9, -11, -13, -16, -20, -24, -30, -32, -32, -32, -31, -31, -30, //3072
-28, -26, -22, -17, -13, -12, -11, -11, -11, -9, -5, -4, -3, -4, -5, -7, //3088
-8, -9, -10, -13, -16, -21, -24, -26, -29, -33, -35, -38, -40, -42, -43, -43, //3104
-42, -42, -42, -43, -44, -44, -44, -42, -41, -40, -39, -39, -38, -37, -34, -30, //3120
-27, -20, -16, -13, -11, -11, -11, -14, -14, -15, -15, -16, -16, -14, -13, -12, //3136
-11, -11, -10, -8, -7, -5, -5, -5, -6, -8, -9, -10, -11, -10, -9, -9, //3152
-8, -7, -6, -1, 2, 4, 5, 4, 4, 3, 3, 3, 2, 2, 2, 6, //3168
10, 16, 24, 30, 35, 37, 37, 38, 39, 39, 37, 33, 27, 21, 16, 12, //3184
9, 7, 5, 4, 4, 5, 5, 5, 4, 2, 0, -1, 0, 2, 3, 4, //3200
4, 5, 6, 8, 12, 15, 20, 23, 25, 28, 30, 32, 33, 32, 31, 30, //3216
29, 28, 28, 28, 29, 29, 28, 27, 24, 22, 21, 20, 19, 18, 16, 15, //3232
14, 12, 9, 7, 5, 5, 5, 5, 6, 7, 8, 9, 11, 14, 19, 23, //3248
27, 28, 30, 30, 30, 30, 30, 31, 31, 32, 31, 30, 29, 28, 28, 33, //3264
37, 41, 44, 47, 49, 50, 48, 44, 39, 32, 25, 22, 20, 19, 17, 15, //3280
13, 11, 9, 6, 3, -1, -1, 0, 3, 7, 10, 13, 14, 13, 13, 12, //3296
12, 13, 16, 18, 18, 18, 17, 18, 20, 24, 30, 35, 39, 42, 44, 49, //3312
53, 56, 59, 60, 62, 63, 63, 62, 59, 54, 50, 46, 44, 41, 39, 37, //3328
34, 31, 26, 19, 15, 11, 9, 6, 3, 0, -5, -10, -14, -18, -19, -17, //3344
-16, -13, -10, -10, -6, -5, -4, -4, -6, -9, -8, -7, -5, -2, -1, 4, //3360
8, 13, 18, 24, 28, 34, 36, 38, 41, 43, 47, 49, 51, 53, 56, 59, //3376
64, 66, 68, 69, 70, 70, 70, 69, 68, 66, 64, 61, 61, 62, 63, 63, //3392
63, 61, 59, 58, 57, 57, 57, 54, 50, 44, 37, 32, 28, 26, 25, 21, //3408
17, 13, 6, 1, -4, -7, -9, -10, -8, -6, -6, -7, -8, -11, -11, -11, //3424
-10, -10, -10, -10, -11, -11, -11, -11, -7, -5, -3, 0, 1, 4, 10, 15, //3440
21, 25, 27, 27, 25, 24, 23, 22, 21, 20, 20, 20, 20, 21, 22, 25, //3456
28, 31, 34, 37, 39, 40, 41, 42, 42, 41, 41, 40, 38, 37, 34, 32, //3472
33, 36, 39, 41, 41, 41, 41, 42, 43, 43, 43, 43, 44, 45, 46, 48, //3488
48, 47, 46, 45, 44, 42, 42, 42, 42, 42, 41, 41, 43, 46, 50, 54, //3504
58, 61, 65, 67, 69, 70, 71, 72, 71, 69, 65, 61, 57, 57, 57, 56, //3520
55, 54, 54, 54, 54, 54, 55, 57, 60, 62, 62, 59, 56, 55, 56, 58, //3536
60, 60, 60, 60, 61, 62, 62, 61, 60, 60, 61, 61, 61, 62, 63, 66, //3552
69, 74, 79, 85, 90, 96, 99, 99, 98, 98, 95, 92, 90, 86, 82, 79, //3568
74, 71, 67, 63, 60, 60, 57, 55, 52, 50, 48, 46, 47, 47, 48, 49, //3584
50, 50, 49, 48, 48, 49, 51, 52, 52, 52, 52, 52, 54, 56, 58, 60, //3600
61, 61, 61, 62, 61, 60, 60, 58, 52, 49, 44, 37, 29, 16, 10, 8, //3616
8, 12, 15, 15, 13, 12, 12, 15, 20, 29, 33, 36, 38, 40, 42, 43, //3632
43, 44, 45, 46, 49, 51, 52, 52, 52, 49, 43, 40, 37, 35, 32, 27, //3648
23, 19, 16, 15, 16, 16, 14, 13, 12, 12, 14, 16, 16, 15, 14, 13, //3664
12, 12, 13, 14, 14, 14, 15, 17, 21, 25, 27, 30, 32, 35, 37, 39, //3680
41, 44, 45, 45, 45, 44, 41, 37, 34, 32, 30, 27, 19, 13, 7, 3, //3696
1, 1, 1, 0, -1, -1, -1, 0, 2, 4, 6, 7, 9, 12, 14, 15, //3712
14, 13, 10, 7, 5, 3, 2, -1, -4, -6, -7, -8, -9, -10, -11, -11, //3728
-9, -5, -2, 0, -3, -7, -14, -18, -21, -23, -24, -25, -26, -29, -29, -27, //3744
-23, -17, -12, -7, -6, -7, -8, -8, -7, -4, -1, 1, 0, -2, -5, -7, //3760
-11, -12, -13, -14, -14, -17, -21, -25, -29, -33, -36, -37, -37, -38, -40, -42, //3776
-45, -50, -53, -55, -57, -58, -59, -59, -58, -57, -54, -51, -48, -45, -45, -45, //3792
-44, -44, -40, -37, -35, -34, -34, -33, -33, -32, -30, -29, -29, -29, -32, -32, //3808
-31, -30, -30, -31, -34, -37, -39, -41, -42, -43, -44, -44, -43, -42, -40, -38, //3824
-36, -35, -33, -30, -28, -28, -29, -30, -33, -33, -33, -32, -31, -31, -34, -38, //3840
-41, -44, -45, -45, -45, -44, -45, -45, -46, -49, -50, -50, -49, -48, -47, -45, //3856
-44, -44, -46, -49, -53, -56, -61, -62, -63, -62, -62, -62, -59, -57, -56, -55, //3872
-55, -53, -51, -48, -45, -44, -45, -51, -54, -58, -61, -62, -63, -66, -69, -72, //3888
-76, -80, -85, -87, -88, -88, -87, -87, -85, -85, -85, -85, -85, -85, -82, -81, //3904
-79, -76, -76, -73, -71, -68, -63, -59, -55, -50, -49, -50, -51, -51, -53, -54, //3920
-55, -56, -56, -57, -57, -58, -60, -61, -62, -64, -65, -67, -69, -72, -73, -73, //3936
-73, -72, -71, -71, -71, -71, -71, -71, -70, -68, -67, -65, -67, -68, -69, -69, //3952
-69, -69, -70, -70, -70, -70, -70, -69, -68, -67, -66, -65, -66, -66, -65, -64, //3968
-63, -62, -61, -61, -62, -62, -61, -59, -59, -61, -63, -64, -64, -61, -59, -57, //3984
-56, -56, -56, -57, -58, -60, -61, -62, -63, -64, -64, -65, -65, -65, -65, -64, //4000
-64, -65, -66, -69, -71, -72, -73, -74, -76, -78, -79, -80, -81, -82, -82, -81, //4016
-79, -75, -71, -66, -60, -57, -56, -55, -54, -53, -52, -50, -48, -45, -42, -40, //4032
-40, -40, -39, -37, -34, -30, -29, -29, -30, -32, -32, -32, -32, -32, -33, -35, //4048
-36, -37, -38, -39, -40, -42, -46, -48, -50, -52, -56, -59, -66, -70, -73, -75, //4064
-76, -78, -79, -78, -76, -73, -71, -70, -69, -66, -61, -54, -48, -42, -39, -36, //4080
-32, -30, -29, -31, -32, -32, -32, -30, -28, -27, -26, -25, -23, -21, -20, -19, //4096
-19, -18, -17, -16, -17, -20, -22, -26, -29, -35, -39, -42, -44, -47, -49, -52, //4112
-54, -56, -58, -60, -62, -62, -61, -60, -59, -59, -55, -51, -46, -42, -40, -39, //4128
-40, -41, -40, -39, -39, -36, -34, -32, -30, -27, -27, -29, -31, -33, -34, -34, //4144
-33, -30, -28, -26, -24, -22, -19, -17, -16, -15, -15, -16, -17, -18, -20, -21, //4160
-24, -27, -30, -31, -31, -30, -28, -24, -23, -23, -23, -23, -23, -21, -21, -21, //4176
-22, -25, -28, -32, -35, -36, -36, -34, -31, -29, -27, -26, -24, -22, -17, -14, //4192
-12, -10, -10, -11, -11, -11, -11, -11, -14, -18, -20, -21, -21, -20, -19, -18, //4208
-17, -16, -17, -17, -18, -17, -17, -17, -17, -18, -20, -21, -22, -23, -24, -26, //4224
-31, -35, -37, -40, -41, -41, -40, -41, -43, -43, -43, -42, -42, -42, -43, -44, //4240
-45, -47, -49, -51, -53, -54, -54, -57, -59, -61, -62, -62, -58, -56, -54, -54, //4256
-55, -57, -62, -65, -65, -64, -62, -59, -59, -58, -57, -55, -52, -48, -45, -43, //4272
-40, -39, -36, -32, -29, -27, -26, -23, -19, -15, -12, -8, -5, -2, 2, 6, //4288
10, 14, 18, 21, 24, 26, 28, 29, 32, 35, 38, 40, 41, 44, 45, 46, //4304
44, 42, 38, 33, 28, 21, 17, 12, 7, 1, -5, -6, -7, -7, -6, -6, //4320
-6, -7, -9, -10, -12, -14, -14, -16, -18, -19, -21, -20, -20, -20, -21, -23, //4336
-23, -21, -18, -15, -12, -10, -9, -7, -6, -5, -4, -4, -3, -3, -2, -2, //4352
-2, -3, -3, -4, -4, -5, -6, -7, -10, -12, -15, -18, -20, -24, -27, -29, //4368
-29, -28, -25, -20, -18, -18, -19, -19, -17, -11, -7, -3, 0, 0, -3, -5, //4384
-6, -5, -5, -5, -8, -11, -13, -15, -15, -15, -18, -19, -20, -20, -19, -17, //4400
-16, -16, -17, -18, -20, -24, -26, -28, -31, -32, -34, -36, -37, -37, -37, -37, //4416
-36, -34, -33, -33, -34, -35, -37, -35, -32, -28, -25, -26, -28, -31, -32, -31, //4432
-29, -26, -25, -26, -28, -31, -34, -37, -38, -38, -38, -39, -40, -41, -40, -36, //4448
-31, -26, -20, -17, -14, -9, -5, -2, 2, 3, 3, 2, 1, 1, 2, 4, //4464
6, 8, 11, 14, 16, 19, 22, 26, 28, 31, 31, 31, 31, 31, 28, 25, //4480
23, 20, 18, 16, 16, 17, 18, 18, 18, 15, 11, 8, 6, 6, 6, 6, //4496
6, 6, 5, 4, 4, 7, 10, 13, 16, 19, 21, 22, 24, 26, 28, 30, //4512
31, 31, 31, 32, 33, 35, 36, 35, 34, 33, 32, 32, 32, 32, 32, 31, //4528
29, 26, 25, 26, 26, 25, 25, 22, 21, 20, 19, 18, 16, 13, 12, 11, //4544
10, 8, 2, -2, -4, -6, -6, -4, -1, 1, 1, 2, 3, 4, 5, 5, //4560
5, 5, 5, 6, 7, 8, 9, 11, 14, 22, 26, 31, 34, 36, 39, 41, //4576
43, 43, 42, 42, 44, 46, 48, 51, 51, 51, 51, 53, 55, 58, 60, 60, //4592
59, 58, 58, 59, 60, 60, 58, 54, 48, 41, 36, 28, 25, 21, 17, 14, //4608
8, 6, 5, 4, 4, 5, 5, 7, 9, 10, 13, 15, 19, 21, 20, 19, //4624
16, 12, 12, 13, 14, 17, 18, 20, 23, 25, 28, 30, 33, 35, 36, 35, //4640
34, 34, 35, 37, 38, 38, 38, 36, 33, 31, 30, 30, 31, 33, 37, 38, //4656
38, 37, 37, 40, 43, 46, 49, 50, 51, 53, 55, 58, 62, 64, 66, 65, //4672
65, 66, 67, 70, 73, 75, 75, 74, 74, 71, 68, 66, 64, 63, 61, 60, //4688
60, 60, 61, 62, 63, 65, 67, 69, 73, 76, 79, 85, 87, 88, 87, 87, //4704
87, 89, 92, 97, 100, 103, 102, 101, 100, 98, 97, 97, 96, 95, 93, 90, //4720
87, 81, 78, 76, 74, 74, 74, 71, 70, 68, 65, 64, 62, 59, 58, 58, //4736
59, 59, 59, 57, 56, 56, 57, 58, 60, 61, 61, 61, 62, 62, 62, 62, //4752
61, 61, 61, 60, 60, 59, 58, 57, 55, 52, 50, 50, 51, 52, 54, 56, //4768
57, 58, 61, 62, 65, 66, 68, 72, 76, 81, 85, 86, 86, 87, 88, 90, //4784
93, 94, 94, 93, 94, 94, 95, 95, 95, 93, 91, 88, 88, 90, 91, 93, //4800
95, 92, 91, 90, 88, 87, 83, 80, 79, 79, 80, 80, 79, 77, 75, 75, //4816
78, 82, 89, 94, 100, 104, 110, 117, 121, 124, 126, 127, 127, 125, 124, 121, //4832
117, 113, 108, 100, 97, 94, 92, 91, 88, 86, 83, 78, 74, 71, 65, 62, //4848
58, 55, 54, 54, 55, 56, 56, 56, 56, 56, 57, 58, 59, 61, 63, 66, //4864
68, 68, 69, 70, 71, 72, 74, 75, 79, 82, 89, 93, 95, 96, 96, 96, //4880
93, 92, 91, 89, 87, 85, 85, 84, 83, 82, 79, 76, 73, 73, 73, 74, //4896
75, 76, 75, 72, 69, 66, 62, 61, 60, 59, 57, 53, 45, 40, 38, 35, //4912
33, 30, 27, 26, 26, 27, 28, 29, 29, 28, 28, 27, 25, 21, 19, 19, //4928
20, 21, 21, 20, 18, 14, 11, 8, 3, 0, -2, -3, -3, -3, -2, 0, //4944
-1, -1, -1, };
