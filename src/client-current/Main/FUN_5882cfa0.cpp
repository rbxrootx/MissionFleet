// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 433 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882cfa0.

// Ghidra body range 0x5882CFA0..0x5882D151; 433 mapped bytes.
extern "C" __declspec(naked) void FUN_5882cfa0_segment_00() {
    __asm {
        // 0x5882CFA0: push ebp
        __asm _emit 0x55
        // 0x5882CFA1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x5882CFA3: and esp, 0xfffffff8
        __asm _emit 0x83
        __asm _emit 0xE4
        __asm _emit 0xF8
        // 0x5882CFA6: sub esp, 0x114
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CFAC: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5882CFB1: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5882CFB3: mov dword ptr [esp + 0x110], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CFBA: push ebx
        __asm _emit 0x53
        // 0x5882CFBB: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5882CFBD: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CFC3: push esi
        __asm _emit 0x56
        // 0x5882CFC4: push edi
        __asm _emit 0x57
        // 0x5882CFC5: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882CFC7: je 0x5882d13c
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x6F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CFCD: call 0x587864a0
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x94
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882CFD2: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5882CFD4: mov eax, dword ptr [ebx + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x83
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CFDA: add esi, 0x180
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CFE0: mov ecx, 0x20
        __asm _emit 0xB9
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CFE5: lea edi, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882CFE9: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x5882CFEB: mov dword ptr [eax + 0x50], 1
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CFF2: mov ecx, dword ptr [ebx + 0xe0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CFF8: mov dword ptr [ecx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882CFFF: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D005: call 0x587860f0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0x90
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882D00A: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D010: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5882D012: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882D016: call 0x587863c0
        __asm _emit 0xE8
        __asm _emit 0xA5
        __asm _emit 0x93
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882D01B: mov ecx, dword ptr [ebx + 0x158]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D021: push edi
        __asm _emit 0x57
        // 0x5882D022: movzx esi, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xF0
        // 0x5882D025: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xA3
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D02A: mov ecx, dword ptr [ebx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D030: push esi
        __asm _emit 0x56
        // 0x5882D031: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x2A
        __asm _emit 0xA3
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D036: mov ecx, dword ptr [ebx + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D03C: push edi
        __asm _emit 0x57
        // 0x5882D03D: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xA3
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D042: mov ecx, dword ptr [ebx + 0x170]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D048: call 0x58786340
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x92
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882D04D: mov ecx, dword ptr [ebx + 0x14c]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D053: movzx edx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xD0
        // 0x5882D056: push edx
        __asm _emit 0x52
        // 0x5882D057: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xA3
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D05C: mov ecx, dword ptr [ebx + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D062: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D067: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D06D: call 0x589087f0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0xB7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D072: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x5882D074: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5882D076: jbe 0x5882d135
        __asm _emit 0x0F
        __asm _emit 0x86
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D07C: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5882D080: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882D084: push 0x80
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D089: lea ecx, [esp + 0x9c]
        __asm _emit 0x8D
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D090: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5882D092: push ecx
        __asm _emit 0x51
        // 0x5882D093: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0xFB
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5882D098: lea edi, [esi + 1]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x01
        // 0x5882D09B: push edi
        __asm _emit 0x57
        // 0x5882D09C: lea edx, [esp + 0xa8]
        __asm _emit 0x8D
        __asm _emit 0x94
        __asm _emit 0x24
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D0A3: push 0x5898d18c
        __asm _emit 0x68
        __asm _emit 0x8C
        __asm _emit 0xD1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882D0A8: push edx
        __asm _emit 0x52
        // 0x5882D0A9: call dword ptr [0x5898c3c4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882D0AF: mov ecx, dword ptr [ebx + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D0B5: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5882D0B8: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882D0BD: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882D0BF: lea eax, [esp + 0xa0]
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D0C6: push eax
        __asm _emit 0x50
        // 0x5882D0C7: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0xB8
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D0CC: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5882D0D0: cmp byte ptr [eax], 0
        __asm _emit 0x80
        __asm _emit 0x38
        __asm _emit 0x00
        // 0x5882D0D3: je 0x5882d101
        __asm _emit 0x74
        __asm _emit 0x2C
        // 0x5882D0D5: cmp word ptr [eax + 2], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x5882D0DA: je 0x5882d101
        __asm _emit 0x74
        __asm _emit 0x25
        // 0x5882D0DC: mov ecx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x08
        // 0x5882D0DE: push ecx
        __asm _emit 0x51
        // 0x5882D0DF: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882D0E5: call 0x58778d00
        __asm _emit 0xE8
        __asm _emit 0x16
        __asm _emit 0xBC
        __asm _emit 0xF4
        __asm _emit 0xFF
        // 0x5882D0EA: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D0F0: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5882D0F2: je 0x5882d107
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x5882D0F4: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882D0F9: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882D0FB: add eax, 0x78
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x78
        // 0x5882D0FE: push eax
        __asm _emit 0x50
        // 0x5882D0FF: jmp 0x5882d11f
        __asm _emit 0xEB
        __asm _emit 0x1E
        // 0x5882D101: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D107: push esi
        __asm _emit 0x56
        // 0x5882D108: call 0x589081e0
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0xB0
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D10D: mov ecx, dword ptr [ebx + 0x118]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D113: push 0xffffff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        // 0x5882D118: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5882D11A: push 0x5898d61c
        __asm _emit 0x68
        __asm _emit 0x1C
        __asm _emit 0xD6
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5882D11F: call 0x589088d0
        __asm _emit 0xE8
        __asm _emit 0xAC
        __asm _emit 0xB7
        __asm _emit 0x0D
        __asm _emit 0x00
        // 0x5882D124: add dword ptr [esp + 0x10], 4
        __asm _emit 0x83
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x04
        // 0x5882D129: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x5882D12B: cmp esi, dword ptr [esp + 0x14]
        __asm _emit 0x3B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5882D12F: jb 0x5882d084
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x4F
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882D135: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5882D137: call 0x5882c490
        __asm _emit 0xE8
        __asm _emit 0x54
        __asm _emit 0xF3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5882D13C: mov ecx, dword ptr [esp + 0x11c]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5882D143: pop edi
        __asm _emit 0x5F
        // 0x5882D144: pop esi
        __asm _emit 0x5E
        // 0x5882D145: pop ebx
        __asm _emit 0x5B
        // 0x5882D146: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5882D148: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x8D
        __asm _emit 0xFA
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x5882D14D: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x5882D14F: pop ebp
        __asm _emit 0x5D
        // 0x5882D150: ret
        __asm _emit 0xC3
    }
}
