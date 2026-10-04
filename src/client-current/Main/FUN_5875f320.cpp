// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875F320 .. +0x17 bytes.
// Source symbol alias: FUN_5875f320.
extern "C" __declspec(naked) void FUN_5875f320() {
    __asm {
        // 0x5875F320: mov eax, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x6C
        // 0x5875F323: mov byte ptr [eax], 0
        __asm _emit 0xC6
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F326: mov edx, 0xfffb
        __asm _emit 0xBA
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F32B: mov dword ptr [ecx + 0x78], 0
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875F332: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x5875F336: ret
        __asm _emit 0xC3
    }
}
