// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 162 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589022B0 .. +0xA2 bytes.
extern "C" __declspec(naked) void FUN_589022b0_segment_00() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7C 24 10: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x7c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes C7 07 00 00 00 00: mov dword ptr [edi], 0
        __asm _emit 0xc7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 85 F6: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xf6
        ; Exact mapped bytes 74 0E: je 0x589022d1
        __asm _emit 0x74
        __asm _emit 0x0e
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 39 46 0C: cmp dword ptr [esi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0c
        ; Exact mapped bytes 77 05: ja 0x589022d1
        __asm _emit 0x77
        __asm _emit 0x05
        ; Exact mapped bytes 3B 46 10: cmp eax, dword ptr [esi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes 76 09: jbe 0x589022da
        __asm _emit 0x76
        __asm _emit 0x09
        ; Exact mapped bytes E8 9C A9 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa9
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 5C 24 20: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 89 0F: mov dword ptr [edi], ecx
        __asm _emit 0x89
        __asm _emit 0x0f
        ; Exact mapped bytes 89 47 04: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes 39 5E 0C: cmp dword ptr [esi + 0xc], ebx
        __asm _emit 0x39
        __asm _emit 0x5e
        __asm _emit 0x0c
        ; Exact mapped bytes 77 05: ja 0x589022ef
        __asm _emit 0x77
        __asm _emit 0x05
        ; Exact mapped bytes 3B 5E 10: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x5e
        __asm _emit 0x10
        ; Exact mapped bytes 76 09: jbe 0x589022f8
        __asm _emit 0x76
        __asm _emit 0x09
        ; Exact mapped bytes E8 7E A9 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xa9
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 5C 24 20: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 8B 0E: mov ecx, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x0e
        ; Exact mapped bytes 85 C0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 74 04: je 0x58902304
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B C1: cmp eax, ecx
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 05: je 0x58902309
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 69 A9 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xa9
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4F 04: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x04
        ; Exact mapped bytes 3B CB: cmp ecx, ebx
        __asm _emit 0x3b
        __asm _emit 0xcb
        ; Exact mapped bytes 74 3A: je 0x5890234a
        __asm _emit 0x74
        __asm _emit 0x3a
        ; Exact mapped bytes 8B 46 10: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x10
        ; Exact mapped bytes C6 44 24 10 00: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 14: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8B 54 24 18: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 51 72 F9 FF: call 0x58899580
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x72
        __asm _emit 0xf9
        __asm _emit 0xff
        ; Exact mapped bytes 8B 56 10: mov edx, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x56
        __asm _emit 0x10
        ; Exact mapped bytes 8B D8: mov ebx, eax
        __asm _emit 0x8b
        __asm _emit 0xd8
        ; Exact mapped bytes 8B 44 24 28: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 4E 08: lea ecx, [esi + 8]
        __asm _emit 0x8d
        __asm _emit 0x4e
        __asm _emit 0x08
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 3C FE FF FF: call 0x58902180
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 28: add esp, 0x28
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x28
        ; Exact mapped bytes 89 5E 10: mov dword ptr [esi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5e
        __asm _emit 0x10
        ; Exact mapped bytes 8B C7: mov eax, edi
        __asm _emit 0x8b
        __asm _emit 0xc7
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
