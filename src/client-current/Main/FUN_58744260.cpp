// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 215 bytes in 2 exact ranges.
// Source symbol alias: FUN_58744260.

// Ghidra body range 0x58744260..0x587442E9; 137 mapped bytes.
extern "C" __declspec(naked) void FUN_58744260_segment_00() {
    __asm {
        // 0x58744260: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58744263: push ebx
        __asm _emit 0x53
        // 0x58744264: push esi
        __asm _emit 0x56
        // 0x58744265: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58744267: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x5874426A: mov ebx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x18
        // 0x5874426C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x5874426E: push edi
        __asm _emit 0x57
        // 0x5874426F: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58744273: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58744275: je 0x5874427b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58744277: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58744279: je 0x58744284
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5874427B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF2
        __asm _emit 0x89
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744280: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58744284: cmp dword ptr [esp + 0x20], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744288: jne 0x587442f0
        __asm _emit 0x75
        __asm _emit 0x66
        // 0x5874428A: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x5874428E: mov ebx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x58744291: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58744293: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58744295: je 0x5874429b
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58744297: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58744299: je 0x587442a4
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x5874429B: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x89
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587442A0: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587442A4: cmp dword ptr [esp + 0x28], ebx
        __asm _emit 0x39
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x587442A8: jne 0x587442f0
        __asm _emit 0x75
        __asm _emit 0x46
        // 0x587442AA: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587442AD: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587442B0: push edx
        __asm _emit 0x52
        // 0x587442B1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587442B3: call 0x587439d0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587442B8: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587442BB: mov dword ptr [eax + 4], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x587442BE: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587442C1: mov dword ptr [esi + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587442C8: mov dword ptr [eax], eax
        __asm _emit 0x89
        __asm _emit 0x00
        // 0x587442CA: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587442CD: mov dword ptr [eax + 8], eax
        __asm _emit 0x89
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x587442D0: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587442D3: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x587442D5: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587442D7: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587442DB: pop edi
        __asm _emit 0x5F
        // 0x587442DC: pop esi
        __asm _emit 0x5E
        // 0x587442DD: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587442E0: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587442E2: pop ebx
        __asm _emit 0x5B
        // 0x587442E3: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587442E6: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}

// Ghidra body range 0x587442F0..0x5874433E; 78 mapped bytes.
extern "C" __declspec(naked) void FUN_58744260_segment_01() {
    __asm {
        // 0x587442F0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587442F2: je 0x587442fa
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x587442F4: cmp edi, dword ptr [esp + 0x24]
        __asm _emit 0x3B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587442F8: je 0x58744303
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587442FA: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x89
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587442FF: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58744303: mov ebx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744307: cmp ebx, dword ptr [esp + 0x28]
        __asm _emit 0x3B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x5874430B: je 0x5874432a
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5874430D: lea ecx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58744311: call 0x587436b0
        __asm _emit 0xE8
        __asm _emit 0x9A
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744316: push ebx
        __asm _emit 0x53
        // 0x58744317: push edi
        __asm _emit 0x57
        // 0x58744318: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874431C: push eax
        __asm _emit 0x50
        // 0x5874431D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5874431F: call 0x58743e80
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58744324: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58744328: jmp 0x587442f0
        __asm _emit 0xEB
        __asm _emit 0xC6
        // 0x5874432A: mov esi, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x36
        // 0x5874432C: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58744330: pop edi
        __asm _emit 0x5F
        // 0x58744331: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x58744333: pop esi
        __asm _emit 0x5E
        // 0x58744334: mov dword ptr [eax + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x04
        // 0x58744337: pop ebx
        __asm _emit 0x5B
        // 0x58744338: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5874433B: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
