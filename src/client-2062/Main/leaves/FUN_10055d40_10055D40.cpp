// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10055D40 .. +0x42 bytes.
extern "C" __declspec(naked) void FUN_10055d40_10055D40() {
    __asm {
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        test eax, eax
        mov dword ptr [esi + 6ch], eax
        ; Exact mapped bytes 74 0F: je 0x10055d5d
        __asm _emit 0x74
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 57 71 06 00: call 0x100bceb0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x71
        __asm _emit 0x06
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 14 57 1C 10: mov ecx, dword ptr [0x101c5714]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x14
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        ; Exact mapped bytes E8 56 1D 06 00: call 0x100b7ac0
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 86 18 01 00 00 00 00: mov word ptr [esi + 0x118], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 18 57 1C 10: mov ecx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes E8 32 6F 06 00: call 0x100bccb0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x6f
        __asm _emit 0x06
        __asm _emit 0x00
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
