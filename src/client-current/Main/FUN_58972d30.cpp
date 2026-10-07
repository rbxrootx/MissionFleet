// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 112 bytes in 2 exact ranges.
// Source symbol alias: FUN_58972d30.

// Ghidra body range 0x58972D30..0x58972D73; 67 mapped bytes.
extern "C" __declspec(naked) void FUN_58972d30_segment_00() {
    __asm {
        // 0x58972D30: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58972D32: push 0x5898adb8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xAD
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58972D37: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972D3D: push eax
        __asm _emit 0x50
        // 0x58972D3E: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972D45: push ecx
        __asm _emit 0x51
        // 0x58972D46: push esi
        __asm _emit 0x56
        // 0x58972D47: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58972D49: push edi
        __asm _emit 0x57
        // 0x58972D4A: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58972D4E: mov dword ptr [esi], 0x589a3068
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x68
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58972D54: mov edi, dword ptr [esi + 0x1bc]
        __asm _emit 0x8B
        __asm _emit 0xBE
        __asm _emit 0xBC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972D5A: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972D62: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58972D64: je 0x58972d76
        __asm _emit 0x74
        __asm _emit 0x10
        // 0x58972D66: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58972D68: call 0x58973930
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972D6D: push edi
        __asm _emit 0x57
        // 0x58972D6E: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0xCF
        __asm _emit 0x9E
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra body range 0x58972D76..0x58972DA3; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_58972d30_segment_01() {
    __asm {
        // 0x58972D76: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58972D78: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58972D80: mov dword ptr [esi], 0x589a302c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x2C
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58972D86: call 0x589729a0
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58972D8B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58972D8D: call 0x589728f0
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58972D92: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58972D96: pop edi
        __asm _emit 0x5F
        // 0x58972D97: pop esi
        __asm _emit 0x5E
        // 0x58972D98: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972D9F: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58972DA2: ret
        __asm _emit 0xC3
    }
}
