// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588FAFB0 .. +0x72 bytes.
// Source symbol alias: FUN_588fafb0.
extern "C" __declspec(naked) void FUN_588fafb0() {
    __asm {
        // 0x588FAFB0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588FAFB2: push 0x5898a2c8
        __asm _emit 0x68
        __asm _emit 0xC8
        __asm _emit 0xA2
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588FAFB7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAFBD: push eax
        __asm _emit 0x50
        // 0x588FAFBE: push ecx
        __asm _emit 0x51
        // 0x588FAFBF: push esi
        __asm _emit 0x56
        // 0x588FAFC0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588FAFC5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588FAFC7: push eax
        __asm _emit 0x50
        // 0x588FAFC8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FAFCC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAFD2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588FAFD4: mov dword ptr [esp + 8], esi
        __asm _emit 0x89
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588FAFD8: mov dword ptr [esi], 0x589a21d4
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xD4
        __asm _emit 0x21
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588FAFDE: mov ecx, dword ptr [esi + 0xc0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAFE4: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FAFEC: test ecx, ecx
        __asm _emit 0x85
        __asm _emit 0xC9
        // 0x588FAFEE: je 0x588fb002
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588FAFF0: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x588FAFF2: mov edx, dword ptr [eax]
        __asm _emit 0x8B
        __asm _emit 0x10
        // 0x588FAFF4: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588FAFF6: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x588FAFF8: mov dword ptr [esi + 0xc0], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0xC0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB002: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FB004: mov dword ptr [esp + 0x14], 0xffffffff
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FB00C: call 0x588f7c00
        __asm _emit 0xE8
        __asm _emit 0xEF
        __asm _emit 0xCB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FB011: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588FB015: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FB01C: pop ecx
        __asm _emit 0x59
        // 0x588FB01D: pop esi
        __asm _emit 0x5E
        // 0x588FB01E: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588FB021: ret
        __asm _emit 0xC3
    }
}
