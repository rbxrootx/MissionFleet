// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5874A7D0 .. +0x11 bytes.
// Source symbol alias: FUN_5874a7d0.
extern "C" __declspec(naked) void FUN_5874a7d0() {
    __asm {
        // 0x5874A7D0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5874A7D4: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5874A7D8: add dword ptr [ecx + 0x6c], eax
        __asm _emit 0x01
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x5874A7DB: add dword ptr [ecx + 0x70], edx
        __asm _emit 0x01
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x5874A7DE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
