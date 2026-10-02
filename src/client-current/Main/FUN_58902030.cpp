// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 88 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902030 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_58902030_segment_00() {
    __asm {
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 8B F1: mov esi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 4E 18: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x18
        ; Exact mapped bytes 2B 4E 14: sub ecx, dword ptr [esi + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x14
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
        ; Exact mapped bytes 74 36: je 0x58902084
        __asm _emit 0x74
        __asm _emit 0x36
        ; Exact mapped bytes FF 46 04: inc dword ptr [esi + 4]
        __asm _emit 0xff
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 8B 4E 18: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x4e
        __asm _emit 0x18
        ; Exact mapped bytes 2B 4E 14: sub ecx, dword ptr [esi + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x4e
        __asm _emit 0x14
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
        ; Exact mapped bytes 8B CA: mov ecx, edx
        __asm _emit 0x8b
        __asm _emit 0xca
        ; Exact mapped bytes C1 E9 1F: shr ecx, 0x1f
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x1f
        ; Exact mapped bytes 03 CA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xca
        ; Exact mapped bytes 75 05: jne 0x58902071
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 01 AC 07 00: call 0x5897cc72
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xac
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes 8B 76 14: mov esi, dword ptr [esi + 0x14]
        __asm _emit 0x8b
        __asm _emit 0x76
        __asm _emit 0x14
        ; Exact mapped bytes 83 7E 18 10: cmp dword ptr [esi + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x18
        __asm _emit 0x10
        ; Exact mapped bytes 72 05: jb 0x5890207f
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes 8B 46 04: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 8D 46 04: lea eax, [esi + 4]
        __asm _emit 0x8d
        __asm _emit 0x46
        __asm _emit 0x04
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
