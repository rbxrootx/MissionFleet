// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 42 bytes in 1 exact ranges.
// Source symbol alias: FUN_5882f050.

// Ghidra body range 0x5882F050..0x5882F07A; 42 mapped bytes.
extern "C" __declspec(naked) void FUN_5882f050_segment_00() {
    __asm {
        // 0x5882F050: cmp word ptr [0x58a0b4a8], 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3D
        __asm _emit 0xA8
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        __asm _emit 0x06
        // 0x5882F058: jne 0x5882f077
        __asm _emit 0x75
        __asm _emit 0x1D
        // 0x5882F05A: mov ecx, dword ptr [ecx + 0x6c]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x6C
        // 0x5882F05D: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x5882F05F: je 0x5882f077
        __asm _emit 0x74
        __asm _emit 0x16
        // 0x5882F061: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x5882F065: push eax
        __asm _emit 0x50
        // 0x5882F066: call 0x58786480
        __asm _emit 0xE8
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xF5
        __asm _emit 0xFF
        // 0x5882F06B: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5882F071: push eax
        __asm _emit 0x50
        // 0x5882F072: call 0x587ba020
        __asm _emit 0xE8
        __asm _emit 0xA9
        __asm _emit 0xAF
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x5882F077: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
