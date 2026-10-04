// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587799B0 .. +0x32 bytes.
// Source symbol alias: FUN_587799b0.
extern "C" __declspec(naked) void FUN_587799b0() {
    __asm {
        // 0x587799B0: movzx eax, word ptr [ecx + 0x5c]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x5C
        // 0x587799B4: movzx edx, word ptr [ecx + 0x5a]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x5A
        // 0x587799B8: xor eax, 0xaa
        __asm _emit 0x35
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587799BD: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587799C3: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587799C5: movzx edx, word ptr [ecx + 0x58]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x51
        __asm _emit 0x58
        // 0x587799C9: movzx ecx, word ptr [ecx + 0xa0]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x89
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587799D0: xor edx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF2
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587799D6: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587799D8: xor ecx, 0xaa
        __asm _emit 0x81
        __asm _emit 0xF1
        __asm _emit 0xAA
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587799DE: imul eax, ecx
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0xC1
        // 0x587799E1: ret
        __asm _emit 0xC3
    }
}
