// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 42 bytes in 1 exact ranges.
// Source symbol alias: FUN_587ba930.

// Ghidra body range 0x587BA930..0x587BA95A; 42 mapped bytes.
extern "C" __declspec(naked) void FUN_587ba930_segment_00() {
    __asm {
        // 0x587BA930: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x587BA935: mov edx, dword ptr [eax + 0x4f4]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0xF4
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587BA93B: cmp word ptr [edx + 0x19c], 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBA
        __asm _emit 0x9C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x04
        // 0x587BA943: jne 0x587ba959
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587BA945: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA947: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA949: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA94B: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA94D: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x587BA94F: push 0x80010d04
        __asm _emit 0x68
        __asm _emit 0x04
        __asm _emit 0x0D
        __asm _emit 0x01
        __asm _emit 0x80
        // 0x587BA954: call 0x58970c70
        __asm _emit 0xE8
        __asm _emit 0x17
        __asm _emit 0x63
        __asm _emit 0x1B
        __asm _emit 0x00
        // 0x587BA959: ret
        __asm _emit 0xC3
    }
}
