// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E6A70 .. +0x4A bytes.
// Source symbol alias: FUN_588e6a70.
extern "C" __declspec(naked) void FUN_588e6a70() {
    __asm {
        // 0x588E6A70: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6A75: movzx ecx, word ptr [esp + 8]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E6A7A: mov dword ptr [esp + 4], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6A7E: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6A82: mov dword ptr [esp + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6A86: fild dword ptr [esp + 4]
        __asm _emit 0xDB
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6A8A: fnstcw word ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6A8E: fmul st(1)
        __asm _emit 0xD8
        __asm _emit 0xC9
        // 0x588E6A90: movzx eax, word ptr [esp + 4]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6A95: or eax, 0xc00
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x0C
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E6A9A: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E6A9E: fdiv qword ptr [0x5898cae0]
        __asm _emit 0xDC
        __asm _emit 0x35
        __asm _emit 0xE0
        __asm _emit 0xCA
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588E6AA4: faddp st(1)
        __asm _emit 0xDE
        __asm _emit 0xC1
        // 0x588E6AA6: fldcw word ptr [esp + 8]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E6AAA: fistp dword ptr [esp + 8]
        __asm _emit 0xDB
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E6AAE: mov ax, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588E6AB3: fldcw word ptr [esp + 4]
        __asm _emit 0xD9
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588E6AB7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
