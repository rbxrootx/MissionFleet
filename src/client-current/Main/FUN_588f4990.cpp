// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F4990 .. +0x23 bytes.
// Source symbol alias: FUN_588f4990.
extern "C" __declspec(naked) void FUN_588f4990() {
    __asm {
        // 0x588F4990: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F4994: mov dword ptr [ecx + 0x164], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F499A: mov dword ptr [ecx + 0x1a0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F49A0: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588F49A4: mov dword ptr [ecx + 0x168], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F49AA: mov dword ptr [ecx + 0x1a4], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xA4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F49B0: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
