// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5888CC90 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_5888cc90() {
    __asm {
        // 0x5888CC90: cmp dword ptr [esp + 4], 0
        __asm _emit 0x83
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888CC95: je 0x5888ccb1
        __asm _emit 0x74
        __asm _emit 0x1A
        // 0x5888CC97: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CC9C: cmp dword ptr [ecx + 0x10c], eax
        __asm _emit 0x39
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CCA2: jne 0x5888cccc
        __asm _emit 0x75
        __asm _emit 0x28
        // 0x5888CCA4: mov ecx, dword ptr [ecx + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CCAA: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888CCAE: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888CCB1: mov eax, dword ptr [ecx + 0x154]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x54
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CCB7: mov edx, 0xfffd
        __asm _emit 0xBA
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CCBC: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5888CCC0: mov ecx, dword ptr [ecx + 0x150]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5888CCC6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5888CCC8: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5888CCCC: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
