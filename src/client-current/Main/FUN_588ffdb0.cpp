// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FFDB0 .. +0x58 bytes.
// Source symbol alias: FUN_588ffdb0.
extern "C" __declspec(naked) void FUN_588ffdb0() {
    __asm {
        // 0x588FFDB0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FFDB2: push 0x5898a548
        __asm _emit 0x68
        __asm _emit 0x48
        __asm _emit 0xA5
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FFDB7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFDBD: push eax
        __asm _emit 0x50
        // 0x588FFDBE: push ecx
        __asm _emit 0x51
        // 0x588FFDBF: push esi
        __asm _emit 0x56
        // 0x588FFDC0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FFDC5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FFDC7: push eax
        __asm _emit 0x50
        // 0x588FFDC8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FFDCC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFDD2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FFDD4: push 4
        __asm _emit 0x6A
        __asm _emit 0x04
        // 0x588FFDD6: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x73
        __asm _emit 0xCE
        __asm _emit 0x07
        __asm _emit 0x00
        // 0x588FFDDB: xor ecx, ecx
        __asm _emit 0x33
        __asm _emit 0xC9
        // 0x588FFDDD: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588FFDE0: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588FFDE2: je 0x588ffde8
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x588FFDE4: mov dword ptr [eax], esi
        __asm _emit 0x89
        __asm _emit 0x30
        // 0x588FFDE6: jmp 0x588ffdea
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588FFDE8: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588FFDEA: mov dword ptr [esi], eax
        __asm _emit 0x89
        __asm _emit 0x06
        // 0x588FFDEC: mov dword ptr [esi + 0xc], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x0C
        // 0x588FFDEF: mov dword ptr [esi + 0x10], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x10
        // 0x588FFDF2: mov dword ptr [esi + 0x14], ecx
        __asm _emit 0x89
        __asm _emit 0x4E
        __asm _emit 0x14
        // 0x588FFDF5: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588FFDF7: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FFDFB: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FFE02: pop ecx
        __asm _emit 0x59
        // 0x588FFE03: pop esi
        __asm _emit 0x5E
        // 0x588FFE04: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FFE07: ret
        __asm _emit 0xC3
    }
}
