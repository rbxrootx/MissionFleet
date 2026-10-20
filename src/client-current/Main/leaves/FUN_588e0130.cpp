// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588E0130 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_588e0130() {
    __asm {
        mov edx, dword ptr [esp + 4]
        push esi
        mov esi, ecx
        test edx, edx
        ; Exact mapped bytes 0F 84 F9 00 00 00: je 0x588e0238
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 78h]
        sub eax, 1
        ; Exact mapped bytes 74 6C: je 0x588e01b3
        __asm _emit 0x74
        __asm _emit 0x6c
        sub eax, 1
        ; Exact mapped bytes 74 42: je 0x588e018e
        __asm _emit 0x74
        __asm _emit 0x42
        sub eax, 1
        ; Exact mapped bytes 0F 85 E3 00 00 00: jne 0x588e0238
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 23ch]
        mov ecx, dword ptr [eax + 50h]
        xor ecx, 0aaaaaaaah
        ; Exact mapped bytes 0F 85 CE 00 00 00: jne 0x588e0238
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx + 7ch]
        imul edx, edx, 64h
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 28 80 FF FF: call 0x588d81a0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x80
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 6028h]
        mov ecx, dword ptr [esi + 6060h]
        mov dword ptr [eax + 0ach], ecx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 7ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x588e0238
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esi + 6070h], 1
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x588e0238
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edx + 7ch]
        pop esi
        mov dword ptr [esp + 4], edx
        ; Exact mapped bytes E9 CD 71 FF FF: jmp 0x588d7380
        __asm _emit 0xe9
        __asm _emit 0xcd
        __asm _emit 0x71
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov dword ptr [esi + 398h], 0aaaaaaaah
        ; Exact mapped bytes E8 EC FD FF FF: call 0x588dffb0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [esi + 60b4h], 40000000h
        ; Exact mapped bytes 83 3D DC 8E 9C 58 00: cmp dword ptr [0x589c8edc], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xdc
        __asm _emit 0x8e
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes 74 61: je 0x588e0238
        __asm _emit 0x74
        __asm _emit 0x61
        ; Exact mapped bytes A1 9C 45 A2 58: mov eax, dword ptr [0x58a2459c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebx
        ; Exact mapped bytes 8B 1D 80 45 A2 58: mov ebx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push ebp
        push edi
        mov edi, dword ptr [eax + 10524h]
        mov eax, dword ptr [ebx + 1ch]
        sub eax, dword ptr [ebx + 14h]
        mov ebp, dword ptr [edi + 114h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        mov ecx, dword ptr [esi + 4]
        sub ecx, eax
        mov eax, dword ptr [ebx + 20h]
        sub eax, dword ptr [ebx + 18h]
        sub ecx, dword ptr [edi + 50h]
        sar eax, 1
        imul eax, eax, 3e8h
        cdq
        idiv ebp
        ; Exact mapped bytes 8B 15 F8 48 A2 58: mov edx, dword ptr [0x58a248f8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        sub eax, dword ptr [esi + 8]
        add eax, dword ptr [edi + 54h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 604ch]
        ; Exact mapped bytes E8 CB 71 ED FF: call 0x587b7400
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x71
        __asm _emit 0xed
        __asm _emit 0xff
        pop edi
        pop ebp
        pop ebx
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
