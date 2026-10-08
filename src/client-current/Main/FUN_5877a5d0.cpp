// Instruction stream reconstructed from Ghidra body ranges and the pinned mapped Main.dll.
// Ghidra body size: 126 bytes in 1 exact ranges.
// Source symbol alias: FUN_5877a5d0.

// Ghidra body range 0x5877A5D0..0x5877A64E; 126 mapped bytes.
extern "C" __declspec(naked) void FUN_5877a5d0_segment_00() {
    __asm {
        // 0x5877A5D0: push esi
        __asm _emit 0x56
        // 0x5877A5D1: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x5877A5D3: call dword ptr [0x5898c3d4]
        __asm _emit 0xFF
        __asm _emit 0x15
        __asm _emit 0xD4
        __asm _emit 0xC3
        __asm _emit 0x98
        __asm _emit 0x58
        // 0x5877A5D9: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877A5DD: mov ecx, 0xe4ff
        __asm _emit 0xB9
        __asm _emit 0xFF
        __asm _emit 0xE4
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A5E2: and ax, cx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xC1
        // 0x5877A5E5: mov edx, 0x400
        __asm _emit 0xBA
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A5EA: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0B
        __asm _emit 0xC2
        // 0x5877A5ED: cmp dword ptr [esi + 0x254], 0
        __asm _emit 0x83
        __asm _emit 0xBE
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A5F4: mov word ptr [esi + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x24
        // 0x5877A5F8: je 0x5877a64c
        __asm _emit 0x74
        __asm _emit 0x52
        // 0x5877A5FA: push 0x100
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A5FF: mov ecx, esi
        __asm _emit 0x8B
        __asm _emit 0xCE
        // 0x5877A601: mov dword ptr [esi + 0x254], 0
        __asm _emit 0xC7
        __asm _emit 0x86
        __asm _emit 0x54
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A60B: call 0x58902ce0
        __asm _emit 0xE8
        __asm _emit 0xD0
        __asm _emit 0x86
        __asm _emit 0x18
        __asm _emit 0x00
        // 0x5877A610: mov ecx, dword ptr [0x58a0ada8]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xA8
        __asm _emit 0xAD
        __asm _emit 0xA0
        __asm _emit 0x58
        // 0x5877A616: mov eax, dword ptr [ecx]
        __asm _emit 0x8B
        __asm _emit 0x01
        // 0x5877A618: mov edx, dword ptr [eax + 8]
        __asm _emit 0x8B
        __asm _emit 0x50
        __asm _emit 0x08
        // 0x5877A61B: call edx
        __asm _emit 0xFF
        __asm _emit 0xD2
        // 0x5877A61D: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xA1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A622: mov ecx, dword ptr [eax + 0xdb4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xB4
        __asm _emit 0x0D
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A628: push esi
        __asm _emit 0x56
        // 0x5877A629: call 0x58871de0
        __asm _emit 0xE8
        __asm _emit 0xB2
        __asm _emit 0x77
        __asm _emit 0x0F
        __asm _emit 0x00
        // 0x5877A62E: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A634: push 0
        __asm _emit 0x6A
        __asm _emit 0x00
        // 0x5877A636: push esi
        __asm _emit 0x56
        // 0x5877A637: call 0x5881ed70
        __asm _emit 0xE8
        __asm _emit 0x34
        __asm _emit 0x47
        __asm _emit 0x0A
        __asm _emit 0x00
        // 0x5877A63C: mov ecx, dword ptr [0x58a245b4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xB4
        __asm _emit 0x45
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x5877A642: mov dword ptr [ecx + 0xd4], 0
        __asm _emit 0xC7
        __asm _emit 0x81
        __asm _emit 0xD4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x5877A64C: pop esi
        __asm _emit 0x5E
        // 0x5877A64D: ret
        __asm _emit 0xC3
    }
}
