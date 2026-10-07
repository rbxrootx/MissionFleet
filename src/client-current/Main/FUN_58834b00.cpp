// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58834B00 .. +0x2B bytes.
// Source symbol alias: FUN_58834b00.
extern "C" __declspec(naked) void FUN_58834b00() {
    __asm {
        // 0x58834B00: push ebx
        __asm _emit 0x53
        // 0x58834B01: push esi
        __asm _emit 0x56
        // 0x58834B02: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58834B04: mov ebx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x0C
        // 0x58834B07: push edi
        __asm _emit 0x57
        // 0x58834B08: mov edi, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58834B0C: mov dword ptr [edi], 0
        __asm _emit 0xC7
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834B12: cmp ebx, dword ptr [esi + 0x10]
        __asm _emit 0x3B
        __asm _emit 0x5E
        __asm _emit 0x10
        // 0x58834B15: jbe 0x58834b1c
        __asm _emit 0x76
        __asm _emit 0x05
        // 0x58834B17: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x81
        __asm _emit 0x14
        __asm _emit 0x00
        // 0x58834B1C: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58834B1E: mov dword ptr [edi], eax
        __asm _emit 0x89
        __asm _emit 0x07
        // 0x58834B20: mov dword ptr [edi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5F
        __asm _emit 0x04
        // 0x58834B23: mov eax, edi
        __asm _emit 0x8B
        __asm _emit 0xC7
        // 0x58834B25: pop edi
        __asm _emit 0x5F
        // 0x58834B26: pop esi
        __asm _emit 0x5E
        // 0x58834B27: pop ebx
        __asm _emit 0x5B
        // 0x58834B28: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
