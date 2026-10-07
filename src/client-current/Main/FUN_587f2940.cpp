// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587F2940 .. +0x124 bytes.
// Source symbol alias: FUN_587f2940.
extern "C" __declspec(naked) void FUN_587f2940() {
    __asm {
        // 0x587F2940: push ebx
        __asm _emit 0x53
        // 0x587F2941: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x587F2943: push esi
        __asm _emit 0x56
        // 0x587F2944: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x587F2946: mov eax, 8
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F294B: mov word ptr [esi + 0x20d20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x20
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2952: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2957: mov dword ptr [esi + 0x20d24], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F295D: mov dword ptr [esi + 0x1046c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x6C
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2963: mov dword ptr [esi + 0x10470], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x70
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2969: mov byte ptr [esi + 0x10484], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x84
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F296F: mov dword ptr [esi + 0x10490], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2975: mov dword ptr [esi + 0x10494], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F297B: mov dword ptr [esi + 0x1048c], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x8C
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2981: mov byte ptr [esi + 0x10c10], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0x10
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2987: mov dword ptr [esi + 0x20c10], eax
        __asm _emit 0x89
        __asm _emit 0x86
        __asm _emit 0x10
        __asm _emit 0x0C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F298D: mov dword ptr [esi + 0x104bc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F2993: mov dword ptr [esi + 0x104c8], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587F299D: mov dword ptr [esi + 0x104d0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xD0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F29A3: mov dword ptr [esi + 0x388], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F29A9: mov dword ptr [esi + 0x10458], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F29AF: mov dword ptr [esi + 0x394], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x94
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F29B5: mov byte ptr [esi + 0x3a8], bl
        __asm _emit 0x88
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F29BB: mov dword ptr [esi + 0x3a4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F29C1: mov dword ptr [esi + 0x38c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x8C
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F29C7: mov dword ptr [esi + 0xb8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F29CD: mov dword ptr [esi + 0xbc], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F29D3: mov dword ptr [esi + 0x20e24], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x24
        __asm _emit 0x0E
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F29D9: mov dword ptr [esi + 0x104ac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F29DF: mov dword ptr [esi + 0x104b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F29E5: mov dword ptr [esi + 0x104a8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        // 0x587F29EB: mov ecx, dword ptr [esi + 0x20d54]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x54
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F29F1: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0xAA
        __asm _emit 0xA0
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587F29F6: mov ecx, dword ptr [esi + 0x20d58]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x58
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F29FC: call 0x587ccaa0
        __asm _emit 0xE8
        __asm _emit 0x9F
        __asm _emit 0xA0
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587F2A01: mov dword ptr [esi + 0x98], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A07: mov dword ptr [esi + 0x9c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A0D: mov dword ptr [esi + 0xa0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A13: mov dword ptr [esi + 0xa4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A19: mov dword ptr [esi + 0xa8], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xA8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A1F: mov dword ptr [esi + 0xac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A25: mov dword ptr [esi + 0xb0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A2B: mov dword ptr [esi + 0xb4], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587F2A31: mov dword ptr [esi + 0x20d5c], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0x5C
        __asm _emit 0x0D
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2A37: cmp dword ptr [esi + 0x218b0], ebx
        __asm _emit 0x39
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x18
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2A3D: je 0x587f2a4a
        __asm _emit 0x74
        __asm _emit 0x0B
        // 0x587F2A3F: mov ecx, dword ptr [esi + 0x21c48]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x48
        __asm _emit 0x1C
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2A45: call 0x587774a0
        __asm _emit 0xE8
        __asm _emit 0x56
        __asm _emit 0x4A
        __asm _emit 0xF8
        __asm _emit 0xFF
        // 0x587F2A4A: cmp word ptr [esi + 0x105f0], 7
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0xF0
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x07
        // 0x587F2A52: jne 0x587f2a61
        __asm _emit 0x75
        __asm _emit 0x0D
        // 0x587F2A54: mov ecx, dword ptr [esi + 0x21f04]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0x04
        __asm _emit 0x1F
        __asm _emit 0x02
        __asm _emit 0x00
        // 0x587F2A5A: pop esi
        __asm _emit 0x5E
        // 0x587F2A5B: pop ebx
        __asm _emit 0x5B
        // 0x587F2A5C: jmp 0x587cc5b0
        __asm _emit 0xE9
        __asm _emit 0x4F
        __asm _emit 0x9B
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x587F2A61: pop esi
        __asm _emit 0x5E
        // 0x587F2A62: pop ebx
        __asm _emit 0x5B
        // 0x587F2A63: ret
        __asm _emit 0xC3
    }
}
