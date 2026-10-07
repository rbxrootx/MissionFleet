// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 205 bytes in 1 exact ranges.
// Source symbol alias: FUN_587c7300.

// Ghidra body range 0x587C7300..0x587C73CD; 205 mapped bytes.
extern "C" __declspec(naked) void FUN_587c7300_segment_00() {
    __asm {
        // 0x587C7300: mov eax, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587C7304: push ebx
        __asm _emit 0x53
        // 0x587C7305: push ebp
        __asm _emit 0x55
        // 0x587C7306: push esi
        __asm _emit 0x56
        // 0x587C7307: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587C730B: push edi
        __asm _emit 0x57
        // 0x587C730C: push eax
        __asm _emit 0x50
        // 0x587C730D: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x587C730F: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C7313: push esi
        __asm _emit 0x56
        // 0x587C7314: push ecx
        __asm _emit 0x51
        // 0x587C7315: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x587C7317: call 0x58906f30
        __asm _emit 0xE8
        __asm _emit 0x14
        __asm _emit 0xFC
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x587C731C: mov eax, dword ptr [edi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7322: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587C7324: mov eax, dword ptr [eax + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C732A: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x587C732D: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x587C7330: mov ebp, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x08
        // 0x587C7333: add eax, 0x14
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x14
        // 0x587C7336: add ecx, 0x12c
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C733C: mov dword ptr [eax], ecx
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x587C733E: sub edx, 0x26
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x26
        // 0x587C7341: mov dword ptr [eax + 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x587C7344: sub ebx, 0x23
        __asm _emit 0x83
        __asm _emit 0xEB
        __asm _emit 0x23
        // 0x587C7347: mov dword ptr [eax + 8], ebp
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x08
        // 0x587C734A: mov dword ptr [eax + 0xc], ebx
        __asm _emit 0x89
        __asm _emit 0x58
        __asm _emit 0x0C
        // 0x587C734D: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C7353: cmp ecx, dword ptr [0x58a24594]
        __asm _emit 0x3B
        __asm _emit 0x0D
        __asm _emit 0x94
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C7359: je 0x587c7371
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x587C735B: mov edx, dword ptr [edi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x97
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7361: mov ecx, dword ptr [edx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8A
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7367: push 0x58a0b450
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587C736C: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0x6F
        __asm _emit 0xA9
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587C7371: mov eax, dword ptr [edi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x87
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7377: mov ecx, dword ptr [eax + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C737D: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587C7381: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587C7383: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x587C7386: push eax
        __asm _emit 0x50
        // 0x587C7387: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587C738B: push esi
        __asm _emit 0x56
        // 0x587C738C: push eax
        __asm _emit 0x50
        // 0x587C738D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C738F: xor esi, esi
        __asm _emit 0x33
        __asm _emit 0xF6
        // 0x587C7391: cmp dword ptr [edi + 0x100], esi
        __asm _emit 0x39
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C7397: je 0x587c73c0
        __asm _emit 0x74
        __asm _emit 0x27
        // 0x587C7399: cmp dword ptr [0x58a24a98], 2
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0x98
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        __asm _emit 0x02
        // 0x587C73A0: jle 0x587c73c0
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x587C73A2: mov ecx, dword ptr [edi + 0xfc]
        __asm _emit 0x8B
        __asm _emit 0x8F
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C73A8: mov dword ptr [0x58a24a98], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x98
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C73AE: call 0x587c71a0
        __asm _emit 0xE8
        __asm _emit 0xED
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587C73B3: mov dword ptr [edi + 0x100], esi
        __asm _emit 0x89
        __asm _emit 0xB7
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C73B9: pop edi
        __asm _emit 0x5F
        // 0x587C73BA: pop esi
        __asm _emit 0x5E
        // 0x587C73BB: pop ebp
        __asm _emit 0x5D
        // 0x587C73BC: pop ebx
        __asm _emit 0x5B
        // 0x587C73BD: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587C73C0: inc dword ptr [0x58a24a98]
        __asm _emit 0xFF
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x4A
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587C73C6: pop edi
        __asm _emit 0x5F
        // 0x587C73C7: pop esi
        __asm _emit 0x5E
        // 0x587C73C8: pop ebp
        __asm _emit 0x5D
        // 0x587C73C9: pop ebx
        __asm _emit 0x5B
        // 0x587C73CA: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
