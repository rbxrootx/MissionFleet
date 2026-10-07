// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58743AF0 .. +0x8A bytes.
// Source symbol alias: FUN_58743af0.
extern "C" __declspec(naked) void FUN_58743af0() {
    __asm {
        // 0x58743AF0: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58743AF3: push ebp
        __asm _emit 0x55
        // 0x58743AF4: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58743AF8: push esi
        __asm _emit 0x56
        // 0x58743AF9: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58743AFB: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58743AFE: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58743B01: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58743B05: push edi
        __asm _emit 0x57
        // 0x58743B06: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58743B08: jne 0x58743b24
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58743B0A: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x58743B0D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58743B10: cmp dword ptr [eax + 0xc], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58743B13: jge 0x58743b1a
        __asm _emit 0x7D
        __asm _emit 0x05
        // 0x58743B15: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58743B18: jmp 0x58743b1e
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x58743B1A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58743B1C: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x58743B1E: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58743B22: je 0x58743b10
        __asm _emit 0x74
        __asm _emit 0xEC
        // 0x58743B24: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58743B26: push ebx
        __asm _emit 0x53
        // 0x58743B27: mov ebx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x58743B2A: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58743B2E: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58743B32: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58743B34: je 0x58743b3a
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58743B36: cmp eax, eax
        __asm _emit 0x3B
        __asm _emit 0xC0
        // 0x58743B38: je 0x58743b3f
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x58743B3A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0x33
        __asm _emit 0x91
        __asm _emit 0x23
        __asm _emit 0x00
        // 0x58743B3F: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x58743B41: pop ebx
        __asm _emit 0x5B
        // 0x58743B42: je 0x58743b52
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x58743B44: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x58743B47: cmp eax, dword ptr [edi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x58743B4A: jl 0x58743b52
        __asm _emit 0x7C
        __asm _emit 0x06
        // 0x58743B4C: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x58743B50: jmp 0x58743b63
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x58743B52: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x58743B55: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x58743B57: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x58743B5B: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58743B5F: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x58743B63: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58743B65: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x58743B69: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x58743B6C: pop edi
        __asm _emit 0x5F
        // 0x58743B6D: pop esi
        __asm _emit 0x5E
        // 0x58743B6E: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x58743B70: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x58743B73: pop ebp
        __asm _emit 0x5D
        // 0x58743B74: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x58743B77: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
