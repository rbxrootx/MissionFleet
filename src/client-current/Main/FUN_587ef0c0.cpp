// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 147 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ef0c0.

// Ghidra body range 0x587EF0C0..0x587EF153; 147 mapped bytes.
extern "C" __declspec(naked) void FUN_587ef0c0_segment_00() {
    __asm {
        // 0x587EF0C0: push esi
        __asm _emit 0x56
        // 0x587EF0C1: push edi
        __asm _emit 0x57
        // 0x587EF0C2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587EF0C4: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587EF0C6: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x587EF0C8: cmp dword ptr [esi + 8], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x587EF0CB: jne 0x587ef10d
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x587EF0CD: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xDB
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EF0D2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EF0D5: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587EF0D7: je 0x587ef0fd
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x587EF0D9: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587EF0DD: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587EF0E0: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587EF0E3: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587EF0E6: mov dword ptr [eax], 0x5899bd80
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0xBD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EF0EC: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x587EF0EF: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587EF0F2: pop edi
        __asm _emit 0x5F
        // 0x587EF0F3: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587EF0F6: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587EF0F9: pop esi
        __asm _emit 0x5E
        // 0x587EF0FA: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EF0FD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EF0FF: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587EF102: pop edi
        __asm _emit 0x5F
        // 0x587EF103: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587EF106: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587EF109: pop esi
        __asm _emit 0x5E
        // 0x587EF10A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587EF10D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0xDB
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587EF112: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587EF115: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587EF117: je 0x587ef131
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x587EF119: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587EF11D: mov dword ptr [eax], 0x5899bd80
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x80
        __asm _emit 0xBD
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587EF123: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x587EF126: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x587EF129: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x587EF12C: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x587EF12F: jmp 0x587ef133
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587EF131: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587EF133: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587EF136: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x587EF139: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587EF13C: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587EF13F: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x587EF142: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587EF145: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x587EF148: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587EF14B: pop edi
        __asm _emit 0x5F
        // 0x587EF14C: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x587EF14F: pop esi
        __asm _emit 0x5E
        // 0x587EF150: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
