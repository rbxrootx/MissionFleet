// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 738 bytes in 4 discontiguous ranges.
// Source symbol alias: FUN_58755cf0.

// Ghidra body range 0x58755CF0..0x58755E28; 312 mapped bytes.
extern "C" __declspec(naked) void FUN_58755cf0_segment_00() {
    __asm {
        // 0x58755CF0: sub esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755CF6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58755CFB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58755CFD: mov dword ptr [esp + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D04: push ebx
        __asm _emit 0x53
        // 0x58755D05: push ebp
        __asm _emit 0x55
        // 0x58755D06: push esi
        __asm _emit 0x56
        // 0x58755D07: push edi
        __asm _emit 0x57
        // 0x58755D08: mov edi, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58755D0E: push 0x5898d6c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58755D13: lea eax, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58755D17: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58755D19: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58755D1B: push eax
        __asm _emit 0x50
        // 0x58755D1C: mov dword ptr [esp + 0x1c], ebp
        __asm _emit 0x89
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755D20: mov dword ptr [esp + 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755D24: mov dword ptr [esp + 0x88], esi
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D2B: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58755D2D: push 0x5898d6bc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58755D32: lea ecx, [esp + 0x50]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x58755D36: push ecx
        __asm _emit 0x51
        // 0x58755D37: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58755D39: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58755D3C: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58755D3E: mov dword ptr [esp + 0x8c], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D45: mov dword ptr [esp + 0x90], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D4C: mov dword ptr [esp + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D53: mov dword ptr [esp + 0x98], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D5A: mov dword ptr [esp + 0x9c], ecx
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D61: mov word ptr [esp + 0xa0], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D69: mov byte ptr [esp + 0xa2], cl
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D70: mov byte ptr [esp + 0x76], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x76
        // 0x58755D74: mov cl, 3
        __asm _emit 0xB1
        __asm _emit 0x03
        // 0x58755D76: mov byte ptr [esp + 0x74], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x74
        // 0x58755D7A: mov byte ptr [esp + 0x75], cl
        __asm _emit 0x88
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x75
        // 0x58755D7E: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58755D80: mov dword ptr [esp + 0x7c], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x58755D84: mov edx, 4
        __asm _emit 0xBA
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D89: mul edx
        __asm _emit 0xF7
        __asm _emit 0xE2
        // 0x58755D8B: seto cl
        __asm _emit 0x0F
        __asm _emit 0x90
        __asm _emit 0xC1
        // 0x58755D8E: mov dword ptr [esp + 0x84], esi
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D95: mov dword ptr [esp + 0x88], esi
        __asm _emit 0x89
        __asm _emit 0xB4
        __asm _emit 0x24
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755D9C: mov dword ptr [esp + 0x78], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58755DA0: mov dword ptr [esp + 0x48], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x48
        // 0x58755DA4: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x58755DA6: or ecx, eax
        __asm _emit 0x0B
        __asm _emit 0xC8
        // 0x58755DA8: push ecx
        __asm _emit 0x51
        // 0x58755DA9: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xB7
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58755DAE: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58755DB1: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58755DB3: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755DB7: cmp dword ptr [ebp + 8], esi
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58755DBA: je 0x58755e62
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755DC0: push ebx
        __asm _emit 0x53
        // 0x58755DC1: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58755DC3: call 0x587555c0
        __asm _emit 0xE8
        __asm _emit 0xF8
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58755DC8: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58755DCA: mov eax, dword ptr [ebp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755DD0: add eax, 0x70
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x70
        // 0x58755DD3: push eax
        __asm _emit 0x50
        // 0x58755DD4: call 0x5897152e
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xB7
        __asm _emit 0x21
        __asm _emit 0x00
        // 0x58755DD9: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755DDD: mov dword ptr [ecx + ebx*4], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x99
        // 0x58755DE0: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58755DE2: lea esi, [ebp + 0x100]
        __asm _emit 0x8D
        __asm _emit 0xB5
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755DE8: mov ecx, 0x1c
        __asm _emit 0xB9
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755DED: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58755DEF: mov edx, dword ptr [ebp + 0x130]
        __asm _emit 0x8B
        __asm _emit 0x95
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755DF5: mov ecx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755DF9: mov eax, dword ptr [ebp + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755DFF: push edx
        __asm _emit 0x52
        // 0x58755E00: mov edx, dword ptr [ecx + ebx*4]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x99
        // 0x58755E03: push eax
        __asm _emit 0x50
        // 0x58755E04: add edx, 0x70
        __asm _emit 0x83
        __asm _emit 0xC2
        __asm _emit 0x70
        // 0x58755E07: push edx
        __asm _emit 0x52
        // 0x58755E08: call 0x5897cd4c
        __asm _emit 0xE8
        __asm _emit 0x3F
        __asm _emit 0x6F
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755E0D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58755E0F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58755E12: cmp dword ptr [ebp + 0x130], eax
        __asm _emit 0x39
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755E18: mov dword ptr [ebp + 0x16c], eax
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755E1E: jle 0x58755e43
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x58755E20: mov ecx, dword ptr [ebp + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8D
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755E26: jmp 0x58755e30
        __asm _emit 0xEB
        __asm _emit 0x08
    }
}

// Ghidra body range 0x58755E30..0x58755E7C; 76 mapped bytes.
extern "C" __declspec(naked) void FUN_58755cf0_segment_01() {
    __asm {
        // 0x58755E30: movsx edx, byte ptr [ecx + eax]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58755E34: add dword ptr [ebp + 0x16c], edx
        __asm _emit 0x01
        __asm _emit 0x95
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755E3A: inc eax
        __asm _emit 0x40
        // 0x58755E3B: cmp eax, dword ptr [ebp + 0x130]
        __asm _emit 0x3B
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755E41: jl 0x58755e30
        __asm _emit 0x7C
        __asm _emit 0xED
        // 0x58755E43: mov eax, dword ptr [ebp + 0x16c]
        __asm _emit 0x8B
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755E49: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755E4D: add dword ptr [esp + 0x80], eax
        __asm _emit 0x01
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755E54: inc ebx
        __asm _emit 0x43
        // 0x58755E55: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x58755E57: cmp ebx, dword ptr [ecx + 8]
        __asm _emit 0x3B
        __asm _emit 0x59
        __asm _emit 0x08
        // 0x58755E5A: jne 0x58755dc0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x60
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58755E60: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58755E62: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58755E64: cmp dword ptr [ebp + 0x24], esi
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x58755E67: je 0x58755e85
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58755E69: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755E70: mov edx, dword ptr [ebp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x20
        // 0x58755E73: mov eax, dword ptr [edx + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xBA
        // 0x58755E76: push eax
        __asm _emit 0x50
        // 0x58755E77: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x6D
        __asm _emit 0x22
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58755E85..0x58755FBD; 312 mapped bytes.
extern "C" __declspec(naked) void FUN_58755cf0_segment_02() {
    __asm {
        // 0x58755E85: push esi
        __asm _emit 0x56
        // 0x58755E86: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755E8B: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58755E8D: push esi
        __asm _emit 0x56
        // 0x58755E8E: push esi
        __asm _emit 0x56
        // 0x58755E8F: push 0x40000000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x58755E94: push 0x5898d6a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58755E99: call dword ptr [0x5898c180]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58755E9F: mov edi, dword ptr [0x5898c1a0]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58755EA5: push esi
        __asm _emit 0x56
        // 0x58755EA6: lea ecx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58755EAA: push ecx
        __asm _emit 0x51
        // 0x58755EAB: push 0x84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755EB0: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58755EB4: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x58755EB6: push edx
        __asm _emit 0x52
        // 0x58755EB7: push ebx
        __asm _emit 0x53
        // 0x58755EB8: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58755EBA: mov dword ptr [esp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755EBE: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58755EC0: movsx edx, byte ptr [esp + eax + 0x21]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x21
        // 0x58755EC5: movsx ecx, byte ptr [esp + eax + 0x20]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x4C
        __asm _emit 0x04
        __asm _emit 0x20
        // 0x58755ECA: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58755ECC: movsx edx, byte ptr [esp + eax + 0x22]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x22
        // 0x58755ED1: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58755ED3: movsx edx, byte ptr [esp + eax + 0x23]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x23
        // 0x58755ED8: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58755EDA: movsx edx, byte ptr [esp + eax + 0x25]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x25
        // 0x58755EDF: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x58755EE1: movsx edx, byte ptr [esp + eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58755EE6: add edx, dword ptr [esp + 0x10]
        __asm _emit 0x03
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755EEA: add eax, 6
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x06
        // 0x58755EED: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58755EEF: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755EF3: cmp eax, 0x84
        __asm _emit 0x3D
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755EF8: jb 0x58755ec0
        __asm _emit 0x72
        __asm _emit 0xC6
        // 0x58755EFA: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58755EFC: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58755F00: push eax
        __asm _emit 0x50
        // 0x58755F01: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58755F03: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755F07: push ecx
        __asm _emit 0x51
        // 0x58755F08: push ebx
        __asm _emit 0x53
        // 0x58755F09: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58755F0B: cmp dword ptr [ebp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58755F0F: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755F17: je 0x58755f9f
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755F1D: mov esi, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755F21: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58755F23: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58755F25: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58755F29: push edx
        __asm _emit 0x52
        // 0x58755F2A: push 0x70
        __asm _emit 0x6A
        __asm _emit 0x70
        // 0x58755F2C: push eax
        __asm _emit 0x50
        // 0x58755F2D: push ebx
        __asm _emit 0x53
        // 0x58755F2E: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58755F30: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58755F32: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755F36: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58755F38: movsx edx, byte ptr [ecx + eax]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x14
        __asm _emit 0x01
        // 0x58755F3C: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755F40: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58755F42: movsx edx, byte ptr [ecx + eax + 1]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x01
        // 0x58755F47: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755F4B: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58755F4D: movsx edx, byte ptr [ecx + eax + 2]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x02
        // 0x58755F52: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755F56: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58755F58: movsx edx, byte ptr [ecx + eax + 3]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x03
        // 0x58755F5D: add dword ptr [esp + 0x10], edx
        __asm _emit 0x01
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58755F61: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58755F64: cmp eax, 0x70
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x70
        // 0x58755F67: jb 0x58755f36
        __asm _emit 0x72
        __asm _emit 0xCD
        // 0x58755F69: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58755F6B: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58755F6F: push eax
        __asm _emit 0x50
        // 0x58755F70: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58755F72: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58755F76: push ecx
        __asm _emit 0x51
        // 0x58755F77: push ebx
        __asm _emit 0x53
        // 0x58755F78: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58755F7A: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58755F7C: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58755F7F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58755F81: lea edx, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58755F85: push edx
        __asm _emit 0x52
        // 0x58755F86: push ecx
        __asm _emit 0x51
        // 0x58755F87: add eax, 0x70
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x70
        // 0x58755F8A: push eax
        __asm _emit 0x50
        // 0x58755F8B: push ebx
        __asm _emit 0x53
        // 0x58755F8C: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58755F8E: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755F92: inc eax
        __asm _emit 0x40
        // 0x58755F93: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x58755F96: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58755F9A: cmp eax, dword ptr [ebp + 8]
        __asm _emit 0x3B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58755F9D: jne 0x58755f21
        __asm _emit 0x75
        __asm _emit 0x82
        // 0x58755F9F: push ebx
        __asm _emit 0x53
        // 0x58755FA0: call dword ptr [0x5898c184]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58755FA6: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x58755FA8: cmp dword ptr [ebp + 8], esi
        __asm _emit 0x39
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58755FAB: je 0x58755fc6
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x58755FAD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58755FB0: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755FB4: mov eax, dword ptr [edx + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0xB2
        // 0x58755FB7: push eax
        __asm _emit 0x50
        // 0x58755FB8: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x85
        __asm _emit 0x6C
        __asm _emit 0x22
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58755FC6..0x58755FEC; 38 mapped bytes.
extern "C" __declspec(naked) void FUN_58755cf0_segment_03() {
    __asm {
        // 0x58755FC6: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58755FCA: push ecx
        __asm _emit 0x51
        // 0x58755FCB: call 0x5897ce26
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x6E
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755FD0: mov ecx, dword ptr [esp + 0xa8]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755FD7: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58755FDA: pop edi
        __asm _emit 0x5F
        // 0x58755FDB: pop esi
        __asm _emit 0x5E
        // 0x58755FDC: pop ebp
        __asm _emit 0x5D
        // 0x58755FDD: pop ebx
        __asm _emit 0x5B
        // 0x58755FDE: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58755FE0: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0x6B
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x58755FE5: add esp, 0x98
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58755FEB: ret
        __asm _emit 0xC3
    }
}
