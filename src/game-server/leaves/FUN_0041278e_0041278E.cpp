// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041278E .. +0x32F bytes.
extern "C" __declspec(naked) void FUN_0041278e_0041278E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0E: jne 0x4127ca
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 1ch]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 05: jne 0x4127ca
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 E1 02 00 00: jmp 0x412aab
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0C: je 0x4127dc
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 ED F0 FF FF: call 0x4118c9
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 1ch]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 0F 84 C2 02 00 00: je 0x412aab
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 1ch]
        mov eax, dword ptr [eax + 24h]
        xor edx, edx
        mov ecx, 1bh
        div ecx
        mov dword ptr [ebp - 4], edx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 F0 00 00 00: je 0x412906
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 05: jb 0x412823
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E9 E3 00 00 00: jmp 0x412906
        __asm _emit 0xe9
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 4]
        add edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 30h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        cmp esi, esp
        ; Exact mapped bytes E8 8F 5F 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x5f
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x412863
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 4]
        and edx, 80000fffh
        ; Exact mapped bytes 79 08: jns 0x41287e
        __asm _emit 0x79
        __asm _emit 0x08
        dec edx
        or edx, 0fffff000h
        inc edx
        cmp dword ptr [ebp - 14h], edx
        ; Exact mapped bytes 7D 68: jge 0x4128eb
        __asm _emit 0x7d
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 0ch]
        imul eax, eax, 0dh
        mov ecx, dword ptr [ebp - 4]
        add ecx, eax
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 30h]
        ; Exact mapped bytes E8 16 06 00 00: call 0x412eb0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [ecx]
        xor dl, al
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp - 14h]
        and ecx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x4128bc
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0ffffffe0h
        inc ecx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 1ch]
        mov dl, byte ptr [edx]
        xor dl, byte ptr [eax + ecx + 4]
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 02: jb 0x4128e6
        __asm _emit 0x72
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x4128eb
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 6F FF FF FF: jmp 0x41285a
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 75 07: jne 0x412901
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes E9 03 FF FF FF: jmp 0x412809
        __asm _emit 0xe9
        __asm _emit 0x03
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 24h]
        and edx, 0ffh
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [eax]
        xor cl, dl
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx], cl
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 7E 2D: jle 0x412951
        __asm _emit 0x7e
        __asm _emit 0x2d
        mov eax, dword ptr [ebp + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 24h]
        and edx, 0ff00h
        shr edx, 8
        mov ecx, dword ptr [ebp + 8]
        mov cl, byte ptr [ecx + eax]
        xor cl, dl
        mov eax, dword ptr [ebp + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + eax], cl
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 7E 37: jle 0x41298e
        __asm _emit 0x7e
        __asm _emit 0x37
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 1
        cdq
        mov ecx, 3
        idiv ecx
        mov edx, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [edx + 24h]
        and ecx, 0ff0000h
        shr ecx, 10h
        mov edx, dword ptr [ebp + 8]
        mov bl, byte ptr [edx + eax]
        xor bl, cl
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 1
        cdq
        mov ecx, 3
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + eax], bl
        mov eax, dword ptr [ebp - 1ch]
        mov eax, dword ptr [eax + 24h]
        xor edx, edx
        and eax, 0
        and edx, 0ffh
        mov ecx, 18h
        ; Exact mapped bytes E8 97 6F 09 00: call 0x4a9940
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x6f
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 0ch]
        mov dl, byte ptr [ecx - 1]
        xor dl, al
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax - 1], dl
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 09: je 0x4129cc
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 14h]
        mov dword ptr [ecx], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x4129de
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 83 AB 00 00 00: jae 0x412a95
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 19: je 0x412a09
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 10h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        imul edx, edx, 13h
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [eax]
        add ecx, edx
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], ecx
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov ecx, 4
        div ecx
        mov dword ptr [ebp - 20h], edx
        cmp dword ptr [ebp - 20h], 3
        ; Exact mapped bytes 77 54: ja 0x412a72
        __asm _emit 0x77
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 24 95 BD 2A 41 00: jmp dword ptr [edx*4 + 0x412abd]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xbd
        __asm _emit 0x2a
        __asm _emit 0x41
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 28h]
        and ecx, 0ff00h
        shr ecx, 8
        mov byte ptr [ebp - 18h], cl
        ; Exact mapped bytes EB 36: jmp 0x412a72
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 28h]
        and eax, 0ff000000h
        shr eax, 18h
        mov byte ptr [ebp - 18h], al
        ; Exact mapped bytes EB 23: jmp 0x412a72
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 28h]
        and edx, 0ffh
        mov byte ptr [ebp - 18h], dl
        ; Exact mapped bytes EB 12: jmp 0x412a72
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 28h]
        and ecx, 0ff0000h
        shr ecx, 10h
        mov byte ptr [ebp - 18h], cl
        mov edx, dword ptr [ebp - 18h]
        and edx, 0ffh
        add edx, 7
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 10h]
        mov cl, byte ptr [eax]
        xor cl, dl
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 10h]
        mov byte ptr [edx], cl
        ; Exact mapped bytes E9 40 FF FF FF: jmp 0x4129d5
        __asm _emit 0xe9
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 10: je 0x412aab
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [eax]
        xor edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        pop esi
        pop ebx
        add esp, 20h
        cmp ebp, esp
        ; Exact mapped bytes E8 29 5D 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x5d
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
