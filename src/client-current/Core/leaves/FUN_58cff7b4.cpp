// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58CFF7B4 .. +0x1D bytes.
extern "C" __declspec(naked) void FUN_58cff7b4() {
    __asm {
        ; Exact mapped bytes 0F 84 55 7A E0 FF: je 0x58b0720f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x7a
        __asm _emit 0xe0
        __asm _emit 0xff
        ; Exact mapped bytes 88 14 03: mov byte ptr [ebx + eax], dl
        __asm _emit 0x88
        __asm _emit 0x14
        __asm _emit 0x03
        ; Exact mapped bytes 66 0F CA: bswap dx
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xca
        ; Exact mapped bytes 0F BF D2: movsx edx, dx
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd2
        ; Exact mapped bytes BA 71 44 16 07: mov edx, 0x7164471
        __asm _emit 0xba
        __asm _emit 0x71
        __asm _emit 0x44
        __asm _emit 0x16
        __asm _emit 0x07
        ; Exact mapped bytes 8B 55 08: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0x08
        ; Exact mapped bytes 42: inc edx
        __asm _emit 0x42
        ; Exact mapped bytes E9 CE C4 26 00: jmp 0x58f6bc9f
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0xc4
        __asm _emit 0x26
        __asm _emit 0x00
    }
}
