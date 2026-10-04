// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58901FD0 .. +0x20 bytes.
// Source symbol alias: FUN_58901fd0.
extern "C" __declspec(naked) void FUN_58901fd0() {
    __asm {
        // 0x58901FD0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58901FD4: push esi
        __asm _emit 0x56
        // 0x58901FD5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58901FD7: push eax
        __asm _emit 0x50
        // 0x58901FD8: mov dword ptr [esi], 0x589a24d4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD4
        __asm _emit 0x24
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x58901FDE: mov dword ptr [esi + 4], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58901FE5: call 0x58901e60
        __asm _emit 0xE8
        __asm _emit 0x76
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58901FEA: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58901FEC: pop esi
        __asm _emit 0x5E
        // 0x58901FED: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
