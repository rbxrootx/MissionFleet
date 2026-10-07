// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 150 bytes in 1 exact ranges.
// Source symbol alias: FUN_587453e0.

// Ghidra body range 0x587453E0..0x58745476; 150 mapped bytes.
extern "C" __declspec(naked) void FUN_587453e0_segment_00() {
    __asm {
        // 0x587453E0: push ecx
        __asm _emit 0x51
        // 0x587453E1: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587453E6: push ebx
        __asm _emit 0x53
        // 0x587453E7: push esi
        __asm _emit 0x56
        // 0x587453E8: mov esi, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x0C
        // 0x587453EB: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587453ED: push edi
        __asm _emit 0x57
        // 0x587453EE: mov dword ptr [esp + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587453F2: mov edi, 0x5f5e100
        __asm _emit 0xBF
        __asm _emit 0x00
        __asm _emit 0xE1
        __asm _emit 0xF5
        __asm _emit 0x05
        // 0x587453F7: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587453F9: je 0x5874546f
        __asm _emit 0x74
        __asm _emit 0x74
        // 0x587453FB: push ebp
        __asm _emit 0x55
        // 0x587453FC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58745400: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58745402: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0x12
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58745407: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5874540C: jne 0x5874545c
        __asm _emit 0x75
        __asm _emit 0x4E
        // 0x5874540E: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58745412: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58745414: mov al, byte ptr [edx + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x82
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874541A: cmp al, byte ptr [esi + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745420: je 0x5874545c
        __asm _emit 0x74
        __asm _emit 0x3A
        // 0x58745422: cmp word ptr [esi + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x5874542A: jae 0x5874545c
        __asm _emit 0x73
        __asm _emit 0x30
        // 0x5874542C: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5874542F: sub ecx, dword ptr [edx + 8]
        __asm _emit 0x2B
        __asm _emit 0x4A
        __asm _emit 0x08
        // 0x58745432: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58745435: sub eax, dword ptr [edx + 4]
        __asm _emit 0x2B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58745438: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x5874543A: imul ebp, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xE9
        // 0x5874543D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5874543F: imul ecx, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC8
        // 0x58745442: mov eax, dword ptr [edx + 0xdcc]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0xCC
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58745448: imul eax, eax
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC0
        // 0x5874544B: add ecx, ebp
        __asm _emit 0x03
        __asm _emit 0xCD
        // 0x5874544D: lea edx, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x40
        // 0x58745450: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58745452: jge 0x5874545c
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58745454: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x58745456: jle 0x5874545c
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58745458: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5874545A: mov ebx, esi
        __asm _emit 0x8B
        __asm _emit 0xDE
        // 0x5874545C: mov esi, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x78
        // 0x5874545F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58745461: jne 0x58745400
        __asm _emit 0x75
        __asm _emit 0x9D
        // 0x58745463: pop ebp
        __asm _emit 0x5D
        // 0x58745464: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58745466: je 0x5874546f
        __asm _emit 0x74
        __asm _emit 0x07
        // 0x58745468: pop edi
        __asm _emit 0x5F
        // 0x58745469: pop esi
        __asm _emit 0x5E
        // 0x5874546A: mov eax, ebx
        __asm _emit 0x8B
        __asm _emit 0xC3
        // 0x5874546C: pop ebx
        __asm _emit 0x5B
        // 0x5874546D: pop ecx
        __asm _emit 0x59
        // 0x5874546E: ret
        __asm _emit 0xC3
        // 0x5874546F: pop edi
        __asm _emit 0x5F
        // 0x58745470: pop esi
        __asm _emit 0x5E
        // 0x58745471: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58745473: pop ebx
        __asm _emit 0x5B
        // 0x58745474: pop ecx
        __asm _emit 0x59
        // 0x58745475: ret
        __asm _emit 0xC3
    }
}
