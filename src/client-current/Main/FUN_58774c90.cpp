// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 189 bytes in 1 exact ranges.
// Source symbol alias: FUN_58774c90.

// Ghidra body range 0x58774C90..0x58774D4D; 189 mapped bytes.
extern "C" __declspec(naked) void FUN_58774c90_segment_00() {
    __asm {
        // 0x58774C90: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58774C93: mov eax, dword ptr [0x589cfc98]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58774C98: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58774C9B: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58774C9D: push esi
        __asm _emit 0x56
        // 0x58774C9E: push edi
        __asm _emit 0x57
        // 0x58774C9F: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58774CA2: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58774CA4: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774CA9: lea esi, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58774CAD: mov dword ptr [esp + 0x28], 4
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774CB5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58774CB7: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58774CB9: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58774CBB: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58774CBD: mov esi, dword ptr [0x5898c154]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58774CC3: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x58774CC5: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58774CC7: mov ecx, dword ptr [0x589cfc98]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58774CCD: mov eax, dword ptr [ecx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x0C
        // 0x58774CD0: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58774CD2: test eax, 0x10000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58774CD7: je 0x58774ce2
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58774CD9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58774CDB: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x80
        __asm _emit 0xD4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774CE0: jmp 0x58774cf8
        __asm _emit 0xEB
        __asm _emit 0x16
        // 0x58774CE2: test eax, 0x20000
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58774CE7: je 0x58774cf8
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x58774CE9: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58774CEB: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xD4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774CF0: push eax
        __asm _emit 0x50
        // 0x58774CF1: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58774CF3: call 0x58774bc0
        __asm _emit 0xE8
        __asm _emit 0xC8
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774CF8: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x58774CFA: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58774CFC: mov ecx, dword ptr [0x589cfc98]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58774D02: call 0x587743e0
        __asm _emit 0xE8
        __asm _emit 0xD9
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774D07: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x58774D09: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58774D0B: mov ecx, dword ptr [0x589cfc98]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58774D11: call 0x587745a0
        __asm _emit 0xE8
        __asm _emit 0x8A
        __asm _emit 0xF8
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58774D16: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x58774D18: call esi
        __asm _emit 0xFF
        __asm _emit 0xD6
        // 0x58774D1A: mov ecx, dword ptr [0x589cfc98]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x98
        __asm _emit 0xFC
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58774D20: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58774D23: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58774D25: sub esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x1C
        // 0x58774D28: mov edi, esp
        __asm _emit 0x8B
        __asm _emit 0xFC
        // 0x58774D2A: mov ecx, 7
        __asm _emit 0xB9
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774D2F: lea esi, [esp + 0x24]
        __asm _emit 0x8D
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58774D33: mov dword ptr [esp + 0x28], 8
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58774D3B: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x58774D3D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58774D3F: mov eax, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x02
        // 0x58774D41: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58774D43: pop edi
        __asm _emit 0x5F
        // 0x58774D44: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58774D46: pop esi
        __asm _emit 0x5E
        // 0x58774D47: add esp, 0x1c
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x1C
        // 0x58774D4A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
