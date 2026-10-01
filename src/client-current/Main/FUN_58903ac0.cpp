// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903AC0 .. +0x15 bytes.
extern "C" __declspec(naked) void FUN_58903ac0() {
    __asm {
        mov dword ptr [ecx], 589a2528h
        mov ecx, dword ptr [ecx + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 74 07: je 0x58903ad4
        __asm _emit 0x74
        __asm _emit 0x07
        push ecx
        ; Exact mapped bytes E8 C3 94 07 00: call 0x5897cf96
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x94
        __asm _emit 0x07
        __asm _emit 0x00
        pop ecx
        ret
    }
}
