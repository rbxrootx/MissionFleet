// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 702 bytes in 3 exact ranges.
// Source symbol alias: FUN_58899d80.

// Ghidra body range 0x58899D80..0x58899F3E; 446 mapped bytes.
extern "C" __declspec(naked) void FUN_58899d80_segment_00() {
    __asm {
        // 0x58899D80: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58899D82: push 0x58987408
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x74
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58899D87: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899D8D: push eax
        __asm _emit 0x50
        // 0x58899D8E: sub esp, 0x44
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x44
        // 0x58899D91: push ebx
        __asm _emit 0x53
        // 0x58899D92: push ebp
        __asm _emit 0x55
        // 0x58899D93: push esi
        __asm _emit 0x56
        // 0x58899D94: push edi
        __asm _emit 0x57
        // 0x58899D95: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58899D9A: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58899D9C: push eax
        __asm _emit 0x50
        // 0x58899D9D: lea eax, [esp + 0x58]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x58899DA1: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899DA7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58899DA9: mov eax, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x58899DAD: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58899DAF: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899DB4: push 3
        __asm _emit 0x6A
        __asm _emit 0x03
        // 0x58899DB6: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58899DB8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58899DBA: push 0x80000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58899DBF: push eax
        __asm _emit 0x50
        // 0x58899DC0: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58899DC6: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58899DC8: cmp ebp, -1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x58899DCB: jne 0x58899dea
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58899DCD: mov ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58899DD1: push eax
        __asm _emit 0x50
        // 0x58899DD2: mov dword ptr [esi + ecx*4 + 0x12c], 0
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x8E
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899DDD: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58899DE3: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58899DE5: jmp 0x5889a02e
        __asm _emit 0xE9
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899DEA: mov edi, dword ptr [esp + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58899DEE: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58899DF0: push ebp
        __asm _emit 0x55
        // 0x58899DF1: mov dword ptr [esi + edi*4 + 0x12c], 1
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0xBE
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899DFC: call dword ptr [0x5898c18c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x8C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58899E02: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58899E04: lea eax, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x43
        __asm _emit 0x01
        // 0x58899E07: push eax
        __asm _emit 0x50
        // 0x58899E08: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0x77
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x58899E0D: lea ecx, [ebx + 1]
        __asm _emit 0x8D
        __asm _emit 0x4B
        __asm _emit 0x01
        // 0x58899E10: push ecx
        __asm _emit 0x51
        // 0x58899E11: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58899E13: push eax
        __asm _emit 0x50
        // 0x58899E14: mov dword ptr [esp + 0x78], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58899E18: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x2B
        __asm _emit 0x2E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899E1D: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58899E20: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58899E22: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58899E26: push edx
        __asm _emit 0x52
        // 0x58899E27: push ebx
        __asm _emit 0x53
        // 0x58899E28: mov ebx, dword ptr [esp + 0x74]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x58899E2C: push ebx
        __asm _emit 0x53
        // 0x58899E2D: push ebp
        __asm _emit 0x55
        // 0x58899E2E: call dword ptr [0x5898c190]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58899E34: push ebp
        __asm _emit 0x55
        // 0x58899E35: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58899E3B: push 0x589963b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58899E40: push ebx
        __asm _emit 0x53
        // 0x58899E41: lea ecx, [esp + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x40
        // 0x58899E45: call 0x58902b60
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0x8D
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58899E4A: mov ecx, dword ptr [esp + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58899E4E: sub ecx, dword ptr [esp + 0x4c]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x58899E52: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58899E57: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58899E59: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58899E5B: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899E61: sub ecx, dword ptr [esi + 0x144]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899E67: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58899E6A: mov ebp, edx
        __asm _emit 0x8B
        __asm _emit 0xEA
        // 0x58899E6C: shr ebp, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xED
        __asm _emit 0x1F
        // 0x58899E6F: add ebp, edx
        __asm _emit 0x03
        __asm _emit 0xEA
        // 0x58899E71: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x58899E76: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58899E78: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58899E7B: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58899E7D: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58899E80: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58899E82: mov dword ptr [esp + 0x60], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899E8A: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58899E8C: jb 0x58899e93
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58899E8E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xDF
        __asm _emit 0x2D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899E93: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899E99: lea ebx, [edi + edi*2]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x7F
        // 0x58899E9C: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x58899E9E: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x58899EA0: add ebx, ebx
        __asm _emit 0x03
        __asm _emit 0xDB
        // 0x58899EA2: push ebp
        __asm _emit 0x55
        // 0x58899EA3: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x58899EA5: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58899EA9: call 0x588999d0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58899EAE: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58899EB2: call 0x58902030
        __asm _emit 0xE8
        __asm _emit 0x79
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58899EB7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58899EB9: lea edx, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58899EBC: mov dword ptr [esp + 0x34], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899EC4: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899ECC: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58899ED1: mov dword ptr [esp + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58899ED5: mov dl, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x11
        // 0x58899ED7: inc ecx
        __asm _emit 0x41
        // 0x58899ED8: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58899EDA: jne 0x58899ed5
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58899EDC: sub ecx, dword ptr [esp + 0x6c]
        __asm _emit 0x2B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58899EE0: push ecx
        __asm _emit 0x51
        // 0x58899EE1: push eax
        __asm _emit 0x50
        // 0x58899EE2: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58899EE6: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xB1
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58899EEB: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899EF1: sub ecx, dword ptr [esi + 0x144]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899EF7: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x58899EFC: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58899EFE: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58899F01: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58899F03: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58899F06: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58899F08: mov byte ptr [esp + 0x60], 1
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x01
        // 0x58899F0D: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58899F0F: jb 0x58899f16
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58899F11: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x2D
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899F16: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58899F1A: push ecx
        __asm _emit 0x51
        // 0x58899F1B: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899F21: add ecx, ebx
        __asm _emit 0x03
        __asm _emit 0xCB
        // 0x58899F23: call 0x58792680
        __asm _emit 0xE8
        __asm _emit 0x58
        __asm _emit 0x87
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58899F28: cmp dword ptr [esp + 0x34], 0x10
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x10
        // 0x58899F2D: mov byte ptr [esp + 0x60], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x58899F32: jb 0x58899f41
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x58899F34: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58899F38: push edx
        __asm _emit 0x52
        // 0x58899F39: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x2D
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58899F41..0x58899FDD; 156 mapped bytes.
extern "C" __declspec(naked) void FUN_58899d80_segment_01() {
    __asm {
        // 0x58899F41: cmp ebp, 1
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x01
        // 0x58899F44: jbe 0x5889a000
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xB6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899F4A: lea eax, [ebp - 1]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xFF
        // 0x58899F4D: mov dword ptr [esp + 0x6c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x6C
        // 0x58899F51: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x58899F55: call 0x58902090
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58899F5A: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58899F5C: mov dword ptr [esp + 0x34], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899F64: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899F6C: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58899F71: lea ebx, [ecx + 1]
        __asm _emit 0x8D
        __asm _emit 0x59
        __asm _emit 0x01
        // 0x58899F74: mov dl, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x11
        // 0x58899F76: inc ecx
        __asm _emit 0x41
        // 0x58899F77: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x58899F79: jne 0x58899f74
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x58899F7B: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58899F7D: push ecx
        __asm _emit 0x51
        // 0x58899F7E: push eax
        __asm _emit 0x50
        // 0x58899F7F: lea ecx, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58899F83: call 0x58735000
        __asm _emit 0xE8
        __asm _emit 0x78
        __asm _emit 0xB0
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x58899F88: mov ecx, dword ptr [esi + 0x148]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899F8E: sub ecx, dword ptr [esi + 0x144]
        __asm _emit 0x2B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899F94: mov eax, 0x2aaaaaab
        __asm _emit 0xB8
        __asm _emit 0xAB
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0x2A
        // 0x58899F99: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58899F9B: sar edx, 2
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58899F9E: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58899FA0: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x58899FA3: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58899FA5: mov byte ptr [esp + 0x60], 2
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x02
        // 0x58899FAA: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x58899FAC: jb 0x58899fb3
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58899FAE: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xBF
        __asm _emit 0x2C
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899FB3: mov ecx, dword ptr [esi + 0x144]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899FB9: add ecx, dword ptr [esp + 0x14]
        __asm _emit 0x03
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58899FBD: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58899FC1: push edx
        __asm _emit 0x52
        // 0x58899FC2: call 0x58792680
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x86
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58899FC7: cmp dword ptr [esp + 0x34], 0x10
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x10
        // 0x58899FCC: mov byte ptr [esp + 0x60], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x58899FD1: jb 0x58899fe0
        __asm _emit 0x72
        __asm _emit 0x0D
        // 0x58899FD3: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58899FD7: push eax
        __asm _emit 0x50
        // 0x58899FD8: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x2C
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58899FE0..0x5889A044; 100 mapped bytes.
extern "C" __declspec(naked) void FUN_58899d80_segment_02() {
    __asm {
        // 0x58899FE0: sub dword ptr [esp + 0x6c], 1
        __asm _emit 0x83
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x6C
        __asm _emit 0x01
        // 0x58899FE5: mov dword ptr [esp + 0x34], 0xf
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x34
        __asm _emit 0x0F
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899FED: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899FF5: mov byte ptr [esp + 0x20], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58899FFA: jne 0x58899f51
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x51
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A000: mov eax, dword ptr [esp + 0x68]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x68
        // 0x5889A004: mov dword ptr [esi + edi*4 + 0x11c], ebp
        __asm _emit 0x89
        __asm _emit 0xAC
        __asm _emit 0xBE
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A00B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889A00D: je 0x5889a018
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5889A00F: push eax
        __asm _emit 0x50
        // 0x5889A010: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0x2E
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5889A015: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5889A018: lea ecx, [esp + 0x38]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5889A01C: mov dword ptr [esp + 0x60], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A024: call 0x589023b0
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x83
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x5889A029: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A02E: mov ecx, dword ptr [esp + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x5889A032: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889A039: pop ecx
        __asm _emit 0x59
        // 0x5889A03A: pop edi
        __asm _emit 0x5F
        // 0x5889A03B: pop esi
        __asm _emit 0x5E
        // 0x5889A03C: pop ebp
        __asm _emit 0x5D
        // 0x5889A03D: pop ebx
        __asm _emit 0x5B
        // 0x5889A03E: add esp, 0x50
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x50
        // 0x5889A041: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
