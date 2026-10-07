// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 275 bytes in 1 exact ranges.
// Source symbol alias: FUN_588cbeb0.

// Ghidra body range 0x588CBEB0..0x588CBFC3; 275 mapped bytes.
extern "C" __declspec(naked) void FUN_588cbeb0_segment_00() {
    __asm {
        // 0x588CBEB0: mov eax, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588CBEB4: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588CBEB8: push esi
        __asm _emit 0x56
        // 0x588CBEB9: push eax
        __asm _emit 0x50
        // 0x588CBEBA: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CBEBE: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588CBEC0: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588CBEC4: push ecx
        __asm _emit 0x51
        // 0x588CBEC5: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588CBEC9: push edx
        __asm _emit 0x52
        // 0x588CBECA: push eax
        __asm _emit 0x50
        // 0x588CBECB: push ecx
        __asm _emit 0x51
        // 0x588CBECC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588CBECE: call 0x588d02e0
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBED3: mov dword ptr [esi], 0x589a0cc0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xC0
        __asm _emit 0x0C
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588CBED9: mov eax, dword ptr [0x58a24744]
        __asm _emit 0xA1
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CBEDE: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBEE5: jle 0x588cbefa
        __asm _emit 0x7E
        __asm _emit 0x13
        // 0x588CBEE7: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBEEE: je 0x588cbefa
        __asm _emit 0x74
        __asm _emit 0x0A
        // 0x588CBEF0: mov edx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBEF6: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x588CBEF8: jmp 0x588cbefc
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CBEFA: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CBEFC: mov ecx, dword ptr [esi + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x60
        // 0x588CBEFF: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CBF02: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CBF04: je 0x588cbf2e
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CBF06: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CBF09: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CBF0C: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CBF0F: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CBF12: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CBF15: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CBF17: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CBF1A: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CBF1C: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CBF1F: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CBF22: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CBF25: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CBF28: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CBF2B: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CBF2E: mov eax, dword ptr [0x58a24744]
        __asm _emit 0xA1
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CBF33: cmp dword ptr [eax + 0x164], 1
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        // 0x588CBF3A: jle 0x588cbf50
        __asm _emit 0x7E
        __asm _emit 0x14
        // 0x588CBF3C: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBF43: je 0x588cbf50
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x588CBF45: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBF4B: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x588CBF4E: jmp 0x588cbf52
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588CBF50: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CBF52: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x588CBF55: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588CBF58: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588CBF5A: je 0x588cbf84
        __asm _emit 0x74
        __asm _emit 0x28
        // 0x588CBF5C: mov edx, dword ptr [eax + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x10
        // 0x588CBF5F: mov dword ptr [ecx + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x588CBF62: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x588CBF65: add eax, 0x18
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x18
        // 0x588CBF68: mov dword ptr [ecx + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x10
        // 0x588CBF6B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588CBF6D: add ecx, 0x14
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x14
        // 0x588CBF70: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x588CBF72: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588CBF75: mov dword ptr [ecx + 4], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588CBF78: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588CBF7B: mov dword ptr [ecx + 8], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x588CBF7E: mov eax, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x0C
        // 0x588CBF81: mov dword ptr [ecx + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x588CBF84: mov eax, dword ptr [0x58a24744]
        __asm _emit 0xA1
        __asm _emit 0x44
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588CBF89: cmp dword ptr [eax + 0x164], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBF90: jle 0x588cbfb2
        __asm _emit 0x7E
        __asm _emit 0x20
        // 0x588CBF92: cmp dword ptr [eax + 0x18c], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBF99: je 0x588cbfb2
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x588CBF9B: mov ecx, dword ptr [eax + 0x18c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588CBFA1: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588CBFA3: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x588CBFA6: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588CBFA9: mov dword ptr [edx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x74
        // 0x588CBFAC: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588CBFAE: pop esi
        __asm _emit 0x5E
        // 0x588CBFAF: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x588CBFB2: mov edx, dword ptr [esi + 0x5c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x5C
        // 0x588CBFB5: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588CBFB7: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x588CBFBA: mov dword ptr [edx + 0x74], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x74
        // 0x588CBFBD: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588CBFBF: pop esi
        __asm _emit 0x5E
        // 0x588CBFC0: ret 0x14
        __asm _emit 0xC2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
