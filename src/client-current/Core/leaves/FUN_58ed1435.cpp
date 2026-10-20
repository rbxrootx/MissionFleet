// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58ED1435 .. +0x17 bytes.
extern "C" __declspec(naked) void FUN_58ed1435() {
    __asm {
        ; Exact mapped bytes 89 55 F0: mov dword ptr [ebp - 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf0
        ; Exact mapped bytes F5: cmc
        __asm _emit 0xf5
        ; Exact mapped bytes 89 75 F8: mov dword ptr [ebp - 8], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xf8
        ; Exact mapped bytes 66 3B E3: cmp sp, bx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xe3
        ; Exact mapped bytes 85 C2: test edx, eax
        __asm _emit 0x85
        __asm _emit 0xc2
        ; Exact mapped bytes 81 F9 FF FF 00 00: cmp ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 4B 6F C5 FF: jmp 0x58b28397
        __asm _emit 0xe9
        __asm _emit 0x4b
        __asm _emit 0x6f
        __asm _emit 0xc5
        __asm _emit 0xff
    }
}
