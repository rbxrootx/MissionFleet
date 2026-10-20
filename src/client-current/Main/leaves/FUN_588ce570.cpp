// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588CE570 .. +0x28A bytes.
extern "C" __declspec(naked) void FUN_588ce570() {
    __asm {
        push ecx
        push ebx
        push edi
        mov edi, ecx
        mov ecx, dword ptr [edi + 74h]
        mov eax, dword ptr [ecx + 84h]
        lea ebx, [edi + 74h]
        mov dword ptr [esp + 8], edi
        test eax, eax
        ; Exact mapped bytes 0F 84 6A 02 00 00: je 0x588ce7f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 8]
        cmp eax, -1
        ; Exact mapped bytes 0F 84 5E 02 00 00: je 0x588ce7f7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x5e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        push esi
        ; Exact mapped bytes E8 20 9C 03 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x9c
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov esi, eax
        ; Exact mapped bytes E8 C7 9B 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        sub esi, eax
        cmp esi, 7
        ; Exact mapped bytes 7E 49: jle 0x588ce5fb
        __asm _emit 0x7e
        __asm _emit 0x49
        ; Exact mapped bytes E8 B9 9B 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 AC 9B 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        add esi, -8
        cmp eax, esi
        ; Exact mapped bytes 7D 4B: jge 0x588ce616
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov ecx, dword ptr [ebx]
        cmp dword ptr [ecx + 88h], 8
        ; Exact mapped bytes 7E 40: jle 0x588ce616
        __asm _emit 0x7e
        __asm _emit 0x40
        ; Exact mapped bytes E8 95 9B 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        mov esi, eax
        inc esi
        mov edi, ebx
        mov ebp, 3
        mov ecx, dword ptr [edi]
        push esi
        ; Exact mapped bytes E8 A3 9B 03 00: call 0x58908190
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        add edi, 4
        sub ebp, 1
        ; Exact mapped bytes 75 F0: jne 0x588ce5e5
        __asm _emit 0x75
        __asm _emit 0xf0
        mov edi, dword ptr [esp + 10h]
        ; Exact mapped bytes EB 1B: jmp 0x588ce616
        __asm _emit 0xeb
        __asm _emit 0x1b
        ; Exact mapped bytes E8 C0 9B 03 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebx]
        mov esi, eax
        ; Exact mapped bytes E8 67 9B 03 00: call 0x58908170
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x9b
        __asm _emit 0x03
        __asm _emit 0x00
        sub esi, eax
        ; Exact mapped bytes 79 09: jns 0x588ce616
        __asm _emit 0x79
        __asm _emit 0x09
        push 1
        mov ecx, edi
        ; Exact mapped bytes E8 6A FD FF FF: call 0x588ce380
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x588ce62b
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [eax + 8]
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes EB 08: jmp 0x588ce633
        __asm _emit 0xeb
        __asm _emit 0x08
        mov dword ptr [esp + 10h], 0ffffffffh
        mov ecx, dword ptr [esp + 10h]
        mov edx, dword ptr [ecx + 50h]
        ; Exact mapped bytes 8B 0D 28 48 A2 58: mov ecx, dword ptr [0x58a24828]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x48
        __asm _emit 0xa2
        __asm _emit 0x58
        push edx
        ; Exact mapped bytes E8 AA 08 EE FF: call 0x587aeef0
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0x08
        __asm _emit 0xee
        __asm _emit 0xff
        mov ebp, eax
        test ebp, ebp
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x588ce75a
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edi + 88h]
        mov edx, 2
        ; Exact mapped bytes EB 03: jmp 0x588ce660
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov eax, dword ptr [ecx]
        mov esi, 0fffeh
        ; Exact mapped bytes 66 21 70 24: and word ptr [eax + 0x24], si
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x70
        __asm _emit 0x24
        add ecx, 4
        sub edx, 1
        ; Exact mapped bytes 75 ED: jne 0x588ce660
        __asm _emit 0x75
        __asm _emit 0xed
        lea esi, [edx + 3]
        mov ecx, dword ptr [ebx]
        push -1
        ; Exact mapped bytes E8 B1 A1 03 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xa1
        __asm _emit 0x03
        __asm _emit 0x00
        add ebx, 4
        sub esi, 1
        ; Exact mapped bytes 75 EF: jne 0x588ce676
        __asm _emit 0x75
        __asm _emit 0xef
        lea eax, [ebp - 1]
        cmp eax, 4
        ; Exact mapped bytes 0F 87 A8 00 00 00: ja 0x588ce73b
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 00 E8 8C 58: jmp dword ptr [eax*4 + 0x588ce800]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x58
        push 0
        push 0
        push 0
        push 320h
        ; Exact mapped bytes E8 46 D4 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 7F 66 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x66
        __asm _emit 0xe9
        __asm _emit 0xff
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret
        push 0
        push 0
        push 0
        push 321h
        ; Exact mapped bytes E8 27 D4 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xd4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 60 66 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x66
        __asm _emit 0xe9
        __asm _emit 0xff
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret
        push 0
        push 0
        push 0
        push 322h
        ; Exact mapped bytes E8 08 D4 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xd4
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 41 66 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x66
        __asm _emit 0xe9
        __asm _emit 0xff
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret
        push 0
        push 0
        push 0
        push 323h
        ; Exact mapped bytes E8 E9 D3 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xd3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 22 66 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x66
        __asm _emit 0xe9
        __asm _emit 0xff
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret
        mov eax, dword ptr [esp + 10h]
        add eax, 74h
        push eax
        push 0
        push 0
        push 325h
        ; Exact mapped bytes E8 C4 D3 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xd3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 FD 65 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x65
        __asm _emit 0xe9
        __asm _emit 0xff
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret
        push 0
        push 0
        push 0
        push 324h
        ; Exact mapped bytes E8 A5 D3 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0xd3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 DE 65 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x65
        __asm _emit 0xe9
        __asm _emit 0xff
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588ce76b
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 03: jmp 0x588ce76e
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        cmp dword ptr [eax + 50h], 2
        ; Exact mapped bytes 75 16: jne 0x588ce78a
        __asm _emit 0x75
        __asm _emit 0x16
        ; Exact mapped bytes 8B 0D A0 45 A2 58: mov ecx, dword ptr [0x58a245a0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xa0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        ; Exact mapped bytes E8 DF 1B F0 FF: call 0x587d0360
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x1b
        __asm _emit 0xf0
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 0F 85 27 FF FF FF: jne 0x588ce6b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 0D F4 47 A2 58: mov ecx, dword ptr [0x58a247f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 30h]
        mov eax, dword ptr [edx + 0cc0h]
        movzx eax, word ptr [eax + 4]
        mov cl, al
        and cl, 1fh
        cmp cl, 7
        ; Exact mapped bytes 75 45: jne 0x588ce7ec
        __asm _emit 0x75
        __asm _emit 0x45
        and eax, 3e0h
        cmp eax, 100h
        ; Exact mapped bytes 75 39: jne 0x588ce7ec
        __asm _emit 0x75
        __asm _emit 0x39
        mov ebx, dword ptr [ebx]
        mov eax, dword ptr [ebx + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588ce7c4
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 03: jmp 0x588ce7c7
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        cmp dword ptr [eax + 50h], 0ah
        ; Exact mapped bytes 74 1F: je 0x588ce7ec
        __asm _emit 0x74
        __asm _emit 0x1f
        push 0
        push 0
        push 0
        push 516h
        ; Exact mapped bytes E8 13 D3 E9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd3
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 4C 65 E9 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x65
        __asm _emit 0xe9
        __asm _emit 0xff
        pop esi
        pop ebp
        pop edi
        xor eax, eax
        pop ebx
        pop ecx
        ret
        pop esi
        pop ebp
        pop edi
        mov eax, 1
        pop ebx
        pop ecx
        ret
        pop edi
        xor eax, eax
    }
}
