// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 63 bytes in 1 exact ranges.
// Source symbol alias: FUN_58745f40.

// Ghidra body range 0x58745F40..0x58745F7F; 63 mapped bytes.
extern "C" __declspec(naked) void FUN_58745f40_segment_00() {
    __asm {
        // 0x58745F40: sub esp, 8
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x08
        // 0x58745F43: push ebx
        __asm _emit 0x53
        // 0x58745F44: push ebp
        __asm _emit 0x55
        // 0x58745F45: push esi
        __asm _emit 0x56
        // 0x58745F46: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58745F48: mov ebp, dword ptr [esi + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x6E
        __asm _emit 0x10
        // 0x58745F4B: push edi
        __asm _emit 0x57
        // 0x58745F4C: cmp dword ptr [esi + 0xc], ebp
        __asm _emit 0x39
        __asm _emit 0x6E
        __asm _emit 0x0C
        // 0x58745F4F: jbe 0x58745f56
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58745F51: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x1C
        __asm _emit 0x6D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745F56: mov edi, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7E
        __asm _emit 0x0C
        // 0x58745F59: mov ebx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x1E
        // 0x58745F5B: cmp edi, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x7E
        __asm _emit 0x10
        // 0x58745F5E: jbe 0x58745f65
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58745F60: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x0D
        __asm _emit 0x6D
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58745F65: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58745F67: push ebp
        __asm _emit 0x55
        // 0x58745F68: push ebx
        __asm _emit 0x53
        // 0x58745F69: push edi
        __asm _emit 0x57
        // 0x58745F6A: push eax
        __asm _emit 0x50
        // 0x58745F6B: lea eax, [esp + 0x20]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58745F6F: push eax
        __asm _emit 0x50
        // 0x58745F70: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58745F72: call 0x58745eb0
        __asm _emit 0xE8
        __asm _emit 0x39
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58745F77: pop edi
        __asm _emit 0x5F
        // 0x58745F78: pop esi
        __asm _emit 0x5E
        // 0x58745F79: pop ebp
        __asm _emit 0x5D
        // 0x58745F7A: pop ebx
        __asm _emit 0x5B
        // 0x58745F7B: add esp, 8
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x08
        // 0x58745F7E: ret
        __asm _emit 0xC3
    }
}
