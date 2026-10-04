// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E5AC0 .. +0x84 bytes.
// Source symbol alias: FUN_587e5ac0.
extern "C" __declspec(naked) void FUN_587e5ac0() {
    __asm {
        // 0x587E5AC0: cmp dword ptr [ecx + 0x20d5c], 0
        __asm _emit 0x83
        __asm _emit 0xB9
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5AC7: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587E5ACB: je 0x587e5adc
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x587E5ACD: cmp edx, 8
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x08
        // 0x587E5AD0: je 0x587e5b41
        __asm _emit 0x74
        __asm _emit 0x6F
        // 0x587E5AD2: cmp edx, 9
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x587E5AD5: je 0x587e5b41
        __asm _emit 0x74
        __asm _emit 0x6A
        // 0x587E5AD7: cmp edx, 0x1c
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x1C
        // 0x587E5ADA: je 0x587e5b41
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x587E5ADC: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E5AE0: push esi
        __asm _emit 0x56
        // 0x587E5AE1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587E5AE3: jne 0x587e5b0e
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x587E5AE5: cmp byte ptr [ecx + 0x10484], al
        __asm _emit 0x38
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5AEB: jne 0x587e5b40
        __asm _emit 0x75
        __asm _emit 0x53
        // 0x587E5AED: mov esi, dword ptr [ecx + 0x394]
        __asm _emit 0x8B
        __asm _emit 0xB1
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5AF3: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E5AF7: or esi, eax
        __asm _emit 0x0B
        __asm _emit 0xF0
        // 0x587E5AF9: xor esi, eax
        __asm _emit 0x33
        __asm _emit 0xF0
        // 0x587E5AFB: add dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xC2
        __asm _emit 0x1F
        // 0x587E5AFE: mov dword ptr [ecx + 0x394], esi
        __asm _emit 0x89
        __asm _emit 0xB1
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B04: mov byte ptr [ecx + 0x10484], dl
        __asm _emit 0x88
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5B0A: pop esi
        __asm _emit 0x5E
        // 0x587E5B0B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587E5B0E: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587E5B13: jne 0x587e5b40
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x587E5B15: mov eax, dword ptr [ecx + 0x394]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B1B: mov esi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587E5B1F: push edi
        __asm _emit 0x57
        // 0x587E5B20: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x587E5B22: and edi, esi
        __asm _emit 0x23
        __asm _emit 0xFE
        // 0x587E5B24: cmp edi, esi
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x587E5B26: pop edi
        __asm _emit 0x5F
        // 0x587E5B27: je 0x587e5b40
        __asm _emit 0x74
        __asm _emit 0x17
        // 0x587E5B29: cmp byte ptr [ecx + 0x10484], 0
        __asm _emit 0x80
        __asm _emit 0xB9
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B30: jne 0x587e5b40
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x587E5B32: or eax, esi
        __asm _emit 0x0B
        __asm _emit 0xC6
        // 0x587E5B34: mov dword ptr [ecx + 0x394], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5B3A: mov byte ptr [ecx + 0x10484], dl
        __asm _emit 0x88
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5B40: pop esi
        __asm _emit 0x5E
        // 0x587E5B41: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
