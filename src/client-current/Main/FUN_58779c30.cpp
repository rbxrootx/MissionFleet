// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58779C30 .. +0x53 bytes.
// Source symbol alias: FUN_58779c30.
extern "C" __declspec(naked) void FUN_58779c30() {
    __asm {
        // 0x58779C30: movzx eax, word ptr [ecx + 0x5e]
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0x41
        __asm _emit 0x5E
        // 0x58779C34: mov edx, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58779C38: and eax, 0xf
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x0F
        // 0x58779C3B: cmp eax, edx
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58779C3D: je 0x58779c5e
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58779C3F: mov eax, dword ptr [ecx + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779C45: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58779C48: je 0x58779c4f
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58779C4A: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58779C4D: jne 0x58779c7b
        __asm _emit 0x75
        __asm _emit 0x2C
        // 0x58779C4F: lea ecx, [edx - 1]
        __asm _emit 0x8D
        __asm _emit 0x4A
        __asm _emit 0xFF
        // 0x58779C52: cmp ecx, 7
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x07
        // 0x58779C55: ja 0x58779c7b
        __asm _emit 0x77
        __asm _emit 0x24
        // 0x58779C57: jmp dword ptr [ecx*4 + 0x58779c84]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x84
        __asm _emit 0x9C
        __asm _emit 0x77
        __asm _emit 0x58
        // 0x58779C5E: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58779C60: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58779C63: dec eax
        __asm _emit 0x48
        // 0x58779C64: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58779C66: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58779C68: and eax, 2
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x02
        // 0x58779C6B: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58779C6E: sub eax, 2
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x02
        // 0x58779C71: neg eax
        __asm _emit 0xF7
        __asm _emit 0xD8
        // 0x58779C73: sbb eax, eax
        __asm _emit 0x1B
        __asm _emit 0xC0
        // 0x58779C75: and eax, 2
        __asm _emit 0x83
        __asm _emit 0xE0
        __asm _emit 0x02
        // 0x58779C78: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58779C7B: mov eax, 2
        __asm _emit 0xB8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58779C80: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
