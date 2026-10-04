// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x587CEB60 .. +0xB6 bytes.
// Source symbol alias: FUN_587ceb60.
extern "C" __declspec(naked) void FUN_587ceb60() {
    __asm {
        // 0x587CEB60: mov edx, 0xfffffffe
        __asm _emit 0xBA
        __asm _emit 0xFE
        __asm _emit 0xFF
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x587CEB65: mov dword ptr [ecx + 0x90], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x90
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEB6B: mov dword ptr [ecx + 0x94], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEB71: mov edx, dword ptr [ecx + 0xbc]
        __asm _emit 0x8B
        __asm _emit 0x91
        __asm _emit 0xBC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEB77: imul edx, dword ptr [ecx + 0xb8]
        __asm _emit 0x0F
        __asm _emit 0xAF
        __asm _emit 0x91
        __asm _emit 0xB8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEB7E: or eax, 0xffffffff
        __asm _emit 0x83
        __asm _emit 0xC8
        __asm _emit 0xFF
        // 0x587CEB81: mov dword ptr [ecx + 0x88], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEB87: mov dword ptr [ecx + 0x8c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x8C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEB8D: mov dword ptr [ecx + 0x98], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEB93: mov dword ptr [ecx + 0x9c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x9C
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEB99: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x587CEB9B: mov dword ptr [ecx + 0xe4], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBA1: mov dword ptr [ecx + 0x9fc], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBA7: mov dword ptr [ecx + 0xf0], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBAD: mov dword ptr [ecx + 0xf8], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xF8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBB3: mov dword ptr [ecx + 0x104], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBB9: mov dword ptr [ecx + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBBF: mov edx, dword ptr [0x58a0b478]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587CEBC5: mov dword ptr [ecx + 0xdc], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xDC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBCB: mov edx, dword ptr [0x58a0b47c]
        __asm _emit 0x8B
        __asm _emit 0x15
        __asm _emit 0x7C
        __asm _emit 0xB4
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x587CEBD1: mov dword ptr [ecx + 0xe0], edx
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xE0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBD7: mov dword ptr [ecx + 0xfc], 0xc8
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xFC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0xC8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBE1: mov dword ptr [ecx + 0xec], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBE7: mov dword ptr [ecx + 0xa08], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x08
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBED: xor edx, edx
        __asm _emit 0x33
        __asm _emit 0xD2
        // 0x587CEBEF: mov word ptr [ecx + 0xd8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xD8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBF6: mov dword ptr [ecx + 0xa0c], eax
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x0C
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEBFC: push 0x64
        __asm _emit 0x6A
        __asm _emit 0x64
        // 0x587CEBFE: mov word ptr [ecx + 0xa10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x81
        __asm _emit 0x10
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEC05: push eax
        __asm _emit 0x50
        // 0x587CEC06: add ecx, 0xa12
        __asm _emit 0x81
        __asm _emit 0xC1
        __asm _emit 0x12
        __asm _emit 0x0A
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x587CEC0C: push ecx
        __asm _emit 0x51
        // 0x587CEC0D: call 0x5897cc48
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0xE0
        __asm _emit 0x1A
        __asm _emit 0x00
        // 0x587CEC12: add esp, 0xc
        __asm _emit 0x83
        __asm _emit 0xC4
        __asm _emit 0x0C
        // 0x587CEC15: ret
        __asm _emit 0xC3
    }
}
