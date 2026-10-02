// Instruction stream reconstructed from Ghidra and the pinned mapped Core.dll.
// Ghidra extent: 0x588606FD .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_588606fd() {
    __asm {
        // 0x588606FD: mov edi, edi
        __asm _emit 0x8B
        __asm _emit 0xFF
        // 0x588606FF: push ebp
        __asm _emit 0x55
        // 0x58860700: mov ebp, esp
        __asm _emit 0x8B
        __asm _emit 0xEC
        // 0x58860702: mov edx, dword ptr [ebp + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x55
        __asm _emit 0x0C
        // 0x58860705: push esi
        __asm _emit 0x56
        // 0x58860706: mov esi, ecx
        __asm _emit 0x8B
        __asm _emit 0xF1
        // 0x58860708: cmp edx, -1
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0xFF
        // 0x5886070B: je 0x58860746
        __asm _emit 0x74
        __asm _emit 0x39
        // 0x5886070D: mov eax, dword ptr [ebp + 8]
        __asm _emit 0x8B
        __asm _emit 0x45
        __asm _emit 0x08
        // 0x58860710: sub eax, 0
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x00
        // 0x58860713: je 0x58860742
        __asm _emit 0x74
        __asm _emit 0x2D
        // 0x58860715: sub eax, 1
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x01
        // 0x58860718: je 0x58860733
        __asm _emit 0x74
        __asm _emit 0x19
        // 0x5886071A: sub eax, 7
        __asm _emit 0x83
        __asm _emit 0xE8
        __asm _emit 0x07
        // 0x5886071D: jne 0x58860746
        __asm _emit 0x75
        __asm _emit 0x27
        // 0x5886071F: movzx edx, dl
        __asm _emit 0x0F
        __asm _emit 0xB6
        __asm _emit 0xD2
        // 0x58860722: inc eax
        __asm _emit 0x40
        // 0x58860723: mov ecx, edx
        __asm _emit 0x8B
        __asm _emit 0xCA
        // 0x58860725: shr edx, 3
        __asm _emit 0xC1
        __asm _emit 0xEA
        __asm _emit 0x03
        // 0x58860728: and ecx, 7
        __asm _emit 0x83
        __asm _emit 0xE1
        __asm _emit 0x07
        // 0x5886072B: shl eax, cl
        __asm _emit 0xD3
        __asm _emit 0xE0
        // 0x5886072D: test byte ptr [edx + esi + 0x44], al
        __asm _emit 0x84
        __asm _emit 0x44
        __asm _emit 0x32
        __asm _emit 0x44
        // 0x58860731: jmp 0x58860740
        __asm _emit 0xEB
        __asm _emit 0x0D
        // 0x58860733: cmp edx, 9
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x09
        // 0x58860736: jl 0x5886073d
        __asm _emit 0x7C
        __asm _emit 0x05
        // 0x58860738: cmp edx, 0xd
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x0D
        // 0x5886073B: jle 0x58860746
        __asm _emit 0x7E
        __asm _emit 0x09
        // 0x5886073D: cmp edx, 0x20
        __asm _emit 0x83
        __asm _emit 0xFA
        __asm _emit 0x20
        // 0x58860740: je 0x58860746
        __asm _emit 0x74
        __asm _emit 0x04
        // 0x58860742: mov al, 1
        __asm _emit 0xB0
        __asm _emit 0x01
        // 0x58860744: jmp 0x58860748
        __asm _emit 0xEB
        __asm _emit 0x02
        // 0x58860746: xor al, al
        __asm _emit 0x32
        __asm _emit 0xC0
        // 0x58860748: pop esi
        __asm _emit 0x5E
        // 0x58860749: pop ebp
        __asm _emit 0x5D
        // 0x5886074A: ret 8
        __asm _emit 0xC2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
