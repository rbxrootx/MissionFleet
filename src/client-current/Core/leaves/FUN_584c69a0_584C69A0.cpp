// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C69A0 .. +0x32B bytes.
extern "C" __declspec(naked) void FUN_584c69a0_584C69A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        push ebx
        push esi
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 0E: jne 0x584c69bf
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 05: jne 0x584c69bf
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 04 03 00 00: jmp 0x584c6cc3
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 0D: je 0x584c69d2
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 8F 03 00 00: call 0x584c6d60
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 2ch], 0
        ; Exact mapped bytes 0F 84 E4 02 00 00: je 0x584c6cc3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 24h]
        xor edx, edx
        mov ecx, 1bh
        div ecx
        mov dword ptr [ebp - 28h], edx
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 0F 84 03 01 00 00: je 0x584c6b0f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 05: jb 0x584c6a19
        __asm _emit 0x72
        __asm _emit 0x05
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x584c6b0f
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        mov dword ptr [ebp - 24h], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 4]
        add edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x584c6a5c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx + 4]
        and edx, 80000fffh
        ; Exact mapped bytes 79 08: jns 0x584c6a76
        __asm _emit 0x79
        __asm _emit 0x08
        dec edx
        or edx, 0fffff000h
        inc edx
        cmp dword ptr [ebp - 18h], edx
        ; Exact mapped bytes 7D 79: jge 0x584c6af4
        __asm _emit 0x7d
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 2ch], ecx
        imul edx, dword ptr [ebp - 0ch], 0dh
        add edx, dword ptr [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 1C 52 FC FF: call 0x5848bcb0
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x52
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [eax]
        mov byte ptr [ebp - 2], cl
        movzx edx, byte ptr [ebp - 2]
        xor edx, dword ptr [ebp - 30h]
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp - 18h]
        and ecx, 8000001fh
        ; Exact mapped bytes 79 05: jns 0x584c6ac1
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0ffffffe0h
        inc ecx
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + ecx + 4]
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp - 0ch]
        movzx edx, byte ptr [ecx]
        xor edx, eax
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax], dl
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 72 02: jb 0x584c6aef
        __asm _emit 0x72
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x584c6af4
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 5F FF FF FF: jmp 0x584c6a53
        __asm _emit 0xe9
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 20h
        ; Exact mapped bytes 75 07: jne 0x584c6b0a
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes E9 F0 FE FF FF: jmp 0x584c69ff
        __asm _emit 0xe9
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 24h]
        and edx, 0ffh
        mov eax, 1
        imul ecx, eax, 0
        mov eax, dword ptr [ebp + 8]
        movzx ecx, byte ptr [eax + ecx]
        xor ecx, edx
        mov edx, 1
        imul eax, edx, 0
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + eax], cl
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 7E 2E: jle 0x584c6b6e
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 24h]
        and ecx, 0ff00h
        shr ecx, 8
        mov eax, dword ptr [ebp + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov edx, dword ptr [ebp + 8]
        movzx ebx, byte ptr [edx + eax]
        xor ebx, ecx
        mov eax, dword ptr [ebp + 0ch]
        cdq
        sub eax, edx
        sar eax, 1
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + eax], bl
        cmp dword ptr [ebp + 0ch], 3
        ; Exact mapped bytes 7E 38: jle 0x584c6bac
        __asm _emit 0x7e
        __asm _emit 0x38
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 24h]
        and ecx, 0ff0000h
        shr ecx, 10h
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 1
        cdq
        mov esi, 3
        idiv esi
        mov edx, dword ptr [ebp + 8]
        movzx ebx, byte ptr [edx + eax]
        xor ebx, ecx
        mov eax, dword ptr [ebp + 0ch]
        shl eax, 1
        cdq
        mov ecx, 3
        idiv ecx
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + eax], bl
        mov eax, dword ptr [ebp - 8]
        mov eax, dword ptr [eax + 24h]
        xor edx, edx
        and eax, 0
        and edx, 0ffh
        mov cl, 18h
        ; Exact mapped bytes E8 5C AF 36 00: call 0x58831b20
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xaf
        __asm _emit 0x36
        __asm _emit 0x00
        mov ecx, eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx - 1]
        cdq
        xor eax, ecx
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 0ch]
        mov byte ptr [ecx - 1], al
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 09: je 0x584c6beb
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 14h]
        mov dword ptr [edx], 0
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x584c6bfd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 83 A4 00 00 00: jae 0x584c6cad
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 16: je 0x584c6c25
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 10h]
        movzx eax, byte ptr [edx]
        imul ecx, eax, 13h
        mov edx, dword ptr [ebp + 14h]
        add ecx, dword ptr [edx]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp - 10h]
        xor edx, edx
        mov ecx, 4
        div ecx
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 3
        ; Exact mapped bytes 77 54: ja 0x584c6c8e
        __asm _emit 0x77
        __asm _emit 0x54
        mov edx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes FF 24 95 CC 6C 4C 58: jmp dword ptr [edx*4 + 0x584c6ccc]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x95
        __asm _emit 0xcc
        __asm _emit 0x6c
        __asm _emit 0x4c
        __asm _emit 0x58
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 28h]
        and ecx, 0ff00h
        shr ecx, 8
        mov byte ptr [ebp - 1], cl
        ; Exact mapped bytes EB 36: jmp 0x584c6c8e
        __asm _emit 0xeb
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 28h]
        and eax, 0ff000000h
        shr eax, 18h
        mov byte ptr [ebp - 1], al
        ; Exact mapped bytes EB 23: jmp 0x584c6c8e
        __asm _emit 0xeb
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 28h]
        and edx, 0ffh
        mov byte ptr [ebp - 1], dl
        ; Exact mapped bytes EB 12: jmp 0x584c6c8e
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 28h]
        and ecx, 0ff0000h
        shr ecx, 10h
        mov byte ptr [ebp - 1], cl
        movzx edx, byte ptr [ebp - 1]
        add edx, 7
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 10h]
        movzx ecx, byte ptr [eax]
        xor ecx, edx
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 10h]
        mov byte ptr [edx], cl
        ; Exact mapped bytes E9 47 FF FF FF: jmp 0x584c6bf4
        __asm _emit 0xe9
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 10: je 0x584c6cc3
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        xor edx, dword ptr [ecx + 24h]
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [eax], edx
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
