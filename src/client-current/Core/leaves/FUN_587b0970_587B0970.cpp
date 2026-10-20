// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B0970 .. +0x27F bytes.
extern "C" __declspec(naked) void FUN_587b0970_587B0970() {
    __asm {
        sub esp, 34h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 30h], eax
        mov eax, dword ptr [esp + 3ch]
        or edx, 0ffffffffh
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 40h]
        xor ecx, ecx
        mov ebx, dword ptr [eax]
        mov dword ptr [esp + 10h], eax
        mov eax, dword ptr [eax + 8]
        push esi
        push edi
        mov dword ptr [esp + 1ch], ebx
        mov esi, dword ptr [eax + 0ch]
        mov edi, dword ptr [eax]
        mov dword ptr [esp + 14h], esi
        mov dword ptr [esp + 10h], edx
        mov dword ptr [ebp + 1450h], 0
        mov dword ptr [ebp + 1454h], 23dh
        test esi, esi
        ; Exact mapped bytes 7E 36: jle 0x587b09f7
        __asm _emit 0x7e
        __asm _emit 0x36
        ; Exact mapped bytes 66 83 3C 8B 00: cmp word ptr [ebx + ecx*4], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x3c
        __asm _emit 0x8b
        __asm _emit 0x00
        ; Exact mapped bytes 74 1F: je 0x587b09e7
        __asm _emit 0x74
        __asm _emit 0x1f
        inc dword ptr [ebp + 1450h]
        mov edx, ecx
        mov eax, dword ptr [ebp + 1450h]
        mov dword ptr [ebp + eax*4 + 0b5ch], ecx
        mov byte ptr [ecx + ebp + 1458h], 0
        ; Exact mapped bytes EB 07: jmp 0x587b09ee
        __asm _emit 0xeb
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes 66 89 44 8B 02: mov word ptr [ebx + ecx*4 + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x8b
        __asm _emit 0x02
        inc ecx
        cmp ecx, esi
        ; Exact mapped bytes 7C CE: jl 0x587b09c1
        __asm _emit 0x7c
        __asm _emit 0xce
        mov dword ptr [esp + 10h], edx
        mov eax, dword ptr [ebp + 1450h]
        cmp eax, 2
        ; Exact mapped bytes 7D 5D: jge 0x587b0a5f
        __asm _emit 0x7d
        __asm _emit 0x5d
        lea ecx, [edx + 1]
        mov dword ptr [esp + 10h], 0
        cmp edx, 2
        mov esi, ecx
        cmovge ecx, dword ptr [esp + 10h]
        cmovge esi, edx
        inc eax
        mov dword ptr [ebp + 1450h], eax
        mov dword ptr [ebp + eax*4 + 0b5ch], ecx
        mov eax, 1
        ; Exact mapped bytes 66 89 04 8B: mov word ptr [ebx + ecx*4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x8b
        mov byte ptr [ecx + ebp + 1458h], 0
        dec dword ptr [ebp + 16a8h]
        test edi, edi
        ; Exact mapped bytes 74 0B: je 0x587b0a4e
        __asm _emit 0x74
        __asm _emit 0x0b
        movzx eax, word ptr [edi + ecx*4 + 2]
        sub dword ptr [ebp + 16ach], eax
        mov eax, dword ptr [ebp + 1450h]
        mov edx, esi
        cmp eax, 2
        ; Exact mapped bytes 7C A7: jl 0x587b0a02
        __asm _emit 0x7c
        __asm _emit 0xa7
        mov dword ptr [esp + 10h], edx
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 1450h]
        cdq
        sub eax, edx
        mov esi, eax
        sar esi, 1
        cmp esi, 1
        ; Exact mapped bytes 7C 11: jl 0x587b0a89
        __asm _emit 0x7c
        __asm _emit 0x11
        push esi
        push ebx
        push ebp
        ; Exact mapped bytes E8 10 09 00 00: call 0x587b1390
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        dec esi
        add esp, 0ch
        cmp esi, 1
        ; Exact mapped bytes 7D EF: jge 0x587b0a78
        __asm _emit 0x7d
        __asm _emit 0xef
        mov ecx, dword ptr [ebp + 1450h]
        nop
        mov eax, dword ptr [ebp + ecx*4 + 0b5ch]
        mov edi, dword ptr [ebp + 0b60h]
        push 1
        mov dword ptr [ebp + 0b60h], eax
        lea eax, [ecx - 1]
        push ebx
        push ebp
        mov dword ptr [ebp + 1450h], eax
        ; Exact mapped bytes E8 DB 08 00 00: call 0x587b1390
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        dec dword ptr [ebp + 1454h]
        mov eax, dword ptr [ebp + 1454h]
        mov ecx, dword ptr [ebp + 0b60h]
        mov edx, dword ptr [esp + 20h]
        lea esi, [ebx + ecx*4]
        push 1
        mov dword ptr [ebp + eax*4 + 0b5ch], edi
        dec dword ptr [ebp + 1454h]
        mov eax, dword ptr [ebp + 1454h]
        mov dword ptr [ebp + eax*4 + 0b5ch], ecx
        ; Exact mapped bytes 66 8B 06: mov ax, word ptr [esi]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x06
        ; Exact mapped bytes 66 03 04 BB: add ax, word ptr [ebx + edi*4]
        __asm _emit 0x66
        __asm _emit 0x03
        __asm _emit 0x04
        __asm _emit 0xbb
        ; Exact mapped bytes 66 89 04 93: mov word ptr [ebx + edx*4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x04
        __asm _emit 0x93
        mov cl, byte ptr [ecx + ebp + 1458h]
        mov dl, byte ptr [edi + ebp + 1458h]
        movzx eax, cl
        cmp dl, cl
        mov ecx, dword ptr [esp + 24h]
        movzx ebx, dl
        cmovb ebx, eax
        movzx eax, cx
        inc bl
        mov byte ptr [ecx + ebp + 1458h], bl
        mov ebx, dword ptr [esp + 2ch]
        ; Exact mapped bytes 66 89 46 02: mov word ptr [esi + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x46
        __asm _emit 0x02
        push ebx
        push ebp
        ; Exact mapped bytes 66 89 44 BB 02: mov word ptr [ebx + edi*4 + 2], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xbb
        __asm _emit 0x02
        mov dword ptr [ebp + 0b60h], ecx
        inc ecx
        mov dword ptr [esp + 2ch], ecx
        ; Exact mapped bytes E8 53 08 00 00: call 0x587b1390
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 1450h]
        add esp, 18h
        cmp ecx, 2
        ; Exact mapped bytes 0F 8D 41 FF FF FF: jge 0x587b0a90
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        dec dword ptr [ebp + 1454h]
        mov ecx, dword ptr [ebp + 1454h]
        push dword ptr [esp + 18h]
        mov eax, dword ptr [ebp + 0b60h]
        push ebp
        mov dword ptr [ebp + ecx*4 + 0b5ch], eax
        ; Exact mapped bytes E8 6E 05 00 00: call 0x587b10e0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        add esp, 8
        add ebp, 0b3ch
        lea ecx, [edx + 1]
        movzx eax, word ptr [ebp]
        lea ebp, [ebp + 2]
        add edx, eax
        add edx, edx
        ; Exact mapped bytes 66 89 54 4C 20: mov word ptr [esp + ecx*2 + 0x20], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x54
        __asm _emit 0x4c
        __asm _emit 0x20
        inc ecx
        cmp ecx, 0fh
        ; Exact mapped bytes 7E EA: jle 0x587b0b80
        __asm _emit 0x7e
        __asm _emit 0xea
        mov ebx, dword ptr [esp + 10h]
        xor edi, edi
        test ebx, ebx
        ; Exact mapped bytes 78 3C: js 0x587b0bdc
        __asm _emit 0x78
        __asm _emit 0x3c
        mov ebp, dword ptr [esp + 1ch]
        movzx edx, word ptr [ebp + edi*4 + 2]
        test edx, edx
        ; Exact mapped bytes 74 2A: je 0x587b0bd7
        __asm _emit 0x74
        __asm _emit 0x2a
        movzx eax, word ptr [esp + edx*2 + 20h]
        mov esi, eax
        inc eax
        ; Exact mapped bytes 66 89 44 54 20: mov word ptr [esp + edx*2 + 0x20], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0x54
        __asm _emit 0x20
        xor eax, eax
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        mov ecx, esi
        dec edx
        and ecx, 1
        shr esi, 1
        or eax, ecx
        add eax, eax
        test edx, edx
        ; Exact mapped bytes 7F F0: jg 0x587b0bc0
        __asm _emit 0x7f
        __asm _emit 0xf0
        shr eax, 1
        ; Exact mapped bytes 66 89 44 BD 00: mov word ptr [ebp + edi*4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x44
        __asm _emit 0xbd
        __asm _emit 0x00
        inc edi
        cmp edi, ebx
        ; Exact mapped bytes 7E C8: jle 0x587b0ba4
        __asm _emit 0x7e
        __asm _emit 0xc8
        mov ecx, dword ptr [esp + 40h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 65 04 08 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x04
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 34h
        ret
    }
}
