#pragma once

#include "defines.h"
#include "item.h"

namespace mod::item
{
	ItemCheck checks[293] = {
		
		{0x3f, 1, 0b0, -1.625974, 0, -207.488129, nullptr, nullptr},
		{0x2A, 7, 0b11000100100000, -3550.869141, 4450, -694.899658, nullptr, nullptr},
		{0xee, 8, 0b0, 1221.904419, 50, -7.942317, nullptr, nullptr},
		{0x21, 3, 0b10000000000000, 1528, 250, -22, nullptr, nullptr},
		{0x45, 7, 0b0, -38292.53125, 400, -23129.955078, nullptr, nullptr},
		{0xed, 7, 0b10100000000000, 128.704376, -1077, -607.5, nullptr, nullptr},
		{0x3, 7, 0b111000110000, 900, 3110, 15825, nullptr, nullptr},
		{0x2B, 7, 0b0, 0, 2700, 5550, nullptr, nullptr},
		{0x23, 2, 0b10000000000000, 550, 3301.009521, 5325, nullptr, nullptr},
		{0x20, 8, 0b10000000000000, 6908, 3580.271973, -3305, nullptr, nullptr},
		{0x3, 7, 0b10000000000000, 11559.754883, 3152, 3761.21875, nullptr, nullptr},
		{0x20, 8, 0b10000001000000, -9363.230469, 3302, 5701.797852, nullptr, nullptr},
		{0x4, 7, 0b10000001000000, -11721.145508, 3750, 4717.821289, nullptr, nullptr},
		{0x21, 3, 0b10000001000000, -4000, 2955.590088, 9075, nullptr, nullptr},
		{0x21, 3, 0b110100000000000, -14275, 3402.783203, 6150, nullptr, nullptr},
		{0x24, 2, 0b100001110000, 0, 3150, 7125, nullptr, nullptr},
		{0x26, 2, 0b110100000000000, 9225.000977, 3471.959961, 8465.134766, nullptr, nullptr},
		{0x3, 7, 0b10000100000000, 10261, 3175, 8295, nullptr, nullptr},
		{0x20, 8, 0b110100000000000, 1174.251099, 5002.390137, -9219.09375, nullptr, nullptr},
		{0x4, 7, 0b110100000000000, 11183, 3806.550049, -6305, nullptr, nullptr},
		{0x4, 7, 0b0, -70, -6.044, -670, nullptr, nullptr},/*{0x45, 0, 0b0, 320.811188, 9.71, 1017.939087, nullptr, nullptr},*/
		{0x4, 7, 0b0, 1050, -258.184082, 13750, nullptr, nullptr},
		{0x20, 8, 0b1000000000000, 2700, -1378.352173, 5175, nullptr, nullptr},
		{0x23, 2, 0b1000000000000, -15984.15625, -710.599426, 1504.414307, nullptr, nullptr},
		{0x4, 7, 0b1000000000000, -16176, -561.382202, 895, nullptr, nullptr},
		{0x21, 3, 0b1000000000000, -5625, 448.784119, 75, nullptr, nullptr},
		{0x20, 8, 0b1000000000000, 1125, 600, -4725, nullptr, nullptr},
		{0x4, 7, 0b1000000000000, 1000, 1650, -5650, nullptr, nullptr},
		{0x21, 3, 0b1000000000000, -1350, 2350, -6200, nullptr, nullptr},
		{0x20, 8, 0b1000000000000, -1050, 2425, -14825, nullptr, nullptr},
		{0x3, 7, 0b1000000000000, 13900, 2997.090088, -17175, nullptr, nullptr},
		{0x3, 7, 0b1000000000000, 9950, 2475, -15375, nullptr, nullptr},
		{0x43, 0, 0b1000000000000, 7997.999512, 2640, -5355, nullptr, nullptr},
		{0x24, 2, 0b101001000000000, 6488.367676, 2640, -1673.534912, nullptr, nullptr},
		{0x5, 7, 0b100001000000000, 13975, 2476.48999, -1675, nullptr, nullptr},
		{0x5, 7, 0b100001000000000, 3625, 2637.899902, 4050, nullptr, nullptr},
		{0x2C, 7, 0b1000000000000, 2325, 1100, -17400, nullptr, nullptr},
		{0x21, 3, 0b101000100000000, 1300, -1600, 16700, nullptr, nullptr},
		{0x5, 7, 0b10000000000000, 16050, 200, 725, nullptr, nullptr},
		{0x5, 7, 0b0, -887.435059, 1000, -173.290771, nullptr, nullptr},
		{0x6, 7, 0b0, -4027.733643, 3200, -8970.999023, nullptr, nullptr},
		{0x21, 3, 0b100100000, 11550, 2700, 24090, nullptr, nullptr},
		{0x3, 7, 0b0, 2784.317871, -4587.890137, 10773.414062, nullptr, nullptr},
		{0x4, 7, 0b0, 3810.843506, -3535.530029, 11344.887695, nullptr, nullptr},
		{0x6, 7, 0b1000000000000, -97123.546875, -19490, 58585.699219, nullptr, nullptr},
		{0xf, 5, 0b0, -1707.679321, 1250, 15388.988281, nullptr, nullptr},
		{0x17, 5, 0b1, -144.673798, 1250, 16525.871094, nullptr, nullptr},
		{0x17, 5, 0b100001000000, 1417.597168, 1813.609985, 7807.225586, nullptr, nullptr},
		{0xf, 5, 0b100001000000, 1629.504517, 0, 2049.63501, nullptr, nullptr},
		{0x23, 2, 0b100001000000, 2010.577393, 0, -1656.341553, nullptr, nullptr},
		{0x20, 8, 0b100001000000, 12900, -600, 1850, nullptr, nullptr},
		{0x16, 5, 0b100001000000, 8779.115234, 1500, 1667.625854, nullptr, nullptr},
		{0x20, 8, 0b100001000000, 11550.803711, 1500, 2866.64624, nullptr, nullptr},
		{0x17, 5, 0b100001000000, 18228.332031, 3995, -466.32608, nullptr, nullptr},
		{0x20, 8, 0b100001000000, 13550, 10, -2500, nullptr, nullptr},
		{0x4, 7, 0b100001000000, 13193.291016, -1189.310059, -2433.406006, nullptr, nullptr},
		{0x16, 5, 0b100001000000, 13757, -1275.331055, -4783.150391, nullptr, nullptr},
		{0x44, 0, 0b101000011000000, 0, 0, 0, nullptr, nullptr},
		{0x21, 3, 0b100000001010000, -0.869199, 2100, 2.109905, nullptr, nullptr},
		{0x5, 7, 0b100000001010000, 21000, 4170, 85, nullptr, nullptr},
		{0x4, 7, 0b100001000000, 0, -940, -315.5, nullptr, nullptr},
		{0x17, 5, 0b100000001010000, -10687.094727, -299.399994, -1161.590576, nullptr, nullptr},
		{0x17, 5, 0b0, -20310, 4015, 460, nullptr, nullptr},
		{0x24, 2, 0b0, -23100, 4200, -85, nullptr, nullptr},
		{0x4, 7, 0b0, -14158.288086, 700, 2868.110352, nullptr, nullptr},
		{0x4, 7, 0b0, -10180.671875, 1500, -1939.730591, nullptr, nullptr},
		{0x4, 7, 0b0, -10950, 1450, 2590, nullptr, nullptr},
		{0x18, 5, 0b0, -9270, 1450, -2100, nullptr, nullptr},
		{0x26, 2, 0b0, -16549.878906, -1345.709351, 2820.391846, nullptr, nullptr},
		{0x16, 5, 0b0, -18544.220703, -200, 475.574585, nullptr, nullptr},
		{0x21, 3, 0b0, 11356.224609, -550, 4896.664062, nullptr, nullptr},
		{0x21, 3, 0b10000000000000, -211.868149, -61.347046, -2693.111084, nullptr, nullptr},
		{0x6, 7, 0b10000000000000, 28.761496, 2.968425, -455.455811, nullptr, nullptr},
		{0x1a, 5, 0b10000000000000, -655.649353, 1069.5, -4819.09082, nullptr, nullptr},
		{0x3, 7, 0b10000000000000, 682.16803, 1069.5, -6179.206055, nullptr, nullptr},
		{0x4, 7, 0b10000000000000, 2067.483154, 966.940002, -7130.320312, nullptr, nullptr},
		{0xe, 5, 0b10000000000000, 9980.407227, 353.380005, -7188.224121, nullptr, nullptr},
		{0x30, 7, 0b10000000000000, 8154.485352, -721.950012, -16215.057617, nullptr, nullptr},
		{0x6, 7, 0b10000000000000, 1585.2146, -1584.689941, -14877.493164, nullptr, nullptr},
		{0x4, 7, 0b10000000000000, 1678.463501, -1586.689941, -16192.173828, nullptr, nullptr},
		{0x1a, 5, 0b10000000000000, -642.039429, -1703.199951, -18994.861328, nullptr, nullptr},
		{0xe, 5, 0b10000000000000, -7978.358887, -2572.709961, -16192.173828, nullptr, nullptr},
		{0x5, 7, 0b10000000000000, -9292.611328, -2572.709961, -17523.386719, nullptr, nullptr},
		{0x1b, 5, 0b10000000000000, 2974.328369, -4197.580078, -20501.681641, nullptr, nullptr},
		{0x5, 7, 0b10000000000000, 1675.39856, -4197.580078, -21755.734375, nullptr, nullptr},
		{0x12, 5, 0b10000000000000, 3981.531982, -4081.080078, -19125.396484, nullptr, nullptr},
		{0x6, 7, 0b10000000000000, 8324.223633, -4070.189941, -17814.015625, nullptr, nullptr},
		{0x21, 3, 0b10000000000000, 6582.574707, -5144.52002, -10032.96582, nullptr, nullptr},
		{0x6, 7, 0b10000000000000, -312.188293, -27.17, -1501.015503, nullptr, nullptr},
		{0x70, 7, 0b0, -91673.945312, -16547.169922, 492208.820312, nullptr, nullptr},
		{0x6, 7, 0b10000, -88887.453125, -16927.609375, 43906.90625, nullptr, nullptr},
		{0x2, 7, 0b1000000000000, 593.577393, -1276.779297, 128.136002, nullptr, nullptr},
		{0x3, 7, 0b1000000000000, -1262.243652, -1380.829224, 68.699478, nullptr, nullptr},
		{0x71, 7, 0b10000, -33.71003, 1406.557129, 4875.733887, nullptr, nullptr},
		{0xa, 5, 0b10000, 486.290009, 1406.547974, 4875.733887, nullptr, nullptr},
		{0x21, 3, 0b110000000010000, 224.644272, 1406.599976, 4862.468262, nullptr, nullptr},
		{0x31, 7, 0b0, -102601.664062, -16650.65625, 43399.957031, nullptr, nullptr},
		{0x21, 3, 0b0, -102682.203125, -17271.683594, 43179.078125, nullptr, nullptr},
		{0x5, 7, 0b0, -102990.242188, -17760.830078, 42850.238281, nullptr, nullptr},
		{0x4, 7, 0b0, -103540.78125, -18170.257812, 42296.242188, nullptr, nullptr},
		{0x3, 7, 0b0, -104351.703125, -18485.771484, 41482.636719, nullptr, nullptr},
		{0x6, 7, 0b0, -371.438995, -27.17, -1627.256592, nullptr, nullptr},
		{0x5, 7, 0b111000000000000, 200, -349.622681, -1900, nullptr, nullptr},
		{0x5, 7, 0b101100000000000, -200, -349.496429, -1900, nullptr, nullptr},
		{0x5, 7, 0b10000000000000, -1125.78418, -133.922653, -3012.353027, nullptr, nullptr},
		{0x6, 7, 0b1000000000000, -46800, -4800, -22650, nullptr, nullptr},
		{0x6, 7, 0b10000, -94100, -4420, 30009.919922, nullptr, nullptr},
		{0x6, 7, 0b10000, -1061.296997, -132.255249, -3053.607178, nullptr, nullptr},
		{0x5, 7, 0b0, -80910, -6000, 64780, nullptr, nullptr},
		{0x6, 7, 0b10000, -46040, -9100, 80025, nullptr, nullptr},
		{0x4, 7, 0b0, 578.996704, -266.32373, -2138.461914, nullptr, nullptr},
		{0x3, 7, 0b0, -281.646362, -300, 910.294128, nullptr, nullptr},
		{0x3F, 7, 0b0, -754.029602, -256.770477, -3001.781494, nullptr, nullptr},
		{0x21, 3, 0b10000000000000, -1646.010986, 379.299988, 8487.967773, nullptr, nullptr},
		{0x5, 7, 0b10000, 2700, 4275, -19550, nullptr, nullptr},
		{0x4, 7, 0b110000100000000, -1056.463623, 3145.543213, -4376.850098, nullptr, nullptr},
		{0x21, 3, 0b110000100000000, 6452.620117, 4447.901855, -6947.850586, nullptr, nullptr},
		{0x5, 7, 0b110000100000000, 7333.760254, 4152.13916, 1235.803101, nullptr, nullptr},
		{0x6, 7, 0b10000, -53600, -3592.969971, 23830, nullptr, nullptr},
		{0x6, 7, 0b10000000000000, -240.337433, -27.17, -1660.108154, nullptr, nullptr},
		{0x5, 7, 0b10000000000000, -1037.568237, 1.051524, -536.655762, nullptr, nullptr},
		{0x5, 7, 0b10000000000000, -193.289291, 150, -1135.574585, nullptr, nullptr},
		{0x5, 7, 0b10000000000000, -251.500443, -27.17, -1691.912109, nullptr, nullptr},
		{0x6, 7, 0b10000000000000, -1066.030273, -132.137787, -3046.880859, nullptr, nullptr},
		{0x4, 7, 0b10000, 51585.621094, 1536.150024, 58741.25, nullptr, nullptr},
		{0x4, 7, 0b0, 51813.679688, 171.051025, 46656.277344, nullptr, nullptr},
		{0xe, 5, 0b0, 30472.564453, 778.064026, 50140.570312, nullptr, nullptr},
		{0x4, 7, 0b101000000010000, 13825, 137.5, -34250, nullptr, nullptr},
		{0x6, 7, 0b111000000010000, 9577, -2833.889893, -33492, nullptr, nullptr},
		{0x21, 3, 0b101000000010000, 9515.709961, -2850, -31912.380859, nullptr, nullptr},
		{0x5, 7, 0b10000, -6940.811035, 441.211243, 48305.402344, nullptr, nullptr},
		{0x6, 7, 0b10000000000000, -128.840118, 150, -1330.335693, nullptr, nullptr},
		{0x4, 7, 0b0, 9889.448242, -732.859985, 17813.839844, nullptr, nullptr},
		{0x6, 7, 0b0, 32741.261719, 158.309998, 68606.546875, nullptr, nullptr},
		{0x4, 7, 0b0, 3104.971191, -732.859985, 24575.035156, nullptr, nullptr},
		{0x5, 7, 0b0, 4945, -732.859985, 25572, nullptr, nullptr},
		{0xe, 5, 0b0, 1845, -732.859985, 26130, nullptr, nullptr},
		{0x4, 7, 0b0, -6532.40625, -732.859985, 20852.412109, nullptr, nullptr},
		{0xe, 5, 0b0, 4681.094727, -162.940002, 12575.762695, nullptr, nullptr},
		{0xf, 5, 0b0, 4761.640625, 0, 1580.57019, nullptr, nullptr},
		{0x5, 7, 0b0, 2389.04541, 260, -1473.387207, nullptr, nullptr},
		{0x5, 7, 0b10000000000000, 3633.620117, 840, -12457.700195, nullptr, nullptr},
		{0x20, 8, 0b0, -3000, -19, 5600, nullptr, nullptr},
		{0x20, 8, 0b10000000000000, 4125, -741.580017, -2250, nullptr, nullptr},
		{0x21, 3, 0b10000000000000, 1300, 62.5, -3012.5, nullptr, nullptr},
		{0x23, 2, 0b10000000000000, -1300, 50, -3012.5, nullptr, nullptr},
		{0x24, 2, 0b10000000000000, 9400, 990.059998, 6100, nullptr, nullptr},
		{0x20, 8, 0b10000000000000, 12275, 980, 4537.5, nullptr, nullptr},
		{0x20, 8, 0b10000000000000, 4150, 825, 775, nullptr, nullptr},
		{0x4, 7, 0b10000000000000, -4065, 150, -2660, nullptr, nullptr},
		{0x4, 7, 0b10000000000000, -4450, 400, 1150, nullptr, nullptr},
		{0xa, 5, 0b10000000000000, -9975, 500, -600, nullptr, nullptr},
		{0xa, 5, 0b10000000000000, -8113, 500, -1382, nullptr, nullptr},
		{0x20, 8, 0b110000100010000, 3970, -1050, -6080, nullptr, nullptr},
		{0x41, 0, 0b110000100010000, 0, 50, -6200, nullptr, nullptr},
		{0xb, 5, 0b110000100010000, -8331.40918, -1800, -3677.746826, nullptr, nullptr},
		{0x4, 7, 0b110000100010000, -10212.5, -1840, -3725, nullptr, nullptr},
		{0x3, 7, 0b110000100010000, -10812.5, -1825, -5712.5, nullptr, nullptr},
		{0x21, 3, 0b110000100010000, -5475, -1325, -4875, nullptr, nullptr},
		{0x3, 7, 0b110000100010000, -6225, -1125, -7275, nullptr, nullptr},
		{0x26, 2, 0b110000100010000, -3675, 500, -7250, nullptr, nullptr},
		{0x21, 3, 0b100, -88260, 2950, -8150, nullptr, nullptr},
		{0xa, 5, 0b0, 464.917603, -262.310638, -709.695251, nullptr, nullptr},
		{0xa, 5, 0b0, -1153.776001, -255.839645, -980.666016, nullptr, nullptr},
		{0x21, 3, 0b100100000, -211.849945, -60.93874, -2691.099121, nullptr, nullptr},
		{0x6, 7, 0b100000000010100, -51500, -5180, 25970, nullptr, nullptr},
		{0x5, 7, 0b10000000000000, -277.270966, 150, -1096.288696, nullptr, nullptr},
		{0x4, 7, 0b10000000000000, -25790.109375, 330, -19842.935547, nullptr, nullptr},
		{0x3, 7, 0b10000000000000, -24845.130859, -100, -26998.722656, nullptr, nullptr},
		{0x5, 7, 0b10000000000000, -25966.785156, -83.130524, -16071.959961, nullptr, nullptr},
		{0x20, 8, 0b0, -1500, -60, -4458, nullptr, nullptr},
		{0x4, 7, 0b0, 1350, 50, -1400, nullptr, nullptr},
		{0xf4, 2, 0b0, 5300, 0, -5100, nullptr, nullptr},
		{0x20, 8, 0b0, 1350, -40, -4150, nullptr, nullptr},
		{0x4, 7, 0b100100000010000, -4355, 0, -2160, nullptr, nullptr},
		{0x24, 2, 0b0, -3510, 0, -1350, nullptr, nullptr},
		{0xa, 5, 0b100000, 0, 0, -1250, nullptr, nullptr},
		{0xf5, 2, 0b100000, 0, 0, -3196, nullptr, nullptr},
		{0x21, 3, 0b100100100000, -36, 0, 1600, nullptr, nullptr},
		{0x20, 8, 0b100000100000, -4350, 950, -3850, nullptr, nullptr},
		{0x21, 3, 0b100000100000, 0, 1118.32019, 4690, nullptr, nullptr},
		{0x4, 7, 0b100000, -900, -50, 5950, nullptr, nullptr},
		{0x3, 7, 0b100000, 930, -50, 5350, nullptr, nullptr},
		{0x20, 8, 0b0, 4350, 953, -4900, nullptr, nullptr},
		{0x4, 7, 0b100100000, -5347.307129, -50, -6500.886719, nullptr, nullptr},
		{0xa, 5, 0b100100000, -1818.321777, 0, -7562.983887, nullptr, nullptr},
		{0xf6, 8, 0b100000000, -4350, 1050, -8560.574219, nullptr, nullptr},
		{0x6, 7, 0b110000000100000, -6233.258301, -1800, -9865.020508, nullptr, nullptr},
		{0x6, 7, 0b100000, -810.710571, -300, -2101.050293, nullptr, nullptr},
		{0x21, 3, 0b100000, 0, 0, -7900, nullptr, nullptr},
		{0xd, 5, 0b10000000000000, -15394.423828, 2300, 2483.923096, nullptr, nullptr},
		{0x6, 7, 0b100000000100, -6840.351562, 2000, 6329.060547, nullptr, nullptr},
		{0x20, 8, 0b10000000000000, 2500, 56.25, 368.75, nullptr, nullptr},
		{0x10, 5, 0b10000000000000, -12.5, 1100, 8362.5, nullptr, nullptr},
		{0x4, 7, 0b10000000000000, 5795, 2505, 4210, nullptr, nullptr},
		{0x23, 2, 0b10000000000000, 6925, 2325, 3400, nullptr, nullptr},
		{0x20, 8, 0b110000000000100, -1737.5, 4500, 5812.5, nullptr, nullptr},
		{0x24, 2, 0b1000000000, -3450, 4450, -5510, nullptr, nullptr},
		{0x5, 7, 0b1000010000, -30, 5750, -1515, nullptr, nullptr},
		{0x20, 8, 0b1000010000, 5319, 7550, 8592.75, nullptr, nullptr},
		{0x5, 7, 0b1000010000, 5300, 8100, -800, nullptr, nullptr},
		{0x46, 0, 0b1000010000, 0, -350, -2400, nullptr, nullptr},
		{0x4, 7, 0b1000000000, 1195, 7400, 2350, nullptr, nullptr},
		{0x4, 7, 0b1000000000, 6135, 8000, 0, nullptr, nullptr},
		{0x26, 2, 0b1000000000, 5350, 7400, 0, nullptr, nullptr},
		{0x21, 3, 0b1000010000, -8740, 5100, -4515, nullptr, nullptr},
		{0x4, 7, 0b110000000000100, 0, 4850, 9200, nullptr, nullptr},
		{0x21, 3, 0b110000000000100, 1740, 4500, 5815, nullptr, nullptr},
		{0x21, 3, 0b10, 606.795654, 1005, 8005.390137, nullptr, nullptr},
		{0x4, 7, 0b0, 6500, 426, -977, nullptr, nullptr},
		{0x21, 3, 0b0, 31257.595703, 900, -16115.499023, nullptr, nullptr},
		{0x6, 7, 0b100000000010, -10245.476562, -4400, 42817.04675, nullptr, nullptr},
		{0x6, 7, 0b100000000010, -79819.414062, -1301.23999, 22400.671875, nullptr, nullptr},
		{0x6, 7, 0b100000000010010, -93284.570312, -5000, 18235.724609, nullptr, nullptr},
		{0x21, 3, 0b10, -21012.154297, 1350, -20630.322266, nullptr, nullptr},
		{0x6, 7, 0b0, 16263.970703, 989.650024, 60708.464844, nullptr, nullptr},
		{0x18, 5, 0b1000000000000, -1170.083496, -755, 6670, nullptr, nullptr},
		{0x4, 7, 0b1000000000000, 1170, -755, 6670, nullptr, nullptr},
		{0x20, 8, 0b100000000001100, -14514.444336, 0, -12000.831055, nullptr, nullptr},
		{0x23, 2, 0b1100, 17665.134766, 0, -11924.103516, nullptr, nullptr},
		{0x3, 7, 0b1100, 15824.609375, -110, -9750.685547, nullptr, nullptr},
		{0x4, 7, 0b1100, 17550, 1500, -7200, nullptr, nullptr},
		{0x49, 7, 0b1100, 13470, 1500, -7925, nullptr, nullptr},
		{0x47, 0, 0b1100, -0.36296, 600, 2279.769043, nullptr, nullptr},
		{0x24, 2, 0b1100, 10800, -1775, -11850, nullptr, nullptr},
		{0xf, 5, 0b1100, -11099.124023, -1500, -15658.851562, nullptr, nullptr},
		{0x4, 7, 0b1100, -13458.794922, 0, -13410.556641, nullptr, nullptr},
		{0xb, 5, 0b1100, -10742.959961, 0, -15156.719727, nullptr, nullptr},
		{0x3, 7, 0b1100, -15654.839844, 2840.22998, -18906.789062, nullptr, nullptr},
		{0xf, 5, 0b1100, -12630.169922, 2430.899902, -19611.431641, nullptr, nullptr},
		{0x21, 3, 0b1100, -14567.109375, 2281, -16989.035156, nullptr, nullptr},
		{0x4, 7, 0b1100, -15782.795898, 2980, -11466.698242, nullptr, nullptr},
		{0x5, 7, 0b1100, -14270.538086, 1982.199951, -7411.910156, nullptr, nullptr},
		{0xa, 5, 0b1100, -12592.967773, 2400, -13712.767578, nullptr, nullptr},
		{0x21, 3, 0b1100, -11494.318359, 3000, -9888.673828, nullptr, nullptr},
		{0x4, 7, 0b1000, 75.237617, 4500, -10853.455078, nullptr, nullptr},
		{0x5, 7, 0b1000, 4010.314941, 4500, -12451.90332, nullptr, nullptr},
		{0x26, 2, 0b1000, -1090.983032, 4500, -12411.761719, nullptr, nullptr},
		{0x4, 7, 0b1000, 11.803009, 3000, -13501.785156, nullptr, nullptr},
		{0x5, 7, 0b1000, 0, 894.47998, -23853, nullptr, nullptr},
		{0x21, 3, 0b100000001000, -22100, -7176.029785, 52140, nullptr, nullptr},
		{0x6, 7, 0b1000, -2816.413818, 1305.078735, -1395.787598, nullptr, nullptr},
		{0x6, 7, 0b1000, 2798.905762, 1322.181772, -987.135681, nullptr, nullptr},
		{0x6, 7, 0b1000, -57374.082031, -9100, 29237.90625, nullptr, nullptr},
		{0x20, 8, 0b0, -3950, -1071, 1375, nullptr, nullptr},
		{0x20, 8, 0b0, -3950, -1200, -5075, nullptr, nullptr},
		{0x24, 2, 0b0, -2700, -1196, -1661, nullptr, nullptr},
		{0x6, 7, 0b0, -2400, -21.25, -1550, nullptr, nullptr},
		{0x21, 3, 0b0, -6850, -771.25, 3200, nullptr, nullptr},
		{0x5, 7, 0b0, 3250, -696.25, 1235, nullptr, nullptr},
		{0x20, 8, 0b0, 4650, -696.25, 1235, nullptr, nullptr},
		{0x5, 7, 0b0, 5700, 3.75, -4350, nullptr, nullptr},
		{0x5, 7, 0b0, 2200, 3.75, -5100, nullptr, nullptr},
		{0x23, 2, 0b0, 2300, -396.25, -3300, nullptr, nullptr},
		{0x20, 8, 0b0, 5600, -296.25, -3300, nullptr, nullptr},
		{0x21, 3, 0b0, 5352.5, -171.25, 3500, nullptr, nullptr},
		{0x50, 7, 0b0, 2547.5, -171.25, 3500, nullptr, nullptr},
		{0x20, 8, 0b0, 1500, 128.75, 6250, nullptr, nullptr},
		{0x26, 2, 0b10000, 0, 3130, -3600, nullptr, nullptr},
		{0x20, 8, 0b0, -2900, -71.25, -2055, nullptr, nullptr},
		{0x20, 8, 0b10000, -800, 1130, 1200, nullptr, nullptr},
		{0x6, 7, 0b0, 4025, 152, -11735, nullptr, nullptr},
		{0x1, 7, 0b0, 3850, 152, -12725, nullptr, nullptr},
		{0x4, 7, 0b0, 4075, 150, -12725, nullptr, nullptr},
		{0x20, 8, 0b0, 375, 600, -6900, nullptr, nullptr},
		{0x23, 2, 0b100000000000, 1210, 0, -7002, nullptr, nullptr},
		{0x71, 7, 0b100000000000, 4775, 1200, 3875, nullptr, nullptr},
		{0x4, 7, 0b0, -6420, 30, -8017.818359, nullptr, nullptr},
		{0x4, 7, 0b0, -6400, 350, 125, nullptr, nullptr},
		{0x24, 2, 0b0, 2400, 1250, -875, nullptr, nullptr},
		{0x5, 7, 0b0, 25, 1875, -4975, nullptr, nullptr},
		{0x5, 7, 0b0, -1225, 2000, 2125, nullptr, nullptr},
		{0x70, 7, 0b0, -2375, 1250, -900, nullptr, nullptr},
		{0x20, 8, 0b0, 8685, 2000, 8690, nullptr, nullptr},
		{0x26, 2, 0b0, -8700, 2000, 8700, nullptr, nullptr},
		{0x2, 7, 0b100000000001100, 3350, 6150, 3675, nullptr, nullptr},
		{0x3, 7, 0b100000000001100, 3475, 6150, 3550, nullptr, nullptr},
		{0x20, 8, 0b100000000001100, 3600, 6150, 3425, nullptr, nullptr},
		{0x18, 5, 0b100000000001100, 3700, 6150, 3250, nullptr, nullptr},
		{0xf, 5, 0b100000000001100, 3700, 6150, 3075, nullptr, nullptr},
		{0xc, 5, 0b100000000001100, 3700, 6150, 2750, nullptr, nullptr},
		{0x1, 7, 0b100000000001100, 3700, 6150, 2525, nullptr, nullptr},
		{0x10, 5, 0b100000000001100, 3700, 6150, 2300, nullptr, nullptr},
		{0x5, 7, 0b100000000001100, 2650, 6150, 2125, nullptr, nullptr},
		{0x1b, 5, 0b100000000001100, 2550, 6150, 2225, nullptr, nullptr},
		{0x7, 7, 0b100000000001100, 2450, 6150, 2325, nullptr, nullptr},
		{0x12, 5, 0b100000000001100, 2350, 6150, 2425, nullptr, nullptr},
		{0x28, 7, 0b100000000001100, 2250, 6150, 2525, nullptr, nullptr},
		{0x40, 0, 0b10000000000000, 205.366974, 3901, -6120.504395, nullptr, nullptr},
		{0x42, 0, 0b0, -4.6E-5, 47, -473.765015, nullptr, nullptr},
		{0x2a, 1, 0b0, -1261.130615, 779.544922, -65.885307, nullptr, nullptr},
		{0x6, 1, 0b0, 128.092377, 7.86015, -167.850494, nullptr, nullptr}
	};
}