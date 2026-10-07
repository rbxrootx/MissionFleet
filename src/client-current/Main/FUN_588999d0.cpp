// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 294 bytes in 2 exact ranges.
// Source symbol alias: FUN_588999d0.

// Ghidra body range 0x588999D0..0x58899ABB; 235 mapped bytes.
extern "C" __declspec(naked) void FUN_588999d0_segment_00() {
    __asm {
        // 0x588999D0: push ebp
        __asm _emit 0x55
        // 0x588999D1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x588999D3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588999D5: push 0x58987370
        __asm _emit 0x68
        __asm _emit 0x70
        __asm _emit 0x73
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588999DA: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588999E0: push eax
        __asm _emit 0x50
        // 0x588999E1: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x588999E4: push ebx
        __asm _emit 0x53
        // 0x588999E5: push esi
        __asm _emit 0x56
        // 0x588999E6: push edi
        __asm _emit 0x57
        // 0x588999E7: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588999EC: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x588999EE: push eax
        __asm _emit 0x50
        // 0x588999EF: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x588999F2: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588999F8: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x588999FB: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588999FD: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58899A00: cmp edi, 0x9249249
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0x49
        __asm _emit 0x92
        __asm _emit 0x24
        __asm _emit 0x09
        // 0x58899A06: jbe 0x58899a0d
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58899A08: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0xCC
        __asm _emit 0x05
        __asm _emit 0x00
        // 0x58899A0D: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58899A10: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58899A12: je 0x58899a2c
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x58899A14: mov ecx, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58899A17: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58899A19: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58899A1E: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58899A20: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58899A22: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58899A25: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x58899A27: shr eax, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x1F
        // 0x58899A2A: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58899A2C: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58899A2E: jae 0x58899ae5
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xB1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899A34: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58899A36: push edi
        __asm _emit 0x57
        // 0x58899A37: call 0x5878d5f0
        __asm _emit 0xE8
        __asm _emit 0xB4
        __asm _emit 0x3B
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58899A3C: mov edi, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58899A3F: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58899A42: mov dword ptr [ebp - 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58899A45: mov dword ptr [ebp - 4], 0
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899A4C: cmp dword ptr [esi + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58899A4F: jbe 0x58899a56
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58899A51: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x32
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899A56: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58899A59: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58899A5C: jbe 0x58899a63
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58899A5E: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0F
        __asm _emit 0x32
        __asm _emit 0x0E
        __asm _emit 0x00
        // 0x58899A63: mov edx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x08
        // 0x58899A66: mov byte ptr [ebp - 0x18], 0
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x58899A6A: mov ecx, dword ptr [ebp - 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xE8
        // 0x58899A6D: push ecx
        __asm _emit 0x51
        // 0x58899A6E: push edx
        __asm _emit 0x52
        // 0x58899A6F: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58899A72: push eax
        __asm _emit 0x50
        // 0x58899A73: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58899A76: push eax
        __asm _emit 0x50
        // 0x58899A77: push edi
        __asm _emit 0x57
        // 0x58899A78: push ebx
        __asm _emit 0x53
        // 0x58899A79: call 0x58791fe0
        __asm _emit 0xE8
        __asm _emit 0x62
        __asm _emit 0x85
        __asm _emit 0xEF
        __asm _emit 0xFF
        // 0x58899A7E: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58899A81: mov ecx, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58899A84: sub ecx, ebx
        __asm _emit 0x2B
        __asm _emit 0xCB
        // 0x58899A86: mov eax, 0x92492493
        __asm _emit 0xB8
        __asm _emit 0x93
        __asm _emit 0x24
        __asm _emit 0x49
        __asm _emit 0x92
        // 0x58899A8B: imul ecx
        __asm _emit 0xF7
        __asm _emit 0xE9
        // 0x58899A8D: add edx, ecx
        __asm _emit 0x03
        __asm _emit 0xD1
        // 0x58899A8F: sar edx, 4
        __asm _emit 0xC1
        __asm _emit 0xFA
        __asm _emit 0x04
        // 0x58899A92: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x58899A94: shr edi, 0x1f
        __asm _emit 0xC1
        __asm _emit 0xEF
        __asm _emit 0x1F
        // 0x58899A97: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58899A9A: add edi, edx
        __asm _emit 0x03
        __asm _emit 0xFA
        // 0x58899A9C: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x58899A9E: je 0x58899abe
        __asm _emit 0x74
        __asm _emit 0x1E
        // 0x58899AA0: mov ecx, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x08
        // 0x58899AA3: push ecx
        __asm _emit 0x51
        // 0x58899AA4: lea eax, [esi + 8]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58899AA7: push eax
        __asm _emit 0x50
        // 0x58899AA8: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x58899AAB: push eax
        __asm _emit 0x50
        // 0x58899AAC: push ebx
        __asm _emit 0x53
        // 0x58899AAD: call 0x58902180
        __asm _emit 0xE8
        __asm _emit 0xCE
        __asm _emit 0x86
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x58899AB2: mov edx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x0C
        // 0x58899AB5: push edx
        __asm _emit 0x52
        // 0x58899AB6: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x87
        __asm _emit 0x31
        __asm _emit 0x0E
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58899ABE..0x58899AF9; 59 mapped bytes.
extern "C" __declspec(naked) void FUN_588999d0_segment_01() {
    __asm {
        // 0x58899ABE: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58899AC1: lea ecx, [eax*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xC5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899AC8: sub ecx, eax
        __asm _emit 0x2B
        __asm _emit 0xC8
        // 0x58899ACA: mov eax, dword ptr [ebp - 0x14]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0xEC
        // 0x58899ACD: lea edx, [eax + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x88
        // 0x58899AD0: lea ecx, [edi*8]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0xFD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899AD7: sub ecx, edi
        __asm _emit 0x2B
        __asm _emit 0xCF
        // 0x58899AD9: mov dword ptr [esi + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x14
        // 0x58899ADC: lea edx, [eax + ecx*4]
        __asm _emit 0x8D
        __asm _emit 0x14
        __asm _emit 0x88
        // 0x58899ADF: mov dword ptr [esi + 0x10], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x10
        // 0x58899AE2: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58899AE5: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58899AE8: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899AEF: pop ecx
        __asm _emit 0x59
        // 0x58899AF0: pop edi
        __asm _emit 0x5F
        // 0x58899AF1: pop esi
        __asm _emit 0x5E
        // 0x58899AF2: pop ebx
        __asm _emit 0x5B
        // 0x58899AF3: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58899AF5: pop ebp
        __asm _emit 0x5D
        // 0x58899AF6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
