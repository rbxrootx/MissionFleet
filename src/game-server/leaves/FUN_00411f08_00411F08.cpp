// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411F08 .. +0x407 bytes.
extern "C" __declspec(naked) void FUN_00411f08_00411F08() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 34h]
        mov ecx, 0dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 34h], ecx
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 75 10: jne 0x411f3a
        __asm _emit 0x75
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 34h]
        cmp dword ptr [eax + 2ch], 0
        ; Exact mapped bytes 75 07: jne 0x411f3a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C3 03 00 00: jmp 0x4122fd
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 0C: je 0x411f4c
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 7D F9 FF FF: call 0x4118c9
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, esp
        push 0
        push 80h
        push 2
        push 0
        push 0
        push 40000000h
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 F4 21 5E 00: call dword ptr [0x5e21f4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 6F 68 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x68
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 07: jne 0x411f81
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 7C 03 00 00: jmp 0x4122fd
        __asm _emit 0xe9
        __asm _emit 0x7c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 0
        mov dword ptr [ebp - 28h], 0
        mov dword ptr [ebp - 8], 0
        push 0
        push 0
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 E4 07 00 00: call 0x41278e
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x411fbc
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 4B: jge 0x41200f
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 20h]
        xor edx, edx
        mov dl, byte ptr [ecx]
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        imul edx, eax
        mov ecx, dword ptr [ebp - 1ch]
        add ecx, edx
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 20h]
        xor eax, eax
        mov al, byte ptr [edx]
        mov ecx, eax
        mov eax, dword ptr [ebp - 20h]
        add eax, 0dh
        mov edx, dword ptr [ebp - 20h]
        add edx, 0dh
        imul eax, edx
        cdq
        mov esi, 7bh
        idiv esi
        imul ecx, edx
        mov eax, dword ptr [ebp - 28h]
        add eax, ecx
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB A4: jmp 0x411fb3
        __asm _emit 0xeb
        __asm _emit 0xa4
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 1ch]
        xor edx, dword ptr [ecx + 24h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 28h]
        xor ecx, dword ptr [eax + 28h]
        mov dword ptr [ebp - 28h], ecx
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ff000000h
        shr edx, 18h
        mov byte ptr [ebp - 0ch], dl
        mov eax, dword ptr [ebp - 1ch]
        and eax, 0ff0000h
        shr eax, 10h
        mov byte ptr [ebp - 0bh], al
        mov ecx, dword ptr [ebp - 1ch]
        and ecx, 0ffh
        mov byte ptr [ebp - 0ah], cl
        mov edx, dword ptr [ebp - 1ch]
        and edx, 0ff00h
        shr edx, 8
        mov byte ptr [ebp - 9], dl
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ff0000h
        shr eax, 10h
        mov byte ptr [ebp - 14h], al
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0ff000000h
        shr ecx, 18h
        mov byte ptr [ebp - 13h], cl
        mov edx, dword ptr [ebp - 28h]
        and edx, 0ff00h
        shr edx, 8
        mov byte ptr [ebp - 12h], dl
        mov eax, dword ptr [ebp - 28h]
        and eax, 0ffh
        mov byte ptr [ebp - 11h], al
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4120a8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 25: jge 0x4120d5
        __asm _emit 0x7d
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 20h]
        and eax, 80000003h
        ; Exact mapped bytes 79 05: jns 0x4120bf
        __asm _emit 0x79
        __asm _emit 0x05
        dec eax
        or eax, 0fffffffch
        inc eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 20h]
        mov dl, byte ptr [ecx]
        xor dl, byte ptr [ebp + eax - 0ch]
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 20h]
        mov byte ptr [eax], dl
        ; Exact mapped bytes EB CA: jmp 0x41209f
        __asm _emit 0xeb
        __asm _emit 0xca
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4120ee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 1
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 20h]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 39: jge 0x41212f
        __asm _emit 0x7d
        __asm _emit 0x39
        mov eax, dword ptr [ebp - 18h]
        add eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7C 02: jl 0x412109
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x41212f
        __asm _emit 0xeb
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 20h]
        and edx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x412119
        __asm _emit 0x79
        __asm _emit 0x05
        dec edx
        or edx, 0fffffffch
        inc edx
        mov eax, dword ptr [ebp + 0ch]
        add eax, dword ptr [ebp - 18h]
        mov cl, byte ptr [eax]
        xor cl, byte ptr [ebp + edx - 14h]
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        mov byte ptr [edx], cl
        ; Exact mapped bytes EB B6: jmp 0x4120e5
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x412141
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 20: jge 0x412169
        __asm _emit 0x7d
        __asm _emit 0x20
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 20h]
        xor eax, eax
        mov al, byte ptr [edx]
        add eax, 7
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 3
        imul eax, ecx
        mov edx, dword ptr [ebp - 8]
        add edx, eax
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB CF: jmp 0x412138
        __asm _emit 0xeb
        __asm _emit 0xcf
        mov eax, dword ptr [ebp - 1ch]
        and eax, 0fafah
        mov ecx, dword ptr [ebp - 28h]
        and ecx, 0adadh
        add ecx, dword ptr [ebp - 8]
        add ecx, eax
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        xor edx, 390a4f16h
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ch
        push eax
        ; Exact mapped bytes E8 26 B2 0D 00: call 0x4ed3c0
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xb2
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 24h], ecx
        push 4
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 6B 6E 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 4
        lea ecx, [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 56 6E 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 4
        lea eax, [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 8
        push ecx
        ; Exact mapped bytes E8 41 6E 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 0ch
        push ecx
        ; Exact mapped bytes E8 2A 6E 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        push 0
        lea edx, [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        add eax, 0ch
        push eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 F8 21 5E 00: call dword ptr [0x5e21f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 C3 65 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x65
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, esp
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 EC 21 5E 00: call dword ptr [0x5e21ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 B0 65 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x65
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 30h], ecx
        mov edx, dword ptr [ebp - 30h]
        push edx
        ; Exact mapped bytes E8 CA B1 0D 00: call 0x4ed409
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0x00
        add esp, 4
        cmp dword ptr [ebp + 18h], 0
        ; Exact mapped bytes 0F 85 AC 00 00 00: jne 0x4122f8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x412265
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 39: jge 0x4122a6
        __asm _emit 0x7d
        __asm _emit 0x39
        mov edx, dword ptr [ebp - 18h]
        add edx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7C 02: jl 0x412280
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 26: jmp 0x4122a6
        __asm _emit 0xeb
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 20h]
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x412290
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 18h]
        mov al, byte ptr [edx]
        xor al, byte ptr [ebp + ecx - 14h]
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 18h]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB B6: jmp 0x41225c
        __asm _emit 0xeb
        __asm _emit 0xb6
        mov dword ptr [ebp - 20h], 0
        ; Exact mapped bytes EB 09: jmp 0x4122b8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 7D 26: jge 0x4122e6
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [ebp - 20h]
        and ecx, 80000003h
        ; Exact mapped bytes 79 05: jns 0x4122d0
        __asm _emit 0x79
        __asm _emit 0x05
        dec ecx
        or ecx, 0fffffffch
        inc ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 20h]
        mov al, byte ptr [edx]
        xor al, byte ptr [ebp + ecx - 0ch]
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [ebp - 20h]
        mov byte ptr [ecx], al
        ; Exact mapped bytes EB C9: jmp 0x4122af
        __asm _emit 0xeb
        __asm _emit 0xc9
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 D5 07 00 00: call 0x412acd
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        pop edi
        pop esi
        add esp, 34h
        cmp ebp, esp
        ; Exact mapped bytes E8 D7 64 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x64
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
