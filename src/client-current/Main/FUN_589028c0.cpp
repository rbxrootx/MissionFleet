// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 165 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x589028C0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_589028c0_segment_00() {
    __asm {
        ; Exact mapped bytes 83 EC 08: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xec
        __asm _emit 0x08
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 6F 0C: mov ebp, dword ptr [edi + 0xc]
        __asm _emit 0x8b
        __asm _emit 0x6f
        __asm _emit 0x0c
        ; Exact mapped bytes 85 ED: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xed
        ; Exact mapped bytes 75 04: jne 0x589028d4
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes 33 F6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xf6
        ; Exact mapped bytes EB 18: jmp 0x589028ec
        __asm _emit 0xeb
        __asm _emit 0x18
        ; Exact mapped bytes 8B 4F 14: mov ecx, dword ptr [edi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x4f
        __asm _emit 0x14
        ; Exact mapped bytes 2B CD: sub ecx, ebp
        __asm _emit 0x2b
        __asm _emit 0xcd
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
        ; Exact mapped bytes 8B F2: mov esi, edx
        __asm _emit 0x8b
        __asm _emit 0xf2
        ; Exact mapped bytes C1 EE 1F: shr esi, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xee
        __asm _emit 0x1f
        ; Exact mapped bytes 03 F2: add esi, edx
        __asm _emit 0x03
        __asm _emit 0xf2
        ; Exact mapped bytes 8B 5F 10: mov ebx, dword ptr [edi + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x5f
        __asm _emit 0x10
        ; Exact mapped bytes 8B CB: mov ecx, ebx
        __asm _emit 0x8b
        __asm _emit 0xcb
        ; Exact mapped bytes 2B CD: sub ecx, ebp
        __asm _emit 0x2b
        __asm _emit 0xcd
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
        ; Exact mapped bytes 3B C6: cmp eax, esi
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 73 33: jae 0x5890293d
        __asm _emit 0x73
        __asm _emit 0x33
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes C6 44 24 10 00: mov byte ptr [esp + 0x10], 0
        __asm _emit 0xc6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 8B 4C 24 10: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x10
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 8B 4C 24 20: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8b
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 8D 47 08: lea eax, [edi + 8]
        __asm _emit 0x8d
        __asm _emit 0x47
        __asm _emit 0x08
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes E8 06 F6 E8 FF: call 0x58791f30
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf6
        __asm _emit 0xe8
        __asm _emit 0xff
        ; Exact mapped bytes 83 C4 18: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x18
        ; Exact mapped bytes 83 C3 1C: add ebx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xc3
        __asm _emit 0x1c
        ; Exact mapped bytes 89 5F 10: mov dword ptr [edi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5f
        __asm _emit 0x10
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 3B EB: cmp ebp, ebx
        __asm _emit 0x3b
        __asm _emit 0xeb
        ; Exact mapped bytes 76 05: jbe 0x58902946
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E8 2C A3 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa3
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 54 24 1C: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 8B 07: mov eax, dword ptr [edi]
        __asm _emit 0x8b
        __asm _emit 0x07
        ; Exact mapped bytes 52: push edx
        __asm _emit 0x52
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 44 24 1C: lea eax, [esp + 0x1c]
        __asm _emit 0x8d
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1c
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B CF: mov ecx, edi
        __asm _emit 0x8b
        __asm _emit 0xcf
        ; Exact mapped bytes E8 A5 FE FF FF: call 0x58902800
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes 83 C4 08: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xc4
        __asm _emit 0x08
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
