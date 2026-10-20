// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58827790 .. +0x1A4 bytes.
extern "C" __declspec(naked) void FUN_58827790_58827790() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 7D 01 00 00: je 0x5882792d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x588277d1
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x588277d1
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 4D: je 0x5882782d
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x588277f4
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x588277da
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 14 DF C6 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xdf
        __asm _emit 0xc6
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x58827805
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x5882782d
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4A E0 C6 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xe0
        __asm _emit 0xc6
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB AD: jmp 0x588277da
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x588278cb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [edx + 4]
        mov eax, dword ptr [ebp - 8]
        add esi, dword ptr [eax + 0ch]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 F1 C5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xf1
        __asm _emit 0xc5
        __asm _emit 0xff
        sub esi, eax
        mov ecx, dword ptr [ebp + 10h]
        add esi, dword ptr [ecx]
        mov dword ptr [ebp - 10h], esi
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [edx + 8]
        mov eax, dword ptr [ebp - 8]
        add esi, dword ptr [eax + 10h]
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 48 C6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x48
        __asm _emit 0xc6
        __asm _emit 0xff
        sub esi, eax
        mov ecx, dword ptr [ebp + 10h]
        add esi, dword ptr [ecx + 4]
        mov dword ptr [ebp - 0ch], esi
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 2ch]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 28h]
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, 14h
        sub esp, 10h
        mov ecx, esp
        mov edx, dword ptr [eax]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0A D1 C5 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xd1
        __asm _emit 0xc5
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 50h]
        mov edx, dword ptr [eax + 20h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x588278e3
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 07: ja 0x588278e3
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 44: je 0x5882792d
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3C: je 0x5882792b
        __asm _emit 0x74
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x58827903
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x588278e9
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 14h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4C DF C6 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xdf
        __asm _emit 0xc6
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB BE: jmp 0x588278e9
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB B6: jmp 0x588278e3
        __asm _emit 0xeb
        __asm _emit 0xb6
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
