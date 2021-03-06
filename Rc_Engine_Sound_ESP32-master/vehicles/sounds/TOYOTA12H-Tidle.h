const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 3712;
const signed char samples[] = {//0
0, -1, 0, 1, 1, 1, 2, 1, 0, -1, -2, -2, -1, 1, 3, 7, //16
10, 14, 19, 21, 20, 25, 31, 33, 39, 44, 43, 43, 45, 42, 39, 36, //32
34, 35, 32, 33, 33, 31, 30, 33, 34, 34, 35, 35, 32, 29, 32, 30, //48
27, 28, 30, 25, 24, 19, 14, 12, 8, 5, 5, 5, 4, 3, 0, -2, //64
-4, -7, -8, -10, -14, -15, -16, -18, -20, -24, -27, -28, -31, -33, -35, -34, //80
-36, -37, -35, -36, -37, -37, -38, -37, -36, -39, -39, -42, -46, -45, -48, -49, //96
-49, -53, -53, -55, -58, -61, -68, -69, -72, -73, -70, -70, -72, -70, -70, -72, //112
-71, -71, -68, -67, -64, -63, -61, -58, -56, -54, -52, -49, -46, -45, -44, -43, //128
-46, -44, -40, -33, -27, -22, -15, -7, -7, -8, -7, -10, -13, -15, -12, -9, //144
-9, -5, -1, 3, 4, 6, 9, 10, 12, 16, 20, 21, 21, 25, 30, 32, //160
35, 37, 38, 36, 32, 33, 32, 34, 37, 43, 47, 46, 51, 51, 46, 47, //176
49, 51, 52, 55, 60, 57, 58, 58, 56, 54, 54, 53, 54, 55, 52, 51, //192
48, 39, 38, 36, 34, 34, 41, 43, 42, 42, 39, 33, 24, 23, 23, 20, //208
18, 17, 11, 7, 1, -2, -1, 1, 4, 10, 12, 11, 8, 3, 0, -7, //224
-10, -9, -6, -2, -1, 4, 4, 0, 0, 1, 1, 2, 3, 4, -2, -9, //240
-16, -22, -31, -33, -27, -24, -17, -8, -3, 1, 5, 4, 3, 3, 2, 0, //256
-5, -10, -12, -16, -16, -14, -14, -9, -7, -6, 0, -1, 3, 8, 10, 11, //272
11, 8, 7, 9, 6, 3, 7, 3, 2, 4, 4, 10, 13, 19, 24, 26, //288
28, 28, 24, 22, 21, 17, 21, 20, 19, 22, 20, 17, 15, 12, 7, 5, //304
9, 10, 12, 15, 13, 13, 12, 4, 0, -6, -10, -11, -13, -16, -19, -23, //320
-26, -30, -33, -28, -23, -16, -10, -7, -4, -7, -14, -18, -25, -30, -32, -35, //336
-37, -40, -43, -46, -51, -52, -54, -53, -51, -49, -47, -49, -50, -50, -56, -62, //352
-65, -68, -70, -71, -70, -71, -72, -71, -75, -78, -78, -78, -76, -75, -73, -74, //368
-77, -76, -80, -82, -82, -79, -77, -78, -74, -73, -74, -75, -73, -71, -73, -68, //384
-60, -55, -50, -47, -45, -43, -45, -47, -44, -41, -39, -35, -25, -24, -22, -17, //400
-17, -18, -17, -15, -9, -11, -12, -8, -11, -10, -8, -9, -9, -5, -3, -4, //416
-2, 3, 5, 8, 14, 14, 14, 21, 24, 25, 29, 29, 30, 29, 29, 29, //432
27, 27, 31, 33, 37, 40, 42, 46, 48, 42, 43, 45, 40, 39, 45, 49, //448
51, 54, 56, 57, 55, 54, 56, 55, 55, 59, 64, 66, 62, 59, 60, 57, //464
50, 52, 51, 49, 50, 51, 52, 46, 43, 46, 43, 40, 47, 49, 49, 52, //480
55, 56, 53, 50, 50, 51, 48, 48, 50, 49, 48, 48, 49, 47, 42, 41, //496
43, 41, 40, 42, 43, 42, 43, 45, 44, 44, 46, 46, 45, 42, 41, 37, //512
35, 34, 31, 29, 28, 27, 26, 24, 21, 17, 15, 14, 13, 13, 11, 9, //528
7, 2, -3, -5, -8, -9, -9, -10, -10, -14, -18, -19, -20, -21, -20, -17, //544
-17, -18, -20, -21, -25, -32, -32, -33, -34, -34, -33, -33, -35, -37, -38, -39, //560
-40, -40, -39, -37, -37, -36, -36, -36, -37, -38, -39, -40, -42, -42, -43, -44, //576
-43, -47, -44, -43, -45, -44, -41, -38, -37, -36, -33, -31, -37, -34, -32, -35, //592
-33, -28, -25, -22, -23, -22, -19, -22, -24, -21, -19, -16, -13, -5, -3, -3, //608
-2, 0, -1, -1, 4, 6, 8, 11, 13, 13, 12, 9, 10, 9, 8, 12, //624
14, 14, 16, 18, 19, 19, 18, 20, 23, 23, 28, 31, 30, 31, 31, 28, //640
27, 25, 25, 26, 26, 29, 30, 29, 28, 27, 24, 23, 23, 22, 22, 24, //656
27, 27, 26, 25, 23, 21, 22, 20, 20, 21, 20, 19, 18, 15, 11, 10, //672
7, 3, 4, 3, 1, 2, 1, 0, -1, -2, -2, -4, -6, -8, -10, -12, //688
-16, -18, -22, -23, -24, -24, -24, -25, -25, -27, -28, -30, -32, -33, -33, -35, //704
-35, -34, -35, -36, -37, -39, -39, -39, -39, -41, -43, -41, -40, -42, -41, -39, //720
-38, -37, -37, -37, -40, -42, -43, -42, -41, -39, -36, -32, -30, -31, -30, -30, //736
-34, -33, -30, -29, -27, -21, -19, -17, -17, -19, -21, -22, -21, -19, -18, -16, //752
-12, -13, -11, -9, -10, -7, -3, -1, 5, 9, 10, 14, 17, 16, 18, 19, //768
20, 24, 24, 26, 27, 25, 26, 24, 24, 27, 29, 31, 36, 41, 42, 47, //784
49, 50, 52, 54, 57, 57, 56, 57, 59, 59, 64, 70, 71, 72, 70, 65, //800
63, 57, 54, 61, 60, 63, 68, 65, 59, 49, 45, 43, 39, 44, 54, 60, //816
66, 69, 67, 59, 49, 42, 38, 38, 37, 37, 41, 40, 39, 37, 32, 28, //832
24, 22, 22, 23, 24, 23, 24, 23, 20, 16, 15, 14, 13, 11, 10, 9, //848
6, 4, 6, 7, 10, 15, 18, 19, 16, 12, 8, 4, -1, -1, -2, -3, //864
-3, -7, -16, -19, -22, -21, -20, -11, -7, -7, -1, -1, -6, -9, -11, -10, //880
-9, -6, -3, -4, -3, -6, -10, -12, -18, -16, -15, -14, -12, -9, -8, -11, //896
-14, -14, -18, -23, -22, -24, -24, -21, -22, -19, -19, -20, -19, -18, -17, -14, //912
-13, -11, -8, -6, -4, -2, -3, -4, -2, -3, -6, -6, -9, -8, -8, -12, //928
-12, -17, -22, -24, -27, -35, -34, -32, -31, -31, -34, -34, -38, -42, -42, -42, //944
-44, -34, -35, -34, -31, -38, -42, -45, -49, -52, -59, -59, -62, -72, -71, -72, //960
-78, -76, -75, -74, -73, -73, -73, -70, -66, -67, -65, -59, -59, -62, -65, -65, //976
-68, -77, -81, -80, -86, -89, -85, -79, -81, -78, -71, -73, -80, -81, -85, -93, //992
-89, -87, -89, -87, -83, -85, -87, -87, -85, -85, -85, -79, -72, -67, -63, -55, //1008
-46, -46, -52, -43, -42, -56, -53, -60, -56, -49, -57, -38, -37, -42, -29, -24, //1024
-28, -24, -16, -12, -11, -4, 3, 5, 2, 9, 15, 5, 13, 22, 21, 19, //1040
26, 34, 35, 39, 40, 45, 42, 40, 49, 45, 40, 48, 45, 50, 49, 47, //1056
55, 53, 59, 68, 66, 70, 80, 79, 85, 88, 81, 82, 84, 78, 84, 78, //1072
76, 82, 77, 74, 77, 72, 69, 72, 71, 77, 80, 76, 80, 87, 81, 79, //1088
80, 77, 75, 76, 78, 78, 74, 71, 74, 63, 65, 68, 65, 72, 75, 70, //1104
72, 64, 59, 58, 47, 43, 44, 40, 38, 38, 30, 25, 19, 14, 11, 6, //1120
4, 8, 9, 10, 12, 17, 14, 10, 12, 8, 4, 3, 4, 7, 5, 6, //1136
8, -2, -2, -5, -10, -9, -10, -11, -10, -11, -13, -14, -18, -16, -17, -16, //1152
-14, -17, -15, -13, -18, -18, -13, -15, -13, -10, -10, -11, -12, -15, -19, -20, //1168
-22, -23, -20, -15, -13, -9, -6, -7, -4, -4, -4, -3, -1, 4, 4, 5, //1184
4, 2, 0, -2, 2, 5, 5, 9, 16, 15, 18, 18, 15, 16, 14, 14, //1200
16, 15, 14, 15, 15, 13, 13, 12, 12, 14, 23, 24, 25, 30, 32, 32, //1216
30, 31, 31, 28, 27, 27, 22, 19, 19, 18, 17, 15, 15, 16, 13, 10, //1232
9, 4, 5, 4, 4, 7, 8, 8, 11, 8, 6, 6, 3, 4, 5, 7, //1248
7, 9, 10, 9, 10, 7, 5, 4, -1, -2, -2, -5, -8, -9, -13, -16, //1264
-17, -20, -22, -24, -26, -26, -27, -27, -28, -32, -33, -35, -38, -41, -41, -41, //1280
-41, -41, -41, -42, -45, -46, -47, -49, -49, -50, -49, -48, -48, -49, -50, -51, //1296
-52, -53, -52, -51, -47, -44, -41, -38, -36, -36, -35, -30, -31, -28, -24, -22, //1312
-18, -15, -16, -19, -18, -18, -19, -18, -16, -15, -13, -11, -8, -7, -8, -6, //1328
-3, -3, 0, 3, 4, 6, 8, 8, 8, 8, 8, 10, 12, 13, 13, 14, //1344
16, 15, 15, 18, 17, 17, 22, 24, 22, 24, 23, 22, 21, 19, 22, 25, //1360
26, 26, 26, 24, 21, 20, 22, 23, 25, 33, 34, 34, 32, 29, 27, 24, //1376
20, 20, 21, 21, 18, 15, 14, 12, 8, 5, 4, 2, 3, 3, 2, 5, //1392
3, 3, 6, 5, 2, -3, -8, -7, -9, -18, -16, -11, -11, -6, -4, -3, //1408
-1, -8, -10, -9, -14, -15, -9, -8, -7, -6, -8, -11, -15, -18, -20, -20, //1424
-19, -13, -11, -7, -3, -1, 0, -1, -2, 0, 1, 0, 4, 10, 7, 7, //1440
9, 5, 5, 5, 6, 11, 11, 13, 19, 17, 18, 21, 21, 18, 20, 25, //1456
25, 23, 24, 26, 22, 19, 19, 19, 19, 23, 29, 33, 32, 33, 30, 26, //1472
22, 18, 21, 22, 25, 31, 31, 32, 34, 29, 24, 20, 17, 16, 15, 21, //1488
26, 27, 26, 27, 25, 13, 5, 4, 4, 0, 2, 13, 11, 6, 7, 6, //1504
-4, -7, -7, -10, -12, -15, -17, -19, -25, -27, -28, -33, -36, -35, -35, -38, //1520
-40, -39, -38, -39, -42, -41, -39, -39, -37, -37, -35, -33, -35, -30, -32, -36, //1536
-35, -37, -41, -43, -46, -48, -49, -51, -54, -57, -58, -57, -56, -55, -48, -49, //1552
-51, -49, -52, -60, -62, -61, -60, -59, -56, -51, -51, -53, -53, -50, -50, -51, //1568
-46, -45, -48, -48, -46, -48, -49, -46, -45, -46, -42, -41, -42, -41, -36, -32, //1584
-26, -22, -19, -15, -14, -14, -12, -12, -11, -8, -5, -3, -3, 1, 4, 1, //1600
1, 10, 11, 14, 17, 17, 20, 19, 19, 19, 18, 16, 19, 21, 23, 24, //1616
26, 28, 27, 28, 28, 28, 30, 35, 35, 36, 37, 37, 37, 36, 33, 34, //1632
37, 37, 38, 41, 42, 42, 44, 44, 45, 45, 44, 46, 47, 48, 53, 54, //1648
56, 58, 57, 57, 57, 55, 53, 53, 51, 50, 47, 44, 43, 39, 34, 34, //1664
30, 29, 28, 26, 25, 23, 22, 21, 20, 16, 17, 16, 15, 15, 12, 9, //1680
4, 0, 1, 3, 3, 10, 15, 18, 18, 18, 18, 13, 10, 8, 8, 7, //1696
7, 8, 8, 7, 6, 5, 2, -1, -3, -2, -2, -3, -3, -2, -4, -7, //1712
-9, -11, -17, -20, -19, -20, -22, -23, -22, -21, -20, -19, -16, -15, -14, -15, //1728
-15, -16, -19, -23, -25, -24, -26, -26, -24, -23, -21, -20, -20, -19, -18, -15, //1744
-13, -12, -8, -5, -5, -5, -5, -8, -9, -9, -12, -10, -10, -9, -9, -8, //1760
-8, -8, -9, -9, -10, -10, -9, -9, -8, -7, -7, -6, -4, -5, -4, -3, //1776
-4, -3, -5, -5, -4, -5, -5, -5, -6, -5, -3, -2, -1, 0, 1, 3, //1792
5, 6, 8, 11, 12, 14, 17, 17, 18, 18, 17, 18, 17, 18, 20, 20, //1808
21, 25, 22, 22, 23, 23, 22, 22, 25, 24, 23, 23, 22, 21, 18, 16, //1824
13, 10, 8, 5, 4, 5, 3, 3, 1, -5, -4, -5, -9, -12, -9, -11, //1840
-12, -10, -10, -12, -14, -16, -17, -20, -24, -23, -23, -26, -25, -24, -26, -30, //1856
-31, -33, -35, -38, -39, -34, -36, -36, -33, -34, -37, -36, -37, -38, -37, -36, //1872
-36, -38, -36, -33, -35, -35, -31, -32, -31, -27, -27, -27, -27, -28, -28, -31, //1888
-33, -32, -31, -31, -30, -29, -27, -30, -28, -25, -24, -23, -17, -14, -14, -14, //1904
-10, -11, -14, -16, -15, -13, -13, -8, -6, -4, -1, 2, 4, 6, 7, 10, //1920
12, 14, 16, 18, 19, 20, 20, 20, 20, 22, 24, 25, 25, 26, 29, 25, //1936
25, 26, 25, 26, 29, 30, 33, 32, 32, 35, 31, 29, 28, 27, 27, 27, //1952
26, 26, 25, 24, 23, 21, 17, 17, 14, 10, 6, 6, 7, 11, 18, 24, //1968
30, 32, 32, 28, 22, 18, 16, 14, 15, 17, 17, 18, 15, 16, 15, 13, //1984
14, 17, 16, 16, 18, 17, 14, 13, 10, 9, 8, 4, -2, -5, -9, -13, //2000
-11, -13, -16, -14, -12, -12, -12, -10, -9, -9, -8, -5, -5, -6, -4, -3, //2016
-2, -3, -3, -3, -6, -8, -10, -13, -15, -13, -10, -5, -2, 1, 3, 0, //2032
-2, -4, -4, -2, 4, 10, 13, 15, 13, 10, 3, 1, 5, 10, 15, 27, //2048
30, 30, 26, 21, 17, 11, 12, 13, 16, 18, 13, 12, 8, 5, 8, 8, //2064
16, 20, 21, 23, 20, 14, 3, 0, -1, -3, -2, 5, 8, 7, 6, 5, //2080
4, 8, 15, 23, 27, 28, 25, 13, 2, -5, -10, -9, -1, 5, 11, 11, //2096
8, 5, -1, -1, 3, 6, 9, 12, 7, 3, -5, -14, -16, -18, -15, -12, //2112
-11, -15, -19, -25, -30, -27, -24, -22, -16, -13, -14, -18, -24, -29, -38, -38, //2128
-35, -34, -32, -32, -35, -39, -44, -44, -43, -40, -31, -26, -19, -17, -20, -24, //2144
-27, -31, -30, -28, -28, -29, -30, -35, -38, -40, -43, -43, -38, -34, -29, -26, //2160
-29, -33, -39, -44, -48, -49, -49, -48, -46, -42, -39, -36, -30, -28, -25, -23, //2176
-19, -17, -18, -19, -19, -21, -24, -28, -31, -31, -28, -24, -21, -13, -9, -7, //2192
-4, -2, -2, -6, -8, -10, -16, -17, -16, -15, -10, -5, -1, 9, 9, 9, //2208
11, 10, 10, 7, 5, 5, 2, 2, 4, 0, -1, 1, 1, 1, 3, 3, //2224
5, 9, 11, 13, 18, 16, 17, 20, 18, 19, 24, 27, 30, 30, 33, 38, //2240
40, 47, 52, 57, 61, 65, 65, 61, 58, 57, 55, 52, 54, 50, 46, 45, //2256
36, 34, 34, 32, 33, 37, 38, 40, 41, 40, 42, 43, 44, 49, 50, 50, //2272
55, 55, 56, 60, 58, 56, 57, 55, 57, 62, 64, 69, 73, 76, 80, 79, //2288
80, 81, 77, 78, 76, 72, 70, 71, 69, 69, 70, 68, 66, 64, 60, 60, //2304
59, 61, 64, 68, 70, 70, 70, 68, 66, 65, 64, 67, 67, 66, 65, 62, //2320
61, 58, 53, 52, 47, 45, 44, 42, 40, 40, 40, 40, 42, 39, 37, 36, //2336
30, 27, 22, 19, 17, 15, 16, 20, 21, 21, 22, 21, 17, 13, 12, 11, //2352
8, 7, 7, 7, 6, 0, -4, -7, -15, -20, -25, -33, -40, -44, -47, -48, //2368
-49, -54, -56, -61, -67, -73, -78, -81, -80, -79, -76, -74, -76, -80, -85, -91, //2384
-96, -98, -101, -100, -96, -97, -97, -95, -100, -101, -106, -108, -106, -107, -108, -106, //2400
-107, -110, -113, -120, -122, -124, -127, -125, -122, -122, -116, -115, -117, -117, -117, -117, //2416
-117, -117, -115, -114, -114, -107, -105, -110, -107, -102, -105, -102, -100, -99, -96, -96, //2432
-92, -93, -97, -96, -93, -94, -92, -89, -84, -79, -77, -71, -63, -61, -58, -53, //2448
-49, -48, -43, -39, -39, -37, -31, -30, -26, -20, -21, -21, -12, -9, -7, -5, //2464
-1, 1, 6, 8, 8, 9, 9, 10, 12, 11, 11, 15, 19, 24, 23, 25, //2480
29, 27, 27, 33, 31, 34, 39, 42, 44, 44, 43, 42, 39, 34, 39, 37, //2496
35, 41, 45, 42, 44, 42, 43, 45, 43, 51, 54, 52, 53, 53, 48, 42, //2512
38, 35, 34, 29, 31, 33, 29, 25, 27, 24, 19, 19, 17, 17, 18, 17, //2528
22, 22, 18, 17, 19, 8, 8, 8, 2, 1, 1, -1, -1, 0, -1, -1, //2544
-1, -4, -7, -8, -10, -9, -9, -8, -5, -6, -6, -8, -15, -17, -18, -22, //2560
-19, -14, -17, -13, -10, -13, -13, -18, -19, -16, -16, -17, -10, -5, -4, 0, //2576
3, 1, -1, -3, -4, -5, -2, 3, 7, 11, 10, 9, 4, -2, -5, -5, //2592
-1, 7, 15, 24, 30, 30, 31, 28, 26, 30, 31, 33, 37, 42, 44, 45, //2608
47, 45, 48, 51, 48, 52, 52, 52, 57, 62, 62, 62, 63, 60, 56, 53, //2624
51, 51, 54, 61, 67, 71, 77, 80, 80, 81, 81, 78, 82, 83, 83, 87, //2640
87, 84, 82, 78, 76, 73, 70, 72, 68, 65, 65, 66, 61, 62, 65, 63, //2656
64, 68, 67, 66, 62, 61, 62, 58, 59, 58, 57, 59, 58, 56, 54, 50, //2672
47, 46, 43, 39, 41, 41, 41, 41, 36, 35, 28, 20, 19, 15, 10, 10, //2688
10, 9, 4, -1, -2, -3, -6, -4, 2, 3, 2, 1, -6, -15, -21, -19, //2704
-14, -9, -2, 3, 5, -6, -13, -20, -29, -30, -27, -22, -19, -22, -26, -33, //2720
-45, -50, -53, -50, -46, -40, -28, -24, -22, -22, -24, -29, -32, -32, -32, -30, //2736
-29, -26, -25, -23, -22, -25, -23, -16, -13, -6, -1, 0, 2, 0, -2, -5, //2752
-8, -12, -12, -11, -10, -9, -10, -9, -8, -10, -9, -9, -8, -3, 0, 4, //2768
6, 5, 4, 7, 3, 2, 5, 1, 1, 4, 0, 2, 4, -1, 0, -5, //2784
-9, -7, -7, -8, 0, 0, -2, -2, -7, -17, -24, -27, -28, -27, -28, -22, //2800
-19, -23, -21, -21, -27, -24, -30, -31, -31, -38, -51, -51, -59, -72, -75, -77, //2816
-79, -78, -73, -69, -68, -70, -69, -75, -80, -74, -80, -77, -77, -84, -80, -81, //2832
-93, -92, -90, -99, -100, -89, -91, -102, -94, -98, -107, -115, -116, -119, -121, -117, //2848
-113, -106, -104, -102, -96, -98, -99, -95, -90, -89, -92, -78, -77, -89, -81, -80, //2864
-88, -81, -70, -78, -67, -75, -77, -61, -70, -68, -55, -53, -58, -51, -41, -54, //2880
-48, -42, -51, -53, -40, -40, -40, -30, -21, -22, -18, -10, -10, -13, -4, 5, //2896
-2, 8, 10, 7, 9, 4, 4, 6, 4, 3, 13, 17, 15, 22, 35, 29, //2912
27, 41, 40, 33, 38, 43, 54, 46, 43, 63, 61, 45, 64, 70, 67, 78, //2928
92, 101, 100, 90, 99, 98, 80, 89, 84, 73, 78, 80, 62, 67, 66, 57, //2944
68, 74, 71, 83, 80, 73, 82, 83, 72, 82, 77, 68, 73, 72, 67, 69, //2960
68, 67, 68, 63, 70, 68, 61, 64, 68, 60, 57, 57, 52, 51, 46, 43, //2976
44, 34, 29, 37, 27, 27, 33, 31, 29, 34, 36, 42, 40, 33, 38, 25, //2992
17, 19, 18, 12, 12, 22, 19, 18, 19, 15, 12, 12, 13, 14, 14, 20, //3008
25, 22, 28, 26, 18, 15, 12, 12, 10, 9, 16, 19, 18, 19, 19, 16, //3024
11, 10, 14, 17, 10, 10, 19, 9, 5, 12, 12, 6, 5, 15, 12, 8, //3040
12, 13, 11, 7, 9, 11, 6, 6, 6, 4, 3, 2, 2, 0, 0, 1, //3056
5, 5, 3, 10, 10, 10, 14, 16, 14, 9, 8, 4, 0, -4, -4, -5, //3072
-4, 0, 0, 3, 5, 3, 2, 4, 3, 3, 6, 7, 10, 12, 10, 5, //3088
0, -6, -9, -12, -11, -11, -9, -5, -3, -3, -4, -4, -6, -7, -5, -5, //3104
-1, 1, 2, 3, 3, 1, -2, -5, -5, -5, -4, 0, 5, 4, 5, 6, //3120
5, 6, 6, 6, 7, 7, 5, 3, -1, -5, -6, -7, -6, -9, -7, -5, //3136
-7, -9, -8, -9, -11, -8, -6, -7, -6, -5, -9, -14, -17, -19, -25, -27, //3152
-29, -29, -30, -33, -33, -34, -34, -34, -36, -35, -35, -37, -36, -33, -34, -33, //3168
-30, -30, -31, -31, -34, -36, -37, -39, -41, -41, -36, -33, -32, -28, -25, -27, //3184
-26, -26, -29, -29, -28, -20, -20, -18, -14, -15, -20, -22, -25, -30, -32, -32, //3200
-31, -24, -21, -18, -11, -10, -14, -15, -19, -23, -25, -24, -19, -17, -14, -14, //3216
-17, -20, -25, -25, -27, -21, -14, -6, 1, 6, 13, 17, 19, 25, 23, 20, //3232
21, 20, 16, 20, 31, 38, 40, 45, 42, 32, 24, 16, 14, 15, 18, 31, //3248
41, 45, 49, 43, 32, 22, 12, 5, 4, 0, 6, 15, 11, 13, 19, 9, //3264
12, 13, 17, 20, 22, 29, 30, 27, 24, 22, 16, 12, 13, 15, 14, 18, //3280
20, 22, 21, 18, 16, 7, 2, 0, -4, -3, 0, 1, 5, 6, 6, 5, //3296
4, 9, 10, 14, 17, 17, 18, 16, 12, 11, 13, 11, 12, 18, 17, 18, //3312
23, 21, 20, 19, 17, 16, 15, 12, 8, 3, -1, -1, -1, 8, 15, 18, //3328
22, 19, 12, 4, 0, 1, 6, 13, 22, 26, 23, 19, 17, 12, 13, 17, //3344
28, 38, 45, 51, 52, 48, 45, 39, 34, 33, 33, 34, 35, 32, 30, 30, //3360
26, 26, 30, 31, 33, 33, 29, 24, 19, 15, 13, 18, 23, 25, 26, 25, //3376
16, 5, -4, -5, -5, -2, 3, 6, 6, 1, -2, -1, 1, 1, 3, 11, //3392
14, 9, 9, -1, -7, -11, -17, -10, -12, -14, -4, 0, -12, -14, -16, -24, //3408
-29, -26, -24, -25, -28, -30, -36, -35, -40, -40, -33, -35, -32, -34, -36, -36, //3424
-45, -46, -42, -57, -53, -52, -66, -67, -71, -79, -74, -74, -73, -68, -68, -63, //3440
-59, -60, -64, -63, -69, -73, -71, -73, -79, -80, -82, -84, -81, -84, -81, -80, //3456
-81, -81, -79, -77, -84, -84, -86, -81, -83, -91, -77, -86, -91, -82, -83, -93, //3472
-88, -91, -97, -92, -92, -91, -86, -92, -88, -89, -96, -90, -93, -93, -79, -86, //3488
-87, -73, -84, -92, -80, -72, -86, -62, -57, -57, -47, -48, -39, -42, -55, -53, //3504
-45, -53, -50, -41, -46, -42, -48, -48, -32, -45, -34, -17, -18, -16, -10, -11, //3520
-7, -10, -19, -3, -4, -20, -9, 2, -15, 0, 4, 5, 12, 15, 28, 40, //3536
39, 36, 47, 46, 39, 46, 47, 49, 53, 53, 59, 54, 46, 53, 57, 45, //3552
57, 72, 68, 68, 78, 77, 75, 72, 75, 80, 72, 76, 89, 82, 79, 92, //3568
90, 93, 94, 90, 92, 92, 88, 89, 94, 96, 99, 107, 106, 109, 108, 103, //3584
100, 99, 97, 91, 91, 93, 93, 85, 82, 84, 79, 73, 84, 84, 80, 83, //3600
87, 84, 74, 71, 66, 65, 65, 65, 70, 75, 71, 67, 76, 65, 59, 61, //3616
60, 50, 49, 53, 48, 51, 50, 46, 47, 36, 32, 33, 26, 23, 23, 24, //3632
18, 18, 18, 11, 2, 2, 2, 2, 2, 2, 8, 11, 10, 11, 13, 10, //3648
3, -2, -4, -13, -20, -27, -25, -24, -33, -34, -29, -36, -37, -35, -31, -30, //3664
-33, -27, -27, -32, -33, -30, -32, -33, -30, -26, -25, -27, -25, -27, -33, -38, //3680
-39, -43, -44, -38, -35, -34, -33, -29, -29, -31, -30, -26, -27, -26, -21, -21, //3696
-24, -25, -23, -22, -21, -19, -14, -10, -8, -5, -3, -2, -1, 0, 0, 0, };
