// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 97 bytes in 1 exact ranges.
// Source symbol alias: FUN_587b6f10.

// Ghidra body range 0x587B6F10..0x587B6F71; 97 mapped bytes.
extern "C" __declspec(naked) void FUN_587b6f10_segment_00() {
    __asm {
        // 0x587B6F10: push ebp
        __asm _emit 0x55
        // 0x587B6F11: mov ebp, ecx
        __asm _emit 0x8B
        __asm _emit 0xE9
        // 0x587B6F13: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x24
        // 0x587B6F17: test al, 1
        __asm _emit 0xA8
        __asm _emit 0x01
        // 0x587B6F19: je 0x587b6f6d
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x587B6F1B: push esi
        __asm _emit 0x56
        // 0x587B6F1C: mov esi, dword ptr [ebp + 0x4c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x4C
        // 0x587B6F1F: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B6F21: je 0x587b6f6c
        __asm _emit 0x74
        __asm _emit 0x49
        // 0x587B6F23: push ebx
        __asm _emit 0x53
        // 0x587B6F24: mov ebx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x587B6F28: push edi
        __asm _emit 0x57
        // 0x587B6F29: mov edi, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x587B6F2D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x587B6F30: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7E
        __asm _emit 0x26
        __asm _emit 0x00
        // 0x587B6F35: jge 0x587b6f54
        __asm _emit 0x7D
        __asm _emit 0x1D
        // 0x587B6F37: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587B6F39: mov edx, dword ptr [edx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x14
        // 0x587B6F3C: push edi
        __asm _emit 0x57
        // 0x587B6F3D: lea eax, [ebp + 0x64]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0x64
        // 0x587B6F40: push eax
        __asm _emit 0x50
        // 0x587B6F41: push ebx
        __asm _emit 0x53
        // 0x587B6F42: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6F44: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587B6F46: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x48
        // 0x587B6F49: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B6F4B: jne 0x587b6f30
        __asm _emit 0x75
        __asm _emit 0xE3
        // 0x587B6F4D: pop edi
        __asm _emit 0x5F
        // 0x587B6F4E: pop ebx
        __asm _emit 0x5B
        // 0x587B6F4F: pop esi
        __asm _emit 0x5E
        // 0x587B6F50: pop ebp
        __asm _emit 0x5D
        // 0x587B6F51: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
        // 0x587B6F54: add ebp, 0x64
        __asm _emit 0x83
        __asm _emit 0xC5
        __asm _emit 0x64
        // 0x587B6F57: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x587B6F59: mov edx, dword ptr [eax + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x14
        // 0x587B6F5C: push edi
        __asm _emit 0x57
        // 0x587B6F5D: push ebp
        __asm _emit 0x55
        // 0x587B6F5E: push ebx
        __asm _emit 0x53
        // 0x587B6F5F: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x587B6F61: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x587B6F63: mov esi, dword ptr [esi + 0x48]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x48
        // 0x587B6F66: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x587B6F68: jne 0x587b6f57
        __asm _emit 0x75
        __asm _emit 0xED
        // 0x587B6F6A: pop edi
        __asm _emit 0x5F
        // 0x587B6F6B: pop ebx
        __asm _emit 0x5B
        // 0x587B6F6C: pop esi
        __asm _emit 0x5E
        // 0x587B6F6D: pop ebp
        __asm _emit 0x5D
        // 0x587B6F6E: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
