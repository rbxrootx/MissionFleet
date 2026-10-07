// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 82 bytes in 1 exact ranges.
// Source symbol alias: FUN_587446b0.

// Ghidra body range 0x587446B0..0x58744702; 82 mapped bytes.
extern "C" __declspec(naked) void FUN_587446b0_segment_00() {
    __asm {
        // 0x587446B0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x587446B2: push 0x589807d8
        __asm _emit 0x68
        __asm _emit 0xD8
        __asm _emit 0x07
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x587446B7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587446BD: push eax
        __asm _emit 0x50
        // 0x587446BE: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x587446C1: push esi
        __asm _emit 0x56
        // 0x587446C2: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x587446C7: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x587446C9: push eax
        __asm _emit 0x50
        // 0x587446CA: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587446CE: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587446D4: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587446D6: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587446DA: mov eax, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x18
        // 0x587446DD: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x587446DF: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x587446E1: push eax
        __asm _emit 0x50
        // 0x587446E2: push ecx
        __asm _emit 0x51
        // 0x587446E3: push edx
        __asm _emit 0x52
        // 0x587446E4: push ecx
        __asm _emit 0x51
        // 0x587446E5: lea eax, [esp + 0x1c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587446E9: push eax
        __asm _emit 0x50
        // 0x587446EA: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587446EC: mov dword ptr [esp + 0x30], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587446F4: call 0x58744260
        __asm _emit 0xE8
        __asm _emit 0x67
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587446F9: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587446FC: push ecx
        __asm _emit 0x51
        // 0x587446FD: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x40
        __asm _emit 0x85
        __asm _emit 0x23
        __asm _emit 0x00
    }
}
