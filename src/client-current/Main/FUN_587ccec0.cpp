// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 296 bytes in 2 exact ranges.
// Source symbol alias: FUN_587ccec0.

// Ghidra body range 0x587CCEC0..0x587CCFA7; 231 mapped bytes.
extern "C" __declspec(naked) void FUN_587ccec0_segment_00() {
    __asm {
        // 0x587CCEC0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587CCEC2: push 0x589899eb
        __asm _emit 0x68
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587CCEC7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCECD: push eax
        __asm _emit 0x50
        // 0x587CCECE: push ecx
        __asm _emit 0x51
        // 0x587CCECF: push esi
        __asm _emit 0x56
        // 0x587CCED0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587CCED5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587CCED7: push eax
        __asm _emit 0x50
        // 0x587CCED8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CCEDC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCEE2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CCEE4: cmp dword ptr [esi + 0x28], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x28
        __asm _emit 0x00
        // 0x587CCEE8: mov dword ptr [esi + 0x18], 2
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCEEF: jne 0x587ccf21
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x587CCEF1: push 0x24
        __asm _emit 0x6A
        __asm _emit 0x24
        // 0x587CCEF3: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0xFD
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CCEF8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x587CCEFB: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CCEFF: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCF07: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CCF09: je 0x587ccf14
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x587CCF0B: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x587CCF0D: call 0x587ce2f0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCF12: jmp 0x587ccf16
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x587CCF14: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CCF16: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CCF1E: mov dword ptr [esi + 0x28], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x28
        // 0x587CCF21: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x587CCF24: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x587CCF26: call 0x587ce310
        __asm _emit 0xE8
        __asm _emit 0xE5
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCF2B: mov eax, dword ptr [esi + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x20
        // 0x587CCF2E: mov ecx, dword ptr [esi + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x1C
        // 0x587CCF31: push eax
        __asm _emit 0x50
        // 0x587CCF32: push ecx
        __asm _emit 0x51
        // 0x587CCF33: mov ecx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x28
        // 0x587CCF36: call 0x587ce3d0
        __asm _emit 0xE8
        __asm _emit 0x95
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCF3B: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CCF40: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CCF44: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x587CCF47: mov ecx, 0xfffd
        __asm _emit 0xB9
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCF4C: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x587CCF4F: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587CCF52: mov eax, dword ptr [0x58a245c4]
        __asm _emit 0xA1
        __asm _emit 0xC4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CCF57: movzx edx, word ptr [eax + 0x24]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587CCF5B: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x587CCF5E: and dx, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xD1
        // 0x587CCF61: lea ecx, [esi + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x587CCF64: mov word ptr [eax], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587CCF67: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CCF6C: lea ecx, [esi + 0x74]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0x74
        // 0x587CCF6F: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x2C
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CCF74: lea ecx, [esi + 0x84]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCF7A: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CCF7F: lea ecx, [esi + 0x94]
        __asm _emit 0x8D
        __asm _emit 0x8E
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCF85: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CCF8A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CCF8C: mov dword ptr [esi + 0xa4], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCF92: mov dword ptr [esi + 0xa8], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCF98: mov edx, dword ptr [0x58a247f8]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587CCF9E: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x587CCFA1: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CCFA3: je 0x587ccfd6
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x587CCFA5: jmp 0x587ccfb0
        __asm _emit 0xEB
        __asm _emit 0x09
    }
}

// Ghidra body range 0x587CCFB0..0x587CCFF1; 65 mapped bytes.
extern "C" __declspec(naked) void FUN_587ccec0_segment_01() {
    __asm {
        // 0x587CCFB0: movzx edx, byte ptr [eax + 0x354]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x54
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCFB7: mov ecx, dword ptr [eax + 0xd98]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0x98
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCFBD: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587CCFC3: cmp edx, 1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x01
        // 0x587CCFC6: ja 0x587ccfcf
        __asm _emit 0x77
        __asm _emit 0x07
        // 0x587CCFC8: add dword ptr [esi + edx*4 + 0xa4], ecx
        __asm _emit 0x01
        __asm _emit 0x8C
        __asm _emit 0x96
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCFCF: mov eax, dword ptr [eax + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x78
        // 0x587CCFD2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587CCFD4: jne 0x587ccfb0
        __asm _emit 0x75
        __asm _emit 0xDA
        // 0x587CCFD6: mov dword ptr [esi + 0xac], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCFE0: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587CCFE4: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CCFEB: pop ecx
        __asm _emit 0x59
        // 0x587CCFEC: pop esi
        __asm _emit 0x5E
        // 0x587CCFED: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587CCFF0: ret
        __asm _emit 0xC3
    }
}
