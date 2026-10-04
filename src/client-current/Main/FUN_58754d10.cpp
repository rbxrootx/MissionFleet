// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58754D10 .. +0x41 bytes.
// Source symbol alias: FUN_58754d10.
extern "C" __declspec(naked) void FUN_58754d10() {
    __asm {
        // 0x58754D10: push ebx
        __asm _emit 0x53
        // 0x58754D11: push edi
        __asm _emit 0x57
        // 0x58754D12: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58754D16: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58754D18: test edi, edi
        __asm _emit 0x85
        __asm _emit 0xFF
        // 0x58754D1A: jbe 0x58754d4c
        __asm _emit 0x76
        __asm _emit 0x30
        // 0x58754D1C: push esi
        __asm _emit 0x56
        // 0x58754D1D: mov esi, dword ptr [esp + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58754D21: add esi, 0x24
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x24
        // 0x58754D24: mov edx, dword ptr [esi - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0xE4
        // 0x58754D27: lea eax, [esi + 9]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x09
        // 0x58754D2A: push eax
        __asm _emit 0x50
        // 0x58754D2B: mov eax, dword ptr [esi - 0x20]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0xE0
        // 0x58754D2E: push esi
        __asm _emit 0x56
        // 0x58754D2F: lea ecx, [esi - 0x18]
        __asm _emit 0x8D
        __asm _emit 0x4E
        __asm _emit 0xE8
        // 0x58754D32: push ecx
        __asm _emit 0x51
        // 0x58754D33: mov ecx, dword ptr [esi - 0x24]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xDC
        // 0x58754D36: push edx
        __asm _emit 0x52
        // 0x58754D37: push eax
        __asm _emit 0x50
        // 0x58754D38: push ecx
        __asm _emit 0x51
        // 0x58754D39: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x58754D3B: call 0x58754c00
        __asm _emit 0xE8
        __asm _emit 0xC0
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58754D40: add esi, 0x84
        __asm _emit 0x81
        __asm _emit 0xC6
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58754D46: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x58754D49: jne 0x58754d24
        __asm _emit 0x75
        __asm _emit 0xD9
        // 0x58754D4B: pop esi
        __asm _emit 0x5E
        // 0x58754D4C: pop edi
        __asm _emit 0x5F
        // 0x58754D4D: pop ebx
        __asm _emit 0x5B
        // 0x58754D4E: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
