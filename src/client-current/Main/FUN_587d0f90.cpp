// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 1217 bytes in 2 discontiguous ranges.
// Source symbol alias: FUN_587d0f90.

// Ghidra body range 0x587D0F90..0x587D1137; 423 mapped bytes.
extern "C" __declspec(naked) void FUN_587d0f90_segment_00() {
    __asm {
        // 0x587D0F90: push ecx
        __asm _emit 0x51
        // 0x587D0F91: push ebx
        __asm _emit 0x53
        // 0x587D0F92: push ebp
        __asm _emit 0x55
        // 0x587D0F93: mov ebp, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D0F97: push esi
        __asm _emit 0x56
        // 0x587D0F98: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587D0F9A: push edi
        __asm _emit 0x57
        // 0x587D0F9B: mov edi, 0x40000000
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587D0FA0: mov eax, 0xfffd
        __asm _emit 0xB8
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FA5: mov dword ptr [esi + 0x100], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FAB: and word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x587D0FAF: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587D0FB2: mov dword ptr [esi + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FB8: mov dword ptr [esi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FBE: mov ebx, 0xfffffffe
        __asm _emit 0xBB
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D0FC3: mov dword ptr [esi + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FC9: mov dword ptr [esi + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FCF: mov eax, dword ptr [esi + 0x4f8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FD5: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FDA: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FE0: mov dword ptr [esi + 0x94], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FE6: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D0FEA: mov dword ptr [esi + 0xfc], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FF0: cmp ebp, 0x64
        __asm _emit 0x83
        __asm _emit 0xFD
        __asm _emit 0x64
        // 0x587D0FF3: jne 0x587d11b6
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xBD
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FF9: mov eax, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D0FFF: or word ptr [eax + 0x24], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587D1004: mov eax, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D100A: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D100F: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D1013: mov eax, dword ptr [esi + 0x50c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1019: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D101D: mov eax, dword ptr [esi + 0x50c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1023: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D1027: mov edx, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D102D: mov dword ptr [edx + 0x88], 0x20
        __asm _emit 0xC7
        __asm _emit 0x82
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1037: mov eax, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D103D: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D103F: mov dword ptr [eax + 0x28], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x28
        // 0x587D1042: mov dword ptr [eax + 0x84], 0x100
        __asm _emit 0xC7
        __asm _emit 0x80
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D104C: mov dword ptr [eax + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1052: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1058: push ebp
        __asm _emit 0x55
        // 0x587D1059: call 0x58889120
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x80
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587D105E: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1064: imul ecx, dword ptr [esi + 0xb8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x8E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D106B: mov eax, dword ptr [esi + 0x784]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1071: mov dword ptr [esi + 0x788], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1077: mov dword ptr [esi + 0x780], ebp
        __asm _emit 0x89
        __asm _emit 0xAE
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D107D: mov dword ptr [esi + 0xe4], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1083: mov edx, dword ptr [0x58a0b478]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587D1089: mov dword ptr [esi + 0xdc], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D108F: mov eax, dword ptr [0x58a0b47c]
        __asm _emit 0xA1
        __asm _emit 0x7C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587D1094: mov dword ptr [esi + 0xe0], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D109A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D109C: mov edi, 0x589baa94
        __asm _emit 0xBF
        __asm _emit 0x94
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D10A1: cmp dword ptr [edi], ebp
        __asm _emit 0x39
        __asm _emit 0x2F
        // 0x587D10A3: je 0x587d1180
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D10A9: mov ecx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D10AF: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D10B1: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D10B3: je 0x587d10c0
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D10B5: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D10B7: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D10BC: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D10C0: mov ecx, dword ptr [esi + 0x7f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D10C6: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D10C8: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D10CA: je 0x587d10d7
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D10CC: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D10CE: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D10D3: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D10D7: mov ecx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D10DD: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D10DF: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D10E1: je 0x587d10ee
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D10E3: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D10E5: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D10EA: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D10EE: mov ecx, dword ptr [esi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D10F4: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D10F6: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D10F8: je 0x587d1105
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D10FA: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D10FC: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1101: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D1105: mov ecx, dword ptr [esi + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D110B: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D110D: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D110F: je 0x587d111c
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D1111: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D1113: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1118: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D111C: mov ecx, dword ptr [esi + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1122: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D1124: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D1126: je 0x587d1133
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D1128: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D112A: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D112F: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D1133: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D1135: jmp 0x587d1140
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587D1140..0x587D145A; 794 mapped bytes.
extern "C" __declspec(naked) void FUN_587d0f90_segment_01() {
    __asm {
        // 0x587D1140: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1146: mov edx, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x587D1149: mov edx, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x11
        // 0x587D114C: cmp dword ptr [edx], ebp
        __asm _emit 0x39
        __asm _emit 0x2A
        // 0x587D114E: je 0x587d115b
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D1150: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x587D1152: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1157: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x587D115B: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1161: mov edx, dword ptr [edx + eax]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x02
        // 0x587D1164: mov edx, dword ptr [edx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0A
        // 0x587D1167: cmp dword ptr [edx + 4], ebp
        __asm _emit 0x39
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587D116A: je 0x587d1178
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587D116C: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587D116F: mov ebx, 0xfff0
        __asm _emit 0xBB
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1174: and word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x587D1178: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D117B: cmp ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x587D117E: jl 0x587d1140
        __asm _emit 0x7C
        __asm _emit 0xC0
        // 0x587D1180: add edi, 0xe84
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1186: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D1189: cmp edi, 0x589c2d38
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x38
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D118F: jl 0x587d10a1
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x0C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1195: mov eax, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D119B: mov ecx, 0xfffe
        __asm _emit 0xB9
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11A0: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x587D11A4: mov ecx, dword ptr [esi + 0xadc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11AA: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587D11AC: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x587D11AF: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587D11B1: jmp 0x587d1415
        __asm _emit 0xE9
        __asm _emit 0x5F
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11B6: cmp ebp, 0xc8
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11BC: jne 0x587d1419
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x57
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11C2: mov ecx, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11C8: mov dword ptr [ecx + 0x88], 0x20
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11D2: mov eax, dword ptr [esi + 0x508]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x08
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11D8: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x587D11DA: mov dword ptr [eax + 0x28], 0x100
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x28
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11E1: mov dword ptr [eax + 0x84], ebp
        __asm _emit 0x89
        __asm _emit 0xA8
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11E7: mov dword ptr [eax + 0x8c], edi
        __asm _emit 0x89
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D11ED: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D11F3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587D11F5: call 0x58889120
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x7F
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587D11FA: mov edx, dword ptr [esi + 0x784]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1200: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1206: mov ecx, dword ptr [esi + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D120C: mov dword ptr [esi + 0x788], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0x88
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1212: mov dword ptr [esi + 0xdc], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1218: mov eax, dword ptr [esi + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D121E: mov dword ptr [esi + 0xe0], ecx
        __asm _emit 0x89
        __asm _emit 0x8E
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1224: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1229: mov dword ptr [esi + 0x780], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D122F: mov dword ptr [esi + 0xe4], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1239: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587D123D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D123F: call 0x587cfa60
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1244: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587D1246: jne 0x587d124e
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x587D1248: mov dword ptr [esi + 0x90], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D124E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587D1250: mov edi, 0x589baa94
        __asm _emit 0xBF
        __asm _emit 0x94
        __asm _emit 0xAA
        __asm _emit 0x9B
        __asm _emit 0x58
        // 0x587D1255: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D1259: lea ebx, [eax + 0xf]
        __asm _emit 0x8D
        __asm _emit 0x58
        __asm _emit 0x0F
        // 0x587D125C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x587D1260: mov ecx, dword ptr [esi + 0x7f4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1266: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D1268: cmp dword ptr [edi], ebp
        __asm _emit 0x39
        __asm _emit 0x2F
        // 0x587D126A: je 0x587d131b
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1270: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D1272: je 0x587d127a
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D1274: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D1276: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x587D127A: mov edx, dword ptr [esi + 0x7f8]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1280: cmp dword ptr [eax + edx], ebp
        __asm _emit 0x39
        __asm _emit 0x2C
        __asm _emit 0x10
        // 0x587D1283: lea ecx, [eax + edx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x10
        // 0x587D1286: je 0x587d128e
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D1288: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D128A: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x587D128E: mov ecx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1294: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D1296: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D1298: je 0x587d12a1
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587D129A: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D129C: or word ptr [ecx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587D12A1: mov edx, dword ptr [esi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D12A7: cmp dword ptr [eax + edx], ebp
        __asm _emit 0x39
        __asm _emit 0x2C
        __asm _emit 0x10
        // 0x587D12AA: lea ecx, [eax + edx]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x10
        // 0x587D12AD: je 0x587d12b5
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D12AF: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D12B1: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x587D12B5: mov ecx, dword ptr [esi + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D12BB: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D12BD: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D12BF: je 0x587d12c7
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D12C1: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D12C3: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x587D12C7: mov edx, dword ptr [esi + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D12CD: cmp dword ptr [edx + eax], ebp
        __asm _emit 0x39
        __asm _emit 0x2C
        __asm _emit 0x02
        // 0x587D12D0: lea ecx, [edx + eax]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x02
        // 0x587D12D3: je 0x587d12db
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D12D5: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D12D7: or word ptr [ecx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x59
        __asm _emit 0x24
        // 0x587D12DB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D12DD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587D12E0: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D12E6: mov edx, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x10
        // 0x587D12E9: mov edx, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x11
        // 0x587D12EC: cmp dword ptr [edx], ebp
        __asm _emit 0x39
        __asm _emit 0x2A
        // 0x587D12EE: je 0x587d12f6
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587D12F0: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x587D12F2: or word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x587D12F6: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D12FC: mov edx, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x10
        // 0x587D12FF: mov edx, dword ptr [edx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0A
        // 0x587D1302: cmp dword ptr [edx + 4], ebp
        __asm _emit 0x39
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587D1305: je 0x587d130e
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x587D1307: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587D130A: or word ptr [edx + 0x24], bx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x5A
        __asm _emit 0x24
        // 0x587D130E: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D1311: cmp ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x587D1314: jl 0x587d12e0
        __asm _emit 0x7C
        __asm _emit 0xCA
        // 0x587D1316: jmp 0x587d13e4
        __asm _emit 0xE9
        __asm _emit 0xC9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D131B: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D131D: je 0x587d132a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D131F: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D1321: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1326: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D132A: mov ecx, dword ptr [esi + 0x7f8]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xF8
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1330: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D1332: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D1334: je 0x587d1341
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D1336: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D1338: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D133D: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D1341: mov ecx, dword ptr [esi + 0x7fc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xFC
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1347: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D1349: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D134B: je 0x587d1358
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D134D: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D134F: mov edx, 0xfffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1354: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D1358: mov ecx, dword ptr [esi + 0x800]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x00
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D135E: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D1360: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D1362: je 0x587d136f
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D1364: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D1366: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D136B: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D136F: mov ecx, dword ptr [esi + 0x808]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x08
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1375: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D1377: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D1379: je 0x587d1386
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D137B: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D137D: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1382: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D1386: mov ecx, dword ptr [esi + 0x80c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x0C
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D138C: add ecx, eax
        __asm _emit 0x03
        __asm _emit 0xC8
        // 0x587D138E: cmp dword ptr [ecx], ebp
        __asm _emit 0x39
        __asm _emit 0x29
        // 0x587D1390: je 0x587d139d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D1392: mov ecx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x09
        // 0x587D1394: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1399: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x587D139D: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x587D139F: nop
        __asm _emit 0x90
        // 0x587D13A0: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D13A6: mov edx, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x10
        // 0x587D13A9: mov edx, dword ptr [ecx + edx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x11
        // 0x587D13AC: cmp dword ptr [edx], ebp
        __asm _emit 0x39
        __asm _emit 0x2A
        // 0x587D13AE: je 0x587d13bb
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587D13B0: mov edx, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x12
        // 0x587D13B2: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D13B7: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x587D13BB: mov edx, dword ptr [esi + 0x804]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D13C1: mov edx, dword ptr [eax + edx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x10
        // 0x587D13C4: mov edx, dword ptr [edx + ecx]
        __asm _emit 0x8B
        __asm _emit 0x14
        __asm _emit 0x0A
        // 0x587D13C7: cmp dword ptr [edx + 4], ebp
        __asm _emit 0x39
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x587D13CA: je 0x587d13d8
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x587D13CC: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x587D13CF: mov edi, 0xfff0
        __asm _emit 0xBF
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D13D4: and word ptr [edx + 0x24], di
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x7A
        __asm _emit 0x24
        // 0x587D13D8: add ecx, 4
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x04
        // 0x587D13DB: cmp ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x10
        // 0x587D13DE: jl 0x587d13a0
        __asm _emit 0x7C
        __asm _emit 0xC0
        // 0x587D13E0: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D13E4: add edi, 0xe84
        __asm _emit 0x81
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D13EA: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x587D13ED: cmp edi, 0x589c2d38
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x38
        __asm _emit 0x2D
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587D13F3: mov dword ptr [esp + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587D13F7: jl 0x587d1260
        __asm _emit 0x0F
        __asm _emit 0x8C
        __asm _emit 0x63
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D13FD: mov eax, dword ptr [esi + 0x160]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D1403: or word ptr [eax + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x587D1408: mov ecx, dword ptr [esi + 0xadc]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xDC
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D140E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587D1410: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587D1413: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587D1415: mov ebp, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587D1419: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587D141B: call 0x587cff80
        __asm _emit 0xE8
        __asm _emit 0x60
        __asm _emit 0xEB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587D1420: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1426: pop edi
        __asm _emit 0x5F
        // 0x587D1427: pop esi
        __asm _emit 0x5E
        // 0x587D1428: cmp ebp, 0xc8
        __asm _emit 0x81
        __asm _emit 0xFD
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587D142E: pop ebp
        __asm _emit 0x5D
        // 0x587D142F: pop ebx
        __asm _emit 0x5B
        // 0x587D1430: jne 0x587d1446
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587D1432: call 0x58888ed0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x7A
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587D1437: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D143D: call 0x58888970
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587D1442: pop ecx
        __asm _emit 0x59
        // 0x587D1443: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587D1446: call 0x58888720
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x72
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587D144B: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587D1451: call 0x58888970
        __asm _emit 0xE8
        __asm _emit 0x1A
        __asm _emit 0x75
        __asm _emit 0x0B
        __asm _emit 0x00
        // 0x587D1456: pop ecx
        __asm _emit 0x59
        // 0x587D1457: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
