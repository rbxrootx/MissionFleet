// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908050 .. +0x81 bytes.
// Source symbol alias: FUN_58908050.
extern "C" __declspec(naked) void FUN_58908050() {
    __asm {
        // 0x58908050: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58908052: push 0x5898aa18
        __asm _emit 0x68
        __asm _emit 0x18
        __asm _emit 0xAA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58908057: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890805D: push eax
        __asm _emit 0x50
        // 0x5890805E: push ecx
        __asm _emit 0x51
        // 0x5890805F: push ebx
        __asm _emit 0x53
        // 0x58908060: push esi
        __asm _emit 0x56
        // 0x58908061: push edi
        __asm _emit 0x57
        // 0x58908062: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58908067: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58908069: push eax
        __asm _emit 0x50
        // 0x5890806A: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5890806E: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908074: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58908076: mov dword ptr [esp + 0x10], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5890807A: mov dword ptr [ebx], 0x589a29cc
        __asm _emit 0xC7
        __asm _emit 0x03
        __asm _emit 0xCC
        __asm _emit 0x29
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58908080: mov esi, dword ptr [ebx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x73
        __asm _emit 0x78
        // 0x58908083: mov dword ptr [esp + 0x1c], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5890808B: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5890808D: je 0x589080af
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x5890808F: nop
        __asm _emit 0x90
        // 0x58908090: mov edi, esi
        __asm _emit 0x8B
        __asm _emit 0xFE
        // 0x58908092: mov eax, dword ptr [edi + 4]
        __asm _emit 0x8B
        __asm _emit 0x47
        __asm _emit 0x04
        // 0x58908095: mov esi, dword ptr [esi + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x14
        // 0x58908098: push eax
        __asm _emit 0x50
        // 0x58908099: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xA4
        __asm _emit 0x4B
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x5890809E: mov eax, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x07
        // 0x589080A0: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x589080A2: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x589080A5: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x589080A7: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x589080A9: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x589080AB: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x589080AD: jne 0x58908090
        __asm _emit 0x75
        __asm _emit 0xE1
        // 0x589080AF: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x589080B1: mov dword ptr [esp + 0x1c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589080B9: call 0x58903450
        __asm _emit 0xE8
        __asm _emit 0x92
        __asm _emit 0xB3
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589080BE: mov ecx, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x589080C2: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589080C9: pop ecx
        __asm _emit 0x59
        // 0x589080CA: pop edi
        __asm _emit 0x5F
        // 0x589080CB: pop esi
        __asm _emit 0x5E
        // 0x589080CC: pop ebx
        __asm _emit 0x5B
        // 0x589080CD: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x589080D0: ret
        __asm _emit 0xC3
    }
}
