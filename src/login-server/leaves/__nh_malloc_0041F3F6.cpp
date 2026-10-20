// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041F3F6 .. +0x2C bytes.
extern "C" __declspec(naked) void __nh_malloc_0041F3F6() {
    __asm {
        cmp dword ptr [esp + 4], -20h
        ; Exact mapped bytes 77 22: ja 0x41f41f
        __asm _emit 0x77
        __asm _emit 0x22
        push dword ptr [esp + 4]
        ; Exact mapped bytes E8 1C 00 00 00: call 0x41f422
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 16: jne 0x41f421
        __asm _emit 0x75
        __asm _emit 0x16
        cmp dword ptr [esp + 8], eax
        ; Exact mapped bytes 74 10: je 0x41f421
        __asm _emit 0x74
        __asm _emit 0x10
        push dword ptr [esp + 4]
        ; Exact mapped bytes E8 62 3F 00 00: call 0x42337c
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x3f
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 DE: jne 0x41f3fd
        __asm _emit 0x75
        __asm _emit 0xde
        xor eax, eax
        ret
    }
}
