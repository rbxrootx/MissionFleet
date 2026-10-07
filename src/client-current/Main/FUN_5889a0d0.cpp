// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 57 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889a0d0.

// Ghidra body range 0x5889A0D0..0x5889A109; 57 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a0d0_segment_00() {
    __asm {
        // 0x5889A0D0: push ecx
        __asm _emit 0x51
        // 0x5889A0D1: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889A0D5: push esi
        __asm _emit 0x56
        // 0x5889A0D6: mov esi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889A0DA: push edi
        __asm _emit 0x57
        // 0x5889A0DB: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5889A0DF: mov byte ptr [esp + 8], 0
        __asm _emit 0xC6
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x5889A0E4: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5889A0E8: push eax
        __asm _emit 0x50
        // 0x5889A0E9: mov eax, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x5889A0ED: push edx
        __asm _emit 0x52
        // 0x5889A0EE: add ecx, 8
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x08
        // 0x5889A0F1: push ecx
        __asm _emit 0x51
        // 0x5889A0F2: push eax
        __asm _emit 0x50
        // 0x5889A0F3: push esi
        __asm _emit 0x56
        // 0x5889A0F4: push edi
        __asm _emit 0x57
        // 0x5889A0F5: call 0x58899ce0
        __asm _emit 0xE8
        __asm _emit 0xE6
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A0FA: lea ecx, [esi + esi*2]
        __asm _emit 0x8D
        __asm _emit 0x0C
        __asm _emit 0x76
        // 0x5889A0FD: add esp, 0x18
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x18
        // 0x5889A100: lea eax, [edi + ecx*8]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0xCF
        // 0x5889A103: pop edi
        __asm _emit 0x5F
        // 0x5889A104: pop esi
        __asm _emit 0x5E
        // 0x5889A105: pop ecx
        __asm _emit 0x59
        // 0x5889A106: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
