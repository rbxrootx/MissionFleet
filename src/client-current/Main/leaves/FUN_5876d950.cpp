// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876D950 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_5876d950() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes E8 78 8A 04 00: call 0x587b63d0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x8a
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, 0fffeh
        ; Exact mapped bytes 66 21 46 24: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        push 100h
        mov ecx, esi
        ; Exact mapped bytes E8 6E 53 19 00: call 0x58902ce0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x53
        __asm _emit 0x19
        __asm _emit 0x00
        pop esi
        ret
    }
}
