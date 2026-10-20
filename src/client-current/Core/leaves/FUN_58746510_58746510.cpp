// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58746510 .. +0x390 bytes.
extern "C" __declspec(naked) void FUN_58746510_58746510() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push esi
        mov dword ptr [ebp - 4], ecx
        push 0c4h
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        push ecx
        ; Exact mapped bytes E8 E3 68 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        push 50h
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        push eax
        ; Exact mapped bytes E8 D0 68 10 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x68
        __asm _emit 0x10
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 0ch], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 28h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 30h], 2
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 34h], 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 38h], 80h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 3ch], 30h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 40h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 54h]
        mov dword ptr [eax + 44h], 7dh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 54h]
        mov dword ptr [edx + 48h], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ecx + 4ch], 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 89 88 84 00 00 00: mov word ptr [eax + 0x84], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x88
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 0fh
        ; Exact mapped bytes 66 89 48 36: mov word ptr [eax + 0x36], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x48
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov cl, byte ptr [eax + 32h]
        and cl, 0f0h
        or cl, 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 32h], cl
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov al, byte ptr [edx + 31h]
        and al, 80h
        or al, 30h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov byte ptr [edx + 31h], al
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov byte ptr [ecx + 47h], 7dh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov byte ptr [eax + 46h], 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 3ch]
        and eax, 0fffffffdh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [edx + 3ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, dword ptr [ecx + 3ch]
        and edx, 0fffffffeh
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ecx + 3ch], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax + 3ch]
        or ecx, 4
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov dword ptr [eax + 3ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        xor eax, eax
        ; Exact mapped bytes 66 89 42 38: mov word ptr [edx + 0x38], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x38
        push 588b4c34h
        ; Exact mapped bytes E8 66 B9 DD FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xb9
        __asm _emit 0xdd
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 50h]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        push 30h
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 D8 DA 06 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xda
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x587466bd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 0F 8D 96 00 00 00: jge 0x5874675d
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 70h]
        mov dword ptr [ebp - 14h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B2 F8 D3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf8
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 7ch]
        mov dword ptr [ebp - 18h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 9B F8 D3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf8
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 88h]
        mov dword ptr [ebp - 1ch], edx
        push 0fh
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 81 F8 D3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xf8
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 70h]
        mov dword ptr [ebp - 20h], edx
        push 1
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 1A 91 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x91
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 7ch]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 03 91 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x91
        __asm _emit 0xd5
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 88h]
        mov dword ptr [ebp - 28h], edx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E9 90 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x587466b4
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5874676f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7D 37: jge 0x587467ac
        __asm _emit 0x7d
        __asm _emit 0x37
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 94h]
        mov dword ptr [ebp - 2ch], eax
        push 0fh
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 01 F8 D3 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xf8
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 88h]
        mov dword ptr [ebp - 30h], eax
        push 1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 97 90 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x90
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB BA: jmp 0x58746766
        __asm _emit 0xeb
        __asm _emit 0xba
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 70h]
        mov dword ptr [ebp - 34h], eax
        push 5
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 79 90 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x90
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 7ch]
        mov dword ptr [ebp - 38h], eax
        push 5
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 5E 90 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x90
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx + 88h]
        mov dword ptr [ebp - 3ch], eax
        push 5
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 40 90 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0x90
        __asm _emit 0xd5
        __asm _emit 0xff
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 94h]
        mov dword ptr [ebp - 40h], ecx
        push 5
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 21 90 D5 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x90
        __asm _emit 0xd5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, 1
        imul edx, ecx, 0
        mov byte ptr [eax + edx + 56h], 14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, 1
        shl edx, 0
        mov byte ptr [ecx + edx + 56h], 8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov edx, 1
        shl edx, 1
        mov byte ptr [ecx + edx + 56h], 8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 4]
        push 1
        ; Exact mapped bytes 8B 0D D8 06 96 58: mov ecx, dword ptr [0x589606d8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xd8
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 AD E2 D3 FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xe2
        __asm _emit 0xd3
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 46 01 D4 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0xd4
        __asm _emit 0xff
        lea eax, [esi + eax + 2ch]
        mov dword ptr [ebp - 44h], eax
        mov ecx, dword ptr [ebp - 44h]
        push ecx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 03 85 D7 FF: call 0x584bed90
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 5ch]
        ; Exact mapped bytes E8 38 5D DA FF: call 0x584ec5d0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x5d
        __asm _emit 0xda
        __asm _emit 0xff
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
