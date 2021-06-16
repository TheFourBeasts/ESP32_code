const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 3908;
const signed char samples[] = {//0
0, -1, -1, -2, -2, -2, -1, -1, 0, 1, 2, 2, 5, 7, 8, 9, //16
11, 14, 17, 19, 20, 23, 25, 31, 33, 35, 37, 38, 40, 42, 44, 46, //32
47, 48, 51, 52, 52, 52, 51, 51, 52, 51, 49, 46, 44, 42, 38, 35, //48
32, 31, 27, 23, 18, 15, 14, 11, 10, 9, 9, 8, 6, 5, 4, 5, //64
5, 6, 9, 10, 11, 12, 12, 12, 12, 14, 16, 18, 17, 17, 17, 17, //80
16, 15, 14, 13, 13, 11, 10, 8, 7, 6, 5, 5, 4, 3, 2, 2, //96
2, 3, 4, 5, 5, 5, 6, 7, 8, 7, 7, 8, 8, 7, 6, 6, //112
6, 6, 7, 6, 5, 4, 4, 3, 3, 3, 2, 0, -2, -5, -7, -9, //128
-10, -12, -14, -18, -21, -22, -24, -27, -30, -32, -35, -39, -42, -45, -50, -52, //144
-55, -58, -61, -66, -68, -70, -71, -73, -74, -74, -75, -76, -77, -78, -79, -77, //160
-76, -76, -75, -76, -76, -77, -76, -77, -78, -78, -77, -77, -78, -78, -79, -79, //176
-77, -76, -75, -75, -75, -74, -74, -74, -72, -69, -68, -65, -64, -63, -61, -59, //192
-55, -50, -46, -43, -41, -39, -35, -30, -27, -23, -19, -19, -15, -15, -11, -7, //208
-5, -2, 0, 1, 2, 3, 5, 7, 10, 11, 12, 14, 13, 18, 20, 22, //224
25, 25, 26, 29, 30, 31, 33, 33, 35, 37, 37, 37, 38, 39, 41, 42, //240
42, 42, 43, 44, 46, 46, 46, 46, 47, 46, 45, 42, 41, 40, 39, 39, //256
36, 34, 31, 29, 26, 23, 22, 21, 22, 20, 16, 13, 11, 12, 13, 13, //272
13, 14, 14, 13, 13, 14, 18, 22, 23, 24, 25, 29, 32, 34, 37, 39, //288
41, 43, 44, 46, 47, 50, 52, 53, 53, 51, 52, 53, 53, 54, 52, 51, //304
50, 47, 46, 45, 44, 44, 44, 42, 41, 39, 38, 38, 38, 37, 37, 37, //320
36, 36, 35, 35, 35, 35, 35, 36, 36, 38, 39, 41, 42, 42, 43, 41, //336
41, 39, 37, 37, 36, 36, 34, 31, 28, 25, 23, 21, 19, 18, 15, 12, //352
8, 5, 4, 1, 1, -3, -6, -10, -14, -16, -20, -23, -25, -28, -31, -35, //368
-39, -42, -43, -44, -46, -48, -52, -53, -53, -55, -54, -55, -55, -55, -56, -58, //384
-59, -60, -60, -59, -59, -60, -61, -62, -61, -62, -62, -62, -62, -62, -63, -63, //400
-64, -65, -64, -63, -62, -62, -62, -61, -61, -61, -60, -59, -57, -53, -52, -50, //416
-48, -46, -43, -38, -35, -33, -30, -28, -25, -21, -18, -15, -13, -10, -6, -4, //432
-1, 1, 2, 5, 9, 10, 11, 12, 14, 16, 18, 19, 21, 23, 23, 24, //448
25, 25, 25, 28, 30, 31, 32, 33, 33, 34, 35, 35, 36, 36, 36, 36, //464
36, 37, 38, 38, 40, 39, 39, 39, 39, 41, 41, 43, 43, 43, 44, 44, //480
45, 47, 47, 47, 47, 47, 46, 44, 42, 40, 38, 36, 33, 29, 25, 23, //496
20, 17, 11, 8, 5, 2, 0, -3, -5, -6, -7, -8, -8, -8, -9, -7, //512
-5, -4, -3, -1, 1, 2, 3, 5, 6, 9, 9, 9, 9, 9, 9, 8, //528
8, 8, 8, 7, 7, 7, 7, 6, 4, 4, 1, 1, 1, 0, -1, -1, //544
-1, -1, -2, -3, -4, -4, -5, -6, -7, -7, -7, -8, -10, -11, -12, -13, //560
-14, -15, -16, -17, -18, -20, -23, -25, -26, -28, -31, -34, -37, -38, -41, -43, //576
-45, -50, -52, -54, -56, -59, -61, -63, -65, -67, -69, -70, -72, -72, -74, -77, //592
-78, -78, -78, -77, -78, -77, -78, -77, -76, -74, -71, -70, -69, -69, -68, -64, //608
-63, -62, -61, -63, -63, -63, -64, -65, -65, -63, -64, -64, -68, -71, -72, -72, //624
-70, -70, -69, -69, -70, -67, -65, -61, -57, -53, -49, -46, -43, -42, -37, -29, //640
-23, -16, -15, -11, -9, -4, 1, 7, 14, 19, 24, 28, 31, 36, 40, 45, //656
53, 58, 62, 66, 69, 72, 77, 80, 85, 87, 89, 91, 92, 93, 93, 93, //672
93, 95, 97, 95, 94, 91, 88, 87, 86, 85, 82, 80, 78, 75, 74, 73, //688
72, 71, 70, 69, 67, 68, 69, 71, 76, 75, 75, 74, 73, 74, 73, 74, //704
73, 73, 72, 68, 65, 62, 62, 60, 57, 53, 48, 45, 42, 41, 40, 40, //720
38, 36, 34, 30, 28, 29, 29, 32, 31, 30, 29, 29, 30, 29, 29, 31, //736
33, 32, 30, 29, 27, 28, 28, 28, 27, 24, 23, 20, 19, 17, 16, 16, //752
16, 16, 14, 13, 13, 13, 15, 15, 15, 16, 16, 16, 15, 16, 16, 17, //768
17, 13, 11, 8, 7, 6, 5, 3, 1, -1, -2, -4, -7, -9, -11, -11, //784
-11, -13, -14, -14, -15, -15, -15, -16, -16, -16, -17, -18, -18, -18, -17, -16, //800
-17, -19, -22, -23, -24, -25, -26, -26, -28, -31, -33, -36, -38, -39, -41, -44, //816
-46, -51, -53, -54, -55, -55, -57, -58, -60, -61, -64, -63, -61, -60, -58, -58, //832
-59, -58, -57, -55, -53, -49, -49, -48, -46, -45, -43, -40, -37, -35, -35, -34, //848
-34, -35, -34, -33, -32, -31, -31, -31, -31, -31, -31, -30, -28, -29, -29, -30, //864
-30, -30, -29, -28, -29, -28, -28, -28, -28, -26, -24, -21, -18, -16, -15, -13, //880
-11, -8, -2, 1, 4, 5, 8, 13, 17, 20, 23, 27, 30, 32, 33, 34, //896
36, 36, 38, 40, 42, 42, 42, 42, 41, 41, 41, 42, 42, 42, 41, 40, //912
39, 39, 38, 38, 36, 36, 37, 36, 36, 35, 35, 33, 32, 31, 31, 31, //928
30, 31, 30, 30, 30, 27, 27, 26, 27, 26, 25, 24, 24, 23, 21, 20, //944
19, 17, 15, 13, 12, 10, 8, 6, 4, 3, 2, 0, -1, -3, -5, -7, //960
-7, -8, -6, -7, -9, -9, -11, -12, -13, -13, -14, -14, -15, -18, -18, -19, //976
-20, -21, -22, -22, -24, -24, -27, -29, -30, -30, -30, -31, -31, -32, -33, -34, //992
-35, -35, -37, -38, -39, -41, -42, -44, -46, -51, -55, -59, -62, -65, -68, -72, //1008
-77, -81, -86, -90, -92, -97, -98, -100, -102, -104, -106, -107, -107, -106, -105, -104, //1024
-102, -100, -98, -95, -93, -90, -88, -87, -84, -82, -80, -76, -74, -72, -71, -69, //1040
-68, -69, -67, -67, -67, -66, -66, -67, -67, -68, -71, -72, -72, -73, -72, -72, //1056
-73, -71, -69, -66, -62, -60, -57, -54, -50, -46, -40, -32, -27, -19, -16, -11, //1072
-5, 1, 11, 23, 29, 34, 37, 43, 51, 59, 66, 71, 76, 77, 79, 80, //1088
84, 86, 87, 91, 91, 91, 87, 83, 81, 78, 78, 78, 78, 77, 75, 69, //1104
65, 62, 59, 62, 64, 63, 60, 57, 57, 58, 61, 62, 62, 62, 60, 59, //1120
58, 59, 61, 61, 64, 64, 62, 61, 60, 60, 58, 58, 58, 57, 55, 54, //1136
52, 47, 46, 43, 41, 40, 38, 34, 30, 27, 22, 20, 18, 19, 19, 18, //1152
18, 14, 14, 14, 15, 18, 20, 23, 29, 33, 35, 38, 42, 47, 53, 57, //1168
61, 65, 69, 74, 75, 78, 80, 83, 87, 88, 89, 88, 89, 88, 86, 85, //1184
84, 83, 82, 82, 77, 75, 72, 71, 71, 66, 63, 61, 60, 56, 53, 49, //1200
48, 49, 48, 48, 46, 43, 41, 40, 38, 37, 36, 35, 34, 32, 29, 28, //1216
27, 25, 23, 20, 17, 15, 12, 10, 7, 4, 2, -1, -5, -8, -13, -18, //1232
-23, -31, -34, -39, -43, -48, -53, -62, -68, -73, -77, -81, -87, -92, -95, -98, //1248
-101, -101, -102, -102, -103, -103, -102, -101, -97, -93, -89, -87, -83, -77, -72, -68, //1264
-64, -59, -54, -47, -43, -39, -35, -31, -26, -20, -17, -14, -13, -11, -10, -9, //1280
-7, -6, -5, -4, -4, -5, -6, -5, -6, -8, -9, -11, -11, -12, -12, -11, //1296
-12, -11, -11, -10, -10, -8, -6, -5, -2, 1, 4, 8, 10, 12, 15, 17, //1312
21, 23, 25, 28, 30, 32, 34, 35, 37, 37, 39, 40, 41, 41, 39, 38, //1328
37, 36, 35, 32, 30, 29, 26, 23, 20, 18, 14, 11, 8, 5, 4, 2, //1344
-1, -2, -8, -10, -12, -14, -14, -15, -15, -16, -16, -17, -16, -16, -14, -11, //1360
-8, -4, -2, 1, 2, 3, 5, 6, 9, 12, 14, 15, 15, 15, 14, 15, //1376
15, 16, 16, 15, 12, 10, 9, 9, 8, 8, 4, 2, 1, -2, -4, -7, //1392
-9, -10, -11, -12, -13, -16, -17, -18, -19, -19, -21, -21, -21, -21, -20, -20, //1408
-20, -19, -17, -16, -15, -13, -12, -12, -11, -10, -10, -10, -9, -11, -12, -15, //1424
-18, -22, -25, -27, -31, -34, -39, -45, -48, -51, -54, -58, -60, -64, -67, -70, //1440
-72, -74, -78, -80, -82, -83, -83, -82, -82, -83, -83, -85, -83, -81, -78, -75, //1456
-73, -72, -72, -72, -71, -68, -64, -62, -62, -62, -63, -62, -62, -61, -61, -60, //1472
-61, -63, -64, -67, -67, -67, -69, -70, -74, -77, -79, -81, -80, -80, -80, -82, //1488
-84, -84, -85, -83, -82, -76, -74, -73, -71, -70, -65, -58, -52, -47, -43, -37, //1504
-35, -30, -26, -23, -16, -12, -5, -6, -5, -4, -3, 3, 9, 14, 16, 17, //1520
21, 24, 28, 31, 34, 38, 40, 44, 45, 47, 50, 53, 59, 61, 62, 63, //1536
64, 66, 69, 69, 72, 76, 76, 76, 76, 74, 76, 77, 77, 78, 78, 78, //1552
80, 79, 74, 74, 74, 77, 79, 77, 76, 73, 73, 75, 75, 75, 74, 76, //1568
72, 70, 66, 63, 68, 67, 67, 63, 58, 57, 54, 54, 51, 52, 53, 50, //1584
47, 42, 43, 46, 48, 51, 49, 49, 51, 52, 55, 58, 59, 60, 62, 63, //1600
60, 61, 61, 63, 66, 63, 61, 59, 58, 60, 58, 56, 54, 52, 50, 48, //1616
47, 47, 49, 47, 46, 45, 41, 40, 39, 38, 37, 35, 33, 33, 31, 30, //1632
29, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 17, 15, 13, 11, //1648
8, 7, 5, 4, 4, 3, 2, 0, -3, -6, -8, -10, -12, -13, -18, -23, //1664
-26, -30, -32, -36, -42, -45, -49, -53, -56, -60, -65, -67, -69, -71, -74, -75, //1680
-76, -77, -78, -78, -78, -77, -77, -76, -74, -73, -73, -71, -69, -65, -64, -61, //1696
-58, -56, -53, -50, -48, -45, -43, -41, -40, -38, -38, -38, -36, -35, -33, -33, //1712
-34, -34, -36, -35, -35, -34, -32, -31, -29, -26, -26, -26, -23, -19, -16, -13, //1728
-12, -10, -7, -3, 0, 2, 4, 6, 9, 9, 9, 10, 10, 11, 14, 16, //1744
17, 17, 18, 17, 18, 19, 20, 22, 24, 26, 26, 27, 29, 31, 35, 39, //1760
41, 44, 44, 46, 48, 50, 50, 50, 50, 51, 50, 50, 50, 48, 48, 47, //1776
43, 41, 38, 36, 34, 30, 28, 27, 26, 25, 24, 22, 21, 20, 20, 20, //1792
20, 19, 19, 19, 18, 19, 18, 19, 22, 21, 20, 19, 18, 19, 20, 19, //1808
18, 21, 22, 23, 22, 20, 21, 20, 21, 21, 20, 21, 20, 19, 19, 19, //1824
18, 16, 16, 16, 16, 15, 15, 15, 14, 14, 15, 16, 16, 16, 15, 14, //1840
14, 13, 12, 10, 9, 8, 6, 5, 2, -2, -5, -7, -8, -11, -14, -19, //1856
-22, -23, -26, -28, -30, -35, -36, -37, -39, -39, -42, -43, -44, -46, -47, -49, //1872
-53, -55, -60, -62, -65, -71, -77, -82, -86, -91, -95, -102, -107, -112, -115, -117, //1888
-120, -122, -125, -126, -127, -127, -125, -122, -121, -120, -118, -117, -116, -115, -114, -110, //1904
-109, -106, -106, -106, -103, -104, -100, -97, -96, -94, -94, -92, -94, -90, -89, -85, //1920
-81, -81, -79, -81, -78, -75, -72, -66, -65, -66, -67, -68, -68, -69, -69, -68, //1936
-65, -64, -62, -60, -60, -59, -58, -52, -49, -37, -31, -26, -21, -21, -15, -6, //1952
7, 19, 25, 34, 33, 39, 45, 53, 66, 71, 81, 79, 80, 83, 84, 93, //1968
99, 103, 102, 97, 97, 95, 97, 99, 98, 98, 95, 91, 90, 89, 88, 87, //1984
85, 84, 82, 80, 79, 77, 75, 74, 73, 75, 72, 70, 68, 67, 67, 66, //2000
68, 68, 67, 64, 59, 59, 60, 59, 62, 57, 54, 51, 49, 54, 54, 56, //2016
56, 54, 53, 51, 52, 53, 55, 57, 54, 50, 44, 43, 44, 44, 47, 44, //2032
43, 38, 34, 32, 31, 34, 34, 36, 37, 35, 35, 34, 38, 40, 45, 51, //2048
51, 53, 50, 52, 55, 59, 64, 63, 64, 65, 66, 67, 67, 67, 67, 67, //2064
69, 69, 67, 65, 63, 61, 59, 56, 55, 53, 50, 47, 45, 43, 41, 40, //2080
39, 36, 34, 31, 29, 24, 22, 20, 17, 15, 13, 11, 7, 4, 2, -1, //2096
-4, -7, -10, -10, -11, -14, -15, -18, -20, -21, -21, -20, -22, -24, -27, -29, //2112
-30, -32, -32, -33, -32, -33, -35, -37, -41, -45, -47, -47, -48, -50, -53, -58, //2128
-61, -64, -66, -66, -68, -70, -71, -72, -75, -76, -76, -76, -73, -73, -70, -70, //2144
-70, -67, -66, -62, -58, -56, -53, -50, -46, -42, -39, -35, -32, -29, -28, -25, //2160
-23, -21, -20, -18, -14, -12, -10, -9, -8, -6, -4, -4, -1, 2, 2, 0, //2176
3, 5, 6, 7, 7, 7, 6, 5, 4, 4, 7, 6, 6, 6, 8, 9, //2192
9, 13, 14, 16, 17, 17, 19, 21, 26, 28, 31, 35, 37, 41, 43, 44, //2208
45, 47, 49, 51, 52, 53, 53, 53, 52, 51, 50, 48, 46, 44, 40, 36, //2224
34, 32, 29, 27, 21, 19, 17, 16, 16, 15, 15, 13, 11, 11, 11, 12, //2240
13, 15, 16, 17, 16, 12, 14, 14, 17, 19, 19, 20, 19, 19, 19, 20, //2256
19, 19, 18, 17, 17, 13, 10, 9, 8, 9, 7, 4, -1, -5, -6, -8, //2272
-10, -11, -14, -15, -15, -16, -16, -18, -19, -19, -20, -21, -21, -24, -24, -22, //2288
-22, -24, -25, -27, -25, -24, -26, -26, -29, -30, -29, -30, -32, -32, -33, -33, //2304
-32, -36, -38, -41, -42, -42, -45, -48, -51, -57, -58, -61, -65, -69, -73, -78, //2320
-82, -87, -93, -96, -100, -101, -103, -107, -110, -112, -115, -115, -118, -120, -120, -119, //2336
-118, -116, -114, -112, -111, -110, -107, -104, -102, -99, -96, -92, -89, -89, -88, -86, //2352
-83, -80, -78, -76, -75, -76, -77, -76, -76, -76, -76, -77, -77, -78, -80, -80, //2368
-81, -79, -79, -79, -79, -80, -80, -79, -77, -76, -76, -73, -72, -68, -67, -64, //2384
-60, -58, -51, -47, -41, -35, -29, -24, -18, -13, -8, -2, 3, 8, 17, 21, //2400
27, 32, 37, 45, 48, 51, 53, 56, 58, 61, 65, 66, 66, 66, 65, 67, //2416
67, 67, 66, 66, 65, 64, 65, 64, 65, 67, 67, 67, 67, 67, 68, 70, //2432
74, 76, 78, 80, 81, 83, 85, 86, 88, 91, 92, 93, 92, 92, 92, 93, //2448
95, 97, 97, 96, 92, 89, 90, 88, 87, 85, 83, 82, 81, 80, 79, 78, //2464
76, 74, 72, 70, 68, 65, 64, 63, 61, 60, 58, 56, 55, 53, 51, 49, //2480
48, 47, 44, 45, 46, 47, 48, 50, 54, 58, 60, 62, 65, 68, 72, 74, //2496
76, 78, 77, 79, 79, 79, 78, 76, 75, 69, 65, 61, 58, 57, 55, 48, //2512
44, 38, 34, 31, 24, 20, 17, 15, 14, 13, 9, 7, 7, 6, 6, 6, //2528
6, 6, 5, 5, 5, 3, 4, 4, 3, 2, -1, -5, -5, -6, -8, -11, //2544
-16, -21, -23, -26, -29, -32, -35, -38, -41, -43, -46, -47, -50, -50, -51, -54, //2560
-56, -58, -60, -61, -62, -64, -64, -65, -66, -66, -68, -70, -71, -72, -73, -76, //2576
-77, -78, -79, -78, -78, -76, -74, -72, -72, -72, -69, -67, -62, -58, -54, -50, //2592
-47, -42, -39, -35, -30, -28, -26, -26, -25, -26, -25, -25, -25, -26, -27, -27, //2608
-27, -27, -28, -29, -27, -27, -25, -24, -22, -19, -15, -12, -10, -7, -4, -1, //2624
5, 8, 11, 16, 19, 21, 26, 28, 31, 33, 36, 38, 41, 42, 42, 44, //2640
42, 44, 47, 48, 50, 48, 48, 47, 46, 45, 45, 45, 45, 45, 42, 40, //2656
38, 35, 35, 34, 34, 33, 31, 26, 22, 21, 19, 19, 18, 15, 12, 9, //2672
7, 4, 3, 2, 2, 2, 2, 2, 2, 3, 5, 7, 10, 12, 14, 15, //2688
16, 19, 19, 22, 23, 23, 25, 25, 25, 26, 25, 25, 23, 22, 22, 21, //2704
21, 19, 16, 14, 12, 10, 8, 6, 5, 3, 1, -1, -3, -5, -5, -4, //2720
-5, -6, -8, -9, -9, -9, -8, -9, -10, -10, -10, -11, -10, -11, -12, -13, //2736
-15, -15, -16, -16, -17, -19, -21, -24, -26, -27, -27, -28, -30, -32, -35, -37, //2752
-39, -41, -44, -45, -46, -48, -50, -52, -56, -57, -60, -62, -63, -65, -66, -67, //2768
-70, -72, -72, -72, -72, -72, -72, -73, -73, -73, -71, -69, -68, -66, -64, -64, //2784
-63, -62, -59, -56, -52, -49, -49, -48, -47, -45, -42, -41, -39, -39, -39, -39, //2800
-40, -40, -41, -39, -39, -39, -39, -42, -43, -43, -42, -42, -41, -40, -39, -37, //2816
-34, -32, -29, -27, -25, -22, -18, -14, -12, -9, -6, 0, 3, 5, 6, 8, //2832
10, 13, 15, 16, 16, 16, 18, 19, 20, 19, 19, 19, 19, 19, 20, 19, //2848
18, 19, 20, 21, 22, 23, 23, 23, 24, 24, 24, 24, 24, 24, 25, 25, //2864
25, 24, 22, 21, 20, 20, 20, 19, 19, 17, 17, 19, 19, 19, 21, 21, //2880
22, 25, 25, 26, 27, 28, 30, 32, 33, 35, 37, 38, 39, 39, 39, 42, //2896
41, 39, 39, 38, 37, 39, 36, 35, 37, 38, 38, 36, 35, 34, 34, 34, //2912
36, 38, 40, 39, 38, 40, 43, 44, 45, 45, 45, 46, 45, 45, 45, 46, //2928
48, 47, 47, 46, 45, 44, 41, 41, 40, 40, 39, 37, 35, 33, 33, 33, //2944
31, 30, 28, 27, 25, 24, 23, 22, 22, 20, 20, 19, 17, 16, 14, 15, //2960
15, 12, 11, 11, 9, 8, 7, 5, 3, 1, -2, -4, -6, -8, -10, -13, //2976
-16, -17, -19, -21, -26, -27, -28, -30, -32, -34, -36, -36, -37, -39, -39, -40, //2992
-41, -44, -44, -45, -47, -48, -50, -51, -52, -54, -55, -57, -59, -59, -60, -61, //3008
-63, -63, -63, -63, -61, -60, -60, -59, -59, -58, -56, -55, -52, -51, -51, -50, //3024
-49, -49, -48, -47, -47, -45, -44, -42, -41, -39, -37, -36, -33, -29, -27, -25, //3040
-21, -18, -13, -10, -8, -6, -5, -3, -1, 1, 3, 4, 4, 3, 2, 1, //3056
1, 2, 2, 2, 3, 3, 3, 6, 6, 9, 11, 13, 18, 20, 23, 27, //3072
28, 31, 34, 39, 45, 48, 50, 52, 53, 54, 56, 57, 59, 60, 61, 60, //3088
59, 58, 56, 56, 55, 54, 53, 49, 47, 46, 43, 40, 38, 36, 34, 33, //3104
29, 26, 23, 21, 17, 14, 11, 8, 6, 4, 2, -1, -4, -4, -5, -5, //3120
-5, -5, -5, -3, -2, 0, 2, 6, 8, 10, 12, 13, 14, 15, 17, 18, //3136
18, 18, 18, 18, 17, 16, 16, 16, 14, 12, 10, 7, 6, 4, 0, -3, //3152
-4, -5, -9, -12, -15, -17, -18, -19, -21, -21, -21, -21, -21, -20, -19, -19, //3168
-18, -18, -17, -16, -12, -9, -7, -5, -4, -3, 0, 1, 3, 4, 2, 2, //3184
-1, -1, -2, -4, -7, -12, -16, -22, -26, -30, -35, -42, -48, -54, -58, -63, //3200
-67, -72, -76, -79, -82, -84, -87, -88, -89, -90, -89, -87, -85, -82, -79, -76, //3216
-74, -71, -67, -63, -60, -56, -53, -49, -47, -45, -43, -40, -38, -36, -35, -34, //3232
-33, -33, -33, -34, -33, -32, -32, -32, -33, -34, -35, -35, -35, -35, -31, -30, //3248
-28, -26, -25, -23, -21, -18, -16, -13, -10, -7, -4, -1, 2, 5, 9, 18, //3264
24, 30, 33, 38, 45, 50, 57, 62, 68, 72, 77, 80, 82, 85, 88, 92, //3280
94, 95, 94, 91, 90, 88, 88, 87, 85, 83, 80, 75, 71, 68, 66, 64, //3296
63, 60, 58, 58, 57, 57, 56, 55, 54, 53, 52, 51, 52, 54, 55, 57, //3312
57, 58, 58, 60, 61, 60, 59, 60, 59, 58, 56, 54, 52, 52, 49, 46, //3328
42, 37, 35, 31, 30, 28, 25, 22, 17, 15, 12, 12, 13, 12, 11, 8, //3344
7, 8, 8, 11, 12, 12, 11, 10, 9, 7, 8, 8, 10, 11, 10, 9, //3360
8, 8, 9, 9, 11, 11, 12, 11, 10, 9, 10, 11, 11, 13, 12, 10, //3376
8, 7, 7, 7, 6, 5, 3, 2, 1, -1, -3, -4, -4, -6, -8, -10, //3392
-13, -12, -14, -14, -15, -18, -21, -22, -22, -22, -20, -20, -18, -18, -19, -18, //3408
-19, -18, -17, -15, -14, -12, -10, -10, -10, -13, -12, -12, -13, -14, -17, -20, //3424
-24, -26, -29, -33, -33, -36, -39, -42, -47, -49, -50, -51, -52, -53, -55, -56, //3440
-57, -59, -59, -59, -58, -57, -57, -58, -58, -60, -60, -60, -60, -60, -62, -63, //3456
-64, -64, -63, -62, -60, -57, -57, -57, -56, -55, -52, -49, -46, -43, -41, -39, //3472
-35, -33, -30, -27, -26, -24, -22, -21, -20, -19, -18, -16, -15, -16, -17, -17, //3488
-19, -19, -19, -18, -18, -18, -16, -14, -12, -9, -8, -6, -2, -1, 1, 3, //3504
4, 7, 12, 16, 19, 21, 23, 24, 27, 28, 31, 34, 38, 43, 45, 46, //3520
46, 48, 49, 52, 53, 53, 53, 52, 51, 51, 50, 50, 48, 47, 45, 42, //3536
41, 39, 38, 37, 35, 33, 31, 29, 28, 27, 27, 26, 26, 25, 23, 22, //3552
22, 22, 21, 20, 19, 18, 17, 16, 14, 14, 13, 13, 11, 10, 9, 7, //3568
7, 6, 6, 5, 4, 3, 1, 0, -1, -1, -4, -7, -10, -12, -14, -17, //3584
-19, -22, -23, -24, -26, -28, -31, -34, -36, -36, -36, -37, -38, -40, -41, -43, //3600
-43, -43, -42, -42, -41, -41, -41, -41, -40, -40, -40, -40, -40, -42, -43, -45, //3616
-48, -50, -52, -56, -58, -62, -65, -68, -72, -76, -81, -84, -86, -89, -90, -92, //3632
-94, -95, -95, -95, -95, -94, -92, -90, -88, -85, -80, -77, -74, -70, -68, -64, //3648
-62, -60, -57, -55, -54, -54, -54, -56, -58, -59, -60, -61, -62, -64, -65, -68, //3664
-69, -70, -71, -71, -70, -68, -68, -66, -66, -64, -59, -53, -47, -43, -40, -36, //3680
-33, -23, -18, -9, -1, 3, 11, 15, 21, 26, 32, 40, 49, 56, 58, 62, //3696
65, 68, 77, 82, 88, 91, 93, 94, 94, 95, 96, 101, 103, 107, 106, 103, //3712
101, 96, 97, 98, 100, 101, 96, 95, 89, 82, 82, 81, 85, 83, 79, 74, //3728
69, 69, 66, 70, 74, 75, 76, 73, 74, 74, 80, 84, 84, 87, 84, 81, //3744
80, 78, 77, 75, 74, 70, 67, 61, 56, 54, 50, 46, 42, 37, 34, 31, //3760
27, 25, 23, 22, 21, 21, 17, 17, 17, 18, 21, 22, 23, 22, 23, 25, //3776
26, 34, 37, 44, 47, 48, 51, 54, 58, 62, 66, 70, 72, 75, 74, 76, //3792
76, 78, 84, 84, 84, 80, 77, 75, 74, 76, 75, 78, 75, 71, 65, 61, //3808
62, 61, 63, 62, 58, 56, 50, 48, 48, 49, 50, 49, 49, 47, 45, 44, //3824
44, 46, 45, 45, 42, 40, 37, 33, 32, 30, 28, 25, 21, 17, 12, 5, //3840
0, -2, -7, -11, -16, -24, -29, -35, -39, -45, -50, -59, -66, -71, -77, -81, //3856
-89, -92, -96, -99, -101, -103, -106, -108, -109, -109, -109, -107, -102, -100, -97, -94, //3872
-91, -86, -81, -76, -73, -69, -68, -64, -61, -57, -52, -48, -44, -41, -37, -36, //3888
-34, -31, -28, -25, -23, -21, -19, -18, -15, -13, -11, -10, -9, -8, -6, -4, //3904
-3, -2, -2, 0, };
