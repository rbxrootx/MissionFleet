// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587799F0 .. +0x46 bytes.
// Source symbol alias: FUN_587799f0.
extern "C" __declspec(naked) void FUN_587799f0() {
    __asm {
        // 0x587799F0: push ecx
        __asm _emit 0x51
        // 0x587799F1: movzx eax, word ptr [ecx + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x587799F5: movzx edx, word ptr [ecx + 0x5a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x5A
        // 0x587799F9: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587799FF: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779A04: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58779A06: movzx edx, word ptr [ecx + 0x58]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x58
        // 0x58779A0A: movzx ecx, word ptr [ecx + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x89
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779A11: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779A17: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x58779A19: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779A1F: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x58779A22: mov dword ptr [esp], eax
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58779A25: fild dword ptr [esp]
        __asm _emit 0xDB
        __asm _emit 0x04
        __asm _emit 0x24
        // 0x58779A28: fmul qword ptr [0x58996880]
        __asm _emit 0xDC
        __asm _emit 0x0D
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x58779A2E: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58779A31: jmp 0x5897cca0
        __asm _emit 0xE9
        __asm _emit 0x6A
        __asm _emit 0x32
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
