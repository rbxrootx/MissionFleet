// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58C3A998 .. +0x1A bytes.
extern "C" __declspec(naked) void FUN_58c3a998() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8A CF: mov cl, bh
        __asm _emit 0x8a
        __asm _emit 0xcf
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 66 BE 5B 10: mov si, 0x105b
        __asm _emit 0x66
        __asm _emit 0xbe
        __asm _emit 0x5b
        __asm _emit 0x10
        ; Exact mapped bytes 0F BF CD: movsx ecx, bp
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcd
        ; Exact mapped bytes 0F C9: bswap ecx
        __asm _emit 0x0f
        __asm _emit 0xc9
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 0F BF CF: movsx ecx, di
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xcf
        ; Exact mapped bytes 66 F7 D6: not si
        __asm _emit 0x66
        __asm _emit 0xf7
        __asm _emit 0xd6
        ; Exact mapped bytes E9 43 B9 FB FF: jmp 0x58bf62f5
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xb9
        __asm _emit 0xfb
        __asm _emit 0xff
    }
}
