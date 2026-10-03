// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587B67A0 .. +0x18 bytes.
extern "C" __declspec(naked) void FUN_587b67a0() {
    __asm {
        // 0x587B67A0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587B67A4: mov edx, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587B67A8: mov dword ptr [ecx + 0x70], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x587B67AF: mov dword ptr [ecx + 0x68], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x68
        // 0x587B67B2: mov dword ptr [ecx + 0x6c], edx
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x6C
        // 0x587B67B5: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
