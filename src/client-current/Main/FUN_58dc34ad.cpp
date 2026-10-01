// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58DC34AD .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58dc34ad() {
    __asm {
        ; Exact mapped bytes B9 40 00 00 00: mov ecx, 0x40
        __asm _emit 0xb9
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F C8: bswap eax
        __asm _emit 0x0f
        __asm _emit 0xc8
        ; Exact mapped bytes 8D 44 27 80: lea eax, [edi - 0x80]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x27
        __asm _emit 0x80
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes 25 FC FF FF FF: and eax, 0xfffffffc
        __asm _emit 0x25
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 85 E1: test ecx, esp
        __asm _emit 0x85
        __asm _emit 0xe1
        ; Exact mapped bytes 2B C1: sub eax, ecx
        __asm _emit 0x2b
        __asm _emit 0xc1
        ; Exact mapped bytes E9 E4 E4 E6 FF: jmp 0x58c319ab
        __asm _emit 0xe9
        __asm _emit 0xe4
        __asm _emit 0xe4
        __asm _emit 0xe6
        __asm _emit 0xff
    }
}
