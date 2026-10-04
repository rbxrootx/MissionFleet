// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588E64F0 .. +0x31 bytes.
// Source symbol alias: FUN_588e64f0.
extern "C" __declspec(naked) void FUN_588e64f0() {
    __asm {
        // 0x588E64F0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588E64F2: add ecx, 0x9a8
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0xA8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588E64F8: lea edx, [eax + 8]
        __asm _emit 0x8D
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x588E64FB: jmp 0x588e6500
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x588E64FD: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x588E6500: cmp dword ptr [ecx - 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x588E6504: je 0x588e6507
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x588E6506: inc eax
        __asm _emit 0x40
        // 0x588E6507: cmp dword ptr [ecx], 0
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x00
        // 0x588E650A: je 0x588e650d
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x588E650C: inc eax
        __asm _emit 0x40
        // 0x588E650D: cmp dword ptr [ecx + 4], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588E6511: je 0x588e6514
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x588E6513: inc eax
        __asm _emit 0x40
        // 0x588E6514: cmp dword ptr [ecx + 8], 0
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588E6518: je 0x588e651b
        __asm _emit 0x74
        __asm _emit 0x01
        // 0x588E651A: inc eax
        __asm _emit 0x40
        // 0x588E651B: add ecx, 0x10
        __asm _emit 0x83
        __asm _emit 0xC1
        __asm _emit 0x10
        // 0x588E651E: sub edx, 1
        __asm _emit 0x83
        __asm _emit 0xEA
        __asm _emit 0x01
    }
}
