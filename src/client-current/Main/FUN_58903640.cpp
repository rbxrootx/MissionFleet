// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 31 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903640 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_58903640_segment_00() {
    __asm {
        test byte ptr [esp + 4], 1
        push esi
        mov esi, ecx
        mov dword ptr [esi], 589a2500h
        ; Exact mapped bytes 74 09: je 0x58903659
        __asm _emit 0x74
        __asm _emit 0x09
        push esi
        ; Exact mapped bytes E8 EC 95 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov eax, esi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
