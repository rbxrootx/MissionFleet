// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 69 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f6e20.

// Ghidra body range 0x588F6E20..0x588F6E65; 69 mapped bytes.
extern "C" __declspec(naked) void FUN_588f6e20_segment_00() {
    __asm {
        // 0x588F6E20: push esi
        __asm _emit 0x56
        // 0x588F6E21: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F6E23: mov ecx, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x78
        // 0x588F6E26: mov dword ptr [esi + 0x68], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6E2D: mov dword ptr [esi + 0x6c], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x6C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6E34: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F6E36: je 0x588f6e4b
        __asm _emit 0x74
        __asm _emit 0x13
        // 0x588F6E38: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588F6E3A: mov edx, dword ptr [eax + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x1C
        // 0x588F6E3D: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588F6E3F: mov eax, dword ptr [esi + 0x78]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x78
        // 0x588F6E42: mov ecx, 0xfff0
        __asm _emit 0xB9
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6E47: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588F6E4B: mov ecx, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x7C
        // 0x588F6E4E: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588F6E50: je 0x588f6e63
        __asm _emit 0x74
        __asm _emit 0x11
        // 0x588F6E52: call 0x588f6550
        __asm _emit 0xE8
        __asm _emit 0xF9
        __asm _emit 0xF6
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588F6E57: mov esi, dword ptr [esi + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x76
        __asm _emit 0x7C
        // 0x588F6E5A: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F6E5F: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        // 0x588F6E63: pop esi
        __asm _emit 0x5E
        // 0x588F6E64: ret
        __asm _emit 0xC3
    }
}
