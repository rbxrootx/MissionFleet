// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882BAE0 .. +0x184 bytes.
extern "C" __declspec(naked) void FUN_5882bae0_5882BAE0() {
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
        ; Exact mapped bytes 0F 84 5F 01 00 00: je 0x5882bc5e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 0F 8C 52 01 00 00: jl 0x5882bc5e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x52
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 4ch], 0
        ; Exact mapped bytes 74 18: je 0x5882bb2d
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4ch]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 0A: ja 0x5882bb2d
        __asm _emit 0x77
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4ch], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 4ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 4D: je 0x5882bb89
        __asm _emit 0x74
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 09: ja 0x5882bb50
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x5882bb36
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 9B C6 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x9b
        __asm _emit 0xc6
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 7C 02: jl 0x5882bb61
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 28: jmp 0x5882bb89
        __asm _emit 0xeb
        __asm _emit 0x28
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
        ; Exact mapped bytes E8 EE 9C C6 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x9c
        __asm _emit 0xc6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB AD: jmp 0x5882bb36
        __asm _emit 0xeb
        __asm _emit 0xad
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 74h], 0
        ; Exact mapped bytes 74 6A: je 0x5882bbfc
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 74h]
        and ecx, 0ffffff00h
        ; Exact mapped bytes 74 5C: je 0x5882bbfc
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 56: je 0x5882bbfc
        __asm _emit 0x74
        __asm _emit 0x56
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
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 70h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 74h]
        ; Exact mapped bytes E8 75 0B C7 FF: call 0x5849c770
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x0b
        __asm _emit 0xc7
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x5882bc14
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 07: ja 0x5882bc14
        __asm _emit 0x77
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 44: je 0x5882bc5e
        __asm _emit 0x74
        __asm _emit 0x44
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 3C: je 0x5882bc5c
        __asm _emit 0x74
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], 10000h
        ; Exact mapped bytes 77 09: ja 0x5882bc34
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB E6: jmp 0x5882bc1a
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 9C C6 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x9c
        __asm _emit 0xc6
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB BE: jmp 0x5882bc1a
        __asm _emit 0xeb
        __asm _emit 0xbe
        ; Exact mapped bytes EB B6: jmp 0x5882bc14
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
