// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587E5BA0 .. +0x19 bytes.
// Source symbol alias: FUN_587e5ba0.
extern "C" __declspec(naked) void FUN_587e5ba0() {
    __asm {
        // 0x587E5BA0: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5BA5: mov dword ptr [ecx + 0x1048c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587E5BAB: mov byte ptr [ecx + 0x10c10], 0
        __asm _emit 0xC6
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587E5BB2: mov dword ptr [ecx + 0x20c10], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587E5BB8: ret
        __asm _emit 0xC3
    }
}
