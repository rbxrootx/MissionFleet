// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 38 bytes in 1 exact ranges.
// Source symbol alias: FUN_58731650.

// Ghidra body range 0x58731650..0x58731676; 38 mapped bytes.
extern "C" __declspec(naked) void FUN_58731650_segment_00() {
    __asm {
        // 0x58731650: mov al, byte ptr [esp + 4]
        __asm _emit 0x8A
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58731654: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x58731656: movzx dx, al
        __asm _emit 0x66
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD0
        // 0x5873165A: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5873165E: push esi
        __asm _emit 0x56
        // 0x5873165F: mov esi, 0xe0ff
        __asm _emit 0xBE
        __asm _emit 0xFF
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58731664: and ax, si
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC6
        // 0x58731667: shl dx, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x08
        // 0x5873166B: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xD0
        // 0x5873166E: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        // 0x58731672: pop esi
        __asm _emit 0x5E
        // 0x58731673: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
