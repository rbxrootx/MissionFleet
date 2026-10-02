// Complete Ghidra body ranges for the selected function.
// 1 discontiguous segments; total 106 bytes.

// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58902090 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_58902090_segment_00() {
    __asm {
        ; Exact mapped bytes 53: push ebx
        __asm _emit 0x53
        ; Exact mapped bytes 56: push esi
        __asm _emit 0x56
        ; Exact mapped bytes 57: push edi
        __asm _emit 0x57
        ; Exact mapped bytes 8B F9: mov edi, ecx
        __asm _emit 0x8b
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 77 18: mov esi, dword ptr [edi + 0x18]
        __asm _emit 0x8b
        __asm _emit 0x77
        __asm _emit 0x18
        ; Exact mapped bytes 2B 77 14: sub esi, dword ptr [edi + 0x14]
        __asm _emit 0x2b
        __asm _emit 0x77
        __asm _emit 0x14
        ; Exact mapped bytes 8D 4F 08: lea ecx, [edi + 8]
        __asm _emit 0x8d
        __asm _emit 0x4f
        __asm _emit 0x08
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 EE: imul esi
        __asm _emit 0xf7
        __asm _emit 0xee
        ; Exact mapped bytes 03 D6: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xd6
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
        ; Exact mapped bytes 74 41: je 0x589020f4
        __asm _emit 0x74
        __asm _emit 0x41
        ; Exact mapped bytes 8B 71 10: mov esi, dword ptr [ecx + 0x10]
        __asm _emit 0x8b
        __asm _emit 0x71
        __asm _emit 0x10
        ; Exact mapped bytes 2B 71 0C: sub esi, dword ptr [ecx + 0xc]
        __asm _emit 0x2b
        __asm _emit 0x71
        __asm _emit 0x0c
        ; Exact mapped bytes 8B 5F 04: mov ebx, dword ptr [edi + 4]
        __asm _emit 0x8b
        __asm _emit 0x5f
        __asm _emit 0x04
        ; Exact mapped bytes B8 93 24 49 92: mov eax, 0x92492493
        __asm _emit 0xb8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        ; Exact mapped bytes F7 EE: imul esi
        __asm _emit 0xf7
        __asm _emit 0xee
        ; Exact mapped bytes 03 D6: add edx, esi
        __asm _emit 0x03
        __asm _emit 0xd6
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
        ; Exact mapped bytes 3B D8: cmp ebx, eax
        __asm _emit 0x3b
        __asm _emit 0xd8
        ; Exact mapped bytes 73 21: jae 0x589020f4
        __asm _emit 0x73
        __asm _emit 0x21
        ; Exact mapped bytes 8D 43 01: lea eax, [ebx + 1]
        __asm _emit 0x8d
        __asm _emit 0x43
        __asm _emit 0x01
        ; Exact mapped bytes 89 47 04: mov dword ptr [edi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x47
        __asm _emit 0x04
        ; Exact mapped bytes 48: dec eax
        __asm _emit 0x48
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes E8 10 FF FF FF: call 0x58901ff0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 83 78 18 10: cmp dword ptr [eax + 0x18], 0x10
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x18
        __asm _emit 0x10
        ; Exact mapped bytes 72 07: jb 0x589020ed
        __asm _emit 0x72
        __asm _emit 0x07
        ; Exact mapped bytes 8B 40 04: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8b
        __asm _emit 0x40
        __asm _emit 0x04
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 83 C0 04: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x04
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
        ; Exact mapped bytes 5F: pop edi
        __asm _emit 0x5f
        ; Exact mapped bytes 5E: pop esi
        __asm _emit 0x5e
        ; Exact mapped bytes 33 C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xc0
        ; Exact mapped bytes 5B: pop ebx
        __asm _emit 0x5b
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
