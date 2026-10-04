// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5878ABF0 .. +0x9E bytes.
// Source symbol alias: FUN_5878abf0.
extern "C" __declspec(naked) void FUN_5878abf0() {
    __asm {
        // 0x5878ABF0: sub esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878ABF6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x5878ABFB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x5878ABFD: mov dword ptr [esp + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AC04: push ebx
        __asm _emit 0x53
        // 0x5878AC05: push ebp
        __asm _emit 0x55
        // 0x5878AC06: push esi
        __asm _emit 0x56
        // 0x5878AC07: push edi
        __asm _emit 0x57
        // 0x5878AC08: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5878AC0A: call dword ptr [0x5898c3e0]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xE0
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878AC10: mov edi, dword ptr [0x5898c3dc]
        __asm _emit 0x8B
        __asm _emit 0x3D
        __asm _emit 0xDC
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878AC16: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5878AC18: push eax
        __asm _emit 0x50
        // 0x5878AC19: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5878AC1B: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5878AC1D: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5878AC1F: je 0x5878ac64
        __asm _emit 0x74
        __asm _emit 0x43
        // 0x5878AC21: mov ebx, dword ptr [0x5898c3d8]
        __asm _emit 0x8B
        __asm _emit 0x1D
        __asm _emit 0xD8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878AC27: mov ebp, dword ptr [0x5898c1a4]
        __asm _emit 0x8B
        __asm _emit 0x2D
        __asm _emit 0xA4
        __asm _emit 0xC1
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878AC2D: lea ecx, [ecx]
        __asm _emit 0x8D
        __asm _emit 0x49
        __asm _emit 0x00
        // 0x5878AC30: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AC35: lea eax, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878AC39: push eax
        __asm _emit 0x50
        // 0x5878AC3A: push esi
        __asm _emit 0x56
        // 0x5878AC3B: call ebx
        __asm _emit 0xFF
        __asm _emit 0xD3
        // 0x5878AC3D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878AC3F: je 0x5878ac59
        __asm _emit 0x74
        __asm _emit 0x18
        // 0x5878AC41: push 0x5898d8b8
        __asm _emit 0x68
        __asm _emit 0xB8
        __asm _emit 0xD8
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878AC46: lea ecx, [esp + 0x14]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x14
        // 0x5878AC4A: push ecx
        __asm _emit 0x51
        // 0x5878AC4B: call ebp
        __asm _emit 0xFF
        __asm _emit 0xD5
        // 0x5878AC4D: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5878AC4F: jne 0x5878ac59
        __asm _emit 0x75
        __asm _emit 0x08
        // 0x5878AC51: cmp esi, dword ptr [0x58a284c4]
        __asm _emit 0x3B
        __asm _emit 0x35
        __asm _emit 0xC4
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5878AC57: jne 0x5878ac68
        __asm _emit 0x75
        __asm _emit 0x0F
        // 0x5878AC59: push 2
        __asm _emit 0x6A
        __asm _emit 0x02
        // 0x5878AC5B: push esi
        __asm _emit 0x56
        // 0x5878AC5C: call edi
        __asm _emit 0xFF
        __asm _emit 0xD7
        // 0x5878AC5E: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5878AC60: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5878AC62: jne 0x5878ac30
        __asm _emit 0x75
        __asm _emit 0xCC
        // 0x5878AC64: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5878AC66: jmp 0x5878ac75
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x5878AC68: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x5878AC6A: call dword ptr [0x5898c3c8]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xC8
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5878AC70: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AC75: mov ecx, dword ptr [esp + 0x110]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AC7C: pop edi
        __asm _emit 0x5F
        // 0x5878AC7D: pop esi
        __asm _emit 0x5E
        // 0x5878AC7E: pop ebp
        __asm _emit 0x5D
        // 0x5878AC7F: pop ebx
        __asm _emit 0x5B
        // 0x5878AC80: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x5878AC82: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x53
        __asm _emit 0x1F
        __asm _emit 0x1F
        __asm _emit 0x00
        // 0x5878AC87: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5878AC8D: ret
        __asm _emit 0xC3
    }
}
