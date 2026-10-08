// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 79 bytes in 2 exact ranges.
// Source symbol alias: FUN_587330c0.

// Ghidra body range 0x587330C0..0x587330CD; 13 mapped bytes.
extern "C" __declspec(naked) void FUN_587330c0_segment_00() {
    __asm {
        // 0x587330C0: push ebx
        __asm _emit 0x53
        // 0x587330C1: push esi
        __asm _emit 0x56
        // 0x587330C2: push edi
        __asm _emit 0x57
        // 0x587330C3: lea edi, [ecx + 0x60]
        __asm _emit 0x8D
        __asm _emit 0x79
        __asm _emit 0x60
        // 0x587330C6: mov ebx, 0xb
        __asm _emit 0xBB
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587330CB: jmp 0x587330d0
        __asm _emit 0xEB
        __asm _emit 0x03
    }
}

// Ghidra body range 0x587330D0..0x58733112; 66 mapped bytes.
extern "C" __declspec(naked) void FUN_587330c0_segment_01() {
    __asm {
        // 0x587330D0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x587330D2: mov eax, dword ptr [eax + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x6C
        // 0x587330D5: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587330D7: je 0x58733106
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x587330D9: mov edx, 0x5898c922
        __asm _emit 0xBA
        __asm _emit 0x22
        __asm _emit 0xC9
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587330DE: mov esi, 0x80
        __asm _emit 0xBE
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587330E3: lea ecx, [esi + 0x7fffff7e]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x7E
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x7F
        // 0x587330E9: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587330EB: je 0x587330fe
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x587330ED: mov cl, byte ptr [edx]
        __asm _emit 0x8A
        __asm _emit 0x0A
        // 0x587330EF: test cl, cl
        __asm _emit 0x84
        __asm _emit 0xC9
        // 0x587330F1: je 0x587330fe
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587330F3: mov byte ptr [eax], cl
        __asm _emit 0x88
        __asm _emit 0x08
        // 0x587330F5: inc eax
        __asm _emit 0x40
        // 0x587330F6: inc edx
        __asm _emit 0x42
        // 0x587330F7: sub esi, 1
        __asm _emit 0x83
        __asm _emit 0xEE
        __asm _emit 0x01
        // 0x587330FA: jne 0x587330e3
        __asm _emit 0x75
        __asm _emit 0xE7
        // 0x587330FC: jmp 0x58733102
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x587330FE: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58733100: jne 0x58733103
        __asm _emit 0x75
        __asm _emit 0x01
        // 0x58733102: dec eax
        __asm _emit 0x48
        // 0x58733103: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58733106: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58733109: sub ebx, 1
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x01
        // 0x5873310C: jne 0x587330d0
        __asm _emit 0x75
        __asm _emit 0xC2
        // 0x5873310E: pop edi
        __asm _emit 0x5F
        // 0x5873310F: pop esi
        __asm _emit 0x5E
        // 0x58733110: pop ebx
        __asm _emit 0x5B
        // 0x58733111: ret
        __asm _emit 0xC3
    }
}
