// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 53 bytes in 1 exact ranges.
// Source symbol alias: FUN_5878d490.

// Ghidra body range 0x5878D490..0x5878D4C5; 53 mapped bytes.
extern "C" __declspec(naked) void FUN_5878d490_segment_00() {
    __asm {
        // 0x5878D490: mov eax, dword ptr [0x58a245c0]
        __asm _emit 0xA1
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878D495: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878D497: je 0x5878d4c4
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5878D499: mov dword ptr [eax + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D4A0: mov dword ptr [eax + 0x54], 0x2ce
        __asm _emit 0xC7
        __asm _emit 0x40
        __asm _emit 0x54
        __asm _emit 0xCE
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878D4A7: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878D4AD: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5878D4AF: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x5878D4B2: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5878D4B4: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xC0
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878D4BA: push 0x220000
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x22
        __asm _emit 0x00
        // 0x5878D4BF: call 0x58893860
        __asm _emit 0xE8
        __asm _emit 0x9C
        __asm _emit 0x63
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x5878D4C4: ret
        __asm _emit 0xC3
    }
}
