// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x58879CC0 .. +0x9C bytes.
// Source symbol alias: FUN_58879cc0.
extern "C" __declspec(naked) void FUN_58879cc0() {
    __asm {
        // 0x58879CC0: push ebx
        __asm _emit 0x53
        // 0x58879CC1: push ebp
        __asm _emit 0x55
        // 0x58879CC2: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x58879CC4: push 0x48
        __asm _emit 0x6A
        __asm _emit 0x48
        // 0x58879CC6: xor ebp, ebp
        __asm _emit 0x33
        __asm _emit 0xED
        // 0x58879CC8: lea eax, [ebx + 0x88]
        __asm _emit 0x8D
        __asm _emit 0x83
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879CCE: push ebp
        __asm _emit 0x55
        // 0x58879CCF: push eax
        __asm _emit 0x50
        // 0x58879CD0: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0x2F
        __asm _emit 0x10
        __asm _emit 0x00
        // 0x58879CD5: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x58879CD8: cmp dword ptr [ebx + 0x84], ebp
        __asm _emit 0x39
        __asm _emit 0xAB
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879CDE: mov dword ptr [ebx + 0xd0], ebp
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0xD0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879CE4: mov dword ptr [ebx + 0xd4], ebp
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879CEA: mov dword ptr [ebx + 0xd8], ebp
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879CF0: mov dword ptr [ebx + 0xdc], ebp
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879CF6: mov dword ptr [ebx + 0xe0], ebp
        __asm _emit 0x89
        __asm _emit 0xAB
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879CFC: jle 0x58879d59
        __asm _emit 0x7E
        __asm _emit 0x5B
        // 0x58879CFE: push esi
        __asm _emit 0x56
        // 0x58879CFF: push edi
        __asm _emit 0x57
        // 0x58879D00: lea edi, [ebx + 0xe4]
        __asm _emit 0x8D
        __asm _emit 0xBB
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879D06: lea esi, [ebx + 0x108]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879D0C: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        // 0x58879D10: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xFC
        // 0x58879D13: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58879D15: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x46
        __asm _emit 0xD6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879D1A: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58879D1C: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58879D1E: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0xD6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879D23: mov ecx, dword ptr [esi - 4]
        __asm _emit 0x8B
        __asm _emit 0x4E
        __asm _emit 0xFC
        // 0x58879D26: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x58879D28: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xF3
        __asm _emit 0x8F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879D2D: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x58879D2F: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x58879D31: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xEA
        __asm _emit 0x8F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879D36: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58879D38: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x58879D3A: call 0x58907360
        __asm _emit 0xE8
        __asm _emit 0x21
        __asm _emit 0xD6
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879D3F: mov ecx, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x0F
        // 0x58879D41: push -0x64
        __asm _emit 0x6A
        __asm _emit 0x9C
        // 0x58879D43: call 0x58902d20
        __asm _emit 0xE8
        __asm _emit 0xD8
        __asm _emit 0x8F
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x58879D48: inc ebp
        __asm _emit 0x45
        // 0x58879D49: add edi, 4
        __asm _emit 0x83
        __asm _emit 0xC7
        __asm _emit 0x04
        // 0x58879D4C: add esi, 8
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x08
        // 0x58879D4F: cmp ebp, dword ptr [ebx + 0x84]
        __asm _emit 0x3B
        __asm _emit 0xAB
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58879D55: jl 0x58879d10
        __asm _emit 0x7C
        __asm _emit 0xB9
        // 0x58879D57: pop edi
        __asm _emit 0x5F
        // 0x58879D58: pop esi
        __asm _emit 0x5E
        // 0x58879D59: pop ebp
        __asm _emit 0x5D
        // 0x58879D5A: pop ebx
        __asm _emit 0x5B
        // 0x58879D5B: ret
        __asm _emit 0xC3
    }
}
