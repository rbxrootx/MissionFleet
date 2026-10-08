// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 312 bytes in 1 exact ranges.
// Source symbol alias: FUN_58772980.

// Ghidra body range 0x58772980..0x58772AB8; 312 mapped bytes.
extern "C" __declspec(naked) void FUN_58772980_segment_00() {
    __asm {
        // 0x58772980: sub esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772986: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5877298B: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5877298D: mov dword ptr [esp + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772994: push esi
        __asm _emit 0x56
        // 0x58772995: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58772997: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x5877299A: sub ecx, dword ptr [esi + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x5877299D: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x587729A2: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587729A4: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587729A7: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x587729A9: push edi
        __asm _emit 0x57
        // 0x587729AA: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x587729AD: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x587729AF: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587729B1: je 0x58772aa1
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xEA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587729B7: push ebx
        __asm _emit 0x53
        // 0x587729B8: push ebp
        __asm _emit 0x55
        // 0x587729B9: mov ebp, dword ptr [0x5898c3c4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xC4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587729BF: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587729C1: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x587729C4: sub ecx, dword ptr [esi + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x587729C7: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x587729CC: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587729CE: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587729D1: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x587729D3: shr ecx, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x1F
        // 0x587729D6: add ecx, edx
        __asm _emit 0x03
        __asm _emit 0xCA
        // 0x587729D8: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x587729DA: jb 0x587729e1
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x587729DC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x91
        __asm _emit 0xA2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x587729E1: mov edx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x54
        // 0x587729E4: add edx, ebx
        __asm _emit 0x03
        __asm _emit 0xD3
        // 0x587729E6: push edx
        __asm _emit 0x52
        // 0x587729E7: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587729E9: call 0x587726a0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587729EE: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x587729F1: sub ecx, dword ptr [esi + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x587729F4: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x587729F9: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x587729FB: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x587729FE: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58772A00: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58772A03: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58772A05: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58772A07: jb 0x58772a0e
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58772A09: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x64
        __asm _emit 0xA2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772A0E: mov ecx, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58772A11: cmp dword ptr [ecx + ebx + 0x104], 2
        __asm _emit 0x83
        __asm _emit 0xBC
        __asm _emit 0x19
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x02
        // 0x58772A19: jne 0x58772a79
        __asm _emit 0x75
        __asm _emit 0x5E
        // 0x58772A1B: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772A20: lea edx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772A24: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772A26: push edx
        __asm _emit 0x52
        // 0x58772A27: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0xA2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772A2C: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x58772A2F: sub ecx, dword ptr [esi + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58772A32: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58772A37: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58772A39: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58772A3C: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58772A3E: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58772A41: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58772A43: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58772A46: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58772A48: jb 0x58772a4f
        __asm _emit 0x72
        __asm _emit 0x05
        // 0x58772A4A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0xA2
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772A4F: mov eax, dword ptr [esi + 0x54]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x54
        // 0x58772A52: add eax, ebx
        __asm _emit 0x03
        __asm _emit 0xC3
        // 0x58772A54: push eax
        __asm _emit 0x50
        // 0x58772A55: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58772A57: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58772A59: call 0x58772160
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772A5E: push eax
        __asm _emit 0x50
        // 0x58772A5F: lea ecx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58772A63: push 0x58996310
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58772A68: push ecx
        __asm _emit 0x51
        // 0x58772A69: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x58772A6B: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58772A6E: lea edx, [esp + 0x10]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772A72: push edx
        __asm _emit 0x52
        // 0x58772A73: call dword ptr [0x5898c17c]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x7C
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58772A79: mov ecx, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x58
        // 0x58772A7C: sub ecx, dword ptr [esi + 0x54]
        __asm _emit 0x2B
        __asm _emit 0x4E
        __asm _emit 0x54
        // 0x58772A7F: mov eax, 0x3e0f83e1
        __asm _emit 0xB8
        __asm _emit 0xE1
        __asm _emit 0x83
        __asm _emit 0x0F
        __asm _emit 0x3E
        // 0x58772A84: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58772A86: sar edx, 6
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x06
        // 0x58772A89: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58772A8B: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58772A8E: inc edi
        __asm _emit 0x47
        // 0x58772A8F: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58772A91: add ebx, 0x108
        __asm _emit 0x81
        __asm _emit 0xC3
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772A97: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58772A99: jb 0x587729c1
        __asm _emit 0x0F
        __asm _emit 0x82
        __asm _emit 0x22
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772A9F: pop ebp
        __asm _emit 0x5D
        // 0x58772AA0: pop ebx
        __asm _emit 0x5B
        // 0x58772AA1: mov ecx, dword ptr [esp + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772AA8: pop edi
        __asm _emit 0x5F
        // 0x58772AA9: pop esi
        __asm _emit 0x5E
        // 0x58772AAA: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58772AAC: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x29
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772AB1: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58772AB7: ret
        __asm _emit 0xC3
    }
}
