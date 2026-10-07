// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 835 bytes in 1 exact ranges.
// Source symbol alias: FUN_587648f0.

// Ghidra body range 0x587648F0..0x58764C33; 835 mapped bytes.
extern "C" __declspec(naked) void FUN_587648f0_segment_00() {
    __asm {
        // 0x587648F0: cmp dword ptr [esp + 8], 2
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x02
        // 0x587648F5: push esi
        __asm _emit 0x56
        // 0x587648F6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587648F8: jne 0x58764c2d
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x2F
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587648FE: mov ecx, dword ptr [esi + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764904: push edi
        __asm _emit 0x57
        // 0x58764905: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58764909: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x5876490B: je 0x58764921
        __asm _emit 0x74
        __asm _emit 0x14
        // 0x5876490D: cmp edi, dword ptr [esi + 0x90]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764913: je 0x58764921
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58764915: cmp edi, dword ptr [esi + 0x94]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876491B: jne 0x58764c2c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x0B
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764921: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x58764924: cmp eax, 4
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x04
        // 0x58764927: ja 0x58764c2c
        __asm _emit 0x0F
        __asm _emit 0x87
        __asm _emit 0xFF
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876492D: jmp dword ptr [eax*4 + 0x58764c34]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x4C
        __asm _emit 0x76
        __asm _emit 0x58
        // 0x58764934: mov eax, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x7C
        // 0x58764937: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x5876493A: jne 0x58764965
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x5876493C: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764942: cmp dword ptr [0x58a24580], ecx
        __asm _emit 0x39
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764948: jne 0x58764b57
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876494E: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58764950: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764953: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764955: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764957: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5876495A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5876495C: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5876495E: pop edi
        __asm _emit 0x5F
        // 0x5876495F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764961: pop esi
        __asm _emit 0x5E
        // 0x58764962: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764965: cmp eax, 0x191
        __asm _emit 0x3D
        __asm _emit 0x91
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5876496A: jne 0x58764990
        __asm _emit 0x75
        __asm _emit 0x24
        // 0x5876496C: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764971: mov ecx, dword ptr [eax + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764977: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58764979: mov word ptr [ecx + 0x19c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764980: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764982: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764985: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764987: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764989: pop edi
        __asm _emit 0x5F
        // 0x5876498A: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5876498C: pop esi
        __asm _emit 0x5E
        // 0x5876498D: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764990: cmp eax, 0x19b
        __asm _emit 0x3D
        __asm _emit 0x9B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764995: jne 0x587649bd
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x58764997: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5876499C: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649A2: mov ecx, dword ptr [ecx + 0xc4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xC4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649A8: call 0x58869f50
        __asm _emit 0xE8
        __asm _emit 0xA3
        __asm _emit 0x55
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x587649AD: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587649AF: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x587649B2: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587649B4: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587649B6: pop edi
        __asm _emit 0x5F
        // 0x587649B7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587649B9: pop esi
        __asm _emit 0x5E
        // 0x587649BA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587649BD: cmp eax, 0x320
        __asm _emit 0x3D
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649C2: je 0x58764b0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649C8: cmp eax, 0x321
        __asm _emit 0x3D
        __asm _emit 0x21
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649CD: je 0x58764b0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x3B
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649D3: cmp eax, 0x322
        __asm _emit 0x3D
        __asm _emit 0x22
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649D8: je 0x58764b0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649DE: cmp eax, 0x323
        __asm _emit 0x3D
        __asm _emit 0x23
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649E3: je 0x58764b0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649E9: cmp eax, 0x324
        __asm _emit 0x3D
        __asm _emit 0x24
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649EE: je 0x58764b0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x1A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649F4: cmp eax, 0x325
        __asm _emit 0x3D
        __asm _emit 0x25
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649F9: je 0x58764b0e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0F
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587649FF: cmp eax, 0x326
        __asm _emit 0x3D
        __asm _emit 0x26
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764A04: jne 0x58764a2c
        __asm _emit 0x75
        __asm _emit 0x26
        // 0x58764A06: mov ecx, dword ptr [0x58a245bc]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xBC
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764A0C: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58764A0E: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58764A11: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58764A13: push 0xef10
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0xEF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764A18: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58764A1A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764A1C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764A1E: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764A21: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764A23: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764A25: pop edi
        __asm _emit 0x5F
        // 0x58764A26: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764A28: pop esi
        __asm _emit 0x5E
        // 0x58764A29: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764A2C: cmp eax, 0x3b6
        __asm _emit 0x3D
        __asm _emit 0xB6
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764A31: jne 0x58764a41
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58764A33: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764A39: mov ecx, dword ptr [ecx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x30
        // 0x58764A3C: jmp 0x58764b36
        __asm _emit 0xE9
        __asm _emit 0xF5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764A41: cmp eax, 0x3b8
        __asm _emit 0x3D
        __asm _emit 0xB8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764A46: jne 0x58764a61
        __asm _emit 0x75
        __asm _emit 0x19
        // 0x58764A48: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764A4D: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58764A50: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58764A52: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58764A54: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58764A56: push eax
        __asm _emit 0x50
        // 0x58764A57: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x58764A5A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764A5C: jmp 0x58764b4d
        __asm _emit 0xE9
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764A61: cmp eax, 0x12
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x12
        // 0x58764A64: jne 0x58764aae
        __asm _emit 0x75
        __asm _emit 0x48
        // 0x58764A66: mov eax, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764A6C: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58764A6E: je 0x58764b57
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xE3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764A74: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58764A78: shr cl, 1
        __asm _emit 0xD0
        __asm _emit 0xE9
        // 0x58764A7A: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x58764A7D: je 0x58764b57
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764A83: mov edx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764A89: mov ecx, dword ptr [edx + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x4A
        __asm _emit 0x30
        // 0x58764A8C: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58764A8E: mov edx, dword ptr [esi + 0x98]
        __asm _emit 0x8B
        __asm _emit 0x96
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764A94: mov eax, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x18
        // 0x58764A97: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58764A99: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58764A9B: push edx
        __asm _emit 0x52
        // 0x58764A9C: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764A9E: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764AA0: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764AA3: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764AA5: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764AA7: pop edi
        __asm _emit 0x5F
        // 0x58764AA8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764AAA: pop esi
        __asm _emit 0x5E
        // 0x58764AAB: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764AAE: cmp eax, 0x131
        __asm _emit 0x3D
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764AB3: jne 0x58764b57
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764AB9: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764ABF: call 0x587c2c90
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0xE1
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58764AC4: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764ACA: cmp ecx, dword ptr [0x58a24594]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764AD0: jne 0x58764aef
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x58764AD2: call 0x5878f920
        __asm _emit 0xE8
        __asm _emit 0x49
        __asm _emit 0xAE
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x58764AD7: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58764AD9: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58764ADF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764AE1: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764AE4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764AE6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764AE8: pop edi
        __asm _emit 0x5F
        // 0x58764AE9: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764AEB: pop esi
        __asm _emit 0x5E
        // 0x58764AEC: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764AEF: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58764AF1: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58764AF4: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764AF6: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58764AF8: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58764AFE: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764B00: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764B03: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764B05: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764B07: pop edi
        __asm _emit 0x5F
        // 0x58764B08: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764B0A: pop esi
        __asm _emit 0x5E
        // 0x58764B0B: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764B0E: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764B14: mov eax, dword ptr [ecx + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764B1A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58764B1C: je 0x58764b57
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x58764B1E: mov dx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x58764B22: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x08
        // 0x58764B26: and dl, 0x1f
        __asm _emit 0x80
        __asm _emit 0xE2
        __asm _emit 0x1F
        // 0x58764B29: cmp dl, 2
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x02
        // 0x58764B2C: jne 0x58764b57
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x58764B2E: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764B33: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58764B36: mov eax, dword ptr [0x58a245a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764B3B: mov eax, dword ptr [eax + 0xa00]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764B41: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58764B43: mov edx, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x18
        // 0x58764B46: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58764B48: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x58764B4A: push eax
        __asm _emit 0x50
        // 0x58764B4B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764B4D: mov dword ptr [esi + 0xa4], 1
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764B57: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764B59: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764B5C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764B5E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764B60: pop edi
        __asm _emit 0x5F
        // 0x58764B61: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764B63: pop esi
        __asm _emit 0x5E
        // 0x58764B64: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764B67: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58764B69: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x58764B6C: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764B6E: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58764B70: cmp edi, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764B76: jne 0x58764bc4
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x58764B78: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764B7A: call 0x58762d30
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58764B7F: mov esi, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x7C
        // 0x58764B82: cmp esi, 0x131
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764B88: je 0x58764b96
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58764B8A: cmp esi, 0x132
        __asm _emit 0x81
        __asm _emit 0xFE
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764B90: jne 0x58764c2c
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764B96: mov eax, dword ptr [0x58a245b4]
        __asm _emit 0xA1
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58764B9B: mov ecx, dword ptr [eax + 0xdc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764BA1: mov ecx, dword ptr [ecx + 0x15c]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764BA7: call 0x5882a420
        __asm _emit 0xE8
        __asm _emit 0x74
        __asm _emit 0x58
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764BAC: pop edi
        __asm _emit 0x5F
        // 0x58764BAD: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764BAF: pop esi
        __asm _emit 0x5E
        // 0x58764BB0: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764BB3: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58764BB5: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58764BB8: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764BBA: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764BBC: cmp edi, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764BC2: je 0x58764c0d
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x58764BC4: cmp edi, dword ptr [esi + 0x90]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764BCA: jne 0x58764c2c
        __asm _emit 0x75
        __asm _emit 0x60
        // 0x58764BCC: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764BCE: call 0x587635a0
        __asm _emit 0xE8
        __asm _emit 0xCD
        __asm _emit 0xE9
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58764BD3: pop edi
        __asm _emit 0x5F
        // 0x58764BD4: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764BD6: pop esi
        __asm _emit 0x5E
        // 0x58764BD7: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764BDA: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58764BDC: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58764BDF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764BE1: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764BE3: cmp edi, dword ptr [esi + 0x8c]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764BE9: je 0x58764c0d
        __asm _emit 0x74
        __asm _emit 0x22
        // 0x58764BEB: cmp edi, dword ptr [esi + 0x90]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764BF1: je 0x58764bcc
        __asm _emit 0x74
        __asm _emit 0xD9
        // 0x58764BF3: cmp edi, dword ptr [esi + 0x94]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764BF9: jne 0x58764c2c
        __asm _emit 0x75
        __asm _emit 0x31
        // 0x58764BFB: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764BFD: call 0x587629e0
        __asm _emit 0xE8
        __asm _emit 0xDE
        __asm _emit 0xDD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58764C02: pop edi
        __asm _emit 0x5F
        // 0x58764C03: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764C05: pop esi
        __asm _emit 0x5E
        // 0x58764C06: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764C09: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x58764C0B: jne 0x58764c1b
        __asm _emit 0x75
        __asm _emit 0x0E
        // 0x58764C0D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764C0F: call 0x58762d30
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58764C14: pop edi
        __asm _emit 0x5F
        // 0x58764C15: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764C17: pop esi
        __asm _emit 0x5E
        // 0x58764C18: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58764C1B: cmp edi, dword ptr [esi + 0x90]
        __asm _emit 0x3B
        __asm _emit 0xBE
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58764C21: jne 0x58764c2c
        __asm _emit 0x75
        __asm _emit 0x09
        // 0x58764C23: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58764C25: mov eax, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x08
        // 0x58764C28: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58764C2A: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x58764C2C: pop edi
        __asm _emit 0x5F
        // 0x58764C2D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58764C2F: pop esi
        __asm _emit 0x5E
        // 0x58764C30: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
