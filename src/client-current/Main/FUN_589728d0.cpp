// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x589728D0 .. +0x19 bytes.
// Source symbol alias: FUN_589728d0.
extern "C" __declspec(naked) void FUN_589728d0() {
    __asm {
        // 0x589728D0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x589728D4: push esi
        __asm _emit 0x56
        // 0x589728D5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589728D7: push eax
        __asm _emit 0x50
        // 0x589728D8: mov dword ptr [esi], 0x589a302c
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x2C
        __asm _emit 0x30
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x589728DE: call 0x58972850
        __asm _emit 0xE8
        __asm _emit 0x6D
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x589728E3: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x589728E5: pop esi
        __asm _emit 0x5E
        // 0x589728E6: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
