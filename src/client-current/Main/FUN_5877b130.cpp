// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5877B130 .. +0x93 bytes.
// Source symbol alias: FUN_5877b130.
extern "C" __declspec(naked) void FUN_5877b130() {
    __asm {
        // 0x5877B130: push esi
        __asm _emit 0x56
        // 0x5877B131: push edi
        __asm _emit 0x57
        // 0x5877B132: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877B134: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5877B136: push 0x14
        __asm _emit 0x6A
        __asm _emit 0x14
        // 0x5877B138: cmp dword ptr [esi + 8], edi
        __asm _emit 0x39
        __asm _emit 0x7E
        __asm _emit 0x08
        // 0x5877B13B: jne 0x5877b17d
        __asm _emit 0x75
        __asm _emit 0x40
        // 0x5877B13D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x0C
        __asm _emit 0x1B
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877B142: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877B145: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5877B147: je 0x5877b16d
        __asm _emit 0x74
        __asm _emit 0x24
        // 0x5877B149: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877B14D: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5877B150: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5877B153: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5877B156: mov dword ptr [eax], 0x5899688c
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x8C
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877B15C: mov dword ptr [eax + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x5877B15F: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5877B162: pop edi
        __asm _emit 0x5F
        // 0x5877B163: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5877B166: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877B169: pop esi
        __asm _emit 0x5E
        // 0x5877B16A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877B16D: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877B16F: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5877B172: pop edi
        __asm _emit 0x5F
        // 0x5877B173: mov dword ptr [esi + 8], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5877B176: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x5877B179: pop esi
        __asm _emit 0x5E
        // 0x5877B17A: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5877B17D: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0xCC
        __asm _emit 0x1A
        __asm _emit 0x20
        __asm _emit 0x00
        // 0x5877B182: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5877B185: cmp eax, edi
        __asm _emit 0x3B
        __asm _emit 0xC7
        // 0x5877B187: je 0x5877b1a1
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5877B189: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5877B18D: mov dword ptr [eax], 0x5899688c
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x8C
        __asm _emit 0x68
        __asm _emit 0x99
        __asm _emit 0x58
        // 0x5877B193: mov dword ptr [eax + 0x10], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x10
        // 0x5877B196: mov dword ptr [eax + 0xc], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x0C
        // 0x5877B199: mov dword ptr [eax + 8], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x08
        // 0x5877B19C: mov dword ptr [eax + 4], edi
        __asm _emit 0x89
        __asm _emit 0x78
        __asm _emit 0x04
        // 0x5877B19F: jmp 0x5877b1a3
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5877B1A1: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5877B1A3: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5877B1A6: mov dword ptr [ecx + 8], eax
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x08
        // 0x5877B1A9: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5877B1AC: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5877B1AF: mov dword ptr [edx + 4], eax
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x04
        // 0x5877B1B2: mov eax, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x08
        // 0x5877B1B5: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x5877B1B8: inc dword ptr [esi + 0xc]
        __asm _emit 0xFF
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x5877B1BB: pop edi
        __asm _emit 0x5F
        // 0x5877B1BC: mov dword ptr [esi + 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5877B1BF: pop esi
        __asm _emit 0x5E
        // 0x5877B1C0: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
