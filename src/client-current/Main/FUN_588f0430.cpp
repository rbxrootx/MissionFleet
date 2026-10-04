// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588F0430 .. +0x27 bytes.
// Source symbol alias: FUN_588f0430.
extern "C" __declspec(naked) void FUN_588f0430() {
    __asm {
        // 0x588F0430: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0435: cmp dword ptr [esp + 4], eax
        __asm _emit 0x39
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588F0439: jne 0x588f0447
        __asm _emit 0x75
        __asm _emit 0x0C
        // 0x588F043B: mov ecx, dword ptr [ecx + 0x2d8]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0441: mov dword ptr [ecx + 0x50], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x50
        // 0x588F0444: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588F0447: mov edx, dword ptr [ecx + 0x2d8]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xD8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F044D: mov dword ptr [edx + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x42
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F0454: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
