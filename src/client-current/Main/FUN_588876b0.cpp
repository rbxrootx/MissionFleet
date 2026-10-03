// Instruction stream reconstructed from Ghidra and the pinned mapped Main.dll.
// Ghidra extent: 0x588876B0 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_588876b0() {
    __asm {
        // 0x588876B0: push esi
        __asm _emit 0x56
        // 0x588876B1: mov si, word ptr [esp + 8]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x74
        __asm _emit 0x24
        __asm _emit 0x08
        // 0x588876B6: mov eax, 8
        __asm _emit 0xB8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588876BB: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xC6
        // 0x588876BE: jae 0x588876c6
        __asm _emit 0x73
        __asm _emit 0x06
        // 0x588876C0: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x588876C2: pop esi
        __asm _emit 0x5E
        // 0x588876C3: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x588876C6: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8B
        __asm _emit 0x0D
        __asm _emit 0xF4
        __asm _emit 0x47
        __asm _emit 0xA2
        __asm _emit 0x58
        // 0x588876CC: mov edx, dword ptr [ecx + 0x14]
        __asm _emit 0x8B
        __asm _emit 0x51
        __asm _emit 0x14
        // 0x588876CF: push edi
        __asm _emit 0x57
        // 0x588876D0: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x588876D2: je 0x58887725
        __asm _emit 0x74
        __asm _emit 0x51
        // 0x588876D4: mov eax, dword ptr [edx + 0xc]
        __asm _emit 0x8B
        __asm _emit 0x42
        __asm _emit 0x0C
        // 0x588876D7: mov ecx, dword ptr [eax + 0xa4]
        __asm _emit 0x8B
        __asm _emit 0x88
        __asm _emit 0xA4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588876DD: shr ecx, 1
        __asm _emit 0xD1
        __asm _emit 0xE9
        // 0x588876DF: cmp ecx, 1
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x01
        // 0x588876E2: jne 0x5888771e
        __asm _emit 0x75
        __asm _emit 0x3A
        // 0x588876E4: mov di, word ptr [eax + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8B
        __asm _emit 0x78
        __asm _emit 0x5E
        // 0x588876E8: and di, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xE7
        __asm _emit 0x0F
        // 0x588876EC: cmp di, si
        __asm _emit 0x66
        __asm _emit 0x3B
        __asm _emit 0xFE
        // 0x588876EF: je 0x5888772c
        __asm _emit 0x74
        __asm _emit 0x3B
        // 0x588876F1: cmp ecx, ecx
        __asm _emit 0x3B
        __asm _emit 0xC9
        // 0x588876F3: jne 0x5888771e
        __asm _emit 0x75
        __asm _emit 0x29
        // 0x588876F5: mov eax, dword ptr [eax + 0x1c0]
        __asm _emit 0x8B
        __asm _emit 0x80
        __asm _emit 0xC0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x588876FB: cmp eax, ecx
        __asm _emit 0x3B
        __asm _emit 0xC1
        // 0x588876FD: je 0x58887704
        __asm _emit 0x74
        __asm _emit 0x05
        // 0x588876FF: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x58887702: jne 0x5888771e
        __asm _emit 0x75
        __asm _emit 0x1A
        // 0x58887704: movzx ecx, si
        __asm _emit 0x0F
        __asm _emit 0xB7
        __asm _emit 0xCE
        // 0x58887707: dec ecx
        __asm _emit 0x49
        // 0x58887708: cmp ecx, 7
        __asm _emit 0x83
        __asm _emit 0xF9
        __asm _emit 0x07
        // 0x5888770B: ja 0x5888771e
        __asm _emit 0x77
        __asm _emit 0x11
        // 0x5888770D: jmp dword ptr [ecx*4 + 0x58887738]
        __asm _emit 0xFF
        __asm _emit 0x24
        __asm _emit 0x8D
        __asm _emit 0x38
        __asm _emit 0x77
        __asm _emit 0x88
        __asm _emit 0x58
        // 0x58887714: cmp eax, 1
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x01
        // 0x58887717: jmp 0x5888771c
        __asm _emit 0xEB
        __asm _emit 0x03
        // 0x58887719: cmp eax, 2
        __asm _emit 0x83
        __asm _emit 0xF8
        __asm _emit 0x02
        // 0x5888771C: je 0x5888772c
        __asm _emit 0x74
        __asm _emit 0x0E
        // 0x5888771E: mov edx, dword ptr [edx + 8]
        __asm _emit 0x8B
        __asm _emit 0x52
        __asm _emit 0x08
        // 0x58887721: test edx, edx
        __asm _emit 0x85
        __asm _emit 0xD2
        // 0x58887723: jne 0x588876d4
        __asm _emit 0x75
        __asm _emit 0xAF
        // 0x58887725: pop edi
        __asm _emit 0x5F
        // 0x58887726: xor eax, eax
        __asm _emit 0x33
        __asm _emit 0xC0
        // 0x58887728: pop esi
        __asm _emit 0x5E
        // 0x58887729: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
        // 0x5888772C: pop edi
        __asm _emit 0x5F
        // 0x5888772D: mov eax, 1
        __asm _emit 0xB8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        // 0x58887732: pop esi
        __asm _emit 0x5E
        // 0x58887733: ret 4
        __asm _emit 0xC2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
