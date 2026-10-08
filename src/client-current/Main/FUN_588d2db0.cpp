// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 293 bytes in 1 exact ranges.
// Source symbol alias: FUN_588d2db0.

// Ghidra body range 0x588D2DB0..0x588D2ED5; 293 mapped bytes.
extern "C" __declspec(naked) void FUN_588d2db0_segment_00() {
    __asm {
        // 0x588D2DB0: push ecx
        __asm _emit 0x51
        // 0x588D2DB1: mov eax, dword ptr [0x58a247f8]
        __asm _emit 0xA1
        __asm _emit 0xF8
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2DB6: push ebx
        __asm _emit 0x53
        // 0x588D2DB7: mov ebx, dword ptr [eax + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x588D2DBA: push esi
        __asm _emit 0x56
        // 0x588D2DBB: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588D2DBD: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588D2DBF: je 0x588d2ecf
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x0A
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2DC5: push ebp
        __asm _emit 0x55
        // 0x588D2DC6: push edi
        __asm _emit 0x57
        // 0x588D2DC7: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x588D2DC9: call 0x588d66e0
        __asm _emit 0xE8
        __asm _emit 0x12
        __asm _emit 0x39
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2DCE: cmp eax, 0x40000000
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x588D2DD3: jne 0x588d2ec2
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xE9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2DD9: cmp word ptr [ebx + 0x164], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x588D2DE1: jae 0x588d2ec2
        __asm _emit 0x0F
        __asm _emit 0x83
        __asm _emit 0xDB
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2DE7: mov eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2DED: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588D2DEF: je 0x588d2ec2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xCD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2DF5: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x588D2DF8: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x588D2DFB: push eax
        __asm _emit 0x50
        // 0x588D2DFC: push ecx
        __asm _emit 0x51
        // 0x588D2DFD: push edx
        __asm _emit 0x52
        // 0x588D2DFE: push ebx
        __asm _emit 0x53
        // 0x588D2DFF: call 0x5876c8d0
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x9A
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588D2E04: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588D2E07: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D2E0B: cmp eax, -1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x588D2E0E: je 0x588d2ec2
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xAE
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E14: fild dword ptr [esp + 0x10]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x588D2E18: call 0x5897cc90
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x9E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2E1D: call 0x5897cca0
        __asm _emit 0xE8
        __asm _emit 0x7E
        __asm _emit 0x9E
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x588D2E22: push eax
        __asm _emit 0x50
        // 0x588D2E23: mov eax, dword ptr [esi + 0x1dc]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xDC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E29: push eax
        __asm _emit 0x50
        // 0x588D2E2A: mov eax, dword ptr [esi + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E30: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E35: cdq
        __asm _emit 0x99
        // 0x588D2E36: and edx, 3
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x03
        // 0x588D2E39: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x588D2E3B: sar eax, 2
        __asm _emit 0xC1
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x588D2E3E: push eax
        __asm _emit 0x50
        // 0x588D2E3F: call 0x5876bf80
        __asm _emit 0xE8
        __asm _emit 0x3C
        __asm _emit 0x91
        __asm _emit 0xE9
        __asm _emit 0xFF
        // 0x588D2E44: movzx ecx, word ptr [ebx + 0x350]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E4B: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x588D2E4E: mov ebp, eax
        __asm _emit 0x8B
        __asm _emit 0xE8
        // 0x588D2E50: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xA1
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2E55: mov edi, dword ptr [eax + 0x10490]
        __asm _emit 0x8B
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D2E5B: add edi, dword ptr [eax + 0x10488]
        __asm _emit 0x03
        __asm _emit 0xB8
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x588D2E61: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x588D2E63: lea edx, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x588D2E67: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x588D2E6B: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E71: push edx
        __asm _emit 0x52
        // 0x588D2E72: call 0x588d6670
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E77: mov ecx, dword ptr [esi + 0x1c4]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E7D: push eax
        __asm _emit 0x50
        // 0x588D2E7E: mov eax, dword ptr [esi + 0x1c8]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E84: mov edx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x588D2E88: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D2E8A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D2E8C: push eax
        __asm _emit 0x50
        // 0x588D2E8D: mov eax, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E93: push ecx
        __asm _emit 0x51
        // 0x588D2E94: mov ecx, dword ptr [esi + 0x23c]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x3C
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588D2E9A: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588D2E9C: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x588D2E9E: push ebp
        __asm _emit 0x55
        // 0x588D2E9F: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588D2EA1: push 0xb
        __asm _emit 0x6A
        __asm _emit 0x0B
        // 0x588D2EA3: push edx
        __asm _emit 0x52
        // 0x588D2EA4: mov edx, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588D2EA8: push eax
        __asm _emit 0x50
        // 0x588D2EA9: mov eax, dword ptr [esp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x4C
        // 0x588D2EAD: push ebx
        __asm _emit 0x53
        // 0x588D2EAE: push ecx
        __asm _emit 0x51
        // 0x588D2EAF: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588D2EB2: push edx
        __asm _emit 0x52
        // 0x588D2EB3: add ecx, edi
        __asm _emit 0x03
        __asm _emit 0xCF
        // 0x588D2EB5: push eax
        __asm _emit 0x50
        // 0x588D2EB6: push ecx
        __asm _emit 0x51
        // 0x588D2EB7: mov ecx, dword ptr [0x58a2459c]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x9C
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588D2EBD: call 0x587efd60
        __asm _emit 0xE8
        __asm _emit 0x9E
        __asm _emit 0xCE
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588D2EC2: mov ebx, dword ptr [ebx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x5B
        __asm _emit 0x78
        // 0x588D2EC5: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x588D2EC7: jne 0x588d2dc7
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0xFA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588D2ECD: pop edi
        __asm _emit 0x5F
        // 0x588D2ECE: pop ebp
        __asm _emit 0x5D
        // 0x588D2ECF: pop esi
        __asm _emit 0x5E
        // 0x588D2ED0: pop ebx
        __asm _emit 0x5B
        // 0x588D2ED1: pop ecx
        __asm _emit 0x59
        // 0x588D2ED2: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
