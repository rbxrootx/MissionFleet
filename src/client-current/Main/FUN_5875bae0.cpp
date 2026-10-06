// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875BAE0 .. +0x23 bytes.
// Source symbol alias: FUN_5875bae0.
extern "C" __declspec(naked) void FUN_5875bae0() {
    __asm {
        // 0x5875BAE0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5875BAE4: mov dword ptr [ecx + 0x164], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BAEA: mov dword ptr [ecx + 0x16c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x6C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BAF0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5875BAF4: mov dword ptr [ecx + 0x168], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BAFA: mov dword ptr [ecx + 0x170], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875BB00: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
