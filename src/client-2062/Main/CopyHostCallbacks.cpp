// Reconstructed raw layout for the host callback table consumed by Main.dll.
// Member names describe observed offsets only; callback semantics are unknown.
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;

struct HostCallbacks {
    U32 dwords_00_48[19];
    U8 bytes_4c_63[24];
    U32 dwords_64_70[4];
    U16 words_74_82[8];
    U32 dwords_84_88[2];
    U8 unknown_8c_1cb[0x140];
    U32 dword_1cc;
};

typedef char HostCallbacksMustReachOffset1cc[
    (sizeof(HostCallbacks) == 0x1d0) ? 1 : -1
];

#define STORE_U32(address, value) \
    (*reinterpret_cast<volatile U32*>(address) = (value))
#define STORE_U16(address, value) \
    (*reinterpret_cast<volatile U16*>(address) = (value))
#define STORE_U8(address, value) \
    (*reinterpret_cast<volatile U8*>(address) = (value))

int __cdecl CopyHostCallbacks(void* rawCallbacks)
{
    const HostCallbacks* callbacks = static_cast<const HostCallbacks*>(rawCallbacks);

    STORE_U32(0x101c92dc, callbacks->dwords_00_48[0]);
    STORE_U32(0x101c92d8, callbacks->dwords_00_48[1]);
    STORE_U32(0x101acda8, callbacks->dwords_00_48[2]);
    STORE_U32(0x101c9318, callbacks->dwords_00_48[3]);
    STORE_U32(0x101c931c, callbacks->dwords_00_48[4]);
    STORE_U32(0x101c9320, callbacks->dwords_00_48[5]);
    STORE_U32(0x101c9348, callbacks->dwords_00_48[6]);
    STORE_U32(0x101c934c, callbacks->dwords_00_48[7]);
    STORE_U32(0x101c9344, callbacks->dwords_00_48[8]);
    STORE_U32(0x101c9350, callbacks->dwords_00_48[9]);
    STORE_U32(0x101c9354, callbacks->dwords_00_48[10]);
    STORE_U32(0x101c9358, callbacks->dwords_00_48[11]);
    STORE_U32(0x101c9328, callbacks->dwords_00_48[12]);
    STORE_U32(0x101c932c, callbacks->dwords_00_48[13]);
    STORE_U32(0x101acdac, callbacks->dwords_00_48[14]);
    STORE_U32(0x101acdb0, callbacks->dwords_00_48[15]);
    STORE_U32(0x101acdb4, callbacks->dwords_00_48[16]);
    STORE_U32(0x101acdb8, callbacks->dwords_00_48[17]);
    STORE_U32(0x101acdbc, callbacks->dwords_00_48[18]);

    STORE_U8(0x101c9310, callbacks->bytes_4c_63[0]);
    STORE_U8(0x101c9311, callbacks->bytes_4c_63[1]);
    STORE_U8(0x101c9312, callbacks->bytes_4c_63[2]);
    STORE_U8(0x101c9313, callbacks->bytes_4c_63[3]);
    STORE_U8(0x101c9314, callbacks->bytes_4c_63[4]);
    STORE_U8(0x101c9315, callbacks->bytes_4c_63[5]);
    STORE_U8(0x101c9316, callbacks->bytes_4c_63[6]);
    STORE_U8(0x101c9317, callbacks->bytes_4c_63[7]);
    STORE_U8(0x101c9308, callbacks->bytes_4c_63[8]);
    STORE_U8(0x101c9309, callbacks->bytes_4c_63[9]);
    STORE_U8(0x101c930a, callbacks->bytes_4c_63[10]);
    STORE_U8(0x101c930b, callbacks->bytes_4c_63[11]);
    STORE_U8(0x101c930c, callbacks->bytes_4c_63[12]);
    STORE_U8(0x101c930d, callbacks->bytes_4c_63[13]);
    STORE_U8(0x101c930e, callbacks->bytes_4c_63[14]);
    STORE_U8(0x101c930f, callbacks->bytes_4c_63[15]);
    STORE_U8(0x101c9300, callbacks->bytes_4c_63[16]);
    STORE_U8(0x101c9301, callbacks->bytes_4c_63[17]);
    STORE_U8(0x101c9302, callbacks->bytes_4c_63[18]);
    STORE_U8(0x101c9303, callbacks->bytes_4c_63[19]);
    STORE_U8(0x101c9304, callbacks->bytes_4c_63[20]);
    STORE_U8(0x101c9305, callbacks->bytes_4c_63[21]);
    STORE_U8(0x101c9306, callbacks->bytes_4c_63[22]);
    STORE_U8(0x101c9307, callbacks->bytes_4c_63[23]);

    STORE_U32(0x101c92f8, callbacks->dwords_64_70[0]);
    STORE_U32(0x101c92fc, callbacks->dwords_64_70[1]);
    STORE_U32(0x101c92f0, callbacks->dwords_64_70[2]);
    STORE_U32(0x101c92f4, callbacks->dwords_64_70[3]);

    STORE_U16(0x101c92e8, callbacks->words_74_82[0]);
    STORE_U16(0x101c92ea, callbacks->words_74_82[1]);
    STORE_U16(0x101c92ec, callbacks->words_74_82[2]);
    STORE_U16(0x101c92ee, callbacks->words_74_82[3]);
    STORE_U16(0x101c92e0, callbacks->words_74_82[4]);
    STORE_U16(0x101c92e2, callbacks->words_74_82[5]);
    STORE_U16(0x101c92e4, callbacks->words_74_82[6]);
    STORE_U16(0x101c92e6, callbacks->words_74_82[7]);

    STORE_U32(0x101c9334, callbacks->dwords_84_88[0]);
    STORE_U32(0x101c9338, callbacks->dwords_84_88[1]);
    STORE_U32(0x101c92d4, callbacks->dword_1cc);
    return 1;
}

#undef STORE_U8
#undef STORE_U16
#undef STORE_U32
