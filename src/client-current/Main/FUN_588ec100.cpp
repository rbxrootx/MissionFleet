// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EC100 .. +0xFD bytes.
// Source symbol alias: FUN_588ec100.
extern "C" __declspec(naked) void FUN_588ec100() {
    __asm {
        // 0x588EC100: cmp dword ptr [0x589c9074], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x74
        __asm _emit 0x90
        __asm _emit 0x9C
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x588EC107: push edi
        __asm _emit 0x57
        // 0x588EC108: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x588EC10A: jne 0x588ec112
        __asm _emit 0x75
        __asm _emit 0x06
        // 0x588EC10C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EC10E: pop edi
        __asm _emit 0x5F
        // 0x588EC10F: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588EC112: push ebx
        __asm _emit 0x53
        // 0x588EC113: push esi
        __asm _emit 0x56
        // 0x588EC114: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588EC118: mov eax, dword ptr [edi + esi*8 + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0xF7
        __asm _emit 0x08
        // 0x588EC11C: lea ebx, [edi + esi*8 + 8]
        __asm _emit 0x8D
        __asm _emit 0x5C
        __asm _emit 0xF7
        __asm _emit 0x08
        // 0x588EC120: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588EC123: je 0x588ec156
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x588EC125: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588EC128: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC12E: jle 0x588ec143
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EC130: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC132: jl 0x588ec143
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EC134: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC13A: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EC13C: je 0x588ec143
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EC13E: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588EC141: jmp 0x588ec145
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EC143: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EC145: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC147: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC149: mov eax, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x14
        // 0x588EC14C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588EC14E: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC150: jne 0x588ec1ea
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC156: cmp dword ptr [edi + esi*8 + 0xc], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0xF7
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588EC15B: jne 0x588ec1f5
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC161: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588EC165: mov dword ptr [ebx], esi
        __asm _emit 0x89
        __asm _emit 0x33
        // 0x588EC167: fild dword ptr [0x58a248f8]
        __asm _emit 0xDB
        __asm _emit 0x05
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588EC16D: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x0B
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EC172: fld1
        __asm _emit 0xD9
        __asm _emit 0xE8
        // 0x588EC174: fadd st(1), st(0)
        __asm _emit 0xDC
        __asm _emit 0xC1
        // 0x588EC176: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC17B: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x588EC17D: je 0x588ec181
        __asm _emit 0x74
        __asm _emit 0x02
        // 0x588EC17F: fmul st(1)
        __asm _emit 0xD8
        __asm _emit 0xC9
        // 0x588EC181: shr eax, 1
        __asm _emit 0xD1
        __asm _emit 0xE8
        // 0x588EC183: je 0x588ec18b
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x588EC185: fld st(1)
        __asm _emit 0xD9
        __asm _emit 0xC1
        // 0x588EC187: fmulp st(2)
        __asm _emit 0xDE
        __asm _emit 0xCA
        // 0x588EC189: jmp 0x588ec17b
        __asm _emit 0xEB
        __asm _emit 0xF0
        // 0x588EC18B: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x588EC18E: fstp st(1)
        __asm _emit 0xDD
        __asm _emit 0xD9
        // 0x588EC190: cmp dword ptr [eax + 0x170], esi
        __asm _emit 0x39
        __asm _emit 0xB0
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC196: jle 0x588ec1ab
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EC198: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x588EC19A: jl 0x588ec1ab
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EC19C: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC1A2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC1A4: je 0x588ec1ab
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EC1A6: mov esi, dword ptr [eax + esi*4]
        __asm _emit 0x8B
        __asm _emit 0x34
        __asm _emit 0xB0
        // 0x588EC1A9: jmp 0x588ec1ad
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EC1AB: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x588EC1AD: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0xEE
        __asm _emit 0x0A
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EC1B2: push eax
        __asm _emit 0x50
        // 0x588EC1B3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588EC1B5: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xB7
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588EC1BA: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x588EC1BC: mov ecx, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x04
        // 0x588EC1BF: cmp dword ptr [ecx + 0x170], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC1C5: jle 0x588ec1da
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588EC1C7: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EC1C9: jl 0x588ec1da
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x588EC1CB: mov ecx, dword ptr [ecx + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC1D1: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588EC1D3: je 0x588ec1da
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588EC1D5: mov eax, dword ptr [ecx + eax*4]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x81
        // 0x588EC1D8: jmp 0x588ec1dc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EC1DA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EC1DC: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588EC1E0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588EC1E2: mov edx, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x04
        // 0x588EC1E5: push ecx
        __asm _emit 0x51
        // 0x588EC1E6: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EC1E8: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588EC1EA: pop esi
        __asm _emit 0x5E
        // 0x588EC1EB: pop ebx
        __asm _emit 0x5B
        // 0x588EC1EC: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EC1F1: pop edi
        __asm _emit 0x5F
        // 0x588EC1F2: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x588EC1F5: pop esi
        __asm _emit 0x5E
        // 0x588EC1F6: pop ebx
        __asm _emit 0x5B
        // 0x588EC1F7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EC1F9: pop edi
        __asm _emit 0x5F
        // 0x588EC1FA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
