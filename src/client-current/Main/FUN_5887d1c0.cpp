// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 110 bytes in 1 exact ranges.
// Source symbol alias: FUN_5887d1c0.

// Ghidra body range 0x5887D1C0..0x5887D22E; 110 mapped bytes.
extern "C" __declspec(naked) void FUN_5887d1c0_segment_00() {
    __asm {
        // 0x5887D1C0: push esi
        __asm _emit 0x56
        // 0x5887D1C1: push edi
        __asm _emit 0x57
        // 0x5887D1C2: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x5887D1C4: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887D1CA: call 0x587ba0a0
        __asm _emit 0xE8
        __asm _emit 0xD1
        __asm _emit 0xCE
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x5887D1CF: mov esi, dword ptr [edi + 0xd8]
        __asm _emit 0x8B
        __asm _emit 0xB7
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887D1D5: mov ecx, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x40
        // 0x5887D1D8: mov eax, 0x3e8
        __asm _emit 0xB8
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887D1DD: add ax, word ptr [edi + 0x26]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x47
        __asm _emit 0x26
        // 0x5887D1E1: mov word ptr [esi + 0x26], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x26
        // 0x5887D1E5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887D1E7: je 0x5887d1ef
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887D1E9: push esi
        __asm _emit 0x56
        // 0x5887D1EA: call 0x58902f50
        __asm _emit 0xE8
        __asm _emit 0x61
        __asm _emit 0x5D
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887D1EF: mov ecx, dword ptr [esi + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x30
        // 0x5887D1F2: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5887D1F4: je 0x5887d1fc
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887D1F6: push esi
        __asm _emit 0x56
        // 0x5887D1F7: call 0x58902ee0
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0x5C
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5887D1FC: push 0x5899f20c
        __asm _emit 0x68
        __asm _emit 0x0C
        __asm _emit 0xF2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5887D201: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5887D207: mov ecx, dword ptr [edi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887D20D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5887D210: push eax
        __asm _emit 0x50
        // 0x5887D211: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0x4A
        __asm _emit 0xEB
        __asm _emit 0xFF
        // 0x5887D216: mov eax, dword ptr [edi + 0x26c]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x6C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887D21C: mov ecx, 1
        __asm _emit 0xB9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887D221: or word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x5887D225: mov dword ptr [edi + 0x94], ecx
        __asm _emit 0x89
        __asm _emit 0x8F
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887D22B: pop edi
        __asm _emit 0x5F
        // 0x5887D22C: pop esi
        __asm _emit 0x5E
        // 0x5887D22D: ret
        __asm _emit 0xC3
    }
}
