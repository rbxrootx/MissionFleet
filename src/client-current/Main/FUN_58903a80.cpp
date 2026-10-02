// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 37 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58903A80 .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_58903a80_segment_00() {
    __asm {
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [esi], 589a2520h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x58903aa0
        __asm _emit 0x74
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 AC 91 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [esi + 10h], 0
        mov eax, dword ptr [esi + 14h]
        test eax, eax
    }
}
