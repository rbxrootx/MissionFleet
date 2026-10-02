// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 87 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58970F10 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58970f10_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 6A 0C: push 0xc
        __asm _emit 0x6a
        __asm _emit 0x0c
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes E8 34 BD 00 00: call 0x5897cc4e
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 0C: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 83 C4 04: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x04
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 2C: je 0x58970f51
        __asm _emit 0x74
        __asm _emit 0x2c
        ; Exact mapped bytes 0F B7 D1: movzx edx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xd1
        ; Exact mapped bytes 8B 94 96 20 02 00 00: mov edx, dword ptr [esi + edx*4 + 0x220]
        __asm _emit 0x8b
        __asm _emit 0x94
        __asm _emit 0x96
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 0F B7 C9: movzx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc9
        ; Exact mapped bytes 89 78 04: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        ; Exact mapped bytes 89 50 08: mov dword ptr [eax + 8], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x08
        ; Exact mapped bytes 89 84 8E 20 02 00 00: mov dword ptr [esi + ecx*4 + 0x220], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 86 1C 02 00 00: inc dword ptr [esi + 0x21c]
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 C9: movzx ecx, cx
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0xc9
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 89 84 8E 20 02 00 00: mov dword ptr [esi + ecx*4 + 0x220], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 86 1C 02 00 00: inc dword ptr [esi + 0x21c]
        __asm _emit 0xff
        __asm _emit 0x86
        __asm _emit 0x1c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
