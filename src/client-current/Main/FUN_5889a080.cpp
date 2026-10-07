// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 45 bytes in 1 exact ranges.
// Source symbol alias: FUN_5889a080.

// Ghidra body range 0x5889A080..0x5889A0AD; 45 mapped bytes.
extern "C" __declspec(naked) void FUN_5889a080_segment_00() {
    __asm {
        // 0x5889A080: push esi
        __asm _emit 0x56
        // 0x5889A081: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5889A083: push 0x589a015c
        __asm _emit 0x68
        __asm _emit 0x5C
        __asm _emit 0x01
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889A088: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5889A08A: call 0x58899d80
        __asm _emit 0xE8
        __asm _emit 0xF1
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A08F: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x5889A091: push 0x589a0150
        __asm _emit 0x68
        __asm _emit 0x50
        __asm _emit 0x01
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x5889A096: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889A098: call 0x58899d80
        __asm _emit 0xE8
        __asm _emit 0xE3
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A09D: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5889A09F: push 0x5899e890
        __asm _emit 0x68
        __asm _emit 0x90
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5889A0A4: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5889A0A6: call 0x58899d80
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5889A0AB: pop esi
        __asm _emit 0x5E
        // 0x5889A0AC: ret
        __asm _emit 0xC3
    }
}
