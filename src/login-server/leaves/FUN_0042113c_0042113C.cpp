// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042113C .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_0042113c_0042113C() {
    __asm {
        push esi
        mov esi, dword ptr [esp + 8]
        test esi, esi
        ; Exact mapped bytes 74 1E: je 0x421163
        __asm _emit 0x74
        __asm _emit 0x1e
        push esi
        ; Exact mapped bytes E8 F5 D9 FF FF: call 0x41eb40
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        inc eax
        push eax
        ; Exact mapped bytes E8 92 E2 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 0B: je 0x421163
        __asm _emit 0x74
        __asm _emit 0x0b
        push esi
        push eax
        ; Exact mapped bytes E8 21 50 00 00: call 0x426180
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        pop esi
        ret
        xor eax, eax
        pop esi
        ret
    }
}
