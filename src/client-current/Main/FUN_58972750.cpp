// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 221 bytes in 1 exact ranges.
// Source symbol alias: FUN_58972750.

// Ghidra body range 0x58972750..0x5897282D; 221 mapped bytes.
extern "C" __declspec(naked) void FUN_58972750_segment_00() {
    __asm {
        // 0x58972750: sub esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x18
        // 0x58972753: push ebx
        __asm _emit 0x53
        // 0x58972754: push esi
        __asm _emit 0x56
        // 0x58972755: push edi
        __asm _emit 0x57
        // 0x58972756: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58972758: call 0x589728f0
        __asm _emit 0xE8
        __asm _emit 0x93
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897275D: test al, al
        __asm _emit 0x84
        __asm _emit 0xC0
        // 0x5897275F: je 0x5897280e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0xA9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972765: mov edi, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58972769: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5897276B: je 0x5897280e
        __asm _emit 0x0F
        __asm _emit 0x84
        __asm _emit 0x9D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972771: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58972775: push eax
        __asm _emit 0x50
        // 0x58972776: push 0x18
        __asm _emit 0x6A
        __asm _emit 0x18
        // 0x58972778: push edi
        __asm _emit 0x57
        // 0x58972779: call dword ptr [0x5898c098]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897277F: mov ecx, dword ptr [esp + 0x1e]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x1E
        // 0x58972783: mov edx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58972787: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5897278B: and ecx, 0xffff
        __asm _emit 0x81
        __asm _emit 0xE1
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972791: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58972793: push ecx
        __asm _emit 0x51
        // 0x58972794: push edx
        __asm _emit 0x52
        // 0x58972795: push eax
        __asm _emit 0x50
        // 0x58972796: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58972798: call 0x58972a10
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897279D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5897279F: je 0x5897280e
        __asm _emit 0x74
        __asm _emit 0x6D
        // 0x589727A1: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589727A3: call dword ptr [0x5898c404]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xC4
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589727A9: mov ebx, eax
        __asm _emit 0x8B
        __asm _emit 0xD8
        // 0x589727AB: test ebx, ebx
        __asm _emit 0x85
        __asm _emit 0xDB
        // 0x589727AD: je 0x5897280e
        __asm _emit 0x74
        __asm _emit 0x5F
        // 0x589727AF: mov eax, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x589727B3: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589727B5: je 0x589727c6
        __asm _emit 0x74
        __asm _emit 0x0F
        // 0x589727B7: push eax
        __asm _emit 0x50
        // 0x589727B8: push ebx
        __asm _emit 0x53
        // 0x589727B9: call dword ptr [0x5898c074]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589727BF: push ebx
        __asm _emit 0x53
        // 0x589727C0: call dword ptr [0x5898c094]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589727C6: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x589727C9: mov edx, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x34
        // 0x589727CC: mov eax, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x10
        // 0x589727CF: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589727D1: push ecx
        __asm _emit 0x51
        // 0x589727D2: push edx
        __asm _emit 0x52
        // 0x589727D3: push eax
        __asm _emit 0x50
        // 0x589727D4: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x589727D6: push edi
        __asm _emit 0x57
        // 0x589727D7: push ebx
        __asm _emit 0x53
        // 0x589727D8: call dword ptr [0x5898c090]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xC0
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x589727DE: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x589727E0: jne 0x58972819
        __asm _emit 0x75
        __asm _emit 0x37
        // 0x589727E2: mov edi, 0x589ce5fc
        __asm _emit 0xBF
        __asm _emit 0xFC
        __asm _emit 0xE5
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x589727E7: or ecx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0xFF
        // 0x589727EA: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xF2
        __asm _emit 0xAE
        // 0x589727EC: not ecx
        __asm _emit 0xF7
        __asm _emit 0xD1
        // 0x589727EE: sub edi, ecx
        __asm _emit 0x2B
        __asm _emit 0xF9
        // 0x589727F0: lea edx, [esi + 0x44]
        __asm _emit 0x8D
        __asm _emit 0x56
        __asm _emit 0x44
        // 0x589727F3: mov eax, ecx
        __asm _emit 0x8B
        __asm _emit 0xC1
        // 0x589727F5: mov esi, edi
        __asm _emit 0x8B
        __asm _emit 0xF7
        // 0x589727F7: mov edi, edx
        __asm _emit 0x8B
        __asm _emit 0xFA
        // 0x589727F9: push ebx
        __asm _emit 0x53
        // 0x589727FA: shr ecx, 2
        __asm _emit 0xC1
        __asm _emit 0xE9
        __asm _emit 0x02
        // 0x589727FD: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA5
        // 0x589727FF: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x58972801: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58972803: and ecx, 3
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x03
        // 0x58972806: rep movsb byte ptr es:[edi], byte ptr [esi]
        __asm _emit 0xF3
        __asm _emit 0xA4
        // 0x58972808: call dword ptr [0x5898c3ec]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xEC
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897280E: pop edi
        __asm _emit 0x5F
        // 0x5897280F: pop esi
        __asm _emit 0x5E
        // 0x58972810: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58972812: pop ebx
        __asm _emit 0x5B
        // 0x58972813: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x58972816: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58972819: push ebx
        __asm _emit 0x53
        // 0x5897281A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5897281C: call dword ptr [0x5898c3ec]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xEC
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58972822: pop edi
        __asm _emit 0x5F
        // 0x58972823: pop esi
        __asm _emit 0x5E
        // 0x58972824: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58972826: pop ebx
        __asm _emit 0x5B
        // 0x58972827: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5897282A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
