// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B5F40 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_587b5f40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
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
        ; Exact mapped bytes 0F 84 55 01 00 00: je 0x587b60b4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x55
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x587b5f80
        __asm _emit 0x74
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587b5f80
        __asm _emit 0x77
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4ch], 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 4ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 4D: je 0x587b5fdc
        __asm _emit 0x74
        __asm _emit 0x4d
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x587b5fa3
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x587b5f89
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 65 F7 CD FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf7
        __asm _emit 0xcd
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 08: movsx ecx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 7C 02: jl 0x587b5fb4
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x587b5fdc
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
        ; Exact mapped bytes E8 9B F8 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xcd
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB AD: jmp 0x587b5f89
        __asm _emit 0xeb
        __asm _emit 0xad
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 50h], 0
        ; Exact mapped bytes 74 6D: je 0x587b6052
        __asm _emit 0x74
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx + 0ch]
        mov edx, dword ptr [ebp + 10h]
        add eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ebp - 8]
        add ecx, dword ptr [edx + 10h]
        mov eax, dword ptr [ebp + 10h]
        add ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 2ch]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 28h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        sub esp, 10h
        mov eax, esp
        mov ecx, dword ptr [edx]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [edx + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [edx + 0ch]
        mov dword ptr [eax + 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 50h]
        ; Exact mapped bytes E8 DF 47 00 00: call 0x587ba830
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x47
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x587b606a
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 07: ja 0x587b606a
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 44: je 0x587b60b4
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3C: je 0x587b60b2
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587b608a
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x587b6070
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C5 F7 CD FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xf7
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB BE: jmp 0x587b6070
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB B6: jmp 0x587b606a
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov esp, ebp
        pop ebp
        ret 0ch
    }
}
