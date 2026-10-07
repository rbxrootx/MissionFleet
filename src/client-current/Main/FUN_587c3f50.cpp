// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 59 bytes in 1 exact ranges.
// Source symbol alias: FUN_587c3f50.

// Ghidra body range 0x587C3F50..0x587C3F8B; 59 mapped bytes.
extern "C" __declspec(naked) void FUN_587c3f50_segment_00() {
    __asm {
        // 0x587C3F50: mov eax, dword ptr [ecx + 0x1db8]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0xB8
        __asm _emit 0x1D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C3F56: push esi
        __asm _emit 0x56
        // 0x587C3F57: mov esi, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x70
        __asm _emit 0x04
        // 0x587C3F5A: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587C3F5C: je 0x587c3f87
        __asm _emit 0x74
        __asm _emit 0x29
        // 0x587C3F5E: push edi
        __asm _emit 0x57
        // 0x587C3F5F: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587C3F63: mov ecx, dword ptr [esi + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x587C3F66: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x587C3F68: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587C3F6A: cmp dword ptr [ecx + 0x84], edi
        __asm _emit 0x39
        __asm _emit 0xB9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C3F70: push edi
        __asm _emit 0x57
        // 0x587C3F71: setle dl
        __asm _emit 0x0F
        __asm _emit 0x9E
        __asm _emit 0xC2
        // 0x587C3F74: mov dword ptr [ecx + 0xac], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587C3F7A: mov edx, dword ptr [eax + 0x2c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x2C
        // 0x587C3F7D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587C3F7F: mov esi, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x08
        // 0x587C3F82: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587C3F84: jne 0x587c3f63
        __asm _emit 0x75
        __asm _emit 0xDD
        // 0x587C3F86: pop edi
        __asm _emit 0x5F
        // 0x587C3F87: pop esi
        __asm _emit 0x5E
        // 0x587C3F88: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
