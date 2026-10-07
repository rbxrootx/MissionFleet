// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 139 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d2760.

// Ghidra body range 0x588D2760..0x588D27EB; 139 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2760_segment_00() {
    __asm {
        // 0x588D2760: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588D2764: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588D2768: push eax
        __asm _emit 0x50
        // 0x588D2769: push edx
        __asm _emit 0x52
        // 0x588D276A: call 0x5873c790
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xA0
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588D276F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D2771: je 0x588d27e6
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x588D2773: mov eax, dword ptr [0x58a2468c]
        __asm _emit 0xA1
        __asm _emit 0x8C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2778: cmp dword ptr [eax + 0x170], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588D277F: jle 0x588d2795
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588D2781: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2788: je 0x588d2795
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588D278A: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2790: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588D2793: jmp 0x588d2797
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588D2795: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D2797: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D279D: push edx
        __asm _emit 0x52
        // 0x588D279E: call 0x58907990
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0x51
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x588D27A3: mov eax, dword ptr [0x58a2468c]
        __asm _emit 0xA1
        __asm _emit 0x8C
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D27A8: cmp dword ptr [eax + 0x170], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588D27AF: jle 0x588d27d4
        __asm _emit 0x7E
        __asm _emit 0x23
        // 0x588D27B1: cmp dword ptr [eax + 0x194], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D27B8: je 0x588d27d4
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x588D27BA: mov eax, dword ptr [eax + 0x194]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x94
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D27C0: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x588D27C3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588D27C5: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588D27C8: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D27CA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588D27CC: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D27D1: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D27D4: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588D27D6: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x588D27D8: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x588D27DB: push ecx
        __asm _emit 0x51
        // 0x588D27DC: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x588D27DE: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D27E3: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588D27E6: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588D27E8: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
