// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x58876226 .. +0x62 bytes.
extern "C" __declspec(naked) void FUN_58876226() {
    __asm {
        // 0x58876226: push 0xc
        __asm _emit 0x6A
        __asm _emit 0x0C
        // 0x58876228: push 0x588ed6d0
        __asm _emit 0x68
        __asm _emit 0xD0
        __asm _emit 0xD6
        __asm _emit 0x8E
        __asm _emit 0x58
        // 0x5887622D: call 0x58832760
        __asm _emit 0xE8
        __asm _emit 0x2E
        __asm _emit 0xC5
        __asm _emit 0xFB
        __asm _emit 0xFF
        // 0x58876232: and dword ptr [ebp - 0x1c], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xE4
        __asm _emit 0x00
        // 0x58876236: call 0x58868ba0
        __asm _emit 0xE8
        __asm _emit 0x65
        __asm _emit 0x29
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x5887623B: lea edi, [eax + 0x4c]
        __asm _emit 0x8D
        __asm _emit 0x78
        __asm _emit 0x4C
        // 0x5887623E: mov ecx, dword ptr [0x58907804]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x04
        __asm _emit 0x78
        __asm _emit 0x90
        __asm _emit 0x58
        // 0x58876244: test dword ptr [eax + 0x350], ecx
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x50
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887624A: je 0x58876252
        __asm _emit 0x74
        __asm _emit 0x06
        // 0x5887624C: mov esi, dword ptr [edi]
        __asm _emit 0x8B
        __asm _emit 0x37
        // 0x5887624E: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x58876250: jne 0x5887628f
        __asm _emit 0x75
        __asm _emit 0x3D
        // 0x58876252: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x58876254: call 0x58863c1c
        __asm _emit 0xE8
        __asm _emit 0xC3
        __asm _emit 0xD9
        __asm _emit 0xFE
        __asm _emit 0xFF
        // 0x58876259: pop ecx
        __asm _emit 0x59
        // 0x5887625A: and dword ptr [ebp - 4], 0
        __asm _emit 0x83
        __asm _emit 0x65
        __asm _emit 0xFC
        __asm _emit 0x00
        // 0x5887625E: push dword ptr [0x58969984]
        __asm _emit 0xFF
        __asm _emit 0x35
        __asm _emit 0x84
        __asm _emit 0x99
        __asm _emit 0x96
        __asm _emit 0x58
        // 0x58876264: push edi
        __asm _emit 0x57
        // 0x58876265: call 0x588762a7
        __asm _emit 0xE8
        __asm _emit 0x3D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887626A: pop ecx
        __asm _emit 0x59
        // 0x5887626B: pop ecx
        __asm _emit 0x59
        // 0x5887626C: mov esi, eax
        __asm _emit 0x8B
        __asm _emit 0xF0
        // 0x5887626E: mov dword ptr [ebp - 0x1c], esi
        __asm _emit 0x89
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58876271: mov dword ptr [ebp - 4], 0xfffffffe
        __asm _emit 0xC7
        __asm _emit 0x45
        __asm _emit 0xFC
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x58876278: call 0x58876286
        __asm _emit 0xE8
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5887627D: test esi, esi
        __asm _emit 0x85
        __asm _emit 0xF6
        // 0x5887627F: je 0x588762a1
        __asm _emit 0x74
        __asm _emit 0x20
        // 0x58876281: jmp 0x5887628f
        __asm _emit 0xEB
        __asm _emit 0x0C
        // 0x58876283: mov esi, dword ptr [ebp - 0x1c]
        __asm _emit 0x8B
        __asm _emit 0x75
        __asm _emit 0xE4
        // 0x58876286: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
    }
}
