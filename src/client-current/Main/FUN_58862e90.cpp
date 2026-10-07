// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 265 bytes in 1 exact ranges.
// Source symbol alias: FUN_58862e90.

// Ghidra body range 0x58862E90..0x58862F99; 265 mapped bytes.
extern "C" __declspec(naked) void FUN_58862e90_segment_00() {
    __asm {
        // 0x58862E90: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862E95: mov eax, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x58862E9B: push edi
        __asm _emit 0x57
        // 0x58862E9C: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58862E9E: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58862EA0: and ecx, 0x80000003
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        // 0x58862EA6: jns 0x58862ead
        __asm _emit 0x79
        __asm _emit 0x05
        // 0x58862EA8: dec ecx
        __asm _emit 0x49
        // 0x58862EA9: or ecx, 0xfffffffc
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFC
        // 0x58862EAC: inc ecx
        __asm _emit 0x41
        // 0x58862EAD: jne 0x58862f97
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862EB3: cmp eax, dword ptr [edi + 0x738]
        __asm _emit 0x3B
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862EB9: je 0x58862f97
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862EBF: mov dword ptr [edi + 0x738], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862EC5: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862ECB: mov eax, dword ptr [edx + 4]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x58862ECE: cmp word ptr [eax + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862ED6: push esi
        __asm _emit 0x56
        // 0x58862ED7: je 0x58862f2e
        __asm _emit 0x74
        __asm _emit 0x55
        // 0x58862ED9: mov ecx, dword ptr [edi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862EDF: lea esi, [edi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862EE5: push ecx
        __asm _emit 0x51
        // 0x58862EE6: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862EEC: push esi
        __asm _emit 0x56
        // 0x58862EED: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0xE7
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862EF2: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58862EF4: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58862EF6: jle 0x58862f0a
        __asm _emit 0x7E
        __asm _emit 0x12
        // 0x58862EF8: add eax, -0x19
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xE7
        // 0x58862EFB: push eax
        __asm _emit 0x50
        // 0x58862EFC: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58862EFE: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862F04: push esi
        __asm _emit 0x56
        // 0x58862F05: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xE6
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862F0A: mov edx, dword ptr [edi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862F10: sub edx, dword ptr [esi]
        __asm _emit 0x2B
        __asm _emit 0x16
        // 0x58862F12: cmp edx, 0x7d
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x7D
        // 0x58862F15: jle 0x58862f2e
        __asm _emit 0x7E
        __asm _emit 0x17
        // 0x58862F17: mov ecx, dword ptr [0x58a246ec]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xEC
        __asm _emit 0x46
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862F1D: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x58862F1F: call 0x588ec080
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x91
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58862F24: mov dword ptr [edi + 0xc0], 0
        __asm _emit 0xC7
        __asm _emit 0x87
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862F2E: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862F33: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58862F36: cmp word ptr [eax + 0x164], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862F3E: jne 0x58862f87
        __asm _emit 0x75
        __asm _emit 0x47
        // 0x58862F40: cmp dword ptr [eax + 0x63b0], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862F47: jne 0x58862f87
        __asm _emit 0x75
        __asm _emit 0x3E
        // 0x58862F49: mov ecx, dword ptr [edi + 0xb4]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862F4F: lea esi, [edi + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xB7
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862F55: push ecx
        __asm _emit 0x51
        // 0x58862F56: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862F5C: push esi
        __asm _emit 0x56
        // 0x58862F5D: call 0x587a1640
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xE6
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862F62: mov edx, dword ptr [edi + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862F68: add dword ptr [esi], edx
        __asm _emit 0x01
        __asm _emit 0x16
        // 0x58862F6A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58862F6C: mov eax, dword ptr [edi + 0xb8]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58862F72: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58862F74: jle 0x58862f78
        __asm _emit 0x7E
        __asm _emit 0x02
        // 0x58862F76: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58862F78: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58862F7A: mov ecx, dword ptr [0x58a245fc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xFC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58862F80: push eax
        __asm _emit 0x50
        // 0x58862F81: push esi
        __asm _emit 0x56
        // 0x58862F82: call 0x587a15e0
        __asm _emit 0xE8
        __asm _emit 0x59
        __asm _emit 0xE6
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58862F87: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58862F89: call 0x58860030
        __asm _emit 0xE8
        __asm _emit 0xA2
        __asm _emit 0xD0
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58862F8E: pop esi
        __asm _emit 0x5E
        // 0x58862F8F: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58862F91: pop edi
        __asm _emit 0x5F
        // 0x58862F92: jmp 0x5885ff70
        __asm _emit 0xE9
        __asm _emit 0xD9
        __asm _emit 0xCF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58862F97: pop edi
        __asm _emit 0x5F
        // 0x58862F98: ret
        __asm _emit 0xC3
    }
}
