// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x5886074D .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_5886074d() {
    __asm {
        // 0x5886074D: mov eax, dword ptr [ecx + 0x28]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x28
        // 0x58860750: cmp eax, 9
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x09
        // 0x58860753: ja 0x58860781
        __asm _emit 0x77
        __asm _emit 0x2C
        // 0x58860755: movzx eax, byte ptr [eax + 0x58860791]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x80
        __asm _emit 0x91
        __asm _emit 0x07
        __asm _emit 0x86
        __asm _emit 0x58
        // 0x5886075C: jmp dword ptr [eax*4 + 0x58860785]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x86
        __asm _emit 0x58
        // 0x58860763: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58860765: cmp byte ptr [ecx + 0x24], al
        __asm _emit 0x38
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x58860768: setne al
        __asm _emit 0x0F
        __asm _emit 0x95
        __asm _emit 0xC0
        // 0x5886076B: inc eax
        __asm _emit 0x40
        // 0x5886076C: ret
        __asm _emit 0xC3
        // 0x5886076D: push dword ptr [ecx + 0x20]
        __asm _emit 0xFF
        __asm _emit 0x71
        __asm _emit 0x20
        // 0x58860770: call 0x588612d8
        __asm _emit 0xE8
        __asm _emit 0x63
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58860775: pop ecx
        __asm _emit 0x59
        // 0x58860776: ret
        __asm _emit 0xC3
        // 0x58860777: push dword ptr [ecx + 0x20]
        __asm _emit 0xFF
        __asm _emit 0x71
        __asm _emit 0x20
        // 0x5886077A: call 0x588612b5
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x0B
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886077F: pop ecx
        __asm _emit 0x59
        // 0x58860780: ret
        __asm _emit 0xC3
        // 0x58860781: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58860783: ret
        __asm _emit 0xC3
    }
}
