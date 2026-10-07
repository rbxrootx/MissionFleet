// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 145 bytes in 1 exact ranges.
// Source symbol alias: FUN_58979a60.

// Ghidra body range 0x58979A60..0x58979AF1; 145 mapped bytes.
extern "C" __declspec(naked) void FUN_58979a60_segment_00() {
    __asm {
        // 0x58979A60: push esi
        __asm _emit 0x56
        // 0x58979A61: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58979A65: push edi
        __asm _emit 0x57
        // 0x58979A66: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x58979A68: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58979A6B: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58979A6D: push esi
        __asm _emit 0x56
        // 0x58979A6E: call dword ptr [eax]
        __asm _emit 0xFF
        __asm _emit 0x10
        // 0x58979A70: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58979A72: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58979A75: mov dword ptr [esi + 0x158], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58979A7B: mov dword ptr [edi], 0x58979b00
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x9B
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58979A81: mov eax, dword ptr [esi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58979A87: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x58979A8A: je 0x58979ac5
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x58979A8C: dec eax
        __asm _emit 0x48
        // 0x58979A8D: je 0x58979ab5
        __asm _emit 0x74
        __asm _emit 0x26
        // 0x58979A8F: dec eax
        __asm _emit 0x48
        // 0x58979A90: je 0x58979aa5
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58979A92: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58979A94: push esi
        __asm _emit 0x56
        // 0x58979A95: mov dword ptr [ecx + 0x14], 0x30
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x14
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58979A9C: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58979A9E: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x58979AA0: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58979AA3: jmp 0x58979ad3
        __asm _emit 0xEB
        __asm _emit 0x2E
        // 0x58979AA5: mov dword ptr [edi + 4], 0x58979e70
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0x70
        __asm _emit 0x9E
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58979AAC: mov dword ptr [edi + 0x1c], 0x5897c940
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x1C
        __asm _emit 0x40
        __asm _emit 0xC9
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58979AB3: jmp 0x58979ad3
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x58979AB5: mov dword ptr [edi + 4], 0x58979cd0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0xD0
        __asm _emit 0x9C
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58979ABC: mov dword ptr [edi + 8], 0x5897c6f0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0xF0
        __asm _emit 0xC6
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58979AC3: jmp 0x58979ad3
        __asm _emit 0xEB
        __asm _emit 0x0E
        // 0x58979AC5: mov dword ptr [edi + 4], 0x58979cd0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x04
        __asm _emit 0xD0
        __asm _emit 0x9C
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58979ACC: mov dword ptr [edi + 8], 0x5897c2f0
        __asm _emit 0xC7
        __asm _emit 0x47
        __asm _emit 0x08
        __asm _emit 0xF0
        __asm _emit 0xC2
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58979AD3: lea eax, [edi + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x20
        // 0x58979AD6: pop edi
        __asm _emit 0x5F
        // 0x58979AD7: mov ecx, 4
        __asm _emit 0xB9
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58979ADC: pop esi
        __asm _emit 0x5E
        // 0x58979ADD: mov dword ptr [eax - 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58979AE4: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58979AEA: add eax, 4
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x04
        // 0x58979AED: dec ecx
        __asm _emit 0x49
        // 0x58979AEE: jne 0x58979add
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x58979AF0: ret
        __asm _emit 0xC3
    }
}
