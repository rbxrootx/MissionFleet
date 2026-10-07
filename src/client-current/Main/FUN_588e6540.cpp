// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 39 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E6540 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_588e6540_segment_00() {
    __asm {
        ; Exact mapped bytes 83 B9 DC 0C 00 00 00: cmp dword ptr [ecx + 0xcdc], 0
        __asm _emit 0x83
        __asm _emit 0xb9
        __asm _emit 0xdc
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 1D: je 0x588e6566
        __asm _emit 0x74
        __asm _emit 0x1d
        ; Exact mapped bytes 8B 81 C0 0C 00 00: mov eax, dword ptr [ecx + 0xcc0]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0xc0
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 90 24 01 00 00: movzx edx, word ptr [eax + 0x124]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x90
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 81 8E 00 00 00: movzx eax, word ptr [ecx + 0x8e]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x81
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F AF D0: imul edx, eax
        __asm _emit 0x0f
        __asm _emit 0xaf
        __asm _emit 0xd0
        ; Exact mapped bytes 89 91 60 0A 00 00: mov dword ptr [ecx + 0xa60], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x60
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
