// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 125 bytes in 2 exact ranges.
// Source symbol alias: FUN_58899bb0.

// Ghidra body range 0x58899BB0..0x58899C19; 105 mapped bytes.
extern "C" __declspec(naked) void FUN_58899bb0_segment_00() {
    __asm {
        // 0x58899BB0: push ebp
        __asm _emit 0x55
        // 0x58899BB1: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58899BB3: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x58899BB5: push 0x589873a1
        __asm _emit 0x68
        __asm _emit 0xA1
        __asm _emit 0x73
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x58899BBA: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899BC0: push eax
        __asm _emit 0x50
        // 0x58899BC1: sub esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xEC
        __asm _emit 0x0C
        // 0x58899BC4: push ebx
        __asm _emit 0x53
        // 0x58899BC5: push esi
        __asm _emit 0x56
        // 0x58899BC6: push edi
        __asm _emit 0x57
        // 0x58899BC7: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x58899BCC: xor eax, ebp
        __asm _emit 0x33
        __asm _emit 0xC5
        // 0x58899BCE: push eax
        __asm _emit 0x50
        // 0x58899BCF: lea eax, [ebp - 0xc]
        __asm _emit 0x8D
        __asm _emit 0x45
        __asm _emit 0xF4
        // 0x58899BD2: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899BD8: mov dword ptr [ebp - 0x10], esp
        __asm _emit 0x89
        __asm _emit 0x65
        __asm _emit 0xF0
        // 0x58899BDB: mov esi, dword ptr [ebp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58899BDE: mov edi, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x7D
        __asm _emit 0x08
        // 0x58899BE1: xor ebx, ebx
        __asm _emit 0x33
        __asm _emit 0xDB
        // 0x58899BE3: mov dword ptr [ebp - 0x14], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xEC
        // 0x58899BE6: mov dword ptr [ebp - 4], ebx
        __asm _emit 0x89
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x58899BE9: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899BF0: cmp edi, dword ptr [ebp + 0xc]
        __asm _emit 0x3B
        __asm _emit 0x7D
        __asm _emit 0x0C
        // 0x58899BF3: je 0x58899c3a
        __asm _emit 0x74
        __asm _emit 0x45
        // 0x58899BF5: mov dword ptr [ebp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x58899BF8: mov dword ptr [ebp - 0x18], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE8
        // 0x58899BFB: mov byte ptr [ebp - 4], 1
        __asm _emit 0xC6
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0x01
        // 0x58899BFF: cmp esi, ebx
        __asm _emit 0x3B
        __asm _emit 0xF3
        // 0x58899C01: je 0x58899c0b
        __asm _emit 0x74
        __asm _emit 0x08
        // 0x58899C03: push edi
        __asm _emit 0x57
        // 0x58899C04: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x58899C06: call 0x58899700
        __asm _emit 0xE8
        __asm _emit 0xF5
        __asm _emit 0xFA
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58899C0B: add esi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x18
        // 0x58899C0E: mov byte ptr [ebp - 4], bl
        __asm _emit 0x88
        __asm _emit 0x5D
        __asm _emit 0xFC
        // 0x58899C11: mov dword ptr [ebp + 0x10], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0x10
        // 0x58899C14: add edi, 0x18
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x18
        // 0x58899C17: jmp 0x58899bf0
        __asm _emit 0xEB
        __asm _emit 0xD7
    }
}

// Ghidra body range 0x58899C3A..0x58899C4E; 20 mapped bytes.
extern "C" __declspec(naked) void FUN_58899bb0_segment_01() {
    __asm {
        // 0x58899C3A: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x58899C3C: mov ecx, dword ptr [ebp - 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4D
        __asm _emit 0xF4
        // 0x58899C3F: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58899C46: pop ecx
        __asm _emit 0x59
        // 0x58899C47: pop edi
        __asm _emit 0x5F
        // 0x58899C48: pop esi
        __asm _emit 0x5E
        // 0x58899C49: pop ebx
        __asm _emit 0x5B
        // 0x58899C4A: mov esp, ebp
        __asm _emit 0x8B
        __asm _emit 0xE5
        // 0x58899C4C: pop ebp
        __asm _emit 0x5D
        // 0x58899C4D: ret
        __asm _emit 0xC3
    }
}
