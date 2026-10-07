// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 41 bytes in 1 exact ranges.
// Source symbol alias: FUN_58747410.

// Ghidra body range 0x58747410..0x58747439; 41 mapped bytes.
extern "C" __declspec(naked) void FUN_58747410_segment_00() {
    __asm {
        // 0x58747410: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x58747414: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747418: and eax, 0x7fff
        __asm _emit 0x25
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5874741D: shl ecx, 0xf
        __asm _emit 0xC1
        __asm _emit 0xE1
        __asm _emit 0x0F
        // 0x58747420: or eax, ecx
        __asm _emit 0x0B
        __asm _emit 0xC1
        // 0x58747422: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58747426: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x58747428: lea edx, [esp + 8]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5874742C: add eax, eax
        __asm _emit 0x03
        __asm _emit 0xC0
        // 0x5874742E: push edx
        __asm _emit 0x52
        // 0x5874742F: mov dword ptr [esp + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58747433: call 0x588d7ec0
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x0A
        __asm _emit 0x19
        __asm _emit 0x00
        // 0x58747438: ret
        __asm _emit 0xC3
    }
}
