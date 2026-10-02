// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 77 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902360 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_58902360_segment_00() {
    __asm {
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 46 0C: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 1F: je 0x5890238a
        __asm _emit 0x74
        __asm _emit 0x1f
        ; Exact mapped bytes 8B 4C 24 04: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4E 10: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x10
        ; Exact mapped bytes 8D 56 08: lea edx, [esi + 8]
        __asm _emit 0x8d
        __asm _emit 0x56
        __asm _emit 0x08
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 02 FE FF FF: call 0x58902180
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 56 0C: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x0c
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes E8 BB A8 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 14: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x14
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes C7 46 0C 00 00 00 00: mov dword ptr [esi + 0xc], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 46 10 00 00 00 00: mov dword ptr [esi + 0x10], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C7 46 14 00 00 00 00: mov dword ptr [esi + 0x14], 0
        __asm _emit 0xc7
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9B A8 07 00: call 0x5897cc42
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xa8
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 59: pop ecx
        __asm _emit 0x59
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
