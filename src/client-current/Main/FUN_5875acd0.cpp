// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x5875ACD0 .. +0x5C bytes.
// Source symbol alias: FUN_5875acd0.
extern "C" __declspec(naked) void FUN_5875acd0() {
    __asm {
        // 0x5875ACD0: mov eax, dword ptr [0x58a2471c]
        __asm _emit 0xA1
        __asm _emit 0x1C
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5875ACD5: cmp dword ptr [eax + 0x160], 5
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x05
        // 0x5875ACDC: push esi
        __asm _emit 0x56
        // 0x5875ACDD: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5875ACDF: jle 0x5875acf7
        __asm _emit 0x7E
        __asm _emit 0x16
        // 0x5875ACE1: cmp dword ptr [eax + 0x190], 0
        __asm _emit 0x83
        __asm _emit 0xB8
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ACE8: je 0x5875acf7
        __asm _emit 0x74
        __asm _emit 0x0D
        // 0x5875ACEA: mov eax, dword ptr [eax + 0x190]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ACF0: add eax, 0x140
        __asm _emit 0x05
        __asm _emit 0x40
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875ACF5: jmp 0x5875acf9
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x5875ACF7: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x5875ACF9: mov ecx, dword ptr [esp + 0x10]
        __asm _emit 0x8B
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x10
        // 0x5875ACFD: mov edx, dword ptr [esp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x0C
        // 0x5875AD01: push 0x40
        __asm _emit 0x6A
        __asm _emit 0x40
        // 0x5875AD03: push ecx
        __asm _emit 0x51
        // 0x5875AD04: push edx
        __asm _emit 0x52
        // 0x5875AD05: push eax
        __asm _emit 0x50
        // 0x5875AD06: mov eax, dword ptr [esp + 0x18]
        __asm _emit 0x8B
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        // 0x5875AD0A: push eax
        __asm _emit 0x50
        // 0x5875AD0B: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5875AD0D: call 0x58734a30
        __asm _emit 0xE8
        __asm _emit 0x1E
        __asm _emit 0x9D
        __asm _emit 0xFD
        __asm _emit 0xFF
        // 0x5875AD12: mov dword ptr [esi], 0x5898d7e0
        __asm _emit 0xC7
        __asm _emit 0x06
        __asm _emit 0xE0
        __asm _emit 0xD7
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5875AD18: mov dword ptr [esi + 0x50], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AD1F: mov dword ptr [esi + 0x58], 0
        __asm _emit 0xC7
        __asm _emit 0x46
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5875AD26: mov eax, esi
        __asm _emit 0x8B
        __asm _emit 0xC6
        // 0x5875AD28: pop esi
        __asm _emit 0x5E
        // 0x5875AD29: ret 0xc
        __asm _emit 0xC2
        __asm _emit 0x0C
        __asm _emit 0x00
    }
}
