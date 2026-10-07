// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 462 bytes in 1 exact ranges.
// Source symbol alias: FUN_587479d0.

// Ghidra body range 0x587479D0..0x58747B9E; 462 mapped bytes.
extern "C" __declspec(naked) void FUN_587479d0_segment_00() {
    __asm {
        // 0x587479D0: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x587479D3: push esi
        __asm _emit 0x56
        // 0x587479D4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587479D6: cmp dword ptr [esi + 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x587479DA: push edi
        __asm _emit 0x57
        // 0x587479DB: jne 0x587479fe
        __asm _emit 0x75
        __asm _emit 0x21
        // 0x587479DD: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x587479E1: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587479E4: mov edi, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587479E8: push eax
        __asm _emit 0x50
        // 0x587479E9: push ecx
        __asm _emit 0x51
        // 0x587479EA: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x587479EC: push edi
        __asm _emit 0x57
        // 0x587479ED: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587479EF: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0xEE
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x587479F4: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x587479F6: pop edi
        __asm _emit 0x5F
        // 0x587479F7: pop esi
        __asm _emit 0x5E
        // 0x587479F8: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x587479FB: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587479FE: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58747A02: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x58747A05: mov edi, dword ptr [edx]
        __asm _emit 0x8B
        __asm _emit 0x3A
        // 0x58747A07: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58747A09: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58747A0B: je 0x58747a11
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58747A0D: cmp ecx, eax
        __asm _emit 0x3B
        __asm _emit 0xC8
        // 0x58747A0F: je 0x58747a1a
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58747A11: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5C
        __asm _emit 0x52
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747A16: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58747A1A: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58747A1E: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58747A20: jne 0x58747a4b
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58747A22: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58747A26: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58747A28: cmp ecx, dword ptr [eax + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58747A2B: jae 0x58747b79
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747A31: push edi
        __asm _emit 0x57
        // 0x58747A32: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58747A36: push eax
        __asm _emit 0x50
        // 0x58747A37: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58747A39: push edi
        __asm _emit 0x57
        // 0x58747A3A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747A3C: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0xEE
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58747A41: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58747A43: pop edi
        __asm _emit 0x5F
        // 0x58747A44: pop esi
        __asm _emit 0x5E
        // 0x58747A45: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58747A48: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58747A4B: mov edi, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x18
        // 0x58747A4E: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58747A50: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x58747A52: je 0x58747a58
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58747A54: cmp ecx, edx
        __asm _emit 0x3B
        __asm _emit 0xCA
        // 0x58747A56: je 0x58747a65
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x58747A58: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x52
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58747A5D: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58747A61: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58747A65: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58747A67: mov edi, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58747A6B: jne 0x58747a98
        __asm _emit 0x75
        __asm _emit 0x2B
        // 0x58747A6D: mov edx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x18
        // 0x58747A70: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58747A73: mov ecx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58747A76: cmp ecx, dword ptr [edi]
        __asm _emit 0x3B
        __asm _emit 0x0F
        // 0x58747A78: jae 0x58747b79
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58747A7E: push edi
        __asm _emit 0x57
        // 0x58747A7F: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58747A83: push eax
        __asm _emit 0x50
        // 0x58747A84: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58747A86: push edi
        __asm _emit 0x57
        // 0x58747A87: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747A89: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0xED
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58747A8E: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58747A90: pop edi
        __asm _emit 0x5F
        // 0x58747A91: pop esi
        __asm _emit 0x5E
        // 0x58747A92: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58747A95: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58747A98: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58747A9A: cmp dword ptr [eax + 0xc], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58747A9D: jbe 0x58747b00
        __asm _emit 0x76
        __asm _emit 0x61
        // 0x58747A9F: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747AA3: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747AA7: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747AAB: call 0x587a0950
        __asm _emit 0xE8
        __asm _emit 0xA0
        __asm _emit 0x8E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58747AB0: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58747AB2: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747AB6: cmp dword ptr [eax + 0xc], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58747AB9: jae 0x58747af5
        __asm _emit 0x73
        __asm _emit 0x3A
        // 0x58747ABB: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58747ABE: cmp byte ptr [edx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58747AC2: push edi
        __asm _emit 0x57
        // 0x58747AC3: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58747AC7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747AC9: je 0x58747ade
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x58747ACB: push eax
        __asm _emit 0x50
        // 0x58747ACC: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58747ACE: push edi
        __asm _emit 0x57
        // 0x58747ACF: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0xED
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58747AD4: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58747AD6: pop edi
        __asm _emit 0x5F
        // 0x58747AD7: pop esi
        __asm _emit 0x5E
        // 0x58747AD8: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58747ADB: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58747ADE: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58747AE2: push eax
        __asm _emit 0x50
        // 0x58747AE3: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58747AE5: push edi
        __asm _emit 0x57
        // 0x58747AE6: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0xED
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58747AEB: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58747AED: pop edi
        __asm _emit 0x5F
        // 0x58747AEE: pop esi
        __asm _emit 0x5E
        // 0x58747AEF: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58747AF2: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58747AF5: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58747AF9: mov ecx, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58747AFD: cmp dword ptr [eax + 0xc], edx
        __asm _emit 0x39
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x58747B00: jae 0x58747b79
        __asm _emit 0x73
        __asm _emit 0x77
        // 0x58747B02: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58747B04: mov dword ptr [esp + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747B08: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58747B0B: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58747B0F: lea ecx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747B13: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747B17: mov dword ptr [esp + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58747B1B: call 0x587a09e0
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0x8E
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58747B20: lea eax, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58747B24: push eax
        __asm _emit 0x50
        // 0x58747B25: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747B29: call 0x58743680
        __asm _emit 0xE8
        __asm _emit 0x52
        __asm _emit 0xBB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58747B2E: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747B32: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x58747B34: jne 0x58747b3d
        __asm _emit 0x75
        __asm _emit 0x07
        // 0x58747B36: mov edx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x17
        // 0x58747B38: cmp edx, dword ptr [ecx + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x51
        __asm _emit 0x0C
        // 0x58747B3B: jae 0x58747b79
        __asm _emit 0x73
        __asm _emit 0x3C
        // 0x58747B3D: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58747B41: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58747B44: cmp byte ptr [edx + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x7A
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58747B48: push edi
        __asm _emit 0x57
        // 0x58747B49: mov edi, dword ptr [esp + 0x24]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x24
        // 0x58747B4D: je 0x58747b64
        __asm _emit 0x74
        __asm _emit 0x15
        // 0x58747B4F: push eax
        __asm _emit 0x50
        // 0x58747B50: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58747B52: push edi
        __asm _emit 0x57
        // 0x58747B53: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747B55: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58747B5A: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58747B5C: pop edi
        __asm _emit 0x5F
        // 0x58747B5D: pop esi
        __asm _emit 0x5E
        // 0x58747B5E: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58747B61: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58747B64: push ecx
        __asm _emit 0x51
        // 0x58747B65: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58747B67: push edi
        __asm _emit 0x57
        // 0x58747B68: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747B6A: call 0x58786850
        __asm _emit 0xE8
        __asm _emit 0xE1
        __asm _emit 0xEC
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58747B6F: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58747B71: pop edi
        __asm _emit 0x5F
        // 0x58747B72: pop esi
        __asm _emit 0x5E
        // 0x58747B73: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58747B76: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58747B79: push edi
        __asm _emit 0x57
        // 0x58747B7A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58747B7E: push eax
        __asm _emit 0x50
        // 0x58747B7F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58747B81: call 0x58786a50
        __asm _emit 0xE8
        __asm _emit 0xCA
        __asm _emit 0xEE
        __asm _emit 0x03
        __asm _emit 0x00
        // 0x58747B86: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x58747B88: mov ecx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58747B8C: mov dword ptr [ecx], edx
        __asm _emit 0x89
        __asm _emit 0x11
        // 0x58747B8E: mov eax, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x04
        // 0x58747B91: pop edi
        __asm _emit 0x5F
        // 0x58747B92: mov dword ptr [ecx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58747B95: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x58747B97: pop esi
        __asm _emit 0x5E
        // 0x58747B98: add esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x14
        // 0x58747B9B: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
