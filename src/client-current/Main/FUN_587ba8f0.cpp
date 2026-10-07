// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 56 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ba8f0.

// Ghidra body range 0x587BA8F0..0x587BA928; 56 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba8f0_segment_00() {
    __asm {
        // 0x587BA8F0: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BA8F5: mov edx, dword ptr [eax + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA8FB: cmp word ptr [edx + 0x19c], 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x03
        // 0x587BA903: jne 0x587ba925
        __asm _emit 0x75
        __asm _emit 0x20
        // 0x587BA905: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587BA909: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587BA90D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA90F: push eax
        __asm _emit 0x50
        // 0x587BA910: mov eax, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587BA914: push edx
        __asm _emit 0x52
        // 0x587BA915: mov edx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587BA919: push eax
        __asm _emit 0x50
        // 0x587BA91A: push edx
        __asm _emit 0x52
        // 0x587BA91B: push 0x80010d03
        __asm _emit 0x68
        __asm _emit 0x03
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA920: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x4B
        __asm _emit 0x63
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA925: ret 0x10
        __asm _emit 0xC2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
