#ifndef IoP_CHAINPARAMSSEEDS_H
#define IoP_CHAINPARAMSSEEDS_H
/**
 * List of fixed seed nodes for the IoP network
 * AUTOGENERATED by contrib/seeds/generate-seeds.py
 *
 * Each line contains a 16-byte IPv6 address and a port.
 * IPv4 as well as onion addresses are wrapped inside a IPv6 address accordingly.
 */
static SeedSpec6 pnSeed6_main[] = {
    // NOTE IPv4 nodes
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0x9b,0x33,0xef}, 4877}, // ham1.fermat.cloud: 104.155.51.239
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xc7,0x7e,0xeb}, 4877}, // ham2.fermat.cloud: 104.199.126.235
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x82,0xd3,0x78,0xed}, 4877}, // ham3.fermat.cloud: 130.211.120.237
	{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xc7,0xdb,0x2d}, 4877}, // ham4.fermat.cloud: 104.199.219.45
	{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xc4,0x39,0x22}, 4877}, // ham5.fermat.cloud: 104.196.57.34
    // NOTE IPv6 nodes
    // {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xb3,0xd1,0xf8,0xbe,0xa7,0x6b,0x46,0xbe,0xe8,0x84}, 4877},
};

static SeedSpec6 pnSeed6_test[] = {
    {{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xc7,0xdb,0x2d}, 7475}, // ham4.fermat.cloud: 104.199.219.45
	{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xc4,0x39,0x22}, 7475}, // ham5.fermat.cloud: 104.196.57.34
	{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xc7,0x76,0xdf}, 7475}, // ham6.fermat.cloud: 104.199.118.223
	{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xc4,0xa1,0x10}, 7475}, // ham7.fermat.cloud: 104.196.161.16
	{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x68,0xc7,0xc2,0xc3}, 7475}, // ham8.fermat.cloud: 104.199.194.195
	// NOTE IPv6 nodes
	// {{0xfd,0x87,0xd8,0x7e,0xeb,0x43,0xb3,0xd1,0xf8,0xbe,0xa7,0x6b,0x46,0xbe,0xe8,0x84}, 4877},
};
#endif // IoP_CHAINPARAMSSEEDS_H
