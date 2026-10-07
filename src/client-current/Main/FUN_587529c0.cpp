// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 125 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587529C0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_587529c0_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 83 7C 24 0C 00: cmp dword ptr [esp + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 74 69: je 0x58752a33
        __asm _emit 0x74
        __asm _emit 0x69
        ; Exact mapped bytes 8B 81 88 00 00 00: mov eax, dword ptr [ecx + 0x88]
        __asm _emit 0x8b
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 2B 81 84 00 00 00: sub eax, dword ptr [ecx + 0x84]
        __asm _emit 0x2b
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8D 71 78: lea esi, [ecx + 0x78]
        __asm _emit 0x8d
        __asm _emit 0x71
        __asm _emit 0x78
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes A9 FC FF FF FF: test eax, 0xfffffffc
        __asm _emit 0xa9
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 74 2D: je 0x58752a0f
        __asm _emit 0x74
        __asm _emit 0x2d
        ; Exact mapped bytes 8B 7E 0C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 7E 10: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 76 05: jbe 0x587529ef
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 83 A2 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xa2
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 75 44: jne 0x58752a39
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes E8 78 A2 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xa2
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 3B 78 10: cmp edi, dword ptr [eax + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x78
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x58752a06
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E8 6C A2 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xa2
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0F: mov ecx, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x0f
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes E8 D1 F2 0C 00: call 0x58821ce0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 8B 7E 0C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 7E 10: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x7e
        __asm _emit 0x10
        ; Exact mapped bytes 76 05: jbe 0x58752a1c
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 56 A2 22 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xa2
        __asm _emit 0x22
        __asm _emit 0x00
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 8D 4C 24 14: lea ecx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 54 24 14: lea edx, [esp + 0x14]
        __asm _emit 0x8d
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 5F 3E 1A 00: call 0x588f6890
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x3e
        __asm _emit 0x1a
        __asm _emit 0x00
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 00: mov eax, dword ptr [eax]
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes EB BF: jmp 0x587529fc
        __asm _emit 0xeb
        __asm _emit 0xbf
    }
}
