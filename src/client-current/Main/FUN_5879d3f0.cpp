// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5879D3F0 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_5879d3f0() {
    __asm {
        // 0x5879D3F0: push ebx
        __asm _emit 0x53
        // 0x5879D3F1: mov ebx, ecx
        __asm _emit 0x8B
        __asm _emit 0xD9
        // 0x5879D3F3: cmp dword ptr [ebx + 0x300], 0
        __asm _emit 0x83
        __asm _emit 0xBB
        __asm _emit 0x00
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D3FA: je 0x5879d447
        __asm _emit 0x74
        __asm _emit 0x4B
        // 0x5879D3FC: mov ecx, dword ptr [ebx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D402: call 0x589081c0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0xAD
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D407: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x5879D409: je 0x5879d447
        __asm _emit 0x74
        __asm _emit 0x3C
        // 0x5879D40B: mov ecx, dword ptr [ebx + 0xb0]
        __asm _emit 0x8B
        __asm _emit 0x8B
        __asm _emit 0xB0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D411: push esi
        __asm _emit 0x56
        // 0x5879D412: push edi
        __asm _emit 0x57
        // 0x5879D413: call 0x58908600
        __asm _emit 0xE8
        __asm _emit 0xE8
        __asm _emit 0xB1
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D418: lea esi, [ebx + 0xb4]
        __asm _emit 0x8D
        __asm _emit 0xB3
        __asm _emit 0xB4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D41E: mov edi, 6
        __asm _emit 0xBF
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5879D423: mov ecx, dword ptr [esi]
        __asm _emit 0x8B
        __asm _emit 0x0E
        // 0x5879D425: call 0x58908600
        __asm _emit 0xE8
        __asm _emit 0xD6
        __asm _emit 0xB1
        __asm _emit 0x16
        __asm _emit 0x00
        // 0x5879D42A: add esi, 4
        __asm _emit 0x83
        __asm _emit 0xC6
        __asm _emit 0x04
        // 0x5879D42D: sub edi, 1
        __asm _emit 0x83
        __asm _emit 0xEF
        __asm _emit 0x01
        // 0x5879D430: jne 0x5879d423
        __asm _emit 0x75
        __asm _emit 0xF1
        // 0x5879D432: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5879D434: call 0x58797960
        __asm _emit 0xE8
        __asm _emit 0x27
        __asm _emit 0xA5
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879D439: mov ecx, ebx
        __asm _emit 0x8B
        __asm _emit 0xCB
        // 0x5879D43B: call 0x5879b3b0
        __asm _emit 0xE8
        __asm _emit 0x70
        __asm _emit 0xDF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5879D440: lea eax, [edi + 1]
        __asm _emit 0x8D
        __asm _emit 0x47
        __asm _emit 0x01
        // 0x5879D443: pop edi
        __asm _emit 0x5F
        // 0x5879D444: pop esi
        __asm _emit 0x5E
        // 0x5879D445: pop ebx
        __asm _emit 0x5B
        // 0x5879D446: ret
        __asm _emit 0xC3
        // 0x5879D447: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5879D449: pop ebx
        __asm _emit 0x5B
        // 0x5879D44A: ret
        __asm _emit 0xC3
    }
}
