// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 130 bytes in 1 exact ranges.
// Source symbol alias: FUN_58871fa0.

// Ghidra body range 0x58871FA0..0x58872022; 130 mapped bytes.
extern "C" __declspec(naked) void FUN_58871fa0_segment_00() {
    __asm {
        // 0x58871FA0: push ebx
        __asm _emit 0x53
        // 0x58871FA1: push ebp
        __asm _emit 0x55
        // 0x58871FA2: push esi
        __asm _emit 0x56
        // 0x58871FA3: push edi
        __asm _emit 0x57
        // 0x58871FA4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58871FA6: lea edi, [ecx + 0xf8]
        __asm _emit 0x8D
        __asm _emit 0xB9
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58871FAC: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58871FB0: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58871FB2: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x58871FB6: test cl, 1
        __asm _emit 0xF6
        __asm _emit 0xC1
        __asm _emit 0x01
        // 0x58871FB9: je 0x58871ff9
        __asm _emit 0x74
        __asm _emit 0x3E
        // 0x58871FBB: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x58871FBD: mov esi, dword ptr [0x58a284c8]
        __asm _emit 0x8B
        __asm _emit 0x35
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58871FC3: mov ecx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58871FC6: mov ebp, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x14
        // 0x58871FC9: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x58871FCC: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x58871FCE: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x58871FD0: jl 0x58871ff9
        __asm _emit 0x7C
        __asm _emit 0x27
        // 0x58871FD2: mov ebp, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x68
        __asm _emit 0x1C
        // 0x58871FD5: add ebp, ecx
        __asm _emit 0x03
        __asm _emit 0xE9
        // 0x58871FD7: cmp edx, ebp
        __asm _emit 0x3B
        __asm _emit 0xD5
        // 0x58871FD9: jge 0x58871ff9
        __asm _emit 0x7D
        __asm _emit 0x1E
        // 0x58871FDB: mov edx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58871FDE: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x58871FE1: mov esi, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x18
        // 0x58871FE4: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x58871FE6: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58871FE8: jl 0x58871ff9
        __asm _emit 0x7C
        __asm _emit 0x0F
        // 0x58871FEA: mov esi, dword ptr [eax + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x20
        // 0x58871FED: add esi, ecx
        __asm _emit 0x03
        __asm _emit 0xF1
        // 0x58871FEF: cmp edx, esi
        __asm _emit 0x3B
        __asm _emit 0xD6
        // 0x58871FF1: jge 0x58871ff9
        __asm _emit 0x7D
        __asm _emit 0x06
        // 0x58871FF3: cmp dword ptr [eax + 0x60], 0
        __asm _emit 0x83
        __asm _emit 0x78
        __asm _emit 0x60
        __asm _emit 0x00
        // 0x58871FF7: je 0x58872009
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58871FF9: inc ebx
        __asm _emit 0x43
        // 0x58871FFA: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58871FFD: cmp ebx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFB
        __asm _emit 0x20
        // 0x58872000: jl 0x58871fb0
        __asm _emit 0x7C
        __asm _emit 0xAE
        // 0x58872002: pop edi
        __asm _emit 0x5F
        // 0x58872003: pop esi
        __asm _emit 0x5E
        // 0x58872004: pop ebp
        __asm _emit 0x5D
        // 0x58872005: pop ebx
        __asm _emit 0x5B
        // 0x58872006: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58872009: mov edx, dword ptr [0x58a24598]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5887200F: mov eax, dword ptr [edx + 0xd78]
        __asm _emit 0x8B
        __asm _emit 0x82
        __asm _emit 0x78
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58872015: pop edi
        __asm _emit 0x5F
        // 0x58872016: pop esi
        __asm _emit 0x5E
        // 0x58872017: pop ebp
        __asm _emit 0x5D
        // 0x58872018: mov dword ptr [eax + 0xe88], ebx
        __asm _emit 0x89
        __asm _emit 0x98
        __asm _emit 0x88
        __asm _emit 0x0E
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887201E: pop ebx
        __asm _emit 0x5B
        // 0x5887201F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
