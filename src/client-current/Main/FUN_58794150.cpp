// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58794150 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_58794150() {
    __asm {
        // 0x58794150: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58794154: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58794156: je 0x58794188
        __asm _emit 0x74
        __asm _emit 0x30
        // 0x58794158: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5879415C: shl edx, 4
        __asm _emit 0xC1
        __asm _emit 0xE2
        __asm _emit 0x04
        // 0x5879415F: xor dx, word ptr [ecx + 0x70]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x58794163: mov dword ptr [ecx + 0xb8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794169: mov eax, dword ptr [esp + 8]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x5879416D: and dx, 0x10
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE2
        __asm _emit 0x10
        // 0x58794171: xor word ptr [ecx + 0x70], dx
        __asm _emit 0x66
        __asm _emit 0x31
        __asm _emit 0x51
        __asm _emit 0x70
        // 0x58794175: mov dword ptr [ecx + 0xa8], 0x40000000
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x40
        // 0x5879417F: mov dword ptr [ecx + 0x90], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794185: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x58794188: mov dword ptr [ecx + 0xa8], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58794192: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
