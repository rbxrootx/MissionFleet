// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 181 bytes in 1 exact ranges.
// Source symbol alias: FUN_588f9fd0.

// Ghidra body range 0x588F9FD0..0x588FA085; 181 mapped bytes.
extern "C" __declspec(naked) void FUN_588f9fd0_segment_00() {
    __asm {
        // 0x588F9FD0: sub esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xEC
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9FD6: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xA1
        __asm _emit 0xD4
        __asm _emit 0xFB
        __asm _emit 0x9C
        __asm _emit 0x58
        // 0x588F9FDB: xor eax, esp
        __asm _emit 0x33
        __asm _emit 0xC4
        // 0x588F9FDD: mov dword ptr [esp + 0x100], eax
        __asm _emit 0x89
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588F9FE4: push esi
        __asm _emit 0x56
        // 0x588F9FE5: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x588F9FE7: call 0x5876baf0
        __asm _emit 0xE8
        __asm _emit 0x04
        __asm _emit 0x1B
        __asm _emit 0xE7
        __asm _emit 0xFF
        // 0x588F9FEC: mov ax, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x40
        __asm _emit 0x24
        // 0x588F9FF0: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xC1
        __asm _emit 0xE8
        __asm _emit 0x08
        // 0x588F9FF4: and al, 0x1f
        __asm _emit 0x24
        __asm _emit 0x1F
        // 0x588F9FF6: cmp al, 2
        __asm _emit 0x3C
        __asm _emit 0x02
        // 0x588F9FF8: je 0x588fa06d
        __asm _emit 0x74
        __asm _emit 0x73
        // 0x588F9FFA: mov eax, dword ptr [esp + 0x10c]
        __asm _emit 0x8B
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x0C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA001: lea ecx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x4C
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FA005: push ecx
        __asm _emit 0x51
        // 0x588FA006: push eax
        __asm _emit 0x50
        // 0x588FA007: push eax
        __asm _emit 0x50
        // 0x588FA008: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FA00A: call 0x588f9b20
        __asm _emit 0xE8
        __asm _emit 0x11
        __asm _emit 0xFB
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FA00F: push eax
        __asm _emit 0x50
        // 0x588FA010: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x588FA012: call 0x588f9cb0
        __asm _emit 0xE8
        __asm _emit 0x99
        __asm _emit 0xFC
        __asm _emit 0xFF
        __asm _emit 0xFF
        // 0x588FA017: mov ecx, dword ptr [esi + 0xa0]
        __asm _emit 0x8B
        __asm _emit 0x8E
        __asm _emit 0xA0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA01D: lea edx, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FA021: push edx
        __asm _emit 0x52
        // 0x588FA022: call 0x58731ce0
        __asm _emit 0xE8
        __asm _emit 0xB9
        __asm _emit 0x7C
        __asm _emit 0xE3
        __asm _emit 0xFF
        // 0x588FA027: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA02D: lea eax, [esp + 4]
        __asm _emit 0x8D
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x04
        // 0x588FA031: push eax
        __asm _emit 0x50
        // 0x588FA032: push 0x32
        __asm _emit 0x6A
        __asm _emit 0x32
        // 0x588FA034: push 0x12c
        __asm _emit 0x68
        __asm _emit 0x2C
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA039: push esi
        __asm _emit 0x56
        // 0x588FA03A: call 0x587626c0
        __asm _emit 0xE8
        __asm _emit 0x81
        __asm _emit 0x86
        __asm _emit 0xE6
        __asm _emit 0xFF
        // 0x588FA03F: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xA1
        __asm _emit 0xC8
        __asm _emit 0x84
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA044: mov ecx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x08
        // 0x588FA047: mov edx, dword ptr [eax + 4]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x04
        // 0x588FA04A: sub ecx, 0x16
        __asm _emit 0x83
        __asm _emit 0xE9
        __asm _emit 0x16
        // 0x588FA04D: push ecx
        __asm _emit 0x51
        // 0x588FA04E: mov ecx, dword ptr [0x58a24820]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA054: push edx
        __asm _emit 0x52
        // 0x588FA055: call 0x58903290
        __asm _emit 0xE8
        __asm _emit 0x36
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA05A: mov eax, dword ptr [0x58a24820]
        __asm _emit 0xA1
        __asm _emit 0x20
        __asm _emit 0x48
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588FA05F: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x48
        __asm _emit 0x24
        // 0x588FA063: add eax, 0x24
        __asm _emit 0x83
        __asm _emit 0xC0
        __asm _emit 0x24
        // 0x588FA066: or cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xC9
        __asm _emit 0x01
        // 0x588FA06A: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        // 0x588FA06D: mov ecx, dword ptr [esp + 0x104]
        __asm _emit 0x8B
        __asm _emit 0x8C
        __asm _emit 0x24
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA074: pop esi
        __asm _emit 0x5E
        // 0x588FA075: xor ecx, esp
        __asm _emit 0x33
        __asm _emit 0xCC
        // 0x588FA077: call 0x5897cbda
        __asm _emit 0xE8
        __asm _emit 0x5E
        __asm _emit 0x2B
        __asm _emit 0x08
        __asm _emit 0x00
        // 0x588FA07C: add esp, 0x104
        __asm _emit 0x81
        __asm _emit 0xC4
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588FA082: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
