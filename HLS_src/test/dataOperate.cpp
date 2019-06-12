#include"dataOperate.hpp"
int LoadFilter(char *filename_w,char *filename_b,int weight_len,int bias_len,float *dst)

{
	FILE *fp_w,*fp_b;
	size_t wread =0;
	size_t bread = 0;

	if ((fp_w = fopen(filename_w, "rb")) == NULL)
	{
		printf("Can't Open %s\r\n", filename_w);
		exit(EXIT_FAILURE);
	}
	if ((fp_b = fopen(filename_b, "rb")) == NULL)
	{
		printf("Can't Open %s\r\n", filename_b);
		exit(EXIT_FAILURE);
	}
	for(int i =0;i<bias_len;i++)
	{
		wread = fread(dst+i*(weight_len/bias_len+1), sizeof(float) ,weight_len/bias_len,fp_w);
		if (wread == 0)
		{
			printf("Can't read %s!\r\n", filename_w);
			exit(EXIT_FAILURE);
		}
		bread = fread(dst+(i+1)*weight_len/bias_len+i,sizeof(float) ,1, fp_b);
		if (bread == 0)
		{
			printf("Can't read %s!\r\n", filename_b);
			exit(EXIT_FAILURE);
		}
	}


	fclose(fp_w);
	fclose(fp_b);
	return 0;
}
void print_val(int size,float pixel_in[])
{
	for(int i =0;i<size;i++)
	printf (" pixel_in[%d] = %f\n",i,pixel_in[i]);
}
void initPixelIn(float*pixel_in)
{
	 pixel_in[0] = 0.000000f;
	 pixel_in[1] = 0.000000f;
	 pixel_in[2] = 0.000000f;
	 pixel_in[3] = 0.000000f;
	 pixel_in[4] = 0.000000f;
	 pixel_in[5] = 0.000000f;
	 pixel_in[6] = 0.000000f;
	 pixel_in[7] = 0.000000f;
	 pixel_in[8] = 0.000000f;
	 pixel_in[9] = 0.000000f;
	 pixel_in[10] = 0.000000f;
	 pixel_in[11] = 0.000000f;
	 pixel_in[12] = -0.000008f;
	 pixel_in[13] = -0.000031f;
	 pixel_in[14] = -0.000014f;
	 pixel_in[15] = -0.000001f;
	 pixel_in[16] = 0.000000f;
	 pixel_in[17] = 0.000000f;
	 pixel_in[18] = 0.000000f;
	 pixel_in[19] = 0.000000f;
	 pixel_in[20] = 0.000000f;
	 pixel_in[21] = 0.000000f;
	 pixel_in[22] = 0.000000f;
	 pixel_in[23] = 0.000000f;
	 pixel_in[24] = 0.000000f;
	 pixel_in[25] = 0.000000f;
	 pixel_in[26] = 0.000000f;
	 pixel_in[27] = 0.000000f;
	 pixel_in[28] = 0.000000f;
	 pixel_in[29] = 0.000000f;
	 pixel_in[30] = 0.000000f;
	 pixel_in[31] = 0.000000f;
	 pixel_in[32] = -0.000001f;
	 pixel_in[33] = -0.000004f;
	 pixel_in[34] = -0.000036f;
	 pixel_in[35] = -0.000095f;
	 pixel_in[36] = -0.000171f;
	 pixel_in[37] = -0.000251f;
	 pixel_in[38] = -0.000471f;
	 pixel_in[39] = -0.000630f;
	 pixel_in[40] = -0.000683f;
	 pixel_in[41] = -0.000696f;
	 pixel_in[42] = -0.000742f;
	 pixel_in[43] = -0.000683f;
	 pixel_in[44] = -0.000733f;
	 pixel_in[45] = -0.000603f;
	 pixel_in[46] = -0.000393f;
	 pixel_in[47] = -0.000279f;
	 pixel_in[48] = -0.000211f;
	 pixel_in[49] = -0.000084f;
	 pixel_in[50] = -0.000040f;
	 pixel_in[51] = -0.000014f;
	 pixel_in[52] = 0.000000f;
	 pixel_in[53] = 0.000000f;
	 pixel_in[54] = 0.000000f;
	 pixel_in[55] = 0.000000f;
	 pixel_in[56] = 0.000000f;
	 pixel_in[57] = 0.000000f;
	 pixel_in[58] = -0.000004f;
	 pixel_in[59] = -0.000003f;
	 pixel_in[60] = -0.000027f;
	 pixel_in[61] = -0.000022f;
	 pixel_in[62] = -0.000185f;
	 pixel_in[63] = -0.000543f;
	 pixel_in[64] = -0.001036f;
	 pixel_in[65] = -0.001987f;
	 pixel_in[66] = -0.003399f;
	 pixel_in[67] = -0.005059f;
	 pixel_in[68] = -0.007335f;
	 pixel_in[69] = -0.009921f;
	 pixel_in[70] = -0.012555f;
	 pixel_in[71] = -0.014218f;
	 pixel_in[72] = -0.014596f;
	 pixel_in[73] = -0.013304f;
	 pixel_in[74] = -0.010992f;
	 pixel_in[75] = -0.008017f;
	 pixel_in[76] = -0.004714f;
	 pixel_in[77] = -0.002484f;
	 pixel_in[78] = -0.001161f;
	 pixel_in[79] = -0.000369f;
	 pixel_in[80] = -0.000138f;
	 pixel_in[81] = -0.000034f;
	 pixel_in[82] = 0.000000f;
	 pixel_in[83] = 0.000000f;
	 pixel_in[84] = 0.000000f;
	 pixel_in[85] = 0.000000f;
	 pixel_in[86] = -0.000013f;
	 pixel_in[87] = -0.000023f;
	 pixel_in[88] = -0.000047f;
	 pixel_in[89] = -0.000274f;
	 pixel_in[90] = -0.000832f;
	 pixel_in[91] = -0.002142f;
	 pixel_in[92] = -0.004527f;
	 pixel_in[93] = -0.008690f;
	 pixel_in[94] = -0.014273f;
	 pixel_in[95] = -0.021325f;
	 pixel_in[96] = -0.029047f;
	 pixel_in[97] = -0.038026f;
	 pixel_in[98] = -0.046600f;
	 pixel_in[99] = -0.051911f;
	 pixel_in[100] = -0.051469f;
	 pixel_in[101] = -0.046328f;
	 pixel_in[102] = -0.037426f;
	 pixel_in[103] = -0.026914f;
	 pixel_in[104] = -0.016446f;
	 pixel_in[105] = -0.008920f;
	 pixel_in[106] = -0.004161f;
	 pixel_in[107] = -0.001620f;
	 pixel_in[108] = -0.000636f;
	 pixel_in[109] = -0.000109f;
	 pixel_in[110] = -0.000011f;
	 pixel_in[111] = 0.000000f;
	 pixel_in[112] = 0.000000f;
	 pixel_in[113] = -0.000002f;
	 pixel_in[114] = -0.000020f;
	 pixel_in[115] = -0.000056f;
	 pixel_in[116] = -0.000317f;
	 pixel_in[117] = -0.001609f;
	 pixel_in[118] = -0.004091f;
	 pixel_in[119] = -0.009487f;
	 pixel_in[120] = -0.018728f;
	 pixel_in[121] = -0.032919f;
	 pixel_in[122] = -0.052197f;
	 pixel_in[123] = -0.076382f;
	 pixel_in[124] = -0.106026f;
	 pixel_in[125] = -0.138087f;
	 pixel_in[126] = -0.164082f;
	 pixel_in[127] = -0.177461f;
	 pixel_in[128] = -0.173878f;
	 pixel_in[129] = -0.153496f;
	 pixel_in[130] = -0.122856f;
	 pixel_in[131] = -0.089898f;
	 pixel_in[132] = -0.058161f;
	 pixel_in[133] = -0.033966f;
	 pixel_in[134] = -0.017835f;
	 pixel_in[135] = -0.008380f;
	 pixel_in[136] = -0.003384f;
	 pixel_in[137] = -0.000815f;
	 pixel_in[138] = -0.000116f;
	 pixel_in[139] = -0.000008f;
	 pixel_in[140] = 0.000000f;
	 pixel_in[141] = 0.000000f;
	 pixel_in[142] = -0.000040f;
	 pixel_in[143] = -0.000248f;
	 pixel_in[144] = -0.001551f;
	 pixel_in[145] = -0.005739f;
	 pixel_in[146] = -0.014070f;
	 pixel_in[147] = -0.028344f;
	 pixel_in[148] = -0.051048f;
	 pixel_in[149] = -0.083208f;
	 pixel_in[150] = -0.123531f;
	 pixel_in[151] = -0.173358f;
	 pixel_in[152] = -0.230995f;
	 pixel_in[153] = -0.289428f;
	 pixel_in[154] = -0.333736f;
	 pixel_in[155] = -0.355293f;
	 pixel_in[156] = -0.348721f;
	 pixel_in[157] = -0.314436f;
	 pixel_in[158] = -0.258599f;
	 pixel_in[159] = -0.195270f;
	 pixel_in[160] = -0.134705f;
	 pixel_in[161] = -0.084353f;
	 pixel_in[162] = -0.048589f;
	 pixel_in[163] = -0.026036f;
	 pixel_in[164] = -0.011736f;
	 pixel_in[165] = -0.003308f;
	 pixel_in[166] = -0.000555f;
	 pixel_in[167] = -0.000018f;
	 pixel_in[168] = 0.000000f;
	 pixel_in[169] = -0.000001f;
	 pixel_in[170] = -0.000108f;
	 pixel_in[171] = -0.000868f;
	 pixel_in[172] = -0.004390f;
	 pixel_in[173] = -0.012902f;
	 pixel_in[174] = -0.029163f;
	 pixel_in[175] = -0.055900f;
	 pixel_in[176] = -0.094658f;
	 pixel_in[177] = -0.146229f;
	 pixel_in[178] = -0.208296f;
	 pixel_in[179] = -0.278089f;
	 pixel_in[180] = -0.350112f;
	 pixel_in[181] = -0.416600f;
	 pixel_in[182] = -0.464730f;
	 pixel_in[183] = -0.486659f;
	 pixel_in[184] = -0.477299f;
	 pixel_in[185] = -0.439346f;
	 pixel_in[186] = -0.376895f;
	 pixel_in[187] = -0.294766f;
	 pixel_in[188] = -0.211910f;
	 pixel_in[189] = -0.138480f;
	 pixel_in[190] = -0.082321f;
	 pixel_in[191] = -0.044872f;
	 pixel_in[192] = -0.021128f;
	 pixel_in[193] = -0.007277f;
	 pixel_in[194] = -0.001462f;
	 pixel_in[195] = -0.000119f;
	 pixel_in[196] = -0.000003f;
	 pixel_in[197] = -0.000077f;
	 pixel_in[198] = -0.000422f;
	 pixel_in[199] = -0.002336f;
	 pixel_in[200] = -0.009068f;
	 pixel_in[201] = -0.023250f;
	 pixel_in[202] = 0.280643f;
	 pixel_in[203] = 0.637444f;
	 pixel_in[204] = 0.481197f;
	 pixel_in[205] = 0.380791f;
	 pixel_in[206] = -0.053979f;
	 pixel_in[207] = -0.227855f;
	 pixel_in[208] = -0.437567f;
	 pixel_in[209] = -0.490196f;
	 pixel_in[210] = -0.520624f;
	 pixel_in[211] = -0.530975f;
	 pixel_in[212] = -0.522897f;
	 pixel_in[213] = -0.496775f;
	 pixel_in[214] = -0.445281f;
	 pixel_in[215] = -0.367625f;
	 pixel_in[216] = -0.273639f;
	 pixel_in[217] = -0.183658f;
	 pixel_in[218] = -0.110368f;
	 pixel_in[219] = -0.059612f;
	 pixel_in[220] = -0.027583f;
	 pixel_in[221] = -0.010130f;
	 pixel_in[222] = -0.002012f;
	 pixel_in[223] = -0.000125f;
	 pixel_in[224] = -0.000016f;
	 pixel_in[225] = -0.000199f;
	 pixel_in[226] = -0.001292f;
	 pixel_in[227] = -0.005166f;
	 pixel_in[228] = -0.014699f;
	 pixel_in[229] = -0.033269f;
	 pixel_in[230] = 0.804635f;
	 pixel_in[231] = 0.880010f;
	 pixel_in[232] = 0.812039f;
	 pixel_in[233] = 0.728992f;
	 pixel_in[234] = 0.641995f;
	 pixel_in[235] = 0.519703f;
	 pixel_in[236] = 0.308096f;
	 pixel_in[237] = 0.292573f;
	 pixel_in[238] = 0.293968f;
	 pixel_in[239] = 0.296703f;
	 pixel_in[240] = 0.295176f;
	 pixel_in[241] = 0.297474f;
	 pixel_in[242] = 0.320545f;
	 pixel_in[243] = 0.381919f;
	 pixel_in[244] = 0.363459f;
	 pixel_in[245] = -0.003520f;
	 pixel_in[246] = -0.124748f;
	 pixel_in[247] = -0.064148f;
	 pixel_in[248] = -0.028179f;
	 pixel_in[249] = -0.010222f;
	 pixel_in[250] = -0.001889f;
	 pixel_in[251] = -0.000107f;
	 pixel_in[252] = -0.000019f;
	 pixel_in[253] = -0.000312f;
	 pixel_in[254] = -0.002008f;
	 pixel_in[255] = -0.006743f;
	 pixel_in[256] = -0.017435f;
	 pixel_in[257] = -0.038457f;
	 pixel_in[258] = 0.186171f;
	 pixel_in[259] = 0.311746f;
	 pixel_in[260] = 0.067840f;
	 pixel_in[261] = 0.140635f;
	 pixel_in[262] = 0.250829f;
	 pixel_in[263] = 0.456469f;
	 pixel_in[264] = 0.561617f;
	 pixel_in[265] = 0.472339f;
	 pixel_in[266] = 0.607658f;
	 pixel_in[267] = 0.606320f;
	 pixel_in[268] = 0.586929f;
	 pixel_in[269] = 0.545561f;
	 pixel_in[270] = 0.462438f;
	 pixel_in[271] = 0.607267f;
	 pixel_in[272] = 0.693959f;
	 pixel_in[273] = 0.342330f;
	 pixel_in[274] = -0.123327f;
	 pixel_in[275] = -0.060364f;
	 pixel_in[276] = -0.023377f;
	 pixel_in[277] = -0.007443f;
	 pixel_in[278] = -0.001380f;
	 pixel_in[279] = -0.000111f;
	 pixel_in[280] = -0.000026f;
	 pixel_in[281] = -0.000387f;
	 pixel_in[282] = -0.002051f;
	 pixel_in[283] = -0.006567f;
	 pixel_in[284] = -0.016820f;
	 pixel_in[285] = -0.038731f;
	 pixel_in[286] = -0.080546f;
	 pixel_in[287] = -0.145839f;
	 pixel_in[288] = -0.234177f;
	 pixel_in[289] = -0.327054f;
	 pixel_in[290] = -0.393043f;
	 pixel_in[291] = -0.337917f;
	 pixel_in[292] = -0.109381f;
	 pixel_in[293] = -0.270403f;
	 pixel_in[294] = -0.048717f;
	 pixel_in[295] = -0.068726f;
	 pixel_in[296] = -0.105367f;
	 pixel_in[297] = -0.178147f;
	 pixel_in[298] = -0.334436f;
	 pixel_in[299] = 0.555993f;
	 pixel_in[300] = 0.714317f;
	 pixel_in[301] = 0.226207f;
	 pixel_in[302] = -0.111679f;
	 pixel_in[303] = -0.052934f;
	 pixel_in[304] = -0.018041f;
	 pixel_in[305] = -0.004510f;
	 pixel_in[306] = -0.000870f;
	 pixel_in[307] = -0.000073f;
	 pixel_in[308] = -0.000023f;
	 pixel_in[309] = -0.000300f;
	 pixel_in[310] = -0.001651f;
	 pixel_in[311] = -0.005021f;
	 pixel_in[312] = -0.014298f;
	 pixel_in[313] = -0.037466f;
	 pixel_in[314] = -0.082875f;
	 pixel_in[315] = -0.156292f;
	 pixel_in[316] = -0.251330f;
	 pixel_in[317] = -0.341999f;
	 pixel_in[318] = -0.387375f;
	 pixel_in[319] = -0.372027f;
	 pixel_in[320] = -0.320328f;
	 pixel_in[321] = -0.287619f;
	 pixel_in[322] = -0.298608f;
	 pixel_in[323] = -0.335002f;
	 pixel_in[324] = -0.381540f;
	 pixel_in[325] = -0.421500f;
	 pixel_in[326] = -0.088272f;
	 pixel_in[327] = 0.643022f;
	 pixel_in[328] = 0.564924f;
	 pixel_in[329] = -0.096066f;
	 pixel_in[330] = -0.099377f;
	 pixel_in[331] = -0.049334f;
	 pixel_in[332] = -0.015647f;
	 pixel_in[333] = -0.002371f;
	 pixel_in[334] = -0.000488f;
	 pixel_in[335] = -0.000032f;
	 pixel_in[336] = -0.000015f;
	 pixel_in[337] = -0.000171f;
	 pixel_in[338] = -0.000949f;
	 pixel_in[339] = -0.003446f;
	 pixel_in[340] = -0.012035f;
	 pixel_in[341] = -0.037676f;
	 pixel_in[342] = -0.089325f;
	 pixel_in[343] = -0.170882f;
	 pixel_in[344] = -0.270476f;
	 pixel_in[345] = -0.353948f;
	 pixel_in[346] = -0.383897f;
	 pixel_in[347] = -0.357187f;
	 pixel_in[348] = -0.312575f;
	 pixel_in[349] = -0.311251f;
	 pixel_in[350] = -0.350348f;
	 pixel_in[351] = -0.398880f;
	 pixel_in[352] = -0.443286f;
	 pixel_in[353] = -0.374828f;
	 pixel_in[354] = 0.492444f;
	 pixel_in[355] = 0.668553f;
	 pixel_in[356] = 0.095737f;
	 pixel_in[357] = -0.150053f;
	 pixel_in[358] = -0.093095f;
	 pixel_in[359] = -0.049851f;
	 pixel_in[360] = -0.016842f;
	 pixel_in[361] = -0.001738f;
	 pixel_in[362] = -0.000313f;
	 pixel_in[363] = -0.000040f;
	 pixel_in[364] = -0.000002f;
	 pixel_in[365] = -0.000072f;
	 pixel_in[366] = -0.000481f;
	 pixel_in[367] = -0.002382f;
	 pixel_in[368] = -0.011442f;
	 pixel_in[369] = -0.041703f;
	 pixel_in[370] = -0.100211f;
	 pixel_in[371] = -0.186603f;
	 pixel_in[372] = -0.284832f;
	 pixel_in[373] = -0.359505f;
	 pixel_in[374] = -0.379955f;
	 pixel_in[375] = -0.357246f;
	 pixel_in[376] = -0.340656f;
	 pixel_in[377] = -0.380261f;
	 pixel_in[378] = -0.436752f;
	 pixel_in[379] = -0.486165f;
	 pixel_in[380] = -0.509045f;
	 pixel_in[381] = 0.009414f;
	 pixel_in[382] = 0.569097f;
	 pixel_in[383] = 0.615068f;
	 pixel_in[384] = -0.044023f;
	 pixel_in[385] = -0.145900f;
	 pixel_in[386] = -0.094011f;
	 pixel_in[387] = -0.053505f;
	 pixel_in[388] = -0.020011f;
	 pixel_in[389] = -0.002293f;
	 pixel_in[390] = -0.000325f;
	 pixel_in[391] = -0.000043f;
	 pixel_in[392] = -0.000007f;
	 pixel_in[393] = -0.000032f;
	 pixel_in[394] = -0.000212f;
	 pixel_in[395] = -0.001828f;
	 pixel_in[396] = -0.012022f;
	 pixel_in[397] = -0.048436f;
	 pixel_in[398] = -0.111875f;
	 pixel_in[399] = -0.198072f;
	 pixel_in[400] = -0.289218f;
	 pixel_in[401] = -0.354389f;
	 pixel_in[402] = -0.372851f;
	 pixel_in[403] = -0.365837f;
	 pixel_in[404] = -0.383643f;
	 pixel_in[405] = -0.452633f;
	 pixel_in[406] = -0.510852f;
	 pixel_in[407] = -0.547269f;
	 pixel_in[408] = -0.306277f;
	 pixel_in[409] = 0.474174f;
	 pixel_in[410] = 0.576492f;
	 pixel_in[411] = -0.068839f;
	 pixel_in[412] = -0.219987f;
	 pixel_in[413] = -0.152718f;
	 pixel_in[414] = -0.100147f;
	 pixel_in[415] = -0.057319f;
	 pixel_in[416] = -0.022438f;
	 pixel_in[417] = -0.003217f;
	 pixel_in[418] = -0.000363f;
	 pixel_in[419] = -0.000009f;
	 pixel_in[420] = -0.000003f;
	 pixel_in[421] = -0.000015f;
	 pixel_in[422] = -0.000177f;
	 pixel_in[423] = -0.001983f;
	 pixel_in[424] = -0.013963f;
	 pixel_in[425] = -0.056503f;
	 pixel_in[426] = -0.121523f;
	 pixel_in[427] = -0.200822f;
	 pixel_in[428] = -0.280159f;
	 pixel_in[429] = -0.336205f;
	 pixel_in[430] = -0.358357f;
	 pixel_in[431] = -0.369578f;
	 pixel_in[432] = -0.411949f;
	 pixel_in[433] = -0.483154f;
	 pixel_in[434] = -0.532115f;
	 pixel_in[435] = -0.545530f;
	 pixel_in[436] = 0.004688f;
	 pixel_in[437] = 0.519857f;
	 pixel_in[438] = 0.335920f;
	 pixel_in[439] = -0.287762f;
	 pixel_in[440] = -0.228560f;
	 pixel_in[441] = -0.161768f;
	 pixel_in[442] = -0.105804f;
	 pixel_in[443] = -0.058395f;
	 pixel_in[444] = -0.022856f;
	 pixel_in[445] = -0.004234f;
	 pixel_in[446] = -0.000581f;
	 pixel_in[447] = -0.000042f;
	 pixel_in[448] = -0.000003f;
	 pixel_in[449] = -0.000016f;
	 pixel_in[450] = -0.000292f;
	 pixel_in[451] = -0.002443f;
	 pixel_in[452] = -0.017529f;
	 pixel_in[453] = -0.064819f;
	 pixel_in[454] = -0.127666f;
	 pixel_in[455] = -0.195862f;
	 pixel_in[456] = -0.260046f;
	 pixel_in[457] = -0.305436f;
	 pixel_in[458] = -0.328263f;
	 pixel_in[459] = -0.350778f;
	 pixel_in[460] = -0.396612f;
	 pixel_in[461] = -0.454343f;
	 pixel_in[462] = -0.495974f;
	 pixel_in[463] = -0.464418f;
	 pixel_in[464] = 0.329189f;
	 pixel_in[465] = 0.536400f;
	 pixel_in[466] = -0.146558f;
	 pixel_in[467] = -0.303352f;
	 pixel_in[468] = -0.233754f;
	 pixel_in[469] = -0.164864f;
	 pixel_in[470] = -0.104819f;
	 pixel_in[471] = -0.055855f;
	 pixel_in[472] = -0.022022f;
	 pixel_in[473] = -0.005047f;
	 pixel_in[474] = -0.000751f;
	 pixel_in[475] = -0.000048f;
	 pixel_in[476] = 0.000000f;
	 pixel_in[477] = -0.000029f;
	 pixel_in[478] = -0.000440f;
	 pixel_in[479] = -0.003739f;
	 pixel_in[480] = -0.023342f;
	 pixel_in[481] = -0.072645f;
	 pixel_in[482] = -0.131181f;
	 pixel_in[483] = -0.188927f;
	 pixel_in[484] = -0.237100f;
	 pixel_in[485] = -0.271443f;
	 pixel_in[486] = -0.292868f;
	 pixel_in[487] = -0.316615f;
	 pixel_in[488] = -0.351320f;
	 pixel_in[489] = -0.399806f;
	 pixel_in[490] = -0.441633f;
	 pixel_in[491] = 0.041424f;
	 pixel_in[492] = 0.555903f;
	 pixel_in[493] = 0.303827f;
	 pixel_in[494] = -0.363242f;
	 pixel_in[495] = -0.302986f;
	 pixel_in[496] = -0.232661f;
	 pixel_in[497] = -0.160033f;
	 pixel_in[498] = -0.097815f;
	 pixel_in[499] = -0.050333f;
	 pixel_in[500] = -0.020222f;
	 pixel_in[501] = -0.005556f;
	 pixel_in[502] = -0.000824f;
	 pixel_in[503] = -0.000035f;
	 pixel_in[504] = -0.000007f;
	 pixel_in[505] = -0.000021f;
	 pixel_in[506] = -0.000708f;
	 pixel_in[507] = -0.005961f;
	 pixel_in[508] = -0.029888f;
	 pixel_in[509] = -0.080070f;
	 pixel_in[510] = -0.136905f;
	 pixel_in[511] = -0.188951f;
	 pixel_in[512] = -0.228537f;
	 pixel_in[513] = -0.258802f;
	 pixel_in[514] = -0.281359f;
	 pixel_in[515] = -0.300327f;
	 pixel_in[516] = -0.325969f;
	 pixel_in[517] = -0.373059f;
	 pixel_in[518] = -0.123754f;
	 pixel_in[519] = 0.544308f;
	 pixel_in[520] = 0.504518f;
	 pixel_in[521] = -0.188307f;
	 pixel_in[522] = -0.367132f;
	 pixel_in[523] = -0.300500f;
	 pixel_in[524] = -0.222357f;
	 pixel_in[525] = -0.148088f;
	 pixel_in[526] = -0.088418f;
	 pixel_in[527] = -0.044637f;
	 pixel_in[528] = -0.017957f;
	 pixel_in[529] = -0.005092f;
	 pixel_in[530] = -0.000604f;
	 pixel_in[531] = -0.000048f;
	 pixel_in[532] = -0.000001f;
	 pixel_in[533] = -0.000048f;
	 pixel_in[534] = -0.001123f;
	 pixel_in[535] = -0.008015f;
	 pixel_in[536] = -0.034210f;
	 pixel_in[537] = -0.085233f;
	 pixel_in[538] = -0.144444f;
	 pixel_in[539] = -0.199918f;
	 pixel_in[540] = -0.244510f;
	 pixel_in[541] = -0.279496f;
	 pixel_in[542] = -0.305413f;
	 pixel_in[543] = -0.324058f;
	 pixel_in[544] = -0.352813f;
	 pixel_in[545] = -0.323162f;
	 pixel_in[546] = 0.425704f;
	 pixel_in[547] = 0.534104f;
	 pixel_in[548] = 0.196374f;
	 pixel_in[549] = -0.421304f;
	 pixel_in[550] = -0.361872f;
	 pixel_in[551] = -0.281895f;
	 pixel_in[552] = -0.199217f;
	 pixel_in[553] = -0.128212f;
	 pixel_in[554] = -0.073619f;
	 pixel_in[555] = -0.035907f;
	 pixel_in[556] = -0.014275f;
	 pixel_in[557] = -0.004190f;
	 pixel_in[558] = -0.000575f;
	 pixel_in[559] = -0.000027f;
	 pixel_in[560] = 0.000000f;
	 pixel_in[561] = -0.000060f;
	 pixel_in[562] = -0.001302f;
	 pixel_in[563] = -0.008846f;
	 pixel_in[564] = -0.033385f;
	 pixel_in[565] = -0.081153f;
	 pixel_in[566] = -0.145432f;
	 pixel_in[567] = -0.210957f;
	 pixel_in[568] = -0.270076f;
	 pixel_in[569] = -0.318273f;
	 pixel_in[570] = -0.354533f;
	 pixel_in[571] = -0.383868f;
	 pixel_in[572] = -0.406802f;
	 pixel_in[573] = 0.335923f;
	 pixel_in[574] = 0.506069f;
	 pixel_in[575] = 0.366448f;
	 pixel_in[576] = -0.326338f;
	 pixel_in[577] = -0.407082f;
	 pixel_in[578] = -0.328927f;
	 pixel_in[579] = -0.240140f;
	 pixel_in[580] = -0.160598f;
	 pixel_in[581] = -0.097820f;
	 pixel_in[582] = -0.053446f;
	 pixel_in[583] = -0.025637f;
	 pixel_in[584] = -0.010643f;
	 pixel_in[585] = -0.002938f;
	 pixel_in[586] = -0.000438f;
	 pixel_in[587] = -0.000007f;
	 pixel_in[588] = -0.000002f;
	 pixel_in[589] = -0.000050f;
	 pixel_in[590] = -0.001115f;
	 pixel_in[591] = -0.007213f;
	 pixel_in[592] = -0.026010f;
	 pixel_in[593] = -0.066276f;
	 pixel_in[594] = -0.128665f;
	 pixel_in[595] = -0.202239f;
	 pixel_in[596] = -0.276172f;
	 pixel_in[597] = -0.342165f;
	 pixel_in[598] = -0.396020f;
	 pixel_in[599] = -0.441003f;
	 pixel_in[600] = -0.331741f;
	 pixel_in[601] = 0.484815f;
	 pixel_in[602] = 0.479040f;
	 pixel_in[603] = -0.187718f;
	 pixel_in[604] = -0.431474f;
	 pixel_in[605] = -0.350847f;
	 pixel_in[606] = -0.261142f;
	 pixel_in[607] = -0.178813f;
	 pixel_in[608] = -0.111987f;
	 pixel_in[609] = -0.063905f;
	 pixel_in[610] = -0.033378f;
	 pixel_in[611] = -0.016114f;
	 pixel_in[612] = -0.006678f;
	 pixel_in[613] = -0.001740f;
	 pixel_in[614] = -0.000232f;
	 pixel_in[615] = -0.000003f;
	 pixel_in[616] = -0.000002f;
	 pixel_in[617] = -0.000004f;
	 pixel_in[618] = -0.000734f;

	 pixel_in[619] = -0.004267f;
	 pixel_in[620] = -0.015468f;
	 pixel_in[621] = -0.042531f;
	 pixel_in[622] = -0.091728f;
	 pixel_in[623] = -0.159367f;
	 pixel_in[624] = -0.239095f;
	 pixel_in[625] = -0.317668f;
	 pixel_in[626] = -0.388672f;
	 pixel_in[627] = -0.321963f;
	 pixel_in[628] = 0.397944f;
	 pixel_in[629] = 0.504697f;
	 pixel_in[630] = -0.022014f;
	 pixel_in[631] = -0.416415f;
	 pixel_in[632] = -0.343947f;
	 pixel_in[633] = -0.258718f;
	 pixel_in[634] = -0.177779f;
	 pixel_in[635] = -0.112670f;
	 pixel_in[636] = -0.066288f;
	 pixel_in[637] = -0.035927f;
	 pixel_in[638] = -0.018467f;
	 pixel_in[639] = -0.008726f;
	 pixel_in[640] = -0.003275f;
	 pixel_in[641] = -0.000742f;
	 pixel_in[642] = -0.000070f;
	 pixel_in[643] = -0.000005f;
	 pixel_in[644] = 0.000000f;
	 pixel_in[645] = 0.000000f;
	 pixel_in[646] = -0.000252f;
	 pixel_in[647] = -0.001642f;
	 pixel_in[648] = -0.006795f;
	 pixel_in[649] = -0.019666f;
	 pixel_in[650] = -0.047180f;
	 pixel_in[651] = -0.093883f;
	 pixel_in[652] = -0.157869f;
	 pixel_in[653] = -0.230951f;
	 pixel_in[654] = -0.303015f;
	 pixel_in[655] = 0.160658f;
	 pixel_in[656] = 0.605081f;
	 pixel_in[657] = 0.607197f;
	 pixel_in[658] = -0.151342f;
	 pixel_in[659] = -0.296406f;
	 pixel_in[660] = -0.225828f;
	 pixel_in[661] = -0.157623f;
	 pixel_in[662] = -0.099989f;
	 pixel_in[663] = -0.059764f;
	 pixel_in[664] = -0.033426f;
	 pixel_in[665] = -0.017330f;
	 pixel_in[666] = -0.008647f;
	 pixel_in[667] = -0.003850f;
	 pixel_in[668] = -0.001217f;
	 pixel_in[669] = -0.000227f;
	 pixel_in[670] = -0.000038f;
	 pixel_in[671] = 0.000000f;
	 pixel_in[672] = 0.000000f;
	 pixel_in[673] = 0.000000f;
	 pixel_in[674] = -0.000062f;
	 pixel_in[675] = -0.000479f;
	 pixel_in[676] = -0.002132f;
	 pixel_in[677] = -0.006278f;
	 pixel_in[678] = -0.016484f;
	 pixel_in[679] = -0.035857f;
	 pixel_in[680] = -0.065991f;
	 pixel_in[681] = -0.106184f;
	 pixel_in[682] = 0.089791f;
	 pixel_in[683] = 0.764534f;
	 pixel_in[684] = 0.793691f;
	 pixel_in[685] = 0.796226f;
	 pixel_in[686] = 0.025735f;
	 pixel_in[687] = -0.144096f;
	 pixel_in[688] = -0.107615f;
	 pixel_in[689] = -0.074936f;
	 pixel_in[690] = -0.047506f;
	 pixel_in[691] = -0.028294f;
	 pixel_in[692] = -0.015527f;
	 pixel_in[693] = -0.007816f;
	 pixel_in[694] = -0.003730f;
	 pixel_in[695] = -0.001567f;
	 pixel_in[696] = -0.000399f;
	 pixel_in[697] = -0.000087f;
	 pixel_in[698] = -0.000008f;
	 pixel_in[699] = 0.000000f;
	 pixel_in[700] = 0.000000f;
	 pixel_in[701] = 0.000000f;
	 pixel_in[702] = -0.000006f;
	 pixel_in[703] = -0.000070f;
	 pixel_in[704] = -0.000501f;
	 pixel_in[705] = -0.001861f;
	 pixel_in[706] = -0.005512f;
	 pixel_in[707] = -0.012474f;
	 pixel_in[708] = -0.024092f;
	 pixel_in[709] = -0.038544f;
	 pixel_in[710] = 0.420120f;
	 pixel_in[711] = 0.930516f;
	 pixel_in[712] = 0.925098f;
	 pixel_in[713] = 0.789116f;
	 pixel_in[714] = 0.094872f;
	 pixel_in[715] = -0.051465f;
	 pixel_in[716] = -0.041169f;
	 pixel_in[717] = -0.030554f;
	 pixel_in[718] = -0.020478f;
	 pixel_in[719] = -0.012401f;
	 pixel_in[720] = -0.006633f;
	 pixel_in[721] = -0.003237f;
	 pixel_in[722] = -0.001453f;
	 pixel_in[723] = -0.000548f;
	 pixel_in[724] = -0.000123f;
	 pixel_in[725] = -0.000014f;
	 pixel_in[726] = -0.000007f;
	 pixel_in[727] = 0.000000f;
	 pixel_in[728] = 0.000000f;
	 pixel_in[729] = 0.000000f;
	 pixel_in[730] = 0.000000f;
	 pixel_in[731] = -0.000002f;
	 pixel_in[732] = -0.000139f;
	 pixel_in[733] = -0.000640f;
	 pixel_in[734] = -0.002111f;
	 pixel_in[735] = -0.004703f;
	 pixel_in[736] = -0.009083f;
	 pixel_in[737] = -0.013770f;
	 pixel_in[738] = 0.455489f;
	 pixel_in[739] = 0.972627f;
	 pixel_in[740] = 0.786491f;
	 pixel_in[741] = 0.046042f;
	 pixel_in[742] = -0.021845f;
	 pixel_in[743] = -0.017454f;
	 pixel_in[744] = -0.013862f;
	 pixel_in[745] = -0.010164f;
	 pixel_in[746] = -0.006671f;
	 pixel_in[747] = -0.003955f;
	 pixel_in[748] = -0.002119f;
	 pixel_in[749] = -0.000935f;
	 pixel_in[750] = -0.000295f;
	 pixel_in[751] = -0.000063f;
	 pixel_in[752] = -0.000002f;
	 pixel_in[753] = -0.000004f;
	 pixel_in[754] = 0.000000f;
	 pixel_in[755] = 0.000000f;
	 pixel_in[756] = 0.000000f;
	 pixel_in[757] = 0.000000f;
	 pixel_in[758] = 0.000000f;
	 pixel_in[759] = 0.000000f;
	 pixel_in[760] = -0.000010f;
	 pixel_in[761] = -0.000061f;
	 pixel_in[762] = -0.000163f;
	 pixel_in[763] = -0.000350f;
	 pixel_in[764] = -0.000503f;
	 pixel_in[765] = -0.000772f;
	 pixel_in[766] = -0.001318f;
	 pixel_in[767] = -0.001686f;
	 pixel_in[768] = -0.002063f;
	 pixel_in[769] = -0.002316f;
	 pixel_in[770] = -0.002698f;
	 pixel_in[771] = -0.002322f;
	 pixel_in[772] = -0.001893f;
	 pixel_in[773] = -0.001347f;
	 pixel_in[774] = -0.000786f;
	 pixel_in[775] = -0.000348f;
	 pixel_in[776] = -0.000179f;
	 pixel_in[777] = -0.000076f;
	 pixel_in[778] = -0.000059f;
	 pixel_in[779] = -0.000008f;
	 pixel_in[780] = 0.000000f;
	 pixel_in[781] = 0.000000f;
	 pixel_in[782] = 0.000000f;
	 pixel_in[783] = 0.000000f;
}
