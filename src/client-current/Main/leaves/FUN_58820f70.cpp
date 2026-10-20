// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58820F70 .. +0x3B bytes.
extern "C" __declspec(naked) void FUN_58820f70() {
    __asm {
        cmp dword ptr [esp + 8], 2
        ; Exact mapped bytes 75 2F: jne 0x58820fa6
        __asm _emit 0x75
        __asm _emit 0x2f
        mov eax, dword ptr [esp + 4]
        cmp eax, dword ptr [ecx + 0c84h]
        ; Exact mapped bytes 75 0A: jne 0x58820f8d
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 78 FF FF FF: call 0x58820f00
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [ecx + 0c88h]
        ; Exact mapped bytes 75 11: jne 0x58820fa6
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes A1 B4 45 A2 58: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xa1
        __asm _emit 0xb4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [eax + 0d8h]
        ; Exact mapped bytes E8 7A 98 02 00: call 0x5884a820
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
