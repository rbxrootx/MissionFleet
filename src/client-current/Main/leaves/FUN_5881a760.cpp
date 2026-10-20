// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5881A760 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_5881a760() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        mov dword ptr [esi + 74h], 1
        test bl, 1
        ; Exact mapped bytes 74 18: je 0x5881a78c
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0ah
        ; Exact mapped bytes E8 BF 46 F9 FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5881a78c
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [esi + 74h], 0ah
        test bl, 2
        ; Exact mapped bytes 74 18: je 0x5881a7a9
        __asm _emit 0x74
        __asm _emit 0x18
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 66h
        ; Exact mapped bytes E8 A2 46 F9 FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5881a7a9
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [esi + 74h], 66h
        test bl, 4
        ; Exact mapped bytes 74 1A: je 0x5881a7c8
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 67h
        ; Exact mapped bytes E8 85 46 F9 FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        and eax, 65h
        add eax, 2
        mov dword ptr [esi + 74h], eax
        test bl, 8
        ; Exact mapped bytes 74 1A: je 0x5881a7e7
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push 68h
        ; Exact mapped bytes E8 66 46 F9 FF: call 0x587aee40
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x46
        __asm _emit 0xf9
        __asm _emit 0xff
        neg eax
        sbb eax, eax
        and eax, 66h
        add eax, 2
        mov dword ptr [esi + 74h], eax
        test ebx, 10000h
        ; Exact mapped bytes 74 07: je 0x5881a7f6
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [esi + 74h], 0c9h
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
