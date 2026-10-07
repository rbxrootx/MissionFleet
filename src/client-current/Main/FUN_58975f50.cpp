// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 317 bytes in 1 exact ranges.
// Source symbol alias: FUN_58975f50.

// Ghidra body range 0x58975F50..0x5897608D; 317 mapped bytes.
extern "C" __declspec(naked) void FUN_58975f50_segment_00() {
    __asm {
        // 0x58975F50: push ecx
        __asm _emit 0x51
        // 0x58975F51: push ebx
        __asm _emit 0x53
        // 0x58975F52: push esi
        __asm _emit 0x56
        // 0x58975F53: push edi
        __asm _emit 0x57
        // 0x58975F54: mov edi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58975F58: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58975F5A: push edi
        __asm _emit 0x57
        // 0x58975F5B: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x58975F5E: call 0x589776a0
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975F63: push 0x54
        __asm _emit 0x6A
        __asm _emit 0x54
        // 0x58975F65: push edi
        __asm _emit 0x57
        // 0x58975F66: mov dword ptr [esp + 0x18], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58975F6A: call 0x58977650
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975F6F: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x58975F71: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58975F74: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58975F76: jne 0x58975f94
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x58975F78: push edi
        __asm _emit 0x57
        // 0x58975F79: call 0x5897b780
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975F7E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58975F80: push edi
        __asm _emit 0x57
        // 0x58975F81: mov dword ptr [eax + 0x14], 0x36
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x14
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975F88: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58975F8A: mov dword ptr [ecx + 0x18], ebx
        __asm _emit 0x89
        __asm _emit 0x59
        __asm _emit 0x18
        // 0x58975F8D: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58975F8F: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x58975F91: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58975F94: mov dword ptr [esi], 0x58976090
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x90
        __asm _emit 0x60
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975F9A: mov dword ptr [esi + 4], 0x589761e0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0xE0
        __asm _emit 0x61
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975FA1: mov dword ptr [esi + 8], 0x58976290
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x08
        __asm _emit 0x90
        __asm _emit 0x62
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975FA8: mov dword ptr [esi + 0xc], 0x58976340
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x0C
        __asm _emit 0x40
        __asm _emit 0x63
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975FAF: mov dword ptr [esi + 0x10], 0x589763f0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x10
        __asm _emit 0xF0
        __asm _emit 0x63
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975FB6: mov dword ptr [esi + 0x14], 0x58976460
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x14
        __asm _emit 0x60
        __asm _emit 0x64
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975FBD: mov dword ptr [esi + 0x18], 0x589764d0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0xD0
        __asm _emit 0x64
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975FC4: mov dword ptr [esi + 0x1c], 0x58976650
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x1C
        __asm _emit 0x50
        __asm _emit 0x66
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975FCB: mov dword ptr [esi + 0x20], 0x58976840
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x20
        __asm _emit 0x40
        __asm _emit 0x68
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975FD2: mov dword ptr [esi + 0x24], 0x58976a30
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x6A
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975FD9: mov dword ptr [esi + 0x28], 0x58976b30
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x28
        __asm _emit 0x30
        __asm _emit 0x6B
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58975FE0: mov dword ptr [esi + 0x30], 0x3b9aca00
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0xCA
        __asm _emit 0x9A
        __asm _emit 0x3B
        // 0x58975FE7: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58975FEB: mov ecx, 2
        __asm _emit 0xB9
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58975FF0: mov dword ptr [esi + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x58975FF3: lea eax, [esi + 0x40]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x40
        // 0x58975FF6: mov dword ptr [eax - 8], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0xF8
        // 0x58975FF9: mov dword ptr [eax], ebx
        __asm _emit 0x89
        __asm _emit 0x18
        // 0x58975FFB: sub eax, 4
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x04
        // 0x58975FFE: dec ecx
        __asm _emit 0x49
        // 0x58975FFF: jne 0x58975ff6
        __asm _emit 0x75
        __asm _emit 0xF5
        // 0x58976001: mov dword ptr [esi + 0x44], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x44
        // 0x58976004: mov dword ptr [esi + 0x48], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x48
        // 0x58976007: mov dword ptr [esi + 0x4c], 0x54
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x4C
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897600E: push 0x589cfbcc
        __asm _emit 0x68
        __asm _emit 0xCC
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58976013: mov dword ptr [edi + 4], esi
        __asm _emit 0x89
        __asm _emit 0x77
        __asm _emit 0x04
        // 0x58976016: call dword ptr [0x5898c384]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897601C: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897601F: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58976021: je 0x58976088
        __asm _emit 0x74
        __asm _emit 0x65
        // 0x58976023: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58976027: lea edx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5897602B: push ecx
        __asm _emit 0x51
        // 0x5897602C: push edx
        __asm _emit 0x52
        // 0x5897602D: push 0x589cfbc4
        __asm _emit 0x68
        __asm _emit 0xC4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58976032: push eax
        __asm _emit 0x50
        // 0x58976033: mov byte ptr [esp + 0x24], 0x78
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x78
        // 0x58976038: call dword ptr [0x5898c380]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897603E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58976041: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58976043: jle 0x58976088
        __asm _emit 0x7E
        __asm _emit 0x43
        // 0x58976045: mov al, byte ptr [esp + 0x14]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58976049: cmp al, 0x6d
        __asm _emit 0x3C
        __asm _emit 0x6D
        // 0x5897604B: je 0x58976051
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5897604D: cmp al, 0x4d
        __asm _emit 0x3C
        __asm _emit 0x4D
        // 0x5897604F: jne 0x58976075
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x58976051: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58976055: pop edi
        __asm _emit 0x5F
        // 0x58976056: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58976059: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5897605C: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5897605F: shl eax, 3
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x58976062: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58976065: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58976068: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5897606B: shl eax, 3
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x5897606E: mov dword ptr [esi + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x58976071: pop esi
        __asm _emit 0x5E
        // 0x58976072: pop ebx
        __asm _emit 0x5B
        // 0x58976073: pop ecx
        __asm _emit 0x59
        // 0x58976074: ret
        __asm _emit 0xC3
        // 0x58976075: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58976079: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5897607C: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x5897607F: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58976082: shl eax, 3
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x03
        // 0x58976085: mov dword ptr [esi + 0x2c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x2C
        // 0x58976088: pop edi
        __asm _emit 0x5F
        // 0x58976089: pop esi
        __asm _emit 0x5E
        // 0x5897608A: pop ebx
        __asm _emit 0x5B
        // 0x5897608B: pop ecx
        __asm _emit 0x59
        // 0x5897608C: ret
        __asm _emit 0xC3
    }
}
