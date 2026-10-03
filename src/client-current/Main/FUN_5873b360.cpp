// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5873B360 .. +0x45 bytes.
extern "C" __declspec(naked) void FUN_5873b360() {
    __asm {
        // 0x5873B360: push esi
        __asm _emit 0x56
        // 0x5873B361: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5873B363: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5873B367: push edi
        __asm _emit 0x57
        // 0x5873B368: test al, 2
        __asm _emit 0xA8
        __asm _emit 0x02
        // 0x5873B36A: je 0x5873b39d
        __asm _emit 0x74
        __asm _emit 0x31
        // 0x5873B36C: mov eax, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x3C
        // 0x5873B36F: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873B371: je 0x5873b39d
        __asm _emit 0x74
        __asm _emit 0x2A
        // 0x5873B373: mov eax, dword ptr [eax + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x34
        // 0x5873B376: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873B378: je 0x5873b396
        __asm _emit 0x74
        __asm _emit 0x1C
        // 0x5873B37A: mov edi, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5873B37E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x5873B380: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x5873B382: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5873B384: mov eax, dword ptr [edx + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x10
        // 0x5873B387: push edi
        __asm _emit 0x57
        // 0x5873B388: call eax
        __asm _emit 0xFF
        __asm _emit 0xD0
        // 0x5873B38A: mov ecx, dword ptr [esi + 0x3c]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x3C
        // 0x5873B38D: cmp eax, dword ptr [ecx + 0x34]
        __asm _emit 0x3B
        __asm _emit 0x41
        __asm _emit 0x34
        // 0x5873B390: je 0x5873b39d
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x5873B392: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5873B394: jne 0x5873b380
        __asm _emit 0x75
        __asm _emit 0xEA
        // 0x5873B396: pop edi
        __asm _emit 0x5F
        // 0x5873B397: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5873B399: pop esi
        __asm _emit 0x5E
        // 0x5873B39A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5873B39D: mov eax, dword ptr [esi + 0x34]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x34
        // 0x5873B3A0: pop edi
        __asm _emit 0x5F
        // 0x5873B3A1: pop esi
        __asm _emit 0x5E
        // 0x5873B3A2: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
