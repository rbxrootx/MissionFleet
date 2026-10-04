// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588EBDD0 .. +0x98 bytes.
// Source symbol alias: FUN_588ebdd0.
extern "C" __declspec(naked) void FUN_588ebdd0() {
    __asm {
        // 0x588EBDD0: push -1
        __asm _emit 0x6A
        __asm _emit 0xFF
        // 0x588EBDD2: push 0x589899eb
        __asm _emit 0x68
        __asm _emit 0xEB
        __asm _emit 0x99
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x588EBDD7: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xA1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBDDD: push eax
        __asm _emit 0x50
        // 0x588EBDDE: push ecx
        __asm _emit 0x51
        // 0x588EBDDF: push esi
        __asm _emit 0x56
        // 0x588EBDE0: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588EBDE5: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588EBDE7: push eax
        __asm _emit 0x50
        // 0x588EBDE8: lea eax, [esp + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588EBDEC: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xA3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBDF2: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588EBDF4: mov dword ptr [esi], 0x589a1540
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0x40
        __asm _emit 0x15
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EBDFA: lea eax, [esi + 0xc]
        __asm _emit 0x8D
        __asm _emit 0x46
        __asm _emit 0x0C
        // 0x588EBDFD: mov ecx, 0x26
        __asm _emit 0xB9
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBE02: or edx, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xCA
        __asm _emit 0xFF
        // 0x588EBE05: jmp 0x588ebe10
        __asm _emit 0xEB
        __asm _emit 0x09
        // 0x588EBE07: lea esp, [esp]
        __asm _emit 0x8D
        __asm _emit 0xA4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBE0E: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588EBE10: mov dword ptr [eax - 4], edx
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0xFC
        // 0x588EBE13: mov dword ptr [eax], 0
        __asm _emit 0xC7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBE19: add eax, 8
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x08
        // 0x588EBE1C: sub ecx, 1
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x01
        // 0x588EBE1F: jne 0x588ebe10
        __asm _emit 0x75
        __asm _emit 0xEF
        // 0x588EBE21: push 0x198
        __asm _emit 0x68
        __asm _emit 0x98
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBE26: call 0x5897cc4e
        __asm _emit 0xE8
        __asm _emit 0x23
        __asm _emit 0x0E
        __asm _emit 0x09
        __asm _emit 0x00
        // 0x588EBE2B: add esp, 4
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x04
        // 0x588EBE2E: mov dword ptr [esp + 8], eax
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588EBE32: mov dword ptr [esp + 0x14], 0
        __asm _emit 0xC7
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBE3A: test eax, eax
        __asm _emit 0x85
        __asm _emit 0xC0
        // 0x588EBE3C: je 0x588ebe50
        __asm _emit 0x74
        __asm _emit 0x12
        // 0x588EBE3E: push 1
        __asm _emit 0x6A
        __asm _emit 0x01
        // 0x588EBE40: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x588EBE42: push 0x589a1528
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x15
        __asm _emit 0x9A
        __asm _emit 0x58
        // 0x588EBE47: mov ecx, eax
        __asm _emit 0x8B
        __asm _emit 0xC8
        // 0x588EBE49: call 0x588f3d70
        __asm _emit 0xE8
        __asm _emit 0x22
        __asm _emit 0x7F
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBE4E: jmp 0x588ebe52
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x588EBE50: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588EBE52: mov dword ptr [esi + 4], eax
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x04
        // 0x588EBE55: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x588EBE57: mov ecx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x588EBE5B: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588EBE62: pop ecx
        __asm _emit 0x59
        // 0x588EBE63: pop esi
        __asm _emit 0x5E
        // 0x588EBE64: add esp, 0x10
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x10
        // 0x588EBE67: ret
        __asm _emit 0xC3
    }
}
