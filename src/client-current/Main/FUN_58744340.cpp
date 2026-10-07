// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 219 bytes in 1 exact ranges.
// Source symbol alias: FUN_58744340.

// Ghidra body range 0x58744340..0x5874441B; 219 mapped bytes.
extern "C" __declspec(naked) void FUN_58744340_segment_00() {
    __asm {
        // 0x58744340: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58744342: push 0x5897e0d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0xE0
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58744347: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874434D: push eax
        __asm _emit 0x50
        // 0x5874434E: push ecx
        __asm _emit 0x51
        // 0x5874434F: push ebx
        __asm _emit 0x53
        // 0x58744350: push ebp
        __asm _emit 0x55
        // 0x58744351: push esi
        __asm _emit 0x56
        // 0x58744352: push edi
        __asm _emit 0x57
        // 0x58744353: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58744358: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5874435A: push eax
        __asm _emit 0x50
        // 0x5874435B: lea eax, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5874435F: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744365: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58744367: mov dword ptr [esp + 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5874436B: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x5874436D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xDC
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58744372: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58744374: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58744377: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x58744379: je 0x5874437f
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5874437B: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x5874437D: jmp 0x58744381
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5874437F: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58744381: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x58744383: mov ebx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58744387: mov edi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x5874438A: sub edi, dword ptr [ebx + 0xc]
        __asm _emit 0x2B
        __asm _emit 0x7B
        __asm _emit 0x0C
        // 0x5874438D: mov dword ptr [esp + 0x20], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58744391: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x58744394: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x58744397: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x5874439A: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x5874439D: cmp edi, ecx
        __asm _emit 0x3B
        __asm _emit 0xF9
        // 0x5874439F: je 0x58744403
        __asm _emit 0x74
        __asm _emit 0x62
        // 0x587443A1: cmp edi, 0x3fffffff
        __asm _emit 0x81
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x3F
        // 0x587443A7: jbe 0x587443ae
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587443A9: call 0x588f6660
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x22
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587443AE: push ecx
        __asm _emit 0x51
        // 0x587443AF: push edi
        __asm _emit 0x57
        // 0x587443B0: call 0x587ab430
        __asm _emit 0xE8
        __asm _emit 0x7B
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x00
        // 0x587443B5: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587443B8: mov dword ptr [esi + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x587443BB: lea eax, [eax + edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xB8
        // 0x587443BE: mov dword ptr [esi + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x14
        // 0x587443C1: mov edi, dword ptr [ebx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7B
        __asm _emit 0x10
        // 0x587443C4: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x587443C7: cmp dword ptr [ebx + 0xc], edi
        __asm _emit 0x39
        __asm _emit 0x7B
        __asm _emit 0x0C
        // 0x587443CA: jbe 0x587443d1
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587443CC: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xA1
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587443D1: mov ebp, dword ptr [ebx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x6B
        __asm _emit 0x0C
        // 0x587443D4: cmp ebp, dword ptr [ebx + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x6B
        __asm _emit 0x10
        // 0x587443D7: jbe 0x587443de
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x587443D9: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x94
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587443DE: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587443E1: sub edi, ebp
        __asm _emit 0x2B
        __asm _emit 0xFD
        // 0x587443E3: sar edi, 2
        __asm _emit 0xC1
        __asm _emit 0xFF
        __asm _emit 0x02
        // 0x587443E6: lea eax, [edi*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xBD
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587443ED: lea ebx, [eax + ecx]
        __asm _emit 0x8D
        __asm _emit 0x1C
        __asm _emit 0x08
        // 0x587443F0: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x587443F2: jbe 0x58744400
        __asm _emit 0x76
        __asm _emit 0x0C
        // 0x587443F4: push eax
        __asm _emit 0x50
        // 0x587443F5: push ebp
        __asm _emit 0x55
        // 0x587443F6: push eax
        __asm _emit 0x50
        // 0x587443F7: push ecx
        __asm _emit 0x51
        // 0x587443F8: call 0x5897cc54
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0x88
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x587443FD: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58744400: mov dword ptr [esi + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58744403: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58744405: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58744409: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58744410: pop ecx
        __asm _emit 0x59
        // 0x58744411: pop edi
        __asm _emit 0x5F
        // 0x58744412: pop esi
        __asm _emit 0x5E
        // 0x58744413: pop ebp
        __asm _emit 0x5D
        // 0x58744414: pop ebx
        __asm _emit 0x5B
        // 0x58744415: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58744418: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
