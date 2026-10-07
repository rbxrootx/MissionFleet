// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587A6E90 .. +0xC2 bytes.
// Source symbol alias: FUN_587a6e90.
extern "C" __declspec(naked) void FUN_587a6e90() {
    __asm {
        // 0x587A6E90: push ebx
        __asm _emit 0x53
        // 0x587A6E91: push ebp
        __asm _emit 0x55
        // 0x587A6E92: push esi
        __asm _emit 0x56
        // 0x587A6E93: push edi
        __asm _emit 0x57
        // 0x587A6E94: lea esi, [ecx + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x71
        __asm _emit 0x0C
        // 0x587A6E97: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A6E9B: mov edi, 8
        __asm _emit 0xBF
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6EA0: mov eax, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xFC
        // 0x587A6EA3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A6EA5: je 0x587a6ec8
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587A6EA7: mov bx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587A6EAB: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587A6EAD: dec edx
        __asm _emit 0x4A
        // 0x587A6EAE: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x587A6EB0: sbb dl, dl
        __asm _emit 0x1A
        __asm _emit 0xD2
        // 0x587A6EB2: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587A6EB5: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587A6EB9: mov ebp, 0xfff0
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6EBE: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xDD
        // 0x587A6EC1: or dx, bx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD3
        // 0x587A6EC4: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587A6EC8: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587A6ECA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A6ECC: je 0x587a6eef
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587A6ECE: mov bx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587A6ED2: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587A6ED4: dec edx
        __asm _emit 0x4A
        // 0x587A6ED5: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x587A6ED7: sbb dl, dl
        __asm _emit 0x1A
        __asm _emit 0xD2
        // 0x587A6ED9: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587A6EDC: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587A6EE0: mov ebp, 0xfff0
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6EE5: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xDD
        // 0x587A6EE8: or dx, bx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD3
        // 0x587A6EEB: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587A6EEF: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587A6EF2: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A6EF4: je 0x587a6f17
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587A6EF6: mov bx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587A6EFA: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587A6EFC: dec edx
        __asm _emit 0x4A
        // 0x587A6EFD: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x587A6EFF: sbb dl, dl
        __asm _emit 0x1A
        __asm _emit 0xD2
        // 0x587A6F01: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587A6F04: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587A6F08: mov ebp, 0xfff0
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6F0D: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xDD
        // 0x587A6F10: or dx, bx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD3
        // 0x587A6F13: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587A6F17: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x587A6F1A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A6F1C: je 0x587a6f3f
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587A6F1E: mov bx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x24
        // 0x587A6F22: mov edx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD1
        // 0x587A6F24: dec edx
        __asm _emit 0x4A
        // 0x587A6F25: neg edx
        __asm _emit 0xF7
        __asm _emit 0xDA
        // 0x587A6F27: sbb dl, dl
        __asm _emit 0x1A
        __asm _emit 0xD2
        // 0x587A6F29: and dl, 0xf
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x0F
        // 0x587A6F2C: movzx dx, dl
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x587A6F30: mov ebp, 0xfff0
        __asm _emit 0xBD
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A6F35: and bx, bp
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xDD
        // 0x587A6F38: or dx, bx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD3
        // 0x587A6F3B: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x587A6F3F: add esi, 0x10
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x10
        // 0x587A6F42: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x587A6F45: jne 0x587a6ea0
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A6F4B: pop edi
        __asm _emit 0x5F
        // 0x587A6F4C: pop esi
        __asm _emit 0x5E
        // 0x587A6F4D: pop ebp
        __asm _emit 0x5D
        // 0x587A6F4E: pop ebx
        __asm _emit 0x5B
        // 0x587A6F4F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
