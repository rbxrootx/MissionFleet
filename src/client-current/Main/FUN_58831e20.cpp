// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 168 bytes in 1 exact ranges.
// Source symbol alias: FUN_58831e20.

// Ghidra body range 0x58831E20..0x58831EC8; 168 mapped bytes.
extern "C" __declspec(naked) void FUN_58831e20_segment_00() {
    __asm {
        // 0x58831E20: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58831E23: push ebx
        __asm _emit 0x53
        // 0x58831E24: mov ebx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58831E28: push ebp
        __asm _emit 0x55
        // 0x58831E29: push esi
        __asm _emit 0x56
        // 0x58831E2A: push edi
        __asm _emit 0x57
        // 0x58831E2B: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58831E2F: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58831E31: push ebx
        __asm _emit 0x53
        // 0x58831E32: mov dword ptr [esi + 0xc8], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831E38: mov dword ptr [esi + 0xcc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xCC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831E3E: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831E44: push edi
        __asm _emit 0x57
        // 0x58831E45: call 0x58753b20
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0x1C
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831E4A: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x58831E4C: test ebp, ebp
        __asm _emit 0x85
        __asm _emit 0xED
        // 0x58831E4E: je 0x58831ea6
        __asm _emit 0x74
        __asm _emit 0x56
        // 0x58831E50: mov ecx, dword ptr [0x58a245ac]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xAC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831E56: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58831E58: jne 0x58831e83
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58831E5A: push ebx
        __asm _emit 0x53
        // 0x58831E5B: push edi
        __asm _emit 0x57
        // 0x58831E5C: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x4F
        __asm _emit 0x1A
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831E61: mov ecx, dword ptr [esi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831E67: push eax
        __asm _emit 0x50
        // 0x58831E68: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xFE
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58831E6D: mov ecx, dword ptr [esi + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58831E73: push ebp
        __asm _emit 0x55
        // 0x58831E74: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0xEC
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58831E79: pop edi
        __asm _emit 0x5F
        // 0x58831E7A: pop esi
        __asm _emit 0x5E
        // 0x58831E7B: pop ebp
        __asm _emit 0x5D
        // 0x58831E7C: pop ebx
        __asm _emit 0x5B
        // 0x58831E7D: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58831E80: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58831E83: push ebx
        __asm _emit 0x53
        // 0x58831E84: push edi
        __asm _emit 0x57
        // 0x58831E85: call 0x587538b0
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0x1A
        __asm _emit 0xF2
        __asm _emit 0xFF
        // 0x58831E8A: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x58831E8D: push eax
        __asm _emit 0x50
        // 0x58831E8E: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0xFE
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58831E93: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x58831E96: push ebp
        __asm _emit 0x55
        // 0x58831E97: call 0x58770a80
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xEB
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58831E9C: pop edi
        __asm _emit 0x5F
        // 0x58831E9D: pop esi
        __asm _emit 0x5E
        // 0x58831E9E: pop ebp
        __asm _emit 0x5D
        // 0x58831E9F: pop ebx
        __asm _emit 0x5B
        // 0x58831EA0: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58831EA3: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58831EA6: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58831EAC: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58831EB0: push eax
        __asm _emit 0x50
        // 0x58831EB1: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58831EB5: mov dword ptr [esp + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58831EB9: call 0x587b92e0
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x74
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58831EBE: pop edi
        __asm _emit 0x5F
        // 0x58831EBF: pop esi
        __asm _emit 0x5E
        // 0x58831EC0: pop ebp
        __asm _emit 0x5D
        // 0x58831EC1: pop ebx
        __asm _emit 0x5B
        // 0x58831EC2: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58831EC5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
