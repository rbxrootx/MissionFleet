// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588DFFB0 .. +0x179 bytes.
// Source symbol alias: FUN_588dffb0.
extern "C" __declspec(naked) void FUN_588dffb0() {
    __asm {
        // 0x588DFFB0: push esi
        __asm _emit 0x56
        // 0x588DFFB1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588DFFB3: mov eax, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DFFB9: mov ecx, dword ptr [esi + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DFFBF: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DFFC4: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588DFFCA: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588DFFCC: jge 0x588dffea
        __asm _emit 0x7D
        __asm _emit 0x1C
        // 0x588DFFCE: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588DFFD0: je 0x588dffe0
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x588DFFD2: imul eax, eax, 0x64
        __asm _emit 0x6B
        __asm _emit 0xC0
        __asm _emit 0x64
        // 0x588DFFD5: cdq
        __asm _emit 0x99
        // 0x588DFFD6: idiv ecx
        __asm _emit 0xF7
        __asm _emit 0xF9
        // 0x588DFFD8: mov dword ptr [esi + 0x1444], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DFFDE: jmp 0x588dffef
        __asm _emit 0xEB
        __asm _emit 0x0F
        // 0x588DFFE0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588DFFE2: mov dword ptr [esi + 0x1444], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DFFE8: jmp 0x588dffef
        __asm _emit 0xEB
        __asm _emit 0x05
        // 0x588DFFEA: mov eax, 0x64
        __asm _emit 0xB8
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DFFEF: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588DFFF5: push eax
        __asm _emit 0x50
        // 0x588DFFF6: call 0x587b03a0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x03
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x588DFFFB: mov eax, dword ptr [esi + 0x398]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0001: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588E0006: jg 0x588e0125
        __asm _emit 0x0F
        __asm _emit 0x8F
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E000C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588E000E: mov dword ptr [esi + 0x398], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x588E0018: call 0x588df450
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588E001D: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E0023: cmp dword ptr [ecx + 4], esi
        __asm _emit 0x39
        __asm _emit 0x71
        __asm _emit 0x04
        // 0x588E0026: jne 0x588e004b
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x588E0028: mov edx, dword ptr [0x58a245c4]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E002E: mov ecx, dword ptr [edx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0034: call 0x58895540
        __asm _emit 0xE8
        __asm _emit 0x07
        __asm _emit 0x55
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x588E0039: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E003E: mov ecx, dword ptr [eax + 0x20c9c]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x9C
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E0044: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588E0046: call 0x587a6e90
        __asm _emit 0xE8
        __asm _emit 0x45
        __asm _emit 0x6E
        __asm _emit 0xEC
        __asm _emit 0xFF
        // 0x588E004B: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E0051: cmp dword ptr [ecx + 0x10558], esi
        __asm _emit 0x39
        __asm _emit 0xB1
        __asm _emit 0x58
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588E0057: jne 0x588e0066
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x588E0059: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588E005B: call 0x587f2870
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x28
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588E0060: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E0066: cmp dword ptr [esi + 0x60b0], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E006D: jne 0x588e00a7
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x588E006F: inc dword ptr [ecx + 0x20d98]
        __asm _emit 0xFF
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x588E0075: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588E0077: mov dword ptr [esi + 0x60b0], 0x40040000
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x588E0081: mov dword ptr [esi + 0x63b0], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E008B: mov dword ptr [esi + 0x6058], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x58
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0095: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E009B: push esi
        __asm _emit 0x56
        // 0x588E009C: call 0x587e8750
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x86
        __asm _emit 0xF0
        __asm _emit 0xFF
        // 0x588E00A1: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E00A7: cmp dword ptr [esp + 8], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588E00AC: je 0x588e0125
        __asm _emit 0x74
        __asm _emit 0x77
        // 0x588E00AE: cmp dword ptr [esi + 0x606c], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x6C
        __asm _emit 0x60
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E00B5: je 0x588e00d8
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x588E00B7: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E00BD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E00BF: cmp byte ptr [esi + 0x354], al
        __asm _emit 0x38
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E00C5: sete al
        __asm _emit 0x0F
        __asm _emit 0x94
        __asm _emit 0xC0
        // 0x588E00C8: push eax
        __asm _emit 0x50
        // 0x588E00C9: mov eax, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x60
        // 0x588E00CC: push eax
        __asm _emit 0x50
        // 0x588E00CD: call 0x58749fa0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x9E
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588E00D2: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E00D8: movzx edx, byte ptr [esi + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x96
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E00DF: mov eax, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E00E5: push edx
        __asm _emit 0x52
        // 0x588E00E6: mov edx, dword ptr [eax + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x60
        // 0x588E00E9: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x588E00EB: push edx
        __asm _emit 0x52
        // 0x588E00EC: call 0x58749fa0
        __asm _emit 0xE8
        __asm _emit 0xAF
        __asm _emit 0x9E
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588E00F1: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E00F6: cmp dword ptr [eax + 0x21c34], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x34
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E00FD: jne 0x588e0125
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x588E00FF: mov ecx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588E0105: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x588E0108: mov cl, byte ptr [esi + 0x354]
        __asm _emit 0x8A
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E010E: cmp cl, byte ptr [edx + 0x354]
        __asm _emit 0x3A
        __asm _emit 0x8A
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E0114: je 0x588e0125
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x588E0116: mov edx, dword ptr [esi + 0x100c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x0C
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E011C: mov ecx, dword ptr [edx + 0x60]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x60
        // 0x588E011F: sub dword ptr [eax + 0x10a18], ecx
        __asm _emit 0x29
        __asm _emit 0x88
        __asm _emit 0x18
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588E0125: pop esi
        __asm _emit 0x5E
        // 0x588E0126: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
