// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 83 bytes in 1 exact ranges.
// Source symbol alias: FUN_58734850.

// Ghidra body range 0x58734850..0x587348A3; 83 mapped bytes.
extern "C" __declspec(naked) void FUN_58734850_segment_00() {
    __asm {
        // 0x58734850: push esi
        __asm _emit 0x56
        // 0x58734851: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58734853: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58734857: mov ecx, 0x1f00
        __asm _emit 0xB9
        __asm _emit 0x00
        __asm _emit 0x1F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5873485C: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5873485F: mov edx, 0x500
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734864: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC2
        // 0x58734867: jne 0x587348a1
        __asm _emit 0x75
        __asm _emit 0x38
        // 0x58734869: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5873486B: call 0x58734770
        __asm _emit 0xE8
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58734870: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58734874: mov ecx, 0xe1ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE1
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734879: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5873487C: mov edx, 0x100
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58734881: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x58734884: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x58734888: or word ptr [esi + 0x24], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4E
        __asm _emit 0x24
        __asm _emit 0x07
        // 0x5873488D: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xA1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x58734892: mov ecx, dword ptr [eax + 0x30]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x30
        // 0x58734895: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58734897: mov eax, dword ptr [edx + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x18
        // 0x5873489A: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5873489C: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x5873489E: push esi
        __asm _emit 0x56
        // 0x5873489F: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x587348A1: pop esi
        __asm _emit 0x5E
        // 0x587348A2: ret
        __asm _emit 0xC3
    }
}
