// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 390 bytes in 1 exact ranges.
// Source symbol alias: FUN_58796af0.

// Ghidra body range 0x58796AF0..0x58796C76; 390 mapped bytes.
extern "C" __declspec(naked) void FUN_58796af0_segment_00() {
    __asm {
        // 0x58796AF0: push esi
        __asm _emit 0x56
        // 0x58796AF1: mov esi, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58796AF5: push edi
        __asm _emit 0x57
        // 0x58796AF6: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796AF8: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796AFD: mov edi, dword ptr [0x5898c030]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58796B03: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796B08: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58796B0A: push 0x58997fd0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796B0F: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796B11: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796B14: push eax
        __asm _emit 0x50
        // 0x58796B15: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796B17: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796B1C: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796B21: push 0x7d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796B26: push 0x58997fbc
        __asm _emit 0x68
        __asm _emit 0xBC
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796B2B: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796B2D: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796B30: push eax
        __asm _emit 0x50
        // 0x58796B31: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796B33: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x98
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796B38: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796B3D: push 0x7d1
        __asm _emit 0x68
        __asm _emit 0xD1
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796B42: push 0x58997fa8
        __asm _emit 0x68
        __asm _emit 0xA8
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796B47: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796B49: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796B4C: push eax
        __asm _emit 0x50
        // 0x58796B4D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796B4F: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796B54: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796B59: push 0x12
        __asm _emit 0x6A
        __asm _emit 0x12
        // 0x58796B5B: push 0x58997f98
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796B60: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796B62: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796B65: push eax
        __asm _emit 0x50
        // 0x58796B66: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796B68: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796B6D: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796B72: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58796B74: push 0x58997f84
        __asm _emit 0x68
        __asm _emit 0x84
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796B79: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796B7B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796B7E: push eax
        __asm _emit 0x50
        // 0x58796B7F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796B81: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x4A
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796B86: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796B8B: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x58796B8D: push 0x58997f6c
        __asm _emit 0x68
        __asm _emit 0x6C
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796B92: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796B94: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796B97: push eax
        __asm _emit 0x50
        // 0x58796B98: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796B9A: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x31
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796B9F: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796BA4: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58796BA6: push 0x58997f58
        __asm _emit 0x68
        __asm _emit 0x58
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796BAB: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796BAD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796BB0: push eax
        __asm _emit 0x50
        // 0x58796BB1: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796BB3: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x18
        __asm _emit 0x1D
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796BB8: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796BBD: push 7
        __asm _emit 0x6A
        __asm _emit 0x07
        // 0x58796BBF: push 0x58997f44
        __asm _emit 0x68
        __asm _emit 0x44
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796BC4: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796BC6: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796BC9: push eax
        __asm _emit 0x50
        // 0x58796BCA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796BCC: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xFF
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796BD1: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796BD6: push 8
        __asm _emit 0x6A
        __asm _emit 0x08
        // 0x58796BD8: push 0x58997f30
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796BDD: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796BDF: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796BE2: push eax
        __asm _emit 0x50
        // 0x58796BE3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796BE5: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796BEA: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796BEF: push 9
        __asm _emit 0x6A
        __asm _emit 0x09
        // 0x58796BF1: push 0x58997f1c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796BF6: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796BF8: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796BFB: push eax
        __asm _emit 0x50
        // 0x58796BFC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796BFE: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796C03: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796C08: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58796C0A: push 0x58997f08
        __asm _emit 0x68
        __asm _emit 0x08
        __asm _emit 0x7F
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796C0F: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796C11: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796C14: push eax
        __asm _emit 0x50
        // 0x58796C15: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796C17: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796C1C: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796C21: push 0xe
        __asm _emit 0x6A
        __asm _emit 0x0E
        // 0x58796C23: push 0x58997ef0
        __asm _emit 0x68
        __asm _emit 0xF0
        __asm _emit 0x7E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796C28: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796C2A: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796C2D: push eax
        __asm _emit 0x50
        // 0x58796C2E: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796C30: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x9B
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796C35: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796C3A: push 0x33
        __asm _emit 0x6A
        __asm _emit 0x33
        // 0x58796C3C: push 0x58997ee0
        __asm _emit 0x68
        __asm _emit 0xE0
        __asm _emit 0x7E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796C41: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796C43: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796C46: push eax
        __asm _emit 0x50
        // 0x58796C47: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796C49: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x82
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796C4E: cmp byte ptr [esp + 0x10], 0
        __asm _emit 0x80
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58796C53: je 0x58796c71
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x58796C55: push 0x969696
        __asm _emit 0x68
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x00
        // 0x58796C5A: push 0xbb8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58796C5F: push 0x58997ecc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0x7E
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58796C64: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58796C66: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58796C69: push eax
        __asm _emit 0x50
        // 0x58796C6A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58796C6C: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x5F
        __asm _emit 0x1C
        __asm _emit 0x17
        __asm _emit 0x00
        // 0x58796C71: pop edi
        __asm _emit 0x5F
        // 0x58796C72: pop esi
        __asm _emit 0x5E
        // 0x58796C73: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
