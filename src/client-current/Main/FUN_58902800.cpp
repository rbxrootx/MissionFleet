// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 179 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902800 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_58902800_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 5E 10: mov ebx, dword ptr [esi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x10
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B 7E 0C: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x7e
        __asm _emit 0x0c
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B C2: mov eax, edx
        __asm _emit 0x8b
        __asm _emit 0xc2
        ; Exact mapped bytes C1 E8 1F: shr eax, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x1f
        ; Exact mapped bytes 03 C2: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xc2
        ; Exact mapped bytes 75 04: jne 0x5890282b
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 FF: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xff
        ; Exact mapped bytes EB 35: jmp 0x58902860
        __asm _emit 0xeb
        __asm _emit 0x35
        ; Exact mapped bytes 3B FB: cmp edi, ebx
        __asm _emit 0x3b
        __asm _emit 0xfb
        ; Exact mapped bytes 76 05: jbe 0x58902834
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 3E A4 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 1C: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 06: mov eax, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 85 C9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xc9
        ; Exact mapped bytes 74 04: je 0x58902842
        __asm _emit 0x74
        __asm _emit 0x04
        ; Exact mapped bytes 3B C8: cmp ecx, eax
        __asm _emit 0x3b
        __asm _emit 0xc8
        ; Exact mapped bytes 74 05: je 0x58902847
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E8 2B A4 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xa4
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 2B CF: sub ecx, edi
        __asm _emit 0x2b
        __asm _emit 0xcf
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 E9: imul ecx
        __asm _emit 0xf7
        __asm _emit 0xe9
        ; Exact mapped bytes 03 D1: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xd1
        ; Exact mapped bytes C1 FA 04: sar edx, 4
        __asm _emit 0xc1
        __asm _emit 0xfa
        __asm _emit 0x04
        ; Exact mapped bytes 8B FA: mov edi, edx
        __asm _emit 0x8b
        __asm _emit 0xfa
        ; Exact mapped bytes C1 EF 1F: shr edi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xef
        __asm _emit 0x1f
        ; Exact mapped bytes 03 FA: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xfa
        ; Exact mapped bytes 8B 4C 24 24: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x24
        ; Exact mapped bytes 8B 54 24 20: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 8B 44 24 1C: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CE: mov ecx, esi
        __asm _emit 0x8b
        __asm _emit 0xce
        ; Exact mapped bytes E8 C8 FB FF FF: call 0x58902440
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 5E 0C: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x5e
        __asm _emit 0x0c
        ; Exact mapped bytes 3B 5E 10: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3b
        __asm _emit 0x5e
        __asm _emit 0x10
        ; Exact mapped bytes 76 05: jbe 0x58902885
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 ED A3 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 36: mov esi, dword ptr [esi]
        __asm _emit 0x8b
        __asm _emit 0x36
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8D 4C 24 10: lea ecx, [esp + 0x10]
        __asm _emit 0x8d
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 74 24 10: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 89 5C 24 14: mov dword ptr [esp + 0x14], ebx
        __asm _emit 0x89
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        ; Exact mapped bytes E8 F7 AC E8 FF: call 0x5878d590
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xac
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 8B 44 24 18: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4C 24 0C: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 54 24 10: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 89 08: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        ; Exact mapped bytes 89 50 04: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
