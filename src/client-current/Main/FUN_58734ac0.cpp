// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 153 bytes in 1 exact ranges.
// Source symbol alias: FUN_58734ac0.

// Ghidra body range 0x58734AC0..0x58734B59; 153 mapped bytes.
extern "C" __declspec(naked) void FUN_58734ac0_segment_00() {
    __asm {
        // 0x58734AC0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58734AC2: push 0x5897f488
        __asm _emit 0x68
        __asm _emit 0x88
        __asm _emit 0xF4
        __asm _emit 0x97
        __asm _emit 0x58
        // 0x58734AC7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734ACD: push eax
        __asm _emit 0x50
        // 0x58734ACE: push ecx
        __asm _emit 0x51
        // 0x58734ACF: push esi
        __asm _emit 0x56
        // 0x58734AD0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58734AD5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58734AD7: push eax
        __asm _emit 0x50
        // 0x58734AD8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58734ADC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734AE2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58734AE4: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58734AE8: mov eax, dword ptr [esp + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x30
        // 0x58734AEC: mov ecx, dword ptr [esp + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x2C
        // 0x58734AF0: mov edx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58734AF4: push eax
        __asm _emit 0x50
        // 0x58734AF5: mov eax, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58734AF9: push ecx
        __asm _emit 0x51
        // 0x58734AFA: mov ecx, dword ptr [esp + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x28
        // 0x58734AFE: push edx
        __asm _emit 0x52
        // 0x58734AFF: push eax
        __asm _emit 0x50
        // 0x58734B00: push ecx
        __asm _emit 0x51
        // 0x58734B01: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58734B03: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x28
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734B08: push 0xfffffeff
        __asm _emit 0x68
        __asm _emit 0xFF
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734B0D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58734B0F: mov dword ptr [esp + 0x18], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734B17: mov dword ptr [esi], 0x5898ca58
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x58
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58734B1D: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xFE
        __asm _emit 0xE1
        __asm _emit 0x1C
        __asm _emit 0x00
        // 0x58734B22: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58734B25: mov edx, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58734B29: lea eax, [eax + eax*4]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x80
        // 0x58734B2C: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58734B2E: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58734B30: mov dword ptr [esi + 0x5c], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x5C
        // 0x58734B33: mov dword ptr [esi + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x60
        // 0x58734B36: mov dword ptr [esi + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734B3D: mov dword ptr [esi + 0x64], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734B44: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58734B46: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58734B4A: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734B51: pop ecx
        __asm _emit 0x59
        // 0x58734B52: pop esi
        __asm _emit 0x5E
        // 0x58734B53: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58734B56: ret 0x18
        __asm _emit 0xC2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
