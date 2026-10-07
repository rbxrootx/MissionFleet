// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 157 bytes in 2 exact ranges.
// Source symbol alias: FUN_589728f0.

// Ghidra body range 0x589728F0..0x58972940; 80 mapped bytes.
extern "C" __declspec(naked) void FUN_589728f0_segment_00() {
    __asm {
        // 0x589728F0: push ebx
        __asm _emit 0x53
        // 0x589728F1: push esi
        __asm _emit 0x56
        // 0x589728F2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x589728F4: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x589728F6: cmp dword ptr [esi + 0x38], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x38
        // 0x589728F9: jne 0x58972997
        __asm _emit 0x0F
        __asm _emit 0x85
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x589728FF: mov eax, dword ptr [esi + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972905: push edi
        __asm _emit 0x57
        // 0x58972906: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58972908: je 0x5897294f
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x5897290A: mov eax, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972910: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x58972912: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58972914: jle 0x58972934
        __asm _emit 0x7E
        __asm _emit 0x1E
        // 0x58972916: mov eax, dword ptr [esi + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897291C: mov ecx, dword ptr [eax + edi*4]
        __asm _emit 0x8B
        __asm _emit 0x0C
        __asm _emit 0xB8
        // 0x5897291F: cmp ecx, ebx
        __asm _emit 0x3B
        __asm _emit 0xCB
        // 0x58972921: je 0x58972929
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x58972923: mov edx, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x11
        // 0x58972925: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x58972927: call dword ptr [edx]
        __asm _emit 0xFF
        __asm _emit 0x12
        // 0x58972929: mov eax, dword ptr [esi + 0x1a0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xA0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897292F: inc edi
        __asm _emit 0x47
        // 0x58972930: cmp edi, eax
        __asm _emit 0x3B
        __asm _emit 0xF8
        // 0x58972932: jl 0x58972916
        __asm _emit 0x7C
        __asm _emit 0xE2
        // 0x58972934: mov eax, dword ptr [esi + 0x1b4]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897293A: push eax
        __asm _emit 0x50
        // 0x5897293B: call 0x5897cc42
        __asm _emit 0xE8
        __asm _emit 0x02
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
    }
}

// Ghidra body range 0x5897294F..0x5897299C; 77 mapped bytes.
extern "C" __declspec(naked) void FUN_589728f0_segment_01() {
    __asm {
        // 0x5897294F: mov eax, dword ptr [esi + 0x1ac]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972955: mov edi, dword ptr [0x5898c2ac]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xAC
        __asm _emit 0xC2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5897295B: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x5897295D: je 0x5897296b
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x5897295F: push eax
        __asm _emit 0x50
        // 0x58972960: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58972962: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58972965: mov dword ptr [esi + 0x1ac], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xAC
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5897296B: mov eax, dword ptr [esi + 0x1b0]
        __asm _emit 0x8B
        __asm _emit 0x86
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972971: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58972973: je 0x58972981
        __asm _emit 0x74
        __asm _emit 0x0C
        // 0x58972975: push eax
        __asm _emit 0x50
        // 0x58972976: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x58972978: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897297B: mov dword ptr [esi + 0x1b0], ebx
        __asm _emit 0x89
        __asm _emit 0x9E
        __asm _emit 0xB0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58972981: mov eax, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x58972984: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58972986: je 0x58972991
        __asm _emit 0x74
        __asm _emit 0x09
        // 0x58972988: push eax
        __asm _emit 0x50
        // 0x58972989: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5897298B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x5897298E: mov dword ptr [esi + 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5E
        __asm _emit 0x04
        // 0x58972991: pop edi
        __asm _emit 0x5F
        // 0x58972992: pop esi
        __asm _emit 0x5E
        // 0x58972993: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58972995: pop ebx
        __asm _emit 0x5B
        // 0x58972996: ret
        __asm _emit 0xC3
        // 0x58972997: pop esi
        __asm _emit 0x5E
        // 0x58972998: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x5897299A: pop ebx
        __asm _emit 0x5B
        // 0x5897299B: ret
        __asm _emit 0xC3
    }
}
