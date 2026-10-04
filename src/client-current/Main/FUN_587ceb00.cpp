// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CEB00 .. +0x4C bytes.
// Source symbol alias: FUN_587ceb00.
extern "C" __declspec(naked) void FUN_587ceb00() {
    __asm {
        // 0x587CEB00: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CEB04: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CEB08: push esi
        __asm _emit 0x56
        // 0x587CEB09: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x587CEB0B: push eax
        __asm _emit 0x50
        // 0x587CEB0C: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587CEB10: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587CEB12: mov ecx, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587CEB16: push ecx
        __asm _emit 0x51
        // 0x587CEB17: push edx
        __asm _emit 0x52
        // 0x587CEB18: push eax
        __asm _emit 0x50
        // 0x587CEB19: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587CEB1B: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x10
        __asm _emit 0x5F
        __asm _emit 0xF6
        __asm _emit 0xFF
        // 0x587CEB20: mov cx, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CEB24: mov edx, 0xe5ff
        __asm _emit 0xBA
        __asm _emit 0xFF
        __asm _emit 0xE5
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEB29: and cx, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xCA
        // 0x587CEB2C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CEB2E: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEB33: mov dword ptr [esi + 0x58], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x58
        // 0x587CEB36: mov dword ptr [esi], 0x5899b450
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x50
        __asm _emit 0xB4
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587CEB3C: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xCA
        // 0x587CEB3F: mov dword ptr [esi + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x50
        // 0x587CEB42: mov word ptr [esi + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x24
        // 0x587CEB46: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x587CEB48: pop esi
        __asm _emit 0x5E
        // 0x587CEB49: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
