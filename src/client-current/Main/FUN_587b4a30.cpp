// FUN_587B4A30: observed type-0x06 record-backed child-state initializer.
// Both verified callers pass the shared +0x100C pointer, a 42-DWORD record,
// optional 45-DWORD record data, a per-entry pointer, one encoded word, and a
// word from +0x350. The 315-byte stream is preserved exactly; field meanings
// remain unresolved.
// See docs/current-main-type-06-record-child-state.md.
// Source symbol alias: FUN_587b4a30.
extern "C" __declspec(naked) void FUN_587b4a30() {
    __asm {
        // 0x587B4A30: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B4A34: push ebx
        __asm _emit 0x53
        // 0x587B4A35: push esi
        __asm _emit 0x56
        // 0x587B4A36: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B4A3A: push edi
        __asm _emit 0x57
        // 0x587B4A3B: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x587B4A3D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587B4A3F: je 0x587b4a62
        __asm _emit 0x74
        __asm _emit 0x21
        // 0x587B4A41: movzx ax, byte ptr [eax + 0x35c]
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x5C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4A49: sub ax, word ptr [esi + 6]
        __asm _emit 0x66
        __asm _emit 0x2B
        __asm _emit 0x46
        __asm _emit 0x06
        // 0x587B4A4D: movzx ecx, ax
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xC8
        // 0x587B4A50: neg ecx
        __asm _emit 0xF7
        __asm _emit 0xD9
        // 0x587B4A52: sbb ecx, ecx
        __asm _emit 0x1B
        __asm _emit 0xC9
        // 0x587B4A54: and ecx, 0xffffffb0
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0xB0
        // 0x587B4A57: add ecx, 0x64
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x64
        // 0x587B4A5A: mov dword ptr [ebx + 0x3904], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4A60: jmp 0x587b4a6c
        __asm _emit 0xEB
        __asm _emit 0x0A
        // 0x587B4A62: mov dword ptr [ebx + 0x3904], 0x64
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x04
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4A6C: mov dx, word ptr [esp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B4A71: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B4A75: push ebp
        __asm _emit 0x55
        // 0x587B4A76: lea ebp, [ebx + 0x190]
        __asm _emit 0x8D
        __asm _emit 0xAB
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4A7C: mov ecx, 0x2a
        __asm _emit 0xB9
        __asm _emit 0x2A
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4A81: mov edi, ebp
        __asm _emit 0x8B
        __asm _emit 0xFD
        // 0x587B4A83: mov word ptr [ebx + 0x18c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x8C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4A8A: mov dword ptr [ebx + 0x138], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4A90: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587B4A92: movzx ecx, word ptr [ebx + 0x230]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4A99: mov esi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B4A9D: xor ecx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B4AA3: mov dword ptr [ebx + 0x154], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4AA9: mov dword ptr [ebx + 0x158], 0xaaaaaaaa
        __asm _emit 0xC7
        __asm _emit 0x83
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B4AB3: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B4AB5: je 0x587b4acd
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587B4AB7: movzx edx, word ptr [esi + 0x9c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x96
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4ABE: and edx, 0x1f
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x587B4AC1: xor edx, 0xaaaaaaaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        __asm _emit 0xAA
        // 0x587B4AC7: mov dword ptr [ebx + 0x158], edx
        __asm _emit 0x89
        __asm _emit 0x93
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4ACD: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587B4ACF: call 0x587b1850
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xCD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B4AD4: mov eax, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x587B4AD8: push eax
        __asm _emit 0x50
        // 0x587B4AD9: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587B4ADB: call 0x587b4910
        __asm _emit 0xE8
        __asm _emit 0x30
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B4AE0: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x587B4AE2: call 0x587b4100
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587B4AE7: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B4AE9: mov dword ptr [ebx + 0x38fc], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0xFC
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4AEF: cmp esi, edi
        __asm _emit 0x3B
        __asm _emit 0xF7
        // 0x587B4AF1: je 0x587b4b2c
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x587B4AF3: lea edi, [ebx + 0x238]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4AF9: mov ecx, 0x2d
        __asm _emit 0xB9
        __asm _emit 0x2D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4AFE: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x587B4B00: movzx edx, word ptr [ebx + 0x2e2]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x93
        __asm _emit 0xE2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4B07: movzx ecx, word ptr [ebx + 0x2d8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4B0E: push 0x6e
        __asm _emit 0x6A
        __asm _emit 0x6E
        // 0x587B4B10: push edx
        __asm _emit 0x52
        // 0x587B4B11: push 0x32c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4B16: mov dword ptr [ebx + 0x38fc], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0xFC
        __asm _emit 0x38
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4B1C: call 0x5876bf40
        __asm _emit 0xE8
        __asm _emit 0x1F
        __asm _emit 0x74
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x587B4B21: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587B4B24: mov dword ptr [ebx + 0x2f4], eax
        __asm _emit 0x89
        __asm _emit 0x83
        __asm _emit 0xF4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4B2A: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587B4B2C: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587B4B2F: mov dword ptr [ebx + 0x2f8], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0xF8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4B35: mov dword ptr [ebx + 0x3908], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x08
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4B3B: mov ecx, dword ptr [0x58a2481c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x1C
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587B4B41: push eax
        __asm _emit 0x50
        // 0x587B4B42: call 0x58778d60
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x42
        __asm _emit 0xFC
        __asm _emit 0xFF
        // 0x587B4B47: pop ebp
        __asm _emit 0x5D
        // 0x587B4B48: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x587B4B4A: je 0x587b4b5f
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x587B4B4C: movzx ecx, word ptr [eax + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x88
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4B53: pop edi
        __asm _emit 0x5F
        // 0x587B4B54: pop esi
        __asm _emit 0x5E
        // 0x587B4B55: mov dword ptr [ebx + 0x390c], ecx
        __asm _emit 0x89
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4B5B: pop ebx
        __asm _emit 0x5B
        // 0x587B4B5C: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x587B4B5F: mov dword ptr [ebx + 0x390c], edi
        __asm _emit 0x89
        __asm _emit 0xBB
        __asm _emit 0x0C
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B4B65: pop edi
        __asm _emit 0x5F
        // 0x587B4B66: pop esi
        __asm _emit 0x5E
        // 0x587B4B67: pop ebx
        __asm _emit 0x5B
        // 0x587B4B68: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
