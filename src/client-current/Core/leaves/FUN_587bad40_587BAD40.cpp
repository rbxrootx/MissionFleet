// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BAD40 .. +0x268 bytes.
extern "C" __declspec(naked) void FUN_587bad40_587BAD40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 02: shr cx, 2
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x02
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 43 02 00 00: je 0x587bafa6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 60h]
        cmp edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes 0F 84 A7 01 00 00: je 0x587baf1c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 60h]
        cmp edx, dword ptr [ecx + 64h]
        ; Exact mapped bytes 0F 8E C1 00 00 00: jle 0x587bae48
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 60h]
        sub edx, dword ptr [ecx + 64h]
        cmp edx, 1e240h
        ; Exact mapped bytes 7E 0C: jle 0x587bada7
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 1ch], 1e240h
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x587bae34
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 60h]
        sub edx, dword ptr [ecx + 64h]
        cmp edx, 3039h
        ; Exact mapped bytes 7E 09: jle 0x587badc4
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 18h], 3039h
        ; Exact mapped bytes EB 6A: jmp 0x587bae2e
        __asm _emit 0xeb
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 60h]
        sub edx, dword ptr [ecx + 64h]
        cmp edx, 4d2h
        ; Exact mapped bytes 7E 09: jle 0x587bade1
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 4d2h
        ; Exact mapped bytes EB 47: jmp 0x587bae28
        __asm _emit 0xeb
        __asm _emit 0x47
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 60h]
        sub edx, dword ptr [ecx + 64h]
        cmp edx, 7bh
        ; Exact mapped bytes 7E 09: jle 0x587badfb
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 7bh
        ; Exact mapped bytes EB 27: jmp 0x587bae22
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 60h]
        sub edx, dword ptr [ecx + 64h]
        cmp edx, 0ch
        ; Exact mapped bytes 7E 09: jle 0x587bae15
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 0ch
        ; Exact mapped bytes EB 07: jmp 0x587bae1c
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 60h]
        sub edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 60h], edx
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x587baf13
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 60h]
        cmp eax, dword ptr [edx + 64h]
        ; Exact mapped bytes 0F 8D B9 00 00 00: jge 0x587baf13
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 64h]
        sub eax, dword ptr [edx + 60h]
        cmp eax, 1e240h
        ; Exact mapped bytes 7E 0C: jle 0x587bae79
        __asm _emit 0x7e
        __asm _emit 0x0c
        mov dword ptr [ebp - 30h], 1e240h
        ; Exact mapped bytes E9 8B 00 00 00: jmp 0x587baf04
        __asm _emit 0xe9
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 64h]
        sub eax, dword ptr [edx + 60h]
        cmp eax, 3039h
        ; Exact mapped bytes 7E 09: jle 0x587bae95
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 2ch], 3039h
        ; Exact mapped bytes EB 69: jmp 0x587baefe
        __asm _emit 0xeb
        __asm _emit 0x69
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 64h]
        sub eax, dword ptr [edx + 60h]
        cmp eax, 4d2h
        ; Exact mapped bytes 7E 09: jle 0x587baeb1
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 28h], 4d2h
        ; Exact mapped bytes EB 47: jmp 0x587baef8
        __asm _emit 0xeb
        __asm _emit 0x47
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 64h]
        sub eax, dword ptr [edx + 60h]
        cmp eax, 7bh
        ; Exact mapped bytes 7E 09: jle 0x587baecb
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 24h], 7bh
        ; Exact mapped bytes EB 27: jmp 0x587baef2
        __asm _emit 0xeb
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 64h]
        sub eax, dword ptr [edx + 60h]
        cmp eax, 0ch
        ; Exact mapped bytes 7E 09: jle 0x587baee5
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 20h], 0ch
        ; Exact mapped bytes EB 07: jmp 0x587baeec
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 1
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        add eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 60h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 FC FF FF: call 0x587babf0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 3ch], 0
        ; Exact mapped bytes 74 18: je 0x587baf3d
        __asm _emit 0x74
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        cmp dword ptr [ecx], 10000h
        ; Exact mapped bytes 77 0A: ja 0x587baf3d
        __asm _emit 0x77
        __asm _emit 0x0a
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 5A: je 0x587bafa6
        __asm _emit 0x74
        __asm _emit 0x5a
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx], 10000h
        ; Exact mapped bytes 77 09: ja 0x587baf60
        __asm _emit 0x77
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB E6: jmp 0x587baf46
        __asm _emit 0xeb
        __asm _emit 0xe6
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A8 A6 CD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xa6
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx + 3ch]
        ; Exact mapped bytes 75 12: jne 0x587baf84
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 24: jmp 0x587bafa6
        __asm _emit 0xeb
        __asm _emit 0x24
        ; Exact mapped bytes EB 20: jmp 0x587bafa4
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 84 A6 CD FF: call 0x58495610
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xa6
        __asm _emit 0xcd
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax + 0ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB A0: jmp 0x587baf46
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov esp, ebp
    }
}
