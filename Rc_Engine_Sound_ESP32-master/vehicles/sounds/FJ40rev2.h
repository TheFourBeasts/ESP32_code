const unsigned int revSampleRate = 22050;
const unsigned int revSampleCount = 3906;
const signed char revSamples[] = {//0
0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 2, //16
2, 2, 4, 5, 5, 6, 8, 11, 12, 14, 17, 19, 21, 24, 26, 27, //32
28, 31, 34, 36, 37, 39, 44, 48, 50, 53, 57, 60, 63, 65, 68, 68, //48
69, 69, 69, 68, 70, 71, 72, 74, 75, 76, 78, 79, 79, 79, 79, 79, //64
80, 82, 83, 83, 86, 88, 89, 91, 92, 91, 90, 90, 89, 86, 83, 82, //80
83, 83, 84, 84, 85, 89, 91, 91, 89, 87, 86, 86, 85, 82, 81, 81, //96
79, 77, 77, 77, 74, 72, 71, 70, 69, 69, 69, 68, 68, 67, 68, 68, //112
65, 63, 61, 59, 57, 55, 54, 53, 52, 51, 50, 50, 48, 46, 46, 47, //128
48, 48, 49, 50, 51, 52, 51, 52, 51, 50, 51, 51, 52, 53, 53, 54, //144
56, 57, 57, 59, 62, 62, 62, 66, 69, 70, 71, 73, 74, 74, 74, 75, //160
75, 75, 75, 76, 77, 77, 77, 79, 81, 82, 82, 83, 84, 84, 83, 84, //176
83, 83, 83, 80, 78, 78, 77, 74, 72, 72, 70, 69, 68, 68, 68, 66, //192
65, 64, 61, 58, 56, 56, 54, 53, 53, 52, 51, 50, 49, 49, 48, 48, //208
47, 46, 47, 49, 49, 49, 50, 52, 53, 53, 54, 55, 56, 58, 61, 64, //224
65, 67, 71, 74, 76, 78, 80, 83, 85, 88, 93, 96, 97, 100, 105, 107, //240
108, 110, 111, 112, 113, 114, 115, 116, 117, 119, 120, 120, 119, 120, 121, 121, //256
122, 122, 122, 123, 124, 125, 125, 126, 126, 126, 126, 127, 125, 123, 121, 121, //272
120, 117, 116, 116, 115, 111, 110, 110, 107, 104, 102, 102, 99, 95, 93, 92, //288
89, 82, 81, 80, 76, 71, 70, 69, 65, 60, 60, 59, 52, 49, 48, 45, //304
41, 37, 34, 32, 30, 28, 27, 26, 24, 23, 21, 19, 14, 10, 10, 6, //320
1, -2, -2, -3, -4, -5, -6, -7, -9, -10, -11, -13, -15, -17, -18, -18, //336
-20, -20, -20, -22, -25, -25, -27, -30, -32, -35, -36, -38, -39, -40, -41, -43, //352
-44, -45, -46, -48, -49, -50, -51, -52, -53, -53, -55, -56, -57, -57, -58, -60, //368
-63, -64, -64, -64, -64, -64, -63, -62, -61, -61, -61, -61, -61, -61, -62, -62, //384
-62, -62, -63, -63, -63, -63, -65, -68, -69, -69, -70, -71, -71, -71, -72, -72, //400
-72, -73, -74, -75, -76, -76, -76, -76, -76, -76, -77, -78, -79, -80, -82, -84, //416
-85, -85, -83, -83, -84, -81, -77, -75, -75, -74, -71, -71, -71, -71, -69, -68, //432
-68, -66, -63, -62, -62, -59, -55, -54, -53, -49, -45, -45, -44, -42, -41, -40, //448
-39, -39, -38, -38, -38, -36, -35, -35, -34, -31, -31, -30, -29, -30, -30, -29, //464
-30, -32, -33, -32, -32, -32, -31, -31, -31, -30, -30, -30, -31, -31, -31, -31, //480
-31, -31, -31, -32, -32, -32, -32, -34, -34, -34, -35, -35, -36, -37, -37, -38, //496
-40, -43, -43, -44, -45, -46, -47, -47, -44, -44, -44, -44, -44, -44, -43, -44, //512
-47, -48, -48, -51, -54, -56, -56, -57, -57, -58, -58, -55, -53, -52, -51, -51, //528
-50, -49, -49, -50, -52, -52, -53, -53, -54, -54, -55, -54, -53, -52, -53, -52, //544
-51, -50, -49, -48, -49, -47, -47, -46, -47, -48, -46, -44, -44, -44, -42, -41, //560
-39, -38, -38, -38, -36, -36, -35, -33, -32, -31, -30, -28, -26, -24, -23, -22, //576
-21, -20, -20, -22, -22, -21, -20, -19, -19, -18, -15, -13, -11, -11, -11, -12, //592
-13, -12, -12, -13, -14, -13, -13, -12, -10, -11, -12, -10, -10, -9, -10, -11, //608
-9, -9, -9, -9, -10, -10, -11, -11, -12, -12, -10, -10, -9, -9, -8, -7, //624
-6, -7, -7, -7, -6, -5, -4, -5, -5, -2, 3, 3, 4, 6, 9, 10, //640
11, 13, 15, 16, 17, 23, 25, 26, 27, 30, 34, 35, 37, 42, 44, 45, //656
48, 50, 52, 53, 54, 55, 58, 58, 58, 60, 60, 61, 64, 67, 68, 68, //672
71, 74, 76, 77, 77, 77, 77, 78, 78, 77, 77, 77, 77, 76, 76, 76, //688
76, 75, 75, 75, 75, 75, 75, 75, 73, 71, 71, 71, 70, 69, 69, 69, //704
68, 66, 67, 66, 63, 62, 62, 61, 58, 58, 58, 57, 55, 55, 54, 53, //720
52, 51, 52, 50, 48, 48, 49, 46, 43, 42, 40, 37, 35, 34, 33, 30, //736
28, 27, 26, 25, 23, 23, 22, 20, 18, 18, 17, 13, 11, 9, 9, 9, //752
9, 8, 9, 11, 12, 11, 11, 11, 11, 11, 10, 11, 11, 11, 11, 11, //768
11, 11, 12, 13, 13, 13, 14, 15, 15, 15, 15, 14, 13, 13, 13, 11, //784
11, 11, 10, 10, 11, 11, 9, 7, 7, 6, 4, 3, 3, 2, 2, 1, //800
1, 0, -1, -1, -1, -3, -6, -7, -8, -10, -13, -14, -15, -16, -16, -17, //816
-19, -19, -18, -19, -21, -22, -22, -24, -24, -24, -26, -26, -27, -26, -26, -26, //832
-27, -26, -25, -25, -25, -25, -24, -24, -24, -24, -24, -25, -25, -24, -24, -24, //848
-24, -22, -21, -22, -21, -22, -23, -23, -23, -25, -25, -25, -24, -23, -23, -23, //864
-22, -20, -19, -19, -18, -19, -19, -19, -20, -22, -22, -21, -23, -24, -25, -24, //880
-22, -21, -22, -21, -18, -17, -16, -17, -16, -15, -16, -15, -16, -17, -16, -16, //896
-14, -12, -13, -10, -6, -5, -5, -4, -2, 0, 1, 3, 5, 6, 6, 8, //912
10, 11, 11, 12, 14, 14, 15, 16, 17, 18, 19, 19, 20, 21, 22, 22, //928
22, 22, 24, 23, 22, 24, 23, 22, 21, 21, 20, 17, 15, 16, 15, 14, //944
13, 13, 14, 15, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, //960
14, 14, 14, 14, 14, 14, 14, 15, 16, 15, 16, 15, 15, 16, 17, 16, //976
17, 16, 17, 16, 15, 15, 14, 13, 12, 12, 10, 10, 9, 9, 9, 8, //992
8, 8, 8, 8, 8, 7, 4, 4, 4, 0, -3, -5, -5, -6, -9, -10, //1008
-11, -11, -12, -12, -13, -14, -14, -15, -15, -17, -19, -19, -20, -21, -22, -23, //1024
-23, -22, -22, -23, -24, -22, -22, -23, -23, -22, -21, -23, -22, -20, -19, -19, //1040
-18, -16, -14, -15, -13, -11, -11, -11, -11, -11, -11, -10, -11, -11, -11, -11, //1056
-11, -11, -11, -11, -11, -9, -9, -9, -9, -10, -10, -11, -11, -12, -13, -12, //1072
-12, -12, -12, -11, -11, -10, -10, -10, -9, -9, -8, -8, -9, -9, -8, -8, //1088
-8, -8, -8, -8, -7, -7, -7, -7, -6, -4, -4, -4, -3, -3, -3, -4, //1104
-5, -5, -5, -5, -5, -5, -5, -5, -4, -4, -4, -4, -3, -3, -3, -3, //1120
-4, -4, -4, -4, -5, -5, -5, -6, -6, -6, -6, -7, -8, -7, -7, -8, //1136
-9, -9, -10, -11, -12, -13, -14, -16, -17, -16, -17, -19, -20, -19, -21, -23, //1152
-24, -25, -28, -30, -30, -30, -32, -34, -35, -36, -38, -41, -42, -43, -46, -47, //1168
-48, -49, -51, -55, -56, -56, -59, -61, -63, -64, -66, -68, -68, -69, -72, -72, //1184
-72, -74, -75, -76, -77, -79, -80, -81, -82, -84, -84, -85, -85, -86, -87, -88, //1200
-89, -90, -90, -92, -92, -93, -93, -93, -95, -95, -97, -97, -96, -96, -98, -98, //1216
-97, -97, -96, -96, -97, -96, -95, -95, -94, -92, -92, -92, -90, -88, -86, -86, //1232
-85, -80, -79, -78, -77, -75, -74, -72, -71, -70, -69, -69, -67, -65, -64, -64, //1248
-65, -64, -64, -64, -65, -66, -66, -67, -66, -66, -66, -66, -66, -66, -66, -67, //1264
-68, -71, -72, -73, -75, -75, -75, -75, -75, -74, -74, -74, -72, -72, -72, -71, //1280
-69, -68, -67, -66, -62, -61, -60, -58, -53, -50, -51, -46, -40, -36, -35, -28, //1296
-21, -19, -17, -12, -6, -3, -1, 6, 13, 16, 17, 28, 36, 40, 42, 48, //1312
58, 60, 63, 69, 72, 74, 78, 82, 85, 87, 89, 92, 94, 96, 98, 99, //1328
100, 102, 103, 105, 106, 107, 108, 109, 110, 111, 111, 109, 110, 110, 109, 106, //1344
105, 105, 103, 100, 99, 98, 97, 95, 93, 92, 89, 87, 86, 84, 82, 80, //1360
79, 78, 77, 76, 75, 75, 75, 75, 76, 76, 77, 77, 77, 78, 79, 80, //1376
79, 80, 82, 83, 83, 84, 86, 87, 87, 89, 92, 93, 94, 95, 98, 100, //1392
100, 101, 101, 102, 102, 102, 103, 104, 105, 106, 107, 107, 108, 107, 105, 105, //1408
105, 104, 103, 103, 104, 105, 105, 105, 105, 103, 101, 101, 100, 97, 95, 95, //1424
96, 95, 95, 95, 94, 93, 93, 92, 91, 89, 87, 87, 86, 85, 84, 83, //1440
83, 82, 82, 81, 79, 77, 75, 74, 73, 73, 73, 72, 72, 73, 73, 72, //1456
71, 69, 69, 68, 67, 66, 65, 65, 65, 65, 65, 63, 62, 61, 60, 59, //1472
58, 57, 56, 56, 56, 56, 56, 56, 58, 57, 57, 58, 57, 57, 57, 55, //1488
52, 51, 52, 50, 47, 46, 46, 45, 45, 44, 44, 43, 43, 41, 41, 41, //1504
39, 39, 39, 38, 36, 36, 35, 32, 31, 30, 29, 27, 25, 24, 24, 24, //1520
24, 25, 26, 26, 26, 27, 26, 26, 26, 25, 25, 27, 28, 29, 30, 31, //1536
34, 34, 32, 29, 29, 28, 27, 27, 25, 25, 29, 33, 35, 36, 40, 42, //1552
43, 44, 44, 43, 44, 44, 42, 40, 40, 40, 41, 41, 39, 41, 45, 48, //1568
49, 49, 50, 50, 52, 50, 46, 44, 44, 42, 39, 38, 37, 37, 37, 36, //1584
34, 34, 33, 32, 32, 28, 24, 23, 22, 19, 16, 12, 12, 12, 10, 10, //1600
10, 7, 5, 6, 5, 2, -3, -3, -5, -8, -10, -10, -10, -11, -11, -11, //1616
-12, -13, -13, -13, -15, -18, -20, -19, -22, -26, -28, -28, -28, -29, -30, -30, //1632
-29, -28, -27, -27, -28, -31, -31, -31, -35, -39, -40, -41, -41, -41, -42, -43, //1648
-43, -43, -43, -45, -47, -49, -50, -50, -52, -54, -54, -53, -50, -48, -47, -47, //1664
-44, -41, -41, -42, -44, -45, -44, -46, -48, -49, -49, -47, -43, -41, -41, -39, //1680
-34, -33, -33, -33, -33, -33, -32, -33, -37, -37, -37, -38, -39, -39, -40, -41, //1696
-39, -40, -41, -43, -45, -46, -47, -50, -52, -53, -54, -57, -61, -61, -63, -67, //1712
-70, -72, -74, -76, -77, -77, -78, -81, -81, -81, -83, -87, -89, -90, -92, -95, //1728
-96, -97, -97, -100, -101, -101, -102, -103, -105, -106, -108, -109, -110, -110, -111, -112, //1744
-113, -114, -114, -113, -114, -114, -114, -114, -114, -114, -114, -114, -114, -114, -115, -117, //1760
-117, -117, -116, -115, -114, -113, -110, -108, -108, -108, -106, -106, -106, -106, -107, -108, //1776
-108, -108, -108, -108, -108, -107, -106, -106, -106, -104, -102, -102, -101, -99, -98, -98, //1792
-97, -96, -95, -95, -94, -94, -94, -93, -93, -93, -93, -93, -92, -90, -90, -90, //1808
-89, -86, -83, -82, -81, -78, -76, -75, -74, -72, -71, -70, -71, -71, -70, -70, //1824
-71, -71, -70, -70, -68, -66, -64, -64, -60, -57, -55, -54, -54, -55, -54, -54, //1840
-56, -58, -60, -60, -60, -60, -61, -60, -57, -56, -55, -54, -54, -53, -52, -53, //1856
-53, -55, -55, -54, -52, -51, -52, -52, -51, -50, -51, -51, -53, -54, -54, -53, //1872
-51, -52, -52, -51, -48, -46, -47, -47, -46, -45, -44, -45, -46, -46, -47, -49, //1888
-50, -51, -53, -53, -54, -54, -54, -52, -51, -51, -52, -51, -50, -49, -50, -52, //1904
-53, -54, -55, -56, -58, -58, -59, -58, -58, -58, -56, -54, -53, -54, -53, -52, //1920
-51, -50, -51, -52, -52, -52, -51, -50, -50, -49, -46, -44, -43, -41, -37, -35, //1936
-34, -34, -31, -27, -25, -22, -18, -13, -12, -8, -5, -3, -2, -1, 1, 3, //1952
4, 6, 12, 16, 17, 21, 28, 32, 33, 36, 43, 45, 47, 49, 51, 53, //1968
54, 54, 53, 52, 53, 53, 58, 59, 60, 64, 68, 71, 72, 72, 72, 72, //1984
72, 72, 72, 72, 73, 74, 75, 75, 75, 75, 73, 73, 72, 72, 72, 72, //2000
73, 74, 76, 76, 78, 80, 81, 80, 80, 80, 80, 81, 80, 78, 77, 78, //2016
79, 78, 78, 78, 81, 84, 86, 85, 87, 91, 92, 93, 92, 92, 92, 92, //2032
91, 91, 91, 91, 91, 91, 90, 90, 90, 91, 90, 90, 90, 91, 93, 93, //2048
94, 94, 95, 94, 94, 94, 94, 93, 93, 93, 93, 92, 91, 91, 91, 90, //2064
89, 89, 89, 89, 89, 90, 91, 90, 90, 91, 90, 87, 84, 83, 83, 80, //2080
77, 75, 74, 73, 70, 70, 69, 67, 65, 64, 63, 62, 59, 59, 58, 56, //2096
55, 55, 52, 48, 45, 44, 42, 40, 38, 37, 37, 38, 38, 37, 35, 34, //2112
33, 31, 30, 29, 28, 27, 26, 25, 25, 23, 19, 17, 15, 14, 14, 13, //2128
12, 10, 11, 14, 13, 13, 14, 14, 13, 13, 13, 13, 12, 11, 10, 10, //2144
9, 10, 12, 13, 13, 15, 19, 20, 19, 21, 24, 26, 27, 28, 31, 31, //2160
32, 34, 36, 37, 38, 40, 44, 45, 47, 50, 53, 54, 56, 59, 61, 63, //2176
65, 68, 70, 71, 73, 75, 76, 77, 79, 81, 83, 85, 86, 86, 87, 87, //2192
88, 88, 88, 88, 88, 90, 92, 92, 92, 92, 93, 92, 92, 90, 90, 90, //2208
89, 88, 87, 88, 87, 86, 87, 87, 87, 87, 87, 87, 86, 84, 83, 83, //2224
82, 81, 80, 79, 77, 76, 75, 75, 74, 73, 72, 71, 70, 70, 70, 68, //2240
66, 64, 64, 64, 62, 60, 60, 59, 59, 58, 57, 56, 55, 54, 53, 52, //2256
50, 48, 49, 47, 45, 44, 43, 42, 40, 38, 38, 36, 33, 31, 30, 29, //2272
26, 25, 24, 21, 20, 19, 18, 14, 12, 12, 10, 7, 6, 3, 2, 1, //2288
-1, -2, -3, -4, -5, -6, -7, -8, -10, -11, -13, -14, -16, -17, -18, -20, //2304
-20, -21, -23, -25, -26, -26, -27, -29, -29, -31, -32, -32, -33, -33, -33, -33, //2320
-34, -34, -34, -34, -34, -35, -36, -37, -37, -37, -40, -41, -41, -41, -42, -43, //2336
-44, -44, -43, -43, -43, -43, -44, -44, -43, -44, -45, -47, -47, -49, -50, -51, //2352
-53, -53, -55, -55, -54, -56, -58, -58, -57, -57, -58, -58, -57, -57, -57, -57, //2368
-57, -57, -57, -57, -57, -57, -58, -57, -57, -58, -58, -58, -57, -56, -55, -55, //2384
-55, -52, -49, -48, -47, -44, -42, -42, -39, -38, -37, -35, -34, -33, -32, -32, //2400
-31, -28, -27, -27, -24, -21, -20, -19, -17, -15, -15, -14, -12, -10, -10, -8, //2416
-7, -7, -7, -6, -7, -7, -7, -7, -7, -7, -6, -5, -4, -3, -3, -3, //2432
-3, -3, -3, -3, -5, -7, -7, -9, -11, -12, -12, -13, -14, -13, -13, -13, //2448
-13, -12, -12, -12, -13, -14, -13, -16, -19, -21, -20, -22, -26, -27, -28, -29, //2464
-29, -29, -30, -30, -30, -31, -31, -33, -35, -35, -35, -36, -38, -39, -39, -39, //2480
-40, -40, -40, -40, -41, -41, -41, -41, -41, -41, -41, -41, -39, -39, -40, -41, //2496
-41, -41, -42, -45, -47, -48, -50, -52, -53, -54, -55, -56, -56, -57, -57, -58, //2512
-58, -58, -60, -62, -63, -65, -67, -70, -73, -74, -77, -79, -80, -81, -82, -84, //2528
-85, -85, -87, -88, -89, -88, -88, -88, -88, -87, -85, -84, -86, -86, -85, -86, //2544
-87, -88, -89, -89, -90, -89, -88, -88, -88, -86, -83, -82, -81, -80, -78, -76, //2560
-76, -76, -74, -74, -73, -74, -75, -73, -73, -73, -73, -73, -73, -69, -67, -67, //2576
-67, -64, -61, -61, -60, -59, -58, -57, -56, -55, -55, -54, -54, -54, -55, -55, //2592
-55, -55, -55, -55, -53, -51, -50, -49, -47, -43, -43, -43, -40, -38, -37, -34, //2608
-32, -31, -30, -29, -28, -25, -25, -23, -21, -18, -15, -13, -8, -4, -2, -1, //2624
4, 6, 7, 9, 10, 11, 13, 15, 17, 18, 19, 22, 26, 29, 29, 30, //2640
35, 37, 39, 41, 42, 43, 44, 45, 45, 45, 46, 47, 48, 49, 50, 51, //2656
52, 53, 54, 54, 54, 54, 54, 54, 53, 53, 53, 53, 52, 53, 53, 52, //2672
51, 52, 51, 50, 49, 50, 49, 50, 49, 50, 50, 51, 51, 52, 50, 49, //2688
49, 50, 48, 46, 44, 45, 44, 43, 42, 42, 43, 44, 44, 44, 45, 45, //2704
45, 45, 45, 44, 43, 43, 41, 39, 39, 37, 37, 36, 36, 35, 35, 37, //2720
36, 36, 36, 35, 35, 35, 34, 33, 34, 34, 34, 35, 35, 35, 34, 34, //2736
34, 32, 31, 30, 30, 30, 31, 30, 31, 32, 33, 34, 34, 34, 33, 33, //2752
33, 32, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 33, 34, 33, //2768
33, 37, 39, 40, 41, 42, 42, 43, 43, 41, 41, 41, 41, 40, 40, 39, //2784
39, 40, 40, 39, 41, 43, 43, 44, 45, 46, 47, 48, 47, 46, 46, 46, //2800
45, 45, 44, 44, 46, 49, 47, 49, 52, 55, 56, 57, 58, 60, 62, 63, //2816
63, 64, 64, 65, 68, 70, 70, 73, 77, 79, 79, 81, 84, 86, 86, 87, //2832
89, 90, 90, 93, 96, 98, 98, 101, 102, 103, 103, 102, 98, 99, 99, 95, //2848
92, 90, 90, 89, 89, 88, 88, 87, 86, 86, 84, 79, 75, 74, 70, 61, //2864
55, 54, 52, 47, 45, 43, 41, 40, 39, 37, 34, 29, 26, 25, 20, 14, //2880
11, 10, 8, 6, 5, 4, 3, 3, 3, 3, -1, -4, -5, -6, -8, -9, //2896
-11, -12, -10, -8, -6, -5, -2, 1, 1, 2, 2, 1, 2, 1, 1, 1, //2912
1, 2, 5, 8, 9, 11, 17, 20, 20, 21, 22, 21, 23, 21, 17, 15, //2928
16, 15, 15, 14, 14, 16, 18, 19, 20, 20, 18, 18, 18, 12, 6, 4, //2944
4, -1, -8, -10, -12, -15, -17, -18, -19, -22, -25, -26, -28, -37, -42, -43, //2960
-46, -52, -56, -58, -60, -62, -63, -63, -63, -65, -66, -67, -69, -73, -77, -78, //2976
-82, -85, -86, -88, -89, -87, -86, -87, -86, -83, -80, -80, -81, -81, -82, -83, //2992
-83, -84, -85, -86, -84, -79, -78, -78, -75, -73, -72, -71, -70, -71, -71, -70, //3008
-70, -71, -71, -71, -71, -69, -69, -69, -68, -68, -68, -67, -68, -69, -69, -69, //3024
-70, -71, -71, -71, -70, -71, -71, -70, -69, -69, -68, -68, -70, -70, -70, -72, //3040
-74, -74, -74, -75, -75, -75, -75, -74, -72, -72, -72, -72, -71, -69, -70, -71, //3056
-71, -71, -72, -74, -74, -74, -74, -74, -73, -74, -73, -71, -71, -71, -72, -73, //3072
-72, -72, -73, -75, -75, -75, -76, -77, -78, -78, -78, -78, -77, -77, -77, -78, //3088
-78, -78, -80, -82, -82, -84, -85, -85, -86, -86, -87, -87, -88, -88, -89, -90, //3104
-92, -93, -95, -96, -96, -98, -98, -99, -100, -100, -99, -99, -100, -101, -101, -101, //3120
-102, -103, -104, -104, -105, -106, -106, -107, -107, -106, -105, -106, -106, -105, -104, -103, //3136
-103, -104, -104, -104, -105, -107, -108, -109, -109, -108, -108, -108, -108, -106, -103, -103, //3152
-104, -103, -102, -103, -103, -103, -104, -104, -104, -103, -103, -103, -103, -100, -98, -98, //3168
-96, -92, -90, -90, -86, -81, -79, -79, -76, -73, -71, -70, -68, -65, -64, -63, //3184
-57, -52, -51, -49, -43, -34, -33, -31, -25, -19, -18, -15, -9, -5, -3, -2, //3200
3, 9, 11, 13, 18, 21, 23, 26, 30, 33, 35, 38, 46, 50, 52, 55, //3216
61, 65, 68, 70, 72, 75, 76, 80, 83, 85, 87, 89, 93, 97, 98, 100, //3232
102, 103, 105, 106, 107, 108, 109, 110, 111, 111, 112, 113, 114, 115, 116, 117, //3248
118, 118, 119, 120, 121, 121, 121, 122, 121, 123, 123, 123, 123, 125, 125, 126, //3264
126, 127, 127, 127, 127, 127, 125, 120, 117, 119, 116, 113, 113, 114, 111, 110, //3280
110, 107, 105, 102, 100, 98, 96, 94, 93, 92, 91, 91, 91, 90, 87, 84, //3296
83, 82, 80, 78, 77, 76, 77, 77, 77, 77, 77, 78, 78, 77, 77, 76, //3312
76, 75, 74, 74, 73, 74, 74, 74, 74, 74, 75, 75, 75, 75, 75, 75, //3328
75, 73, 71, 70, 69, 68, 65, 65, 64, 63, 63, 62, 62, 61, 61, 61, //3344
61, 61, 61, 61, 62, 61, 61, 61, 60, 58, 57, 56, 56, 55, 54, 54, //3360
55, 54, 53, 54, 54, 53, 53, 53, 53, 53, 53, 53, 50, 48, 47, 47, //3376
43, 39, 37, 37, 38, 38, 38, 39, 40, 41, 42, 40, 36, 32, 32, 30, //3392
25, 20, 19, 18, 16, 15, 15, 13, 13, 13, 11, 10, 10, 10, 10, 10, //3408
10, 11, 11, 10, 10, 10, 10, 12, 13, 13, 14, 17, 22, 24, 24, 28, //3424
32, 34, 34, 38, 41, 41, 42, 46, 49, 50, 53, 56, 59, 61, 63, 66, //3440
67, 68, 70, 71, 73, 75, 76, 77, 78, 79, 80, 81, 80, 81, 81, 76, //3456
76, 76, 73, 68, 66, 66, 63, 59, 58, 58, 55, 53, 53, 52, 50, 46, //3472
45, 44, 41, 38, 36, 35, 30, 26, 26, 25, 21, 17, 15, 13, 11, 9, //3488
7, 5, 3, 2, 1, 0, -2, -5, -6, -7, -9, -10, -10, -12, -14, -15, //3504
-16, -18, -21, -22, -24, -24, -23, -23, -25, -23, -21, -20, -21, -20, -20, -20, //3520
-19, -21, -23, -22, -22, -21, -20, -19, -18, -14, -11, -11, -10, -6, -1, -1, //3536
0, 2, 3, 4, 5, 5, 5, 6, 7, 10, 11, 11, 13, 16, 18, 19, //3552
21, 22, 24, 25, 24, 24, 24, 24, 23, 21, 21, 21, 20, 19, 19, 20, //3568
18, 16, 16, 16, 12, 8, 7, 6, 3, 0, -2, -4, -6, -7, -7, -9, //3584
-13, -18, -19, -22, -29, -34, -35, -40, -44, -47, -48, -50, -52, -52, -54, -56, //3600
-56, -56, -58, -59, -59, -59, -60, -60, -62, -62, -62, -62, -60, -61, -60, -57, //3616
-54, -52, -51, -48, -47, -46, -45, -44, -44, -43, -42, -42, -41, -39, -39, -38, //3632
-37, -36, -37, -39, -38, -38, -39, -41, -42, -42, -44, -47, -48, -49, -51, -54, //3648
-55, -55, -56, -58, -59, -60, -63, -67, -68, -69, -71, -75, -76, -77, -78, -78, //3664
-79, -80, -80, -80, -81, -81, -82, -83, -82, -83, -84, -82, -82, -83, -82, -81, //3680
-82, -81, -79, -79, -78, -78, -77, -75, -75, -75, -74, -75, -75, -74, -73, -73, //3696
-73, -73, -70, -70, -70, -69, -68, -68, -67, -67, -66, -66, -66, -63, -61, -61, //3712
-61, -60, -58, -58, -58, -56, -55, -56, -55, -53, -52, -51, -50, -48, -46, -46, //3728
-45, -42, -40, -39, -37, -34, -32, -32, -30, -28, -25, -24, -23, -21, -20, -19, //3744
-18, -15, -13, -13, -11, -6, -5, -4, -2, 0, 2, 3, 4, 5, 6, 7, //3760
8, 8, 9, 10, 10, 10, 10, 10, 10, 8, 8, 8, 4, 2, 2, 2, //3776
0, -3, -2, -3, -5, -8, -8, -10, -15, -18, -19, -21, -26, -31, -32, -35, //3792
-41, -44, -46, -49, -52, -55, -56, -58, -62, -64, -65, -68, -72, -74, -76, -81, //3808
-85, -86, -88, -91, -92, -93, -95, -94, -94, -94, -95, -96, -99, -99, -100, -103, //3824
-104, -104, -105, -105, -105, -105, -106, -106, -106, -107, -108, -109, -110, -111, -112, -114, //3840
-115, -116, -117, -118, -119, -120, -119, -117, -116, -115, -113, -111, -110, -108, -108, -106, //3856
-103, -101, -100, -99, -97, -95, -93, -91, -89, -87, -85, -84, -82, -80, -78, -76, //3872
-74, -71, -69, -67, -65, -64, -61, -58, -57, -54, -51, -49, -47, -44, -41, -39, //3888
-36, -33, -29, -26, -24, -22, -18, -16, -14, -12, -10, -9, -7, -5, -4, -3, //3904
-2, 0, };
