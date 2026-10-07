// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 82 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a13e0.

// Ghidra body range 0x587A13E0..0x587A1432; 82 mapped bytes.
extern "C" __declspec(naked) void FUN_587a13e0_segment_00() {
    __asm {
        // 0x587A13E0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587A13E2: push 0x589807d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x07
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587A13E7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A13ED: push eax
        __asm _emit 0x50
        // 0x587A13EE: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587A13F1: push esi
        __asm _emit 0x56
        // 0x587A13F2: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587A13F7: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587A13F9: push eax
        __asm _emit 0x50
        // 0x587A13FA: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587A13FE: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1404: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A1406: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587A140A: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587A140D: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587A140F: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587A1411: push eax
        __asm _emit 0x50
        // 0x587A1412: push ecx
        __asm _emit 0x51
        // 0x587A1413: push edx
        __asm _emit 0x52
        // 0x587A1414: push ecx
        __asm _emit 0x51
        // 0x587A1415: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587A1419: push eax
        __asm _emit 0x50
        // 0x587A141A: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A141C: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A1424: call 0x587a1080
        __asm _emit 0xE8
        __asm _emit 0x57
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A1429: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587A142C: push ecx
        __asm _emit 0x51
        // 0x587A142D: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
    }
}
