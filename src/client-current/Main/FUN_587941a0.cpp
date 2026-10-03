// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587941A0 .. +0x11 bytes.
extern "C" __declspec(naked) void FUN_587941a0() {
    __asm {
        // 0x587941A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587941A4: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587941A8: mov dword ptr [ecx + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x587941AB: mov dword ptr [ecx + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x587941AE: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
