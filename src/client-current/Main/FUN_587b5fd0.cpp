// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B5FD0 .. +0x32 bytes.
// Source symbol alias: FUN_587b5fd0.
extern "C" __declspec(naked) void FUN_587b5fd0() {
    __asm {
        // 0x587B5FD0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B5FD4: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B5FD8: mov dword ptr [ecx + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x587B5FDB: mov dword ptr [ecx + 0x60], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x60
        // 0x587B5FDE: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x587B5FE1: jne 0x587b5fff
        __asm _emit 0x75
        __asm _emit 0x1C
        // 0x587B5FE3: mov eax, dword ptr [ecx + 0x50]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x587B5FE6: mov eax, dword ptr [eax*4 + 0x58a0b4d8]
        __asm _emit 0x8B
        __asm _emit 0x04
        __asm _emit 0x85
        __asm _emit 0xD8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587B5FED: imul eax, edx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC2
        // 0x587B5FF0: mov edx, dword ptr [ecx + 8]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x08
        // 0x587B5FF3: imul edx, edx, 0x3e8
        __asm _emit 0x69
        __asm _emit 0xD2
        __asm _emit 0xE8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587B5FF9: mov dword ptr [ecx + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x64
        // 0x587B5FFC: mov dword ptr [ecx + 0x58], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x58
        // 0x587B5FFF: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
