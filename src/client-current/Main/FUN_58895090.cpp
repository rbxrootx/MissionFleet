// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58895090 .. +0x8C bytes.
// Source symbol alias: FUN_58895090.
extern "C" __declspec(naked) void FUN_58895090() {
    __asm {
        // 0x58895090: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58895094: mov edx, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5889509A: push esi
        __asm _emit 0x56
        // 0x5889509B: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5889509D: jge 0x588950ca
        __asm _emit 0x7D
        __asm _emit 0x2B
        // 0x5889509F: or word ptr [edx + 0x24], 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4A
        __asm _emit 0x24
        __asm _emit 0x01
        // 0x588950A4: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588950AA: cmp dword ptr [edx + 0x160], 0x25
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x25
        // 0x588950B1: jle 0x588950f9
        __asm _emit 0x7E
        __asm _emit 0x46
        // 0x588950B3: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588950BA: je 0x588950f9
        __asm _emit 0x74
        __asm _emit 0x3D
        // 0x588950BC: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588950C2: add edx, 0x940
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0x40
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588950C8: jmp 0x588950fb
        __asm _emit 0xEB
        __asm _emit 0x31
        // 0x588950CA: mov esi, 0xfffe
        __asm _emit 0xBE
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588950CF: and word ptr [edx + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x72
        __asm _emit 0x24
        // 0x588950D3: mov edx, dword ptr [0x58a246a4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xA4
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588950D9: cmp dword ptr [edx + 0x160], 0x23
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x23
        // 0x588950E0: jle 0x588950f9
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x588950E2: cmp dword ptr [edx + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588950E9: je 0x588950f9
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588950EB: mov edx, dword ptr [edx + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x92
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588950F1: add edx, 0x8c0
        __asm _emit 0x81
        __asm _emit 0xC2
        __asm _emit 0xC0
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588950F7: jmp 0x588950fb
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588950F9: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x588950FB: mov esi, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895101: mov dword ptr [esi + 0xf8], edx
        __asm _emit 0x89
        __asm _emit 0x96
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895107: cdq
        __asm _emit 0x99
        // 0x58895108: xor eax, edx
        __asm _emit 0x33
        __asm _emit 0xC2
        // 0x5889510A: sub eax, edx
        __asm _emit 0x2B
        __asm _emit 0xC2
        // 0x5889510C: pop esi
        __asm _emit 0x5E
        // 0x5889510D: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58895111: mov ecx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58895117: jmp 0x58907360
        __asm _emit 0xE9
        __asm _emit 0x44
        __asm _emit 0x22
        __asm _emit 0x07
        __asm _emit 0x00
    }
}
