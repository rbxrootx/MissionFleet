// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 100 bytes in 1 exact ranges.
// Source symbol alias: FUN_587a8e00.

// Ghidra body range 0x587A8E00..0x587A8E64; 100 mapped bytes.
extern "C" __declspec(naked) void FUN_587a8e00_segment_00() {
    __asm {
        // 0x587A8E00: mov eax, dword ptr [esp + 4]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x587A8E04: push esi
        __asm _emit 0x56
        // 0x587A8E05: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587A8E07: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x587A8E09: jne 0x587a8e0f
        __asm _emit 0x75
        __asm _emit 0x04
        // 0x587A8E0B: pop esi
        __asm _emit 0x5E
        // 0x587A8E0C: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x587A8E0F: mov ecx, dword ptr [eax + 0x3fc]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xFC
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8E15: mov dword ptr [esi + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A8E18: mov edx, dword ptr [eax + 0x400]
        __asm _emit 0x8B
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8E1E: mov dword ptr [esi + 8], edx
        __asm _emit 0x89
        __asm _emit 0x56
        __asm _emit 0x08
        // 0x587A8E21: mov eax, dword ptr [eax + 0x404]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x04
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8E27: mov dword ptr [esi + 0xc], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x587A8E2A: mov dword ptr [esi + 0x40], 1
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8E31: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x587A8E33: jne 0x587a8e49
        __asm _emit 0x75
        __asm _emit 0x14
        // 0x587A8E35: push 0x23
        __asm _emit 0x6A
        __asm _emit 0x23
        // 0x587A8E37: push 0x589999a4
        __asm _emit 0x68
        __asm _emit 0xA4
        __asm _emit 0x99
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A8E3C: push 0x58999af8
        __asm _emit 0x68
        __asm _emit 0xF8
        __asm _emit 0x9A
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x587A8E41: call 0x5897cece
        __asm _emit 0xE8
        __asm _emit 0x88
        __asm _emit 0x40
        __asm _emit 0x1D
        __asm _emit 0x00
        // 0x587A8E46: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587A8E49: mov ecx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x04
        // 0x587A8E4C: push ecx
        __asm _emit 0x51
        // 0x587A8E4D: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A8E4F: call 0x587a85e0
        __asm _emit 0xE8
        __asm _emit 0x8C
        __asm _emit 0xF7
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8E54: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587A8E56: call 0x587a8c50
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xFD
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587A8E5B: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587A8E60: pop esi
        __asm _emit 0x5E
        // 0x587A8E61: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
