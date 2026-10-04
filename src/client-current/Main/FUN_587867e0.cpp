// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587867E0 .. +0x63 bytes.
// Source symbol alias: FUN_587867e0.
extern "C" __declspec(naked) void FUN_587867e0() {
    __asm {
        // 0x587867E0: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x587867E3: push ebx
        __asm _emit 0x53
        // 0x587867E4: push ebp
        __asm _emit 0x55
        // 0x587867E5: push esi
        __asm _emit 0x56
        // 0x587867E6: push edi
        __asm _emit 0x57
        // 0x587867E7: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587867E9: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587867ED: push eax
        __asm _emit 0x50
        // 0x587867EE: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587867F2: push ecx
        __asm _emit 0x51
        // 0x587867F3: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587867F6: call 0x58786750
        __asm _emit 0xE8
        __asm _emit 0x55
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587867FB: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x587867FE: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58786802: mov ebx, dword ptr [eax + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x58
        __asm _emit 0x18
        // 0x58786805: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58786807: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58786809: je 0x5878680f
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x5878680B: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x5878680D: je 0x58786814
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5878680F: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x64
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58786814: mov ebp, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58786818: cmp ebp, ebx
        __asm _emit 0x3B
        __asm _emit 0xEB
        // 0x5878681A: je 0x58786835
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5878681C: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x5878681E: jne 0x5878683f
        __asm _emit 0x75
        __asm _emit 0x1F
        // 0x58786820: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x4D
        __asm _emit 0x64
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x58786825: cmp ebp, dword ptr [edi + 0x18]
        __asm _emit 0x3B
        __asm _emit 0x6F
        __asm _emit 0x18
        // 0x58786828: jne 0x5878682f
        __asm _emit 0x75
        __asm _emit 0x05
        // 0x5878682A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x43
        __asm _emit 0x64
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878682F: mov edx, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x10
        // 0x58786832: mov dword ptr [esi + 8], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x58786835: pop edi
        __asm _emit 0x5F
        // 0x58786836: pop esi
        __asm _emit 0x5E
        // 0x58786837: pop ebp
        __asm _emit 0x5D
        // 0x58786838: pop ebx
        __asm _emit 0x5B
        // 0x58786839: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x5878683C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5878683F: mov edi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x3F
        // 0x58786841: jmp 0x58786825
        __asm _emit 0xEB
        __asm _emit 0xE2
    }
}
