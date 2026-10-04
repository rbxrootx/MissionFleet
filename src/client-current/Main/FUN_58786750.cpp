// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58786750 .. +0x8A bytes.
// Source symbol alias: FUN_58786750.
extern "C" __declspec(naked) void FUN_58786750() {
    __asm {
        // 0x58786750: sub esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x10
        // 0x58786753: push ebp
        __asm _emit 0x55
        // 0x58786754: mov ebp, dword ptr [esp + 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x6C
        __asm _emit 0x24
        __asm _emit 0x1C
        // 0x58786758: push esi
        __asm _emit 0x56
        // 0x58786759: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5878675B: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x5878675E: mov eax, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x41
        __asm _emit 0x04
        // 0x58786761: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58786765: push edi
        __asm _emit 0x57
        // 0x58786766: mov edi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF9
        // 0x58786768: jne 0x58786784
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x5878676A: mov ecx, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0x00
        // 0x5878676D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x58786770: cmp dword ptr [eax + 0xc], ecx
        __asm _emit 0x39
        __asm _emit 0x48
        __asm _emit 0x0C
        // 0x58786773: jae 0x5878677a
        __asm _emit 0x73
        __asm _emit 0x05
        // 0x58786775: mov eax, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x08
        // 0x58786778: jmp 0x5878677e
        __asm _emit 0xEB
        __asm _emit 0x04
        // 0x5878677A: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x5878677C: mov eax, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x00
        // 0x5878677E: cmp byte ptr [eax + 0x15], 0
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0x15
        __asm _emit 0x00
        // 0x58786782: je 0x58786770
        __asm _emit 0x74
        __asm _emit 0xEC
        // 0x58786784: mov eax, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x06
        // 0x58786786: push ebx
        __asm _emit 0x53
        // 0x58786787: mov ebx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x5E
        __asm _emit 0x18
        // 0x5878678A: mov dword ptr [esp + 0x14], edi
        __asm _emit 0x89
        __asm _emit 0x7C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878678E: mov dword ptr [esp + 0x10], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x58786792: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x58786794: je 0x5878679a
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58786796: cmp eax, eax
        __asm _emit 0x3B
        __asm _emit 0xC0
        // 0x58786798: je 0x5878679f
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x5878679A: call 0x5897cc72
        __asm _emit 0xE8
        __asm _emit 0xD3
        __asm _emit 0x64
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878679F: cmp edi, ebx
        __asm _emit 0x3B
        __asm _emit 0xFB
        // 0x587867A1: pop ebx
        __asm _emit 0x5B
        // 0x587867A2: je 0x587867b2
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x587867A4: mov eax, dword ptr [ebp]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x00
        // 0x587867A7: cmp eax, dword ptr [edi + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x47
        __asm _emit 0x0C
        // 0x587867AA: jb 0x587867b2
        __asm _emit 0x72
        __asm _emit 0x06
        // 0x587867AC: lea ecx, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x587867B0: jmp 0x587867c3
        __asm _emit 0xEB
        __asm _emit 0x11
        // 0x587867B2: mov ecx, dword ptr [esi + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x18
        // 0x587867B5: mov edx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x16
        // 0x587867B7: mov dword ptr [esp + 0x18], ecx
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x587867BB: mov dword ptr [esp + 0x14], edx
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587867BF: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x587867C3: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x587867C5: mov eax, dword ptr [esp + 0x20]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x587867C9: mov ecx, dword ptr [ecx + 4]
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x04
        // 0x587867CC: pop edi
        __asm _emit 0x5F
        // 0x587867CD: pop esi
        __asm _emit 0x5E
        // 0x587867CE: mov dword ptr [eax], edx
        __asm _emit 0x89
        __asm _emit 0x10
        // 0x587867D0: mov dword ptr [eax + 4], ecx
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x04
        // 0x587867D3: pop ebp
        __asm _emit 0x5D
        // 0x587867D4: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x587867D7: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
