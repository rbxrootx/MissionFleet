// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58908AF0 .. +0x5D bytes.
// Source symbol alias: FUN_58908af0.
extern "C" __declspec(naked) void FUN_58908af0() {
    __asm {
        // 0x58908AF0: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x58908AF4: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58908AF7: add eax, -0xd
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0xF3
        // 0x58908AFA: cmp eax, 0x1b
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x1B
        // 0x58908AFD: ja 0x58908b47
        __asm _emit 0x77
        __asm _emit 0x48
        // 0x58908AFF: movzx edx, byte ptr [eax + 0x58908b68]
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58908B06: jmp dword ptr [edx*4 + 0x58908b50]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58908B0D: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58908B0F: mov edx, dword ptr [eax + 0x38]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x38
        // 0x58908B12: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58908B14: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58908B17: call 0x58908600
        __asm _emit 0xE8
        __asm _emit 0xE4
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58908B1C: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58908B1E: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58908B21: call 0x58908680
        __asm _emit 0xE8
        __asm _emit 0x5A
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58908B26: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58908B28: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58908B2B: mov eax, dword ptr [ecx + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x78
        // 0x58908B2E: mov dword ptr [ecx + 0x84], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58908B34: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58908B36: je 0x58908b1c
        __asm _emit 0x74
        __asm _emit 0xE4
        // 0x58908B38: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x58908B3A: mov edx, dword ptr [eax + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x3C
        // 0x58908B3D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x58908B3F: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x58908B42: mov eax, dword ptr [ecx + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x7C
        // 0x58908B45: jmp 0x58908b2e
        __asm _emit 0xEB
        __asm _emit 0xE7
        // 0x58908B47: mov eax, dword ptr [ecx + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x58908B4A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
