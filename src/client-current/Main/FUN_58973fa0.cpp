// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 86 bytes in 1 exact ranges.
// Source symbol alias: FUN_58973fa0.

// Ghidra body range 0x58973FA0..0x58973FF6; 86 mapped bytes.
extern "C" __declspec(naked) void FUN_58973fa0_segment_00() {
    __asm {
        // 0x58973FA0: mov eax, dword ptr [ecx + 0x108]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58973FA6: mov ecx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58973FAA: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58973FAC: je 0x58973fd2
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x58973FAE: movsx eax, byte ptr [ecx]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x01
        // 0x58973FB1: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973FB3: mov dl, byte ptr [ecx + 1]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58973FB6: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x58973FB9: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58973FBB: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973FBD: mov dl, byte ptr [ecx + 2]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x02
        // 0x58973FC0: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x58973FC3: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58973FC5: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973FC7: mov dl, byte ptr [ecx + 3]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x03
        // 0x58973FCA: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x58973FCD: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58973FCF: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58973FD2: movsx eax, byte ptr [ecx + 3]
        __asm _emit 0x0F
        __asm _emit 0xBE
        __asm _emit 0x41
        __asm _emit 0x03
        // 0x58973FD6: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973FD8: mov dl, byte ptr [ecx + 2]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x02
        // 0x58973FDB: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x58973FDE: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58973FE0: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973FE2: mov dl, byte ptr [ecx + 1]
        __asm _emit 0x8A
        __asm _emit 0x51
        __asm _emit 0x01
        // 0x58973FE5: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x58973FE8: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58973FEA: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x58973FEC: mov dl, byte ptr [ecx]
        __asm _emit 0x8A
        __asm _emit 0x11
        // 0x58973FEE: shl eax, 8
        __asm _emit 0xC1
        __asm _emit 0xE0
        __asm _emit 0x08
        // 0x58973FF1: or eax, edx
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58973FF3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
