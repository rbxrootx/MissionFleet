// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 335 bytes in 3 exact ranges.
// Source symbol alias: FUN_58772eb0.

// Ghidra body range 0x58772EB0..0x58772ED1; 33 mapped bytes.
extern "C" __declspec(naked) void FUN_58772eb0_segment_00() {
    __asm {
        // 0x58772EB0: sub esp, 0x14
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x14
        // 0x58772EB3: push ebx
        __asm _emit 0x53
        // 0x58772EB4: push ebp
        __asm _emit 0x55
        // 0x58772EB5: push esi
        __asm _emit 0x56
        // 0x58772EB6: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58772EB8: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x58772EBB: push edi
        __asm _emit 0x57
        // 0x58772EBC: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58772EBE: mov dword ptr [esi], 0x58996358
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x58
        __asm _emit 0x63
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58772EC4: mov dword ptr [esi + 4], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x04
        // 0x58772EC7: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x58772EC9: je 0x58772ed7
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58772ECB: push eax
        __asm _emit 0x50
        // 0x58772ECC: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x71
        __asm _emit 0x9D
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58772ED7..0x58772FF4; 285 mapped bytes.
extern "C" __declspec(naked) void FUN_58772eb0_segment_01() {
    __asm {
        // 0x58772ED7: mov ebx, dword ptr [esi + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x28
        // 0x58772EDA: cmp dword ptr [esi + 0x24], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x24
        // 0x58772EDD: lea ebp, [esi + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x6E
        __asm _emit 0x18
        // 0x58772EE0: jbe 0x58772ee7
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58772EE2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x8B
        __asm _emit 0x9D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772EE7: mov edi, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58772EEA: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58772EED: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772EF1: cmp edi, dword ptr [ebp + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x10
        // 0x58772EF4: jbe 0x58772efb
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58772EF6: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x9D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772EFB: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772EFF: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58772F02: push ebx
        __asm _emit 0x53
        // 0x58772F03: push ecx
        __asm _emit 0x51
        // 0x58772F04: push edi
        __asm _emit 0x57
        // 0x58772F05: push eax
        __asm _emit 0x50
        // 0x58772F06: lea edx, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58772F0A: push edx
        __asm _emit 0x52
        // 0x58772F0B: mov ecx, ebp
        __asm _emit 0x8B
        __asm _emit 0xCD
        // 0x58772F0D: call 0x58772d30
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772F12: mov edi, dword ptr [esi + 0x40]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x40
        // 0x58772F15: cmp dword ptr [esi + 0x3c], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x3C
        // 0x58772F18: lea ebx, [esi + 0x30]
        __asm _emit 0x8D
        __asm _emit 0x5E
        __asm _emit 0x30
        // 0x58772F1B: jbe 0x58772f22
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58772F1D: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x50
        __asm _emit 0x9D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772F22: mov ecx, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4B
        __asm _emit 0x0C
        // 0x58772F25: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58772F27: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772F2B: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772F2F: cmp ecx, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x4B
        __asm _emit 0x10
        // 0x58772F32: jbe 0x58772f3d
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58772F34: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0x9D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772F39: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772F3D: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772F41: mov eax, dword ptr [ebx]
        __asm _emit 0x8B
        __asm _emit 0x03
        // 0x58772F43: push edi
        __asm _emit 0x57
        // 0x58772F44: push edx
        __asm _emit 0x52
        // 0x58772F45: push ecx
        __asm _emit 0x51
        // 0x58772F46: push eax
        __asm _emit 0x50
        // 0x58772F47: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58772F4B: push eax
        __asm _emit 0x50
        // 0x58772F4C: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58772F4E: call 0x58772d30
        __asm _emit 0xE8
        __asm _emit 0xDD
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772F53: mov eax, dword ptr [esi + 0x58]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x58772F56: lea edi, [esi + 0x48]
        __asm _emit 0x8D
        __asm _emit 0x7E
        __asm _emit 0x48
        // 0x58772F59: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772F5D: cmp dword ptr [edi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58772F60: jbe 0x58772f67
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58772F62: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0B
        __asm _emit 0x9D
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772F67: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58772F69: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58772F6D: mov ecx, dword ptr [edi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4F
        __asm _emit 0x0C
        // 0x58772F70: mov dword ptr [esp + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772F74: cmp ecx, dword ptr [edi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x4F
        __asm _emit 0x10
        // 0x58772F77: jbe 0x58772f82
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58772F79: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xF4
        __asm _emit 0x9C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772F7E: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772F82: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772F86: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58772F88: push edx
        __asm _emit 0x52
        // 0x58772F89: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58772F8D: push edx
        __asm _emit 0x52
        // 0x58772F8E: push ecx
        __asm _emit 0x51
        // 0x58772F8F: push eax
        __asm _emit 0x50
        // 0x58772F90: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58772F94: push eax
        __asm _emit 0x50
        // 0x58772F95: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58772F97: call 0x58772d30
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772F9C: mov eax, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x70
        // 0x58772F9F: add esi, 0x60
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x60
        // 0x58772FA2: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772FA6: cmp dword ptr [esi + 0xc], eax
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58772FA9: jbe 0x58772fb0
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58772FAB: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xC2
        __asm _emit 0x9C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772FB0: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58772FB2: mov dword ptr [esp + 0x1c], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58772FB6: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58772FB9: mov dword ptr [esp + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772FBD: cmp ecx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58772FC0: jbe 0x58772fcb
        __asm _emit 0x76
        __asm _emit 0x09
        // 0x58772FC2: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xAB
        __asm _emit 0x9C
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x58772FC7: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58772FCB: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58772FCF: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58772FD1: push edx
        __asm _emit 0x52
        // 0x58772FD2: mov edx, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58772FD6: push edx
        __asm _emit 0x52
        // 0x58772FD7: push ecx
        __asm _emit 0x51
        // 0x58772FD8: push eax
        __asm _emit 0x50
        // 0x58772FD9: lea eax, [esp + 0x2c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58772FDD: push eax
        __asm _emit 0x50
        // 0x58772FDE: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58772FE0: call 0x58772dc0
        __asm _emit 0xE8
        __asm _emit 0xDB
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58772FE5: mov eax, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x58772FE8: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58772FEA: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58772FEC: je 0x58772ff9
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x58772FEE: push eax
        __asm _emit 0x50
        // 0x58772FEF: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x4E
        __asm _emit 0x9C
        __asm _emit 0x20
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58772FF9..0x5877300A; 17 mapped bytes.
extern "C" __declspec(naked) void FUN_58772eb0_segment_02() {
    __asm {
        // 0x58772FF9: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58772FFC: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x58772FFF: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x58773002: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58773004: push ecx
        __asm _emit 0x51
        // 0x58773005: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x38
        __asm _emit 0x9C
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
