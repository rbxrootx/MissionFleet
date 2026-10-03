// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888D110 .. +0x13A bytes.
extern "C" __declspec(naked) void FUN_5888d110() {
    __asm {
        // 0x5888D110: push ebx
        __asm _emit 0x53
        // 0x5888D111: push esi
        __asm _emit 0x56
        // 0x5888D112: push edi
        __asm _emit 0x57
        // 0x5888D113: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5888D115: push 0x30
        __asm _emit 0x6A
        __asm _emit 0x30
        // 0x5888D117: lea edi, [esi + 0x78]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x78
        // 0x5888D11A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5888D11C: push edi
        __asm _emit 0x57
        // 0x5888D11D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x26
        __asm _emit 0xFB
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x5888D122: mov ebx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5888D126: mov eax, dword ptr [ebx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x18
        // 0x5888D129: mov dword ptr [0x58a0b468], eax
        __asm _emit 0xA3
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5888D12E: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5888D131: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x5888D134: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5888D139: push eax
        __asm _emit 0x50
        // 0x5888D13A: call 0x58895090
        __asm _emit 0xE8
        __asm _emit 0x51
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D13F: mov eax, dword ptr [ebx + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x43
        __asm _emit 0x1C
        // 0x5888D142: mov dword ptr [0x58a0b46c], eax
        __asm _emit 0xA3
        __asm _emit 0x6C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5888D147: mov ecx, dword ptr [esi + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x64
        // 0x5888D14A: xor eax, 0xaaaaaaaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x5888D14F: push eax
        __asm _emit 0x50
        // 0x5888D150: call 0x58895060
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D155: mov ebx, dword ptr [0x5898c198]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D15B: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5888D160: push edi
        __asm _emit 0x57
        // 0x5888D161: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5888D163: mov ecx, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D169: call 0x5875f940
        __asm _emit 0xE8
        __asm _emit 0xD2
        __asm _emit 0x27
        __asm _emit 0xED
        __asm _emit 0xFF
        // 0x5888D16E: push 0x5899a274
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0xA2
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5888D173: call dword ptr [0x5898c030]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5888D179: mov edi, dword ptr [esi + 0x154]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D17F: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5888D182: push eax
        __asm _emit 0x50
        // 0x5888D183: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D189: push eax
        __asm _emit 0x50
        // 0x5888D18A: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5888D18C: mov eax, dword ptr [edi + 0x80]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D192: lea ecx, [eax + 1]
        __asm _emit 0x8D
        __asm _emit 0x48
        __asm _emit 0x01
        // 0x5888D195: mov dl, byte ptr [eax]
        __asm _emit 0x8A
        __asm _emit 0x10
        // 0x5888D197: inc eax
        __asm _emit 0x40
        // 0x5888D198: test dl, dl
        __asm _emit 0x84
        __asm _emit 0xD2
        // 0x5888D19A: jne 0x5888d195
        __asm _emit 0x75
        __asm _emit 0xF9
        // 0x5888D19C: sub eax, ecx
        __asm _emit 0x2B
        __asm _emit 0xC1
        // 0x5888D19E: mov dword ptr [edi + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1A4: mov dword ptr [edi + 0x94], eax
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1AA: cmp dword ptr [0x58a0b4a0], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5888D1B1: je 0x5888d20d
        __asm _emit 0x74
        __asm _emit 0x5A
        // 0x5888D1B3: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5888D1BA: mov ecx, dword ptr [esi + 0x628]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x28
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1C0: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1C5: mov dword ptr [esi + 0x638], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1CB: mov dword ptr [esi + 0x63c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x3C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1D1: je 0x5888d1f0
        __asm _emit 0x74
        __asm _emit 0x1D
        // 0x5888D1D3: mov dword ptr [esi + 0x644], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1D9: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1DE: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5888D1E1: mov edx, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1E7: pop edi
        __asm _emit 0x5F
        // 0x5888D1E8: pop esi
        __asm _emit 0x5E
        // 0x5888D1E9: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5888D1EC: pop ebx
        __asm _emit 0x5B
        // 0x5888D1ED: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888D1F0: mov dword ptr [esi + 0x640], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x40
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1F6: mov eax, 5
        __asm _emit 0xB8
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D1FB: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x5888D1FE: mov edx, dword ptr [esi + 0x62c]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x2C
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D204: pop edi
        __asm _emit 0x5F
        // 0x5888D205: pop esi
        __asm _emit 0x5E
        // 0x5888D206: mov dword ptr [edx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x50
        // 0x5888D209: pop ebx
        __asm _emit 0x5B
        // 0x5888D20A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888D20D: cmp dword ptr [0x58a0b4a4], 0
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA4
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x00
        // 0x5888D214: je 0x5888d23a
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5888D216: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D21B: mov dword ptr [esi + 0x638], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D221: mov dword ptr [esi + 0x644], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x44
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D227: mov eax, dword ptr [esi + 0x630]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x30
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D22D: pop edi
        __asm _emit 0x5F
        // 0x5888D22E: pop esi
        __asm _emit 0x5E
        // 0x5888D22F: mov dword ptr [eax + 0x50], 5
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D236: pop ebx
        __asm _emit 0x5B
        // 0x5888D237: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888D23A: pop edi
        __asm _emit 0x5F
        // 0x5888D23B: mov dword ptr [esi + 0x638], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888D245: pop esi
        __asm _emit 0x5E
        // 0x5888D246: pop ebx
        __asm _emit 0x5B
        // 0x5888D247: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
