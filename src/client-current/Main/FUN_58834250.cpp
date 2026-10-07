// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 68 bytes in 1 exact ranges.
// Source symbol alias: FUN_58834250.

// Ghidra body range 0x58834250..0x58834294; 68 mapped bytes.
extern "C" __declspec(naked) void FUN_58834250_segment_00() {
    __asm {
        // 0x58834250: mov eax, dword ptr [ecx + 0x1e4]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xE4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834256: mov ecx, dword ptr [ecx + 0xd4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5883425C: mov edx, dword ptr [ecx + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x64
        // 0x5883425F: add edx, eax
        __asm _emit 0x03
        __asm _emit 0xD0
        // 0x58834261: cmp edx, 0x77359400
        __asm _emit 0x81
        __asm _emit 0xFA
        __asm _emit 0x00
        __asm _emit 0x94
        __asm _emit 0x35
        __asm _emit 0x77
        // 0x58834267: jbe 0x58834281
        __asm _emit 0x76
        __asm _emit 0x18
        // 0x58834269: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883426B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883426D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5883426F: push 0x480
        __asm _emit 0x68
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58834274: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x77
        __asm _emit 0x78
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58834279: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5883427B: call 0x58764d30
        __asm _emit 0xE8
        __asm _emit 0xB0
        __asm _emit 0x0A
        __asm _emit 0xF3
        __asm _emit 0xFF
        // 0x58834280: ret
        __asm _emit 0xC3
        // 0x58834281: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58834287: push eax
        __asm _emit 0x50
        // 0x58834288: mov eax, dword ptr [0x58a0b4a0]
        __asm _emit 0xA1
        __asm _emit 0xA0
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5883428D: push eax
        __asm _emit 0x50
        // 0x5883428E: call 0x587ba050
        __asm _emit 0xE8
        __asm _emit 0xBD
        __asm _emit 0x5D
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x58834293: ret
        __asm _emit 0xC3
    }
}
