// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 134 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d26d0.

// Ghidra body range 0x588D26D0..0x588D2756; 134 mapped bytes.
extern "C" __declspec(naked) void FUN_588d26d0_segment_00() {
    __asm {
        // 0x588D26D0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D26D4: push eax
        __asm _emit 0x50
        // 0x588D26D5: call 0x5873c4a0
        __asm _emit 0xE8
        __asm _emit 0xC6
        __asm _emit 0x9D
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588D26DA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D26DC: je 0x588d2751
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x588D26DE: mov eax, dword ptr [0x58a2468c]
        __asm _emit 0xA1
        __asm _emit 0x8C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D26E3: cmp dword ptr [eax + 0x170], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588D26EA: jle 0x588d2700
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588D26EC: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D26F3: je 0x588d2700
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D26F5: mov ecx, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D26FB: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x588D26FE: jmp 0x588d2702
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D2700: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D2702: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2708: push edx
        __asm _emit 0x52
        // 0x588D2709: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x52
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D270E: mov eax, dword ptr [0x58a2468c]
        __asm _emit 0xA1
        __asm _emit 0x8C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2713: cmp dword ptr [eax + 0x170], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588D271A: jle 0x588d273f
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588D271C: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2723: je 0x588d273f
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588D2725: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D272B: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588D272E: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588D2730: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588D2733: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D2735: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588D2737: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D273C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D273F: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D2741: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588D2743: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588D2746: push ecx
        __asm _emit 0x51
        // 0x588D2747: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588D2749: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D274E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588D2751: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D2753: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
