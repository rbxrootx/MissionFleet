// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5886B9B0 .. +0xA9 bytes.
// Source symbol alias: FUN_5886b9b0.
extern "C" __declspec(naked) void FUN_5886b9b0() {
    __asm {
        // 0x5886B9B0: mov edx, dword ptr [ecx + 0x88]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B9B6: mov eax, dword ptr [ecx + 0x94]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B9BC: cmp edx, eax
        __asm _emit 0x3B
        __asm _emit 0xD0
        // 0x5886B9BE: jne 0x5886b9ed
        __asm _emit 0x75
        __asm _emit 0x2D
        // 0x5886B9C0: mov edx, dword ptr [ecx + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B9C6: mov dword ptr [ecx + 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B9CC: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B9D1: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5886B9D5: mov eax, dword ptr [ecx + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B9DB: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5886B9E0: mov ecx, dword ptr [ecx + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B9E6: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5886B9E8: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5886B9EC: ret
        __asm _emit 0xC3
        // 0x5886B9ED: cmp edx, dword ptr [ecx + 0x218]
        __asm _emit 0x3B
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B9F3: jne 0x5886ba32
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x5886B9F5: mov edx, dword ptr [ecx + 0x84]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886B9FB: test dword ptr [edx + 0xb4], 0x10000000
        __asm _emit 0xF7
        __asm _emit 0x82
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x10
        // 0x5886BA05: je 0x5886ba32
        __asm _emit 0x74
        __asm _emit 0x2B
        // 0x5886BA07: mov edx, dword ptr [ecx + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886BA0D: mov dword ptr [ecx + 0x88], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886BA13: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886BA18: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5886BA1C: mov eax, dword ptr [ecx + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886BA22: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5886BA26: mov ecx, dword ptr [ecx + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886BA2C: or word ptr [ecx + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5886BA31: ret
        __asm _emit 0xC3
        // 0x5886BA32: mov dword ptr [ecx + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886BA38: or word ptr [eax + 0x24], 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x0F
        // 0x5886BA3D: mov eax, dword ptr [ecx + 0x218]
        __asm _emit 0x8B
        __asm _emit 0x81
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886BA43: mov edx, 0xfff0
        __asm _emit 0xBA
        __asm _emit 0xF0
        __asm _emit 0xFF
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886BA48: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        // 0x5886BA4C: mov ecx, dword ptr [ecx + 0x2a4]
        __asm _emit 0x8B
        __asm _emit 0x89
        __asm _emit 0xA4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5886BA52: mov eax, edx
        __asm _emit 0x8B
        __asm _emit 0xC2
        // 0x5886BA54: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        // 0x5886BA58: ret
        __asm _emit 0xC3
    }
}
