const unsigned int shiftingSampleRate = 22050;
const unsigned int shiftingSampleCount = 4230;
const signed char shiftingSamples[] = {//0
0, -1, -1, -1, -1, -1, -1, 0, 0, 1, 1, -1, 0, 3, 5, 5, //16
5, 4, 2, 0, 3, 1, -1, 1, 3, 4, 0, -1, -2, -2, 0, 1, //32
0, 2, 0, -1, 1, -2, 0, -1, -9, -9, -9, -2, 0, -3, 2, 1, //48
0, -7, -15, -14, -14, -12, -5, -5, -12, -6, -5, -3, 0, 5, 8, 3, //64
1, 0, -3, 1, 13, 12, 16, 12, 6, 9, 11, 0, -7, -10, -2, 4, //80
6, 20, 16, 11, 5, -12, -11, -4, -8, -10, -9, -13, -13, -26, -33, -34, //96
-28, -12, -8, 1, 3, 1, 13, 13, 14, 7, 1, 6, 12, 10, -7, -6, //112
-7, -8, -14, -14, -2, -5, -4, -14, -15, -18, -12, -15, -10, 7, 5, 9, //128
6, 12, 8, -9, -4, 9, 23, 37, 35, 32, 33, 24, 30, 24, 6, -4, //144
-8, -1, -6, -4, -3, -2, 6, 6, 13, 26, 15, 13, 3, 6, 11, -1, //160
-2, 9, 10, 5, -4, -25, -22, -32, -40, -36, -14, 7, 14, 5, -8, -15, //176
0, 9, 6, 4, -15, -20, -14, -7, -5, -1, 6, 3, -10, -20, -28, -44, //192
-44, -43, -42, -29, -11, -7, -3, 7, 6, 0, -4, 0, 3, -10, -3, 23, //208
32, 38, 22, 14, 15, 14, 20, 21, 12, -1, -19, -18, -8, -15, -19, -31, //224
-27, -26, -12, 4, 1, 15, 17, 18, 16, 22, 16, 21, 30, 16, 23, 11, //240
14, 18, 4, -5, 0, 6, 4, -3, -1, 3, -10, -10, -8, 0, 6, 5, //256
4, -6, -17, -18, 0, 22, 17, 4, -9, -16, -5, 13, 14, 13, 10, -12, //272
-21, -10, 3, 9, 2, -1, -13, -24, -15, -1, 2, -1, -4, 8, 18, 4, //288
-2, 4, 6, 9, -3, -2, -9, 0, 7, 7, 4, -10, -12, -7, 3, 8, //304
14, 26, 20, 4, -9, -17, -20, -22, -20, -34, -48, -51, -42, -28, -20, -23, //320
-25, -24, -34, -22, -23, -15, -8, -16, 8, 9, 8, 11, 11, 16, 4, -4, //336
-6, -4, -4, 2, 16, 38, 54, 42, 38, 27, 24, 26, 22, 39, 48, 34, //352
34, 19, 19, 32, 32, 30, 30, 21, 13, 4, 0, -8, -21, -19, -28, -42, //368
-42, -28, -22, -18, -9, -15, -16, -1, 9, 8, 0, -7, -14, -20, -18, -26, //384
-37, -21, -18, -11, -7, -13, -17, -20, -7, 0, 2, -7, -8, 9, 29, 33, //400
26, 18, 26, 38, 32, 33, 29, 13, -14, -14, -9, 4, -2, -20, -26, -38, //416
-30, -37, -22, 11, 17, 10, -10, -13, -13, -17, -18, -5, -4, -14, -10, -5, //432
6, 10, 7, 2, -12, -5, 5, 10, 5, -16, -11, -11, -5, 0, 9, 31, //448
37, 43, 28, 13, 7, 1, 3, 1, -3, 4, 21, 20, 23, 20, 13, 3, //464
-4, -8, -24, -24, -26, -40, -38, -44, -36, -15, -10, 13, 15, 12, 18, 20, //480
26, 24, 12, 12, 11, 2, 9, -5, -8, -13, -17, -1, -8, -2, -8, -10, //496
2, 0, 5, 11, 6, 14, 25, 14, -3, -3, 7, 4, 1, 21, 15, 8, //512
-8, -18, -14, -23, -11, 7, 11, -7, -13, -7, 6, 22, 21, 8, -24, -14, //528
2, 10, 8, 10, -3, -7, 6, 4, 4, -2, -2, -11, -17, -7, -1, 4, //544
-9, -5, -9, -18, -16, -23, 0, 13, 26, 24, -7, -30, -66, -61, -32, -31, //560
-32, -35, -29, -20, -21, -15, 10, 1, -8, -18, -25, -28, -10, 11, 25, 35, //576
27, 41, 41, 31, 35, 24, 10, 32, 28, 19, 17, 21, 17, 23, 34, 33, //592
29, 26, 40, 18, 12, 8, 5, 36, 12, 7, 5, 1, 9, -4, 0, -6, //608
-10, -17, -23, -19, -27, -36, -35, -26, -18, -26, -38, -20, 3, 23, 32, 16, //624
4, -6, -18, -38, -46, -30, -37, -35, -21, -38, -54, -61, -36, -14, -16, -20, //640
-23, -33, -13, 3, -9, 13, 10, 16, 11, 0, 8, 45, 44, 46, 47, 42, //656
59, 49, 46, 41, 30, 22, 14, 14, 13, 26, 36, 20, 13, 10, 7, -7, //672
-7, -21, -23, -15, -8, 15, 5, -8, -2, -3, -4, -9, -34, -42, -27, -23, //688
-35, -46, -20, -19, -18, -23, -27, -24, -1, 3, -17, -18, -1, 21, 22, -12, //704
-8, 19, 24, 9, -6, -15, -11, 5, 13, -16, -33, -20, 4, 14, 37, 68, //720
50, 40, 25, -3, -23, -21, -17, -24, -39, -47, -31, 2, 27, 23, 28, 48, //736
39, 12, -1, 9, 13, 20, 27, 12, -3, -3, -5, -5, -21, -38, -34, -41, //752
-48, -42, -30, -10, -6, 5, -6, -13, -24, -24, -6, -3, 2, -16, -23, -5, //768
19, 19, 20, 21, 11, -7, -31, -25, 8, 27, 32, 39, 50, 28, 15, 32, //784
51, 67, 48, 26, 22, 21, 11, 2, 14, 17, 14, 5, -14, -23, -14, -3, //800
-5, -15, -27, -49, -53, -50, -53, -62, -46, -29, -29, -50, -51, -5, 25, 22, //816
-14, -39, -34, -11, 2, 16, 16, 13, 20, 3, 6, -24, -35, -7, -11, -13, //832
-11, 0, 22, 30, 43, 45, 44, 37, 32, 11, -23, -19, -14, -13, -17, -32, //848
-44, 4, 16, 10, -6, -14, -3, -12, 7, 23, 38, 22, -15, -30, -51, -34, //864
6, 55, 39, -5, -9, 18, 51, 42, 25, 34, 22, 8, -7, -37, -22, 5, //880
32, 20, 33, 51, 34, 33, 42, 26, 7, -17, -42, -42, -39, -30, -35, -29, //896
-21, -39, -46, -21, 13, 14, 6, 10, 10, 15, -17, -29, -11, 23, 38, 0, //912
-13, -23, -16, -14, -3, -1, -10, -2, -18, -37, -21, -4, 6, 5, 5, 4, //928
28, 38, 10, -5, -7, -46, -48, -45, -35, -27, -11, 4, -27, -33, -2, 27, //944
7, -17, 12, 20, 4, -15, -15, 1, 6, 10, 23, 33, 5, -17, -18, -7, //960
4, -1, 3, 22, 16, 23, 21, 36, 64, 44, 28, 1, 11, 63, 50, 14, //976
-20, 12, 24, 20, -8, -34, -20, -24, -17, -32, -31, -21, -12, 2, -16, -35, //992
-37, -7, 12, 0, 15, 45, 60, 53, 41, 9, -4, -24, -50, -53, -45, -29, //1008
-42, -37, -16, 9, 36, 27, -5, -23, -10, 9, 2, -27, -42, -36, 20, 64, //1024
19, 14, 16, 26, 11, -11, -30, -65, -48, -34, -29, -1, 0, -9, -11, 14, //1040
33, 54, 69, 46, 11, 3, -10, -24, -38, -57, -43, 9, 48, 39, 16, -19, //1056
-34, -19, -23, -60, -83, -46, 16, 6, 2, 8, 9, 6, -13, 0, 7, 20, //1072
40, 31, 19, -21, -27, -11, 15, 52, 40, 34, 15, 9, 30, 41, 16, -14, //1088
-31, -43, -39, -28, -2, 13, 2, -15, -14, 6, 5, -8, -21, -20, -32, -20, //1104
-27, -48, -34, -15, 3, 4, 11, -3, -17, 3, 32, 46, 31, 23, 28, 11, //1120
-7, -7, -5, 3, 16, 29, 33, 25, 21, 22, 15, -16, -27, -3, 6, -18, //1136
-17, 13, 4, -10, -4, 22, 28, -4, -32, -53, -50, -51, -36, -21, 0, -13, //1152
-30, 34, 67, 23, -15, -26, -15, -28, -63, -55, -27, -4, 5, 18, 41, 41, //1168
23, 9, -15, -12, 6, 10, 15, 15, 45, 65, 94, 95, 56, 34, -3, 0, //1184
1, -36, -61, -35, -48, -64, -59, -52, 6, 27, -10, -20, 11, 34, 6, -37, //1200
-22, -3, 6, 21, 35, 13, 15, 24, 1, -10, -36, -27, -14, -14, 13, 20, //1216
10, 18, -8, -15, -7, -2, 2, -48, -73, -43, -13, -33, -23, 14, 37, 24, //1232
4, -35, -51, -24, -8, -5, 19, 33, 15, 5, -3, -5, 0, 3, 19, 6, //1248
-20, -7, 45, 45, 18, 24, 38, 42, 66, 50, 46, 44, -1, -65, -40, 2, //1264
15, -1, -6, -6, -42, -53, -34, -56, -75, -1, 12, 4, -37, -65, -19, -11, //1280
33, 72, 58, 17, -50, -42, -24, -35, -58, -60, -73, -71, -35, 7, 61, 79, //1296
41, 16, 18, 54, 81, 79, 62, 12, -1, 33, 69, 59, 53, 91, 127, 103, //1312
21, -5, -19, -50, -103, -96, -75, -36, -7, -11, -3, 15, 38, 25, -20, -50, //1328
-59, -32, -28, -89, -112, -99, -91, -37, -40, -50, -36, -17, 18, 27, 26, 10, //1344
-16, -12, -5, -18, -7, 48, 113, 107, 49, 46, 21, 6, -8, -37, -26, -4, //1360
14, -1, -10, 15, 13, 6, 20, 15, -6, 4, 1, -8, -21, -2, 27, 18, //1376
25, 51, 53, 15, -10, -7, -40, -86, -68, -35, -61, -61, -50, -9, 34, 49, //1392
38, 46, 59, 34, 48, -7, -34, -12, 2, 18, -23, -39, -7, 49, 77, 32, //1408
-20, -33, 9, 15, -5, 20, 20, 59, 43, -4, -38, -96, -16, 37, 10, -15, //1424
-41, -40, -42, -63, -28, 4, 21, 71, 61, 53, 51, 36, -7, -70, -66, -53, //1440
-54, -37, -31, -51, -34, 1, 26, 39, 5, 13, 83, 125, 80, 22, -40, -59, //1456
11, 60, 50, -8, -44, -49, -49, -31, -20, -21, -6, -5, -21, -14, 1, 4, //1472
14, 22, 27, 19, 3, -9, -7, -30, -51, -31, -45, -51, -72, -52, 26, 94, //1488
66, 3, -13, 14, 58, 65, 7, -26, -19, 0, -3, -28, -18, -4, 47, 52, //1504
41, 27, 6, 45, 46, 13, -52, -50, -25, -23, -46, -54, -24, 6, 19, 12, //1520
4, 4, 38, 18, 9, 0, -19, 27, 22, -9, -27, 6, 23, -28, -62, -78, //1536
-63, -29, -26, -92, -96, -40, 20, 58, 22, 18, 43, 80, 86, 55, 18, -4, //1552
6, 17, -13, -48, -21, 36, 44, -15, -25, -7, 9, 26, -1, 15, 6, 4, //1568
6, -26, 7, 0, 24, 0, -14, -4, -24, 2, 5, 24, -3, -28, -38, -53, //1584
16, 26, -4, -45, -47, -36, 16, 52, 54, 52, 27, -4, -9, 4, 6, -12, //1600
-11, -8, -42, -42, -26, -33, 10, 32, 8, 11, 34, 63, 46, 37, 43, 19, //1616
12, -42, -43, -20, -11, -5, -8, 29, 60, 39, -10, -65, -63, -22, -27, -17, //1632
-45, -30, 5, 10, 12, -19, -20, 1, 30, 17, -22, -24, -27, -31, -10, 18, //1648
75, 80, 66, 27, -15, -15, 8, 25, 18, -14, -36, -67, -64, -43, -67, -57, //1664
-24, -27, -28, -28, 16, 41, 47, 46, 34, 40, 21, 34, 23, -5, -2, 2, //1680
18, -14, -31, -43, -49, -2, 12, 16, 23, 39, 66, 78, 44, 5, 16, 47, //1696
21, -43, -51, -50, -52, -37, -6, -7, -1, 25, 58, 69, -2, -42, -10, 2, //1712
-27, -62, -64, -53, -57, -40, -20, 5, 12, 31, 67, 106, 116, 27, -19, -26, //1728
-20, -6, -2, -22, -27, -54, -72, -47, -1, -26, -37, -30, -19, 5, 33, 42, //1744
35, 60, 69, 46, 69, 50, 24, -9, -49, -91, -94, -49, -5, -1, -52, -83, //1760
14, 75, 51, -18, -28, 23, 40, 56, 53, 29, -23, -39, -36, -28, 0, 12, //1776
-7, -31, -28, 2, 19, 26, 4, -4, 20, 57, 111, 55, -18, -45, -57, -38, //1792
-16, -51, -90, -55, -16, -5, 41, 32, 21, 0, -21, -11, 25, 57, 39, -30, //1808
-79, -92, -24, 15, 19, 18, 24, 5, -11, -26, -34, -10, 11, 45, 51, 40, //1824
38, 48, 54, 62, 15, -36, -29, -23, -57, -60, -33, 10, 33, 10, 1, 37, //1840
67, 86, 90, 54, -36, -50, -28, -17, -30, -39, -36, -22, -11, 18, 61, 74, //1856
29, 0, -9, -55, -70, -50, -35, -30, -57, -83, -80, -66, -59, -24, 6, 34, //1872
41, -5, -20, 4, 60, 103, 66, 24, -14, -50, -73, -72, -63, -53, -29, 14, //1888
14, -40, 7, 64, 76, 72, 73, 82, 61, 36, 47, 39, -8, -24, -34, -16, //1904
-22, -6, 53, 47, 20, -12, 22, 52, 44, 28, -15, -43, -43, -9, -7, -20, //1920
-46, -51, -7, 36, 1, -62, -72, -26, -29, -24, -12, -44, -70, -84, -67, -66, //1936
-32, 15, 11, 7, 4, 19, 43, 55, 34, 24, 32, 19, 27, 15, -27, -34, //1952
-7, 12, 1, 6, 12, -23, -24, -8, 12, 19, 14, -2, -11, -7, 33, 47, //1968
11, 28, 7, 5, 36, 55, 46, -11, -17, 20, 22, 34, 24, -3, -13, -9, //1984
28, 16, -28, -36, -23, -9, -15, -11, 3, 4, -21, -29, -9, -14, 10, 31, //2000
8, -34, -35, 7, 19, -18, -55, -54, -13, 15, 0, -34, -16, 5, 3, -7, //2016
-13, -27, -41, 11, 3, -3, -5, -21, -7, 41, 61, 53, 28, 12, 5, -7, //2032
-35, -52, -25, 7, -29, -33, -19, -11, -1, 13, 67, 87, 51, 18, 11, 22, //2048
23, 1, -26, -55, -40, 15, 13, -13, -32, -24, 14, 55, 66, 39, 7, -19, //2064
-6, 30, 28, 8, -8, -43, -53, -30, -26, -21, -17, 21, 11, -16, -11, 23, //2080
62, 53, 42, 16, -18, -30, -32, -57, -38, 11, 15, -27, -31, -39, -32, -9, //2096
-14, 11, 45, 39, 5, -36, -39, -8, 14, -17, -35, -42, -43, -11, 24, 3, //2112
-43, -53, -26, 23, 26, 7, 12, 32, 16, 52, 63, 45, 10, -19, 4, -13, //2128
-29, -23, 0, -3, -11, 36, 81, 95, 66, 32, 15, 2, 0, 14, 44, 25, //2144
0, -18, -35, -7, 27, 30, 2, -7, -10, -17, 6, -11, -22, -25, -25, -15, //2160
9, 5, -10, -31, -65, -66, -57, -41, -39, -42, -38, -28, 22, 33, 12, -24, //2176
-6, 29, 41, 20, -22, -58, -91, -67, -8, 36, 25, 20, 6, -11, -2, 29, //2192
69, 65, 36, -9, -36, -9, -5, -47, -6, 25, 4, -24, -13, 1, 19, 49, //2208
50, 57, 57, 24, 29, 24, 14, -6, -11, 7, -4, -24, -65, -71, -32, -1, //2224
-1, 1, 12, -13, -22, 16, 72, 75, 29, 7, 43, 45, 26, -4, -9, -9, //2240
-7, 30, 59, 37, -38, -64, -29, -9, -10, -17, 14, 35, -13, -56, -78, -64, //2256
-20, -15, -10, -17, -34, -18, 11, 8, -2, -11, -4, -1, -3, -22, -23, -22, //2272
-34, -21, -20, -3, -9, -7, 31, 10, 4, 10, 15, 36, 21, 19, -1, -41, //2288
3, 38, 44, 64, 53, 18, 0, 11, -15, -17, 6, 0, -17, -7, 19, -26, //2304
-28, 19, 36, 25, 8, 10, -6, -15, 17, 56, 32, 15, 4, -12, 6, -11, //2320
-24, -32, -22, -14, -43, -44, -38, -14, 19, 36, 16, -12, -44, -40, 0, 26, //2336
-1, -31, -42, -66, -78, -21, 25, 34, -2, -17, -10, 3, 11, 8, 6, -6, //2352
14, 11, -3, -15, -11, 23, 10, -31, -49, -20, 40, 66, 47, 18, 17, 43, //2368
26, -15, -10, -13, -5, 6, -23, -46, -44, -10, 27, 27, 14, -5, 19, 28, //2384
-2, 2, 13, -19, -22, -7, 2, -3, 16, 10, -23, -67, -75, -23, 41, 47, //2400
33, 20, 6, -45, -22, 21, 23, -1, -39, -43, -37, -36, -19, 7, 50, 43, //2416
5, 7, 47, 82, 48, 12, -4, -6, -17, -41, -48, -36, -34, -18, 1, -4, //2432
-22, -19, 18, 29, 29, 8, 18, 41, 36, 38, 32, 48, 39, 0, -21, -23, //2448
2, 37, 14, -6, -39, -54, 18, 20, -13, -44, -60, -52, -2, 9, 5, 2, //2464
-4, -10, -11, -23, -42, -22, 5, 5, -21, -14, -1, -11, -4, -13, -22, -36, //2480
-32, -12, -11, 14, 26, 28, 36, 8, -61, -60, -6, 32, 24, -1, -35, -24, //2496
-5, 40, 87, 32, -15, -25, -23, -4, -8, -30, -20, -1, 9, 13, 34, 19, //2512
-10, -25, -9, 15, 47, 60, 45, 20, -4, -24, 24, 53, 30, 3, -13, -30, //2528
-41, -29, -17, -8, -7, -4, 12, 26, 16, -9, -21, 11, 19, 23, 19, -10, //2544
-7, 0, 8, 7, -11, -23, -43, -25, -21, -7, 6, 16, 29, 9, 5, -16, //2560
-12, 16, -1, -10, -8, -9, -7, 15, 23, 25, 42, 63, 55, 3, -10, -12, //2576
-30, -18, 13, 0, -14, -19, 4, 9, -11, -27, -45, -40, -33, -13, -15, -31, //2592
-48, -63, -31, -2, -9, -14, -20, -13, -8, 53, 70, 38, 3, -5, 8, -6, //2608
12, 5, -30, -66, -72, 2, 3, -12, -18, -13, 27, 57, 46, 28, 45, 71, //2624
97, 78, 44, 29, 6, -37, -53, -30, 14, 33, 15, -24, -37, -20, -6, 16, //2640
20, -36, -67, -56, -2, 14, -27, -51, -55, -30, -10, -1, -3, 6, 17, -9, //2656
-10, -2, -33, 10, 70, 78, 22, -27, -27, -18, -7, -19, -8, 2, -18, -20, //2672
-22, 7, 27, -9, -46, -34, 23, 60, 65, 33, 6, 2, 16, 37, 8, -34, //2688
-43, -41, -18, -4, -19, -8, -1, -9, -14, 6, 9, -4, -25, -18, 19, 72, //2704
57, 21, -13, -61, -60, 53, 110, 65, -16, -15, -10, -14, -20, 10, 54, 44, //2720
0, -52, -49, -8, -5, -12, 14, 10, 1, 16, 27, 7, -10, -14, 0, 4, //2736
-24, -64, -43, 4, 21, 3, -32, -73, -61, -33, 10, 48, 29, 10, 5, 10, //2752
13, 21, 34, 13, 4, -7, -8, -7, -51, -33, -3, 38, 48, -9, -36, -53, //2768
-43, -36, -35, 1, -3, 5, 32, 52, 50, -11, -9, 7, 1, -22, -28, -15, //2784
-27, -50, -66, -55, 35, 56, 34, 2, -13, 1, 5, 9, -12, -19, 8, 46, //2800
49, 46, 44, 22, 13, 27, 8, 7, 16, 8, -10, -34, -52, -47, -18, -5, //2816
7, 24, 29, 39, 51, 56, 3, -18, -21, -34, -24, 4, 11, 0, -21, -35, //2832
-57, -19, 41, 49, 15, -7, -20, -37, -23, 1, 33, 35, 7, -6, 1, 22, //2848
32, 25, -14, -4, -6, -25, -48, -82, -90, -73, -29, -3, -2, 55, 57, 55, //2864
77, 68, 52, 28, 35, 38, -10, -31, -17, 6, -7, -33, -19, 4, 19, 11, //2880
-3, -18, -17, -2, 10, 8, -26, -39, -26, 0, -9, -49, -48, -22, 13, 34, //2896
11, -22, -26, -13, -13, -16, -3, 19, 32, 21, 12, 3, -40, -50, -20, 27, //2912
28, -4, -3, -15, -16, -25, -29, 5, 21, 19, 4, 3, 16, 2, -18, -1, //2928
9, -14, -13, -24, -23, -20, -22, 20, 45, 39, 18, 8, 6, -6, -5, 3, //2944
-7, -26, -35, -21, -3, -1, 5, 27, 33, 26, 28, 29, 20, 8, 17, 27, //2960
30, 19, -5, -18, -18, -27, -22, -4, -1, -5, -4, -2, 10, 32, 15, -2, //2976
12, 38, 48, 23, -24, -42, -30, -23, -39, -48, -42, -36, -33, -28, -22, -8, //2992
3, 8, 6, 5, 8, 10, 1, -17, -43, -47, -17, 21, 28, 8, -20, -17, //3008
26, 43, 36, 26, 25, 33, 46, 40, 13, -14, -23, -20, -1, 14, 12, 5, //3024
10, 18, 40, 50, 60, 62, 30, -26, -40, -29, -20, -9, 6, 12, -5, -17, //3040
-21, -32, -36, -24, -23, -32, -40, -46, -46, -20, 17, 31, 21, -11, -25, -28, //3056
-21, 3, 17, 0, -37, -34, 10, 23, -13, -37, -20, 12, 17, 14, 19, 13, //3072
22, 17, 15, 20, -10, 5, 21, 8, -4, -26, -29, -29, -27, -10, 7, 2, //3088
-11, -12, -3, 20, 31, -25, -47, -33, -14, 9, 29, 33, 19, 18, 34, 36, //3104
44, 36, 18, 8, -9, -38, -60, -43, -30, -29, -13, 9, 26, 34, 30, 21, //3120
28, 34, 19, 5, 3, 12, 15, 10, 21, 46, 63, 41, 9, -46, -58, -36, //3136
-25, -17, -39, -48, -43, -26, 17, 37, 20, 23, 17, 17, 23, 22, 24, 17, //3152
20, 4, -13, -28, -28, -16, -16, -20, -26, -59, -86, -85, -68, -55, -42, -22, //3168
-13, -11, -16, 3, 43, 55, 60, 40, 20, 20, 39, 55, 42, 11, -4, -16, //3184
-9, -6, -8, -12, -29, -55, -39, -14, 18, 42, 52, 75, 57, 54, 51, 26, //3200
10, 31, 52, 46, 9, -28, -53, -64, -52, -30, -6, 0, -37, -39, -16, 15, //3216
40, 29, -9, -33, -43, -14, 21, 39, 25, 7, -5, -9, -24, -50, -50, -44, //3232
-31, -15, -16, -30, -42, -45, -20, 8, 10, 3, 4, 9, 6, 6, 4, -11, //3248
-22, -17, 8, 13, -13, -27, -27, -31, -23, -10, -4, 7, -9, -19, -5, 11, //3264
35, 48, 50, 52, 40, 22, 19, 39, 37, 23, 27, 27, 27, 18, 7, 1, //3280
3, 9, 11, 12, 19, 15, -3, -22, -32, -26, -1, 21, 20, 22, 17, 18, //3296
11, -21, -27, -12, 3, -16, -43, -45, -59, -59, -54, -60, -31, -17, -11, -9, //3312
-11, 6, 24, 35, 37, 7, -2, 19, 23, 24, 8, 0, -7, 1, 4, -11, //3328
-2, 10, 11, 27, 48, 62, 50, 34, 14, -4, -16, -33, -30, -26, -25, 6, //3344
16, 9, -1, -6, 15, 33, 31, 1, -23, -32, -47, -61, -54, -36, -21, -22, //3360
-30, -44, -61, -58, -36, -1, 9, 12, 13, 17, 7, -2, -2, 4, 10, 10, //3376
11, 1, -4, -6, -2, 32, 27, 11, 3, 7, 14, -4, -7, 6, 11, -1, //3392
-5, 3, 5, 5, 1, 3, 17, 27, 51, 61, 46, 31, 18, 14, 11, -2, //3408
-13, -10, 2, -5, -28, -57, -69, -35, -20, -11, -12, -16, -11, -12, 5, 19, //3424
24, 40, 58, 56, 46, 37, 26, 10, -7, -17, -34, -32, -23, -29, -27, -23, //3440
-21, -12, -9, -7, 17, 20, 9, -2, -4, 14, 29, 40, 41, 23, -16, -27, //3456
-1, 23, 35, 19, 3, -21, -29, -19, -20, -30, -31, -29, -24, -12, -6, -11, //3472
-6, -11, -11, -3, 2, 15, 15, 15, 2, -16, -23, -21, -16, -14, -6, 1, //3488
6, -11, -30, -35, -25, -8, 16, 25, 20, 21, 17, 24, 20, 6, -14, -33, //3504
-33, -17, -14, -35, -45, -27, -5, -5, -7, -4, 2, 1, -4, 6, 18, 44, //3520
64, 63, 46, 11, 9, 2, -7, -2, 2, 11, 6, -10, -18, -17, -2, 6, //3536
25, 37, 32, 29, 24, 17, 10, 5, 0, -12, -9, -9, -16, -2, 10, 7, //3552
15, 20, 17, 5, -5, -10, -7, -3, -15, -34, -30, -16, -6, -3, -8, -12, //3568
-22, -42, -53, -33, 5, 27, 17, -5, -25, -27, -20, 10, 10, -11, -26, -46, //3584
-50, -26, -13, 4, 12, 14, 9, 8, 13, 7, 11, 24, 37, 31, 25, 14, //3600
-3, -5, 28, 50, 40, 25, 29, 43, 57, 47, 33, 17, 1, 1, -7, -22, //3616
-19, -9, -10, -40, -57, -42, -31, -37, -41, -45, -29, -4, 17, 18, -2, 6, //3632
8, 3, 5, 1, -25, -20, -17, -12, -9, -15, -13, -10, -6, -19, -34, -29, //3648
-16, -17, -21, -5, 17, 31, 16, 8, 19, 33, 45, 35, 16, 4, 1, 6, //3664
4, -3, -9, -7, 0, 1, -1, 6, 18, 32, 33, 5, 2, -11, -33, -30, //3680
-17, -3, 0, -2, -9, -10, 4, 2, -10, -31, -48, -47, -32, -14, 4, 20, //3696
22, 13, 7, 2, 17, 29, 20, 9, -1, 4, -1, -7, -14, -22, -29, -24, //3712
-9, -6, -8, -13, 4, 23, 37, 50, 56, 59, 53, 51, 46, 33, 24, 26, //3728
36, 41, 25, 7, -11, -14, -13, -10, -8, -14, -41, -41, -32, -17, 7, 6, //3744
-9, -20, -18, -21, -33, -31, -19, -19, -32, -26, -11, -35, -52, -52, -32, -11, //3760
-6, -15, -22, -21, -22, -20, -1, 15, 14, 1, 1, 2, 8, 12, 16, 23, //3776
14, -11, -17, -11, 7, 20, 31, 42, 30, 10, -1, 4, 8, -3, -14, -21, //3792
-19, -6, 17, 20, 27, 39, 46, 48, 36, 27, 18, 17, 23, 15, 0, -8, //3808
-16, -14, -16, -17, -21, -32, -17, 0, 2, -9, -21, -15, -12, -18, -40, -58, //3824
-58, -57, -55, -34, 4, -1, -13, -20, -3, 21, 10, -6, -2, 10, 10, 12, //3840
13, -6, -24, -25, -20, 13, 31, 45, 53, 60, 70, 61, 67, 67, 52, 39, //3856
33, 26, 23, 13, 2, -2, -17, -10, 0, -5, -21, -30, -23, -27, -29, -27, //3872
-26, -14, -14, -16, -25, -28, -16, 2, 4, -5, -11, -10, -16, -21, -7, -1, //3888
-10, -31, -49, -49, -48, -35, -22, -14, -10, -11, -9, -4, 4, 3, 1, 5, //3904
7, -12, -44, -55, -40, -27, -26, -28, -22, 13, 33, 44, 46, 38, 36, 43, //3920
50, 40, 20, 8, 6, 23, 45, 53, 43, 38, 43, 55, 53, 34, 22, 21, //3936
24, 13, 2, -11, -32, -36, -21, 6, 20, 18, 18, 6, 1, -2, -8, -20, //3952
-25, -25, -36, -40, -46, -45, -46, -39, -22, -2, 21, 28, 14, 2, -2, 3, //3968
9, -3, -15, -23, -20, -13, -7, -13, -27, -22, -11, 3, 18, 25, 16, -4, //3984
-9, -4, 10, 14, -1, -14, -14, -1, 18, 8, -2, -8, -5, 1, 8, 7, //4000
-5, -9, -3, 4, 0, -3, -1, 0, -4, -5, -3, -10, -4, 9, 13, -6, //4016
-28, -45, -53, -35, 6, 13, 11, 2, -9, -9, 16, 21, 17, 16, 17, 19, //4032
20, 15, 3, -8, -12, -4, -6, 5, 21, 24, 15, 5, 9, 14, 20, 22, //4048
23, 13, 18, 34, 38, 33, 27, 25, 20, 21, 14, -5, -18, -25, -29, -32, //4064
-35, -36, -46, -55, -54, -44, -35, -43, -42, -39, -30, -15, -16, -5, 7, 12, //4080
22, 32, 27, -1, -17, -26, -27, -30, -31, -26, -14, -4, -5, -7, -3, 3, //4096
9, 13, 20, 31, 34, 25, 15, 14, 16, 24, 31, 25, 17, 10, 3, 23, //4112
34, 36, 31, 24, 17, 21, 21, 18, 17, 13, 10, 5, 6, 9, 11, 17, //4128
22, 22, 8, -7, -9, -16, -21, -28, -26, -19, -15, -4, -6, -21, -41, -54, //4144
-57, -39, -24, -22, -33, -41, -31, -24, -21, -19, -18, -13, -11, -6, 1, 7, //4160
23, 26, 14, 12, 4, 3, 11, 3, 3, 11, 12, 12, 9, 1, -3, -3, //4176
1, 7, 14, 1, -7, -6, -3, -8, -12, -10, -9, -4, -1, -1, -2, -6, //4192
-3, 5, 11, 9, 9, 13, 15, 13, 10, 12, 10, 7, 1, -1, 3, 7, //4208
5, 4, 1, -5, -8, -8, -6, -6, -7, -7, -5, -3, -2, -3, -2, -1, //4224
-2, -2, 0, 1, 1, 0, };
