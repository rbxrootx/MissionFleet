// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588490F0 .. +0x11B bytes.
// Source symbol alias: FUN_588490f0.
extern "C" __declspec(naked) void FUN_588490f0() {
    __asm {
        // 0x588490F0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588490F2: push 0x5898498b
        __asm _emit 0x68
        __asm _emit 0x8B
        __asm _emit 0x49
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588490F7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588490FD: push eax
        __asm _emit 0x50
        // 0x588490FE: sub esp, 0x68
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x68
        // 0x58849101: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58849106: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58849108: mov dword ptr [esp + 0x64], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x5884910C: push ebx
        __asm _emit 0x53
        // 0x5884910D: push ebp
        __asm _emit 0x55
        // 0x5884910E: push esi
        __asm _emit 0x56
        // 0x5884910F: push edi
        __asm _emit 0x57
        // 0x58849110: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58849115: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x58849117: push eax
        __asm _emit 0x50
        // 0x58849118: lea eax, [esp + 0x7c]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x5884911C: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849122: mov ebp, dword ptr [esp + 0x8c]
        __asm _emit 0x8B
        __asm _emit 0xAC
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849129: push 0xb4
        __asm _emit 0x68
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884912E: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58849130: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x19
        __asm _emit 0x3B
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849135: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x58849138: mov dword ptr [esp + 0x14], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5884913C: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x5884913E: mov dword ptr [esp + 0x84], ebx
        __asm _emit 0x89
        __asm _emit 0x9C
        __asm _emit 0x24
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58849145: cmp eax, ebx
        __asm _emit 0x3B
        __asm _emit 0xC3
        // 0x58849147: je 0x58849168
        __asm _emit 0x74
        __asm _emit 0x1F
        // 0x58849149: mov ecx, dword ptr [esi + 8]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x08
        // 0x5884914C: mov edx, dword ptr [esi + 4]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x04
        // 0x5884914F: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x58849151: push ebx
        __asm _emit 0x53
        // 0x58849152: push ebx
        __asm _emit 0x53
        // 0x58849153: push ecx
        __asm _emit 0x51
        // 0x58849154: mov ecx, dword ptr [esi + 0xac]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xAC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5884915A: push edx
        __asm _emit 0x52
        // 0x5884915B: push ecx
        __asm _emit 0x51
        // 0x5884915C: push ebx
        __asm _emit 0x53
        // 0x5884915D: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x5884915F: call 0x5875a7e0
        __asm _emit 0xE8
        __asm _emit 0x7C
        __asm _emit 0x16
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x58849164: mov edi, eax
        __asm _emit 0x8B
        __asm _emit 0xF8
        // 0x58849166: jmp 0x5884916a
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58849168: xor edi, edi
        __asm _emit 0x33
        __asm _emit 0xFF
        // 0x5884916A: push ebp
        __asm _emit 0x55
        // 0x5884916B: lea edx, [esp + 0x1d]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x1D
        // 0x5884916F: push edx
        __asm _emit 0x52
        // 0x58849170: mov dword ptr [esp + 0x8c], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5884917B: mov byte ptr [esp + 0x20], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x20
        // 0x5884917F: call dword ptr [0x5898c198]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58849185: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x58849187: lea edx, [esp + 0x18]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5884918B: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5884918D: mov word ptr [esp + 0x5c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x58849192: push edx
        __asm _emit 0x52
        // 0x58849193: mov ecx, edi
        __asm _emit 0x8B
        __asm _emit 0xCF
        // 0x58849195: mov word ptr [esp + 0x36], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x36
        // 0x5884919A: mov byte ptr [esp + 0x38], bl
        __asm _emit 0x88
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x38
        // 0x5884919E: mov dword ptr [esp + 0x50], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x50
        // 0x588491A2: mov dword ptr [esp + 0x58], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x58
        // 0x588491A6: mov dword ptr [esp + 0x5c], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x5C
        // 0x588491AA: mov dword ptr [esp + 0x64], ebx
        __asm _emit 0x89
        __asm _emit 0x5C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x588491AE: call 0x5875a4b0
        __asm _emit 0xE8
        __asm _emit 0xFD
        __asm _emit 0x12
        __asm _emit 0xF1
        __asm _emit 0xFF
        // 0x588491B3: mov eax, 0x7fff
        __asm _emit 0xB8
        __asm _emit 0xFF
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588491B8: and word ptr [edi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x47
        __asm _emit 0x24
        // 0x588491BC: cmp dword ptr [esi + 0x6c], ebx
        __asm _emit 0x39
        __asm _emit 0x5E
        __asm _emit 0x6C
        // 0x588491BF: jne 0x588491cc
        __asm _emit 0x75
        __asm _emit 0x0B
        // 0x588491C1: mov dword ptr [esi + 0x6c], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x6C
        // 0x588491C4: mov dword ptr [esi + 0x100], edi
        __asm _emit 0x89
        __asm _emit 0xBE
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588491CA: jmp 0x588491d8
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x588491CC: mov ecx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0x70
        // 0x588491CF: mov dword ptr [ecx + 0x54], edi
        __asm _emit 0x89
        __asm _emit 0x79
        __asm _emit 0x54
        // 0x588491D2: mov edx, dword ptr [esi + 0x70]
        __asm _emit 0x8B
        __asm _emit 0x56
        __asm _emit 0x70
        // 0x588491D5: mov dword ptr [edi + 0x50], edx
        __asm _emit 0x89
        __asm _emit 0x57
        __asm _emit 0x50
        // 0x588491D8: inc word ptr [esi + 0xf2]
        __asm _emit 0x66
        __asm _emit 0xFF
        __asm _emit 0x86
        __asm _emit 0xF2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588491DF: push ebx
        __asm _emit 0x53
        // 0x588491E0: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588491E2: mov dword ptr [esi + 0x70], edi
        __asm _emit 0x89
        __asm _emit 0x7E
        __asm _emit 0x70
        // 0x588491E5: call 0x588486e0
        __asm _emit 0xE8
        __asm _emit 0xF6
        __asm _emit 0xF4
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588491EA: mov ecx, dword ptr [esp + 0x7c]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x7C
        // 0x588491EE: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588491F5: pop ecx
        __asm _emit 0x59
        // 0x588491F6: pop edi
        __asm _emit 0x5F
        // 0x588491F7: pop esi
        __asm _emit 0x5E
        // 0x588491F8: pop ebp
        __asm _emit 0x5D
        // 0x588491F9: pop ebx
        __asm _emit 0x5B
        // 0x588491FA: mov ecx, dword ptr [esp + 0x64]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x64
        // 0x588491FE: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x58849200: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0xD5
        __asm _emit 0x39
        __asm _emit 0x13
        __asm _emit 0x00
        // 0x58849205: add esp, 0x74
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x74
        // 0x58849208: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
