// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 111 bytes in 1 exact ranges.
// Source symbol alias: FUN_587cd9f0.

// Ghidra body range 0x587CD9F0..0x587CDA5F; 111 mapped bytes.
extern "C" __declspec(naked) void FUN_587cd9f0_segment_00() {
    __asm {
        // 0x587CD9F0: push ebx
        __asm _emit 0x53
        // 0x587CD9F1: mov bl, byte ptr [esp + 8]
        __asm _emit 0x8A
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x587CD9F5: test bl, bl
        __asm _emit 0x84
        __asm _emit 0xDB
        // 0x587CD9F7: jne 0x587cda1c
        __asm _emit 0x75
        __asm _emit 0x23
        // 0x587CD9F9: movzx eax, byte ptr [ecx + 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x41
        __asm _emit 0x0D
        // 0x587CD9FD: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CDA00: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x587CDA03: inc byte ptr [eax + edx - 3]
        __asm _emit 0xFE
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xFD
        // 0x587CDA07: lea eax, [eax + edx - 3]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xFD
        // 0x587CDA0B: movzx eax, byte ptr [ecx + 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x41
        __asm _emit 0x0D
        // 0x587CDA0F: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CDA12: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x587CDA15: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CDA17: mov dl, byte ptr [eax - 3]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0xFD
        // 0x587CDA1A: jmp 0x587cda42
        __asm _emit 0xEB
        __asm _emit 0x26
        // 0x587CDA1C: cmp bl, 1
        __asm _emit 0x80
        __asm _emit 0xFB
        __asm _emit 0x01
        // 0x587CDA1F: jne 0x587cda51
        __asm _emit 0x75
        __asm _emit 0x30
        // 0x587CDA21: movzx eax, byte ptr [ecx + 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x41
        __asm _emit 0x0D
        // 0x587CDA25: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CDA28: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x587CDA2B: inc byte ptr [eax + edx - 2]
        __asm _emit 0xFE
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xFE
        // 0x587CDA2F: lea eax, [eax + edx - 2]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x10
        __asm _emit 0xFE
        // 0x587CDA33: movzx eax, byte ptr [ecx + 0xd]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x41
        __asm _emit 0x0D
        // 0x587CDA37: mov edx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x04
        // 0x587CDA3A: lea eax, [eax + eax*2]
        __asm _emit 0x8D
        __asm _emit 0x04
        __asm _emit 0x40
        // 0x587CDA3D: add eax, edx
        __asm _emit 0x03
        __asm _emit 0xC2
        // 0x587CDA3F: mov dl, byte ptr [eax - 2]
        __asm _emit 0x8A
        __asm _emit 0x50
        __asm _emit 0xFE
        // 0x587CDA42: cmp dl, 0xa
        __asm _emit 0x80
        __asm _emit 0xFA
        __asm _emit 0x0A
        // 0x587CDA45: jne 0x587cda51
        __asm _emit 0x75
        __asm _emit 0x0A
        // 0x587CDA47: mov byte ptr [eax - 1], bl
        __asm _emit 0x88
        __asm _emit 0x58
        __asm _emit 0xFF
        // 0x587CDA4A: mov dword ptr [ecx + 0x18], 4
        __asm _emit 0xC7
        __asm _emit 0x41
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDA51: pop ebx
        __asm _emit 0x5B
        // 0x587CDA52: mov dword ptr [esp + 4], 1
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CDA5A: jmp 0x587cd650
        __asm _emit 0xE9
        __asm _emit 0xF1
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
    }
}
