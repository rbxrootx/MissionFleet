// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588634BE .. +0x428 bytes.
extern "C" __declspec(naked) void FUN_588634be_588634BE() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        mov ecx, esi
        push edi
        ; Exact mapped bytes E8 28 2A FF FF: call 0x58855efb
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 0F 84 2A 02 00 00: je 0x58863705
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 28h], esi
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        lea eax, [ebp - 6]
        mov dword ptr [ebp - 24h], eax
        lea eax, [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58863500
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        push edi
        movzx eax, cl
        push 8
        push eax
        mov byte ptr [ebp - 6], cl
        ; Exact mapped bytes E8 0C 41 FF FF: call 0x5885761b
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x588634f9
        __asm _emit 0x75
        __asm _emit 0xe3
        mov cl, byte ptr [ebp - 6]
        mov edx, dword ptr [ebp + 10h]
        cmp cl, 2dh
        sete al
        mov byte ptr [edx + 308h], al
        ; Exact mapped bytes 74 05: je 0x5886352f
        __asm _emit 0x74
        __asm _emit 0x05
        cmp cl, 2bh
        ; Exact mapped bytes 75 0A: jne 0x58863539
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        mov byte ptr [ebp - 6], cl
        cmp cl, 49h
        ; Exact mapped bytes 0F 84 95 03 00 00: je 0x588638d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp cl, 69h
        ; Exact mapped bytes 0F 84 8C 03 00 00: je 0x588638d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp cl, 4eh
        ; Exact mapped bytes 0F 84 6E 03 00 00: je 0x588638c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        cmp cl, 6eh
        ; Exact mapped bytes 0F 84 65 03 00 00: je 0x588638c2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        xor ebx, ebx
        inc eax
        mov byte ptr [ebp - 1], bl
        cmp cl, 30h
        ; Exact mapped bytes 75 3A: jne 0x588635a4
        __asm _emit 0x75
        __asm _emit 0x3a
        mov edx, dword ptr [esi]
        mov al, byte ptr [edx]
        lea edi, [edx + 1]
        mov byte ptr [ebp - 1ch], al
        mov dword ptr [esi], edi
        cmp al, 78h
        ; Exact mapped bytes 74 13: je 0x5886358d
        __asm _emit 0x74
        __asm _emit 0x13
        cmp al, 58h
        ; Exact mapped bytes 74 0F: je 0x5886358d
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebp - 1ch]
        mov ecx, esi
        ; Exact mapped bytes E8 B8 28 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        mov cl, byte ptr [ebp - 6]
        ; Exact mapped bytes EB 11: jmp 0x5886359e
        __asm _emit 0xeb
        __asm _emit 0x11
        mov cl, byte ptr [edi]
        lea eax, [edi + 1]
        mov byte ptr [ebp - 1], 1
        mov dword ptr [esi], eax
        mov byte ptr [ebp - 6], cl
        mov dword ptr [ebp - 14h], edx
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        inc eax
        lea edi, [edx + 8]
        mov dword ptr [ebp - 10h], ebx
        add edx, 308h
        mov dword ptr [ebp - 18h], edi
        mov dword ptr [ebp - 1ch], edx
        mov edx, edi
        mov dword ptr [ebp - 0ch], edx
        mov ch, bl
        cmp cl, 30h
        ; Exact mapped bytes 75 11: jne 0x588635d3
        __asm _emit 0x75
        __asm _emit 0x11
        mov ch, al
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        mov byte ptr [ebp - 6], cl
        cmp cl, 30h
        ; Exact mapped bytes 74 F1: je 0x588635c4
        __asm _emit 0x74
        __asm _emit 0xf1
        cmp byte ptr [ebp - 1], bl
        mov edi, dword ptr [ebp - 0ch]
        mov ebx, dword ptr [ebp - 1ch]
        push 9
        pop edx
        push 0fh
        pop eax
        cmovne edx, eax
        mov al, cl
        sub al, 30h
        cmp al, 9
        ; Exact mapped bytes 77 08: ja 0x588635f5
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 30h
        ; Exact mapped bytes EB 23: jmp 0x58863618
        __asm _emit 0xeb
        __asm _emit 0x23
        mov al, cl
        sub al, 61h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x58863605
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 57h
        ; Exact mapped bytes EB 13: jmp 0x58863618
        __asm _emit 0xeb
        __asm _emit 0x13
        mov al, cl
        sub al, 41h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x58863615
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 37h
        ; Exact mapped bytes EB 03: jmp 0x58863618
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        cmp eax, edx
        ; Exact mapped bytes 77 18: ja 0x58863634
        __asm _emit 0x77
        __asm _emit 0x18
        mov ch, 1
        cmp edi, ebx
        ; Exact mapped bytes 74 03: je 0x58863625
        __asm _emit 0x74
        __asm _emit 0x03
        mov byte ptr [edi], al
        inc edi
        mov eax, dword ptr [esi]
        inc dword ptr [ebp - 10h]
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        mov byte ptr [ebp - 6], cl
        ; Exact mapped bytes EB B1: jmp 0x588635e5
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov dword ptr [ebp - 0ch], edi
        mov edi, dword ptr [ebp + 8]
        push 0
        pop ebx
        mov eax, dword ptr [edi]
        mov eax, dword ptr [eax + 88h]
        mov eax, dword ptr [eax]
        cmp cl, byte ptr [eax]
        ; Exact mapped bytes 0F 85 9C 00 00 00: jne 0x588636eb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edi, dword ptr [ebp - 18h]
        lea edx, [eax + 1]
        mov cl, byte ptr [eax]
        mov al, cl
        mov dword ptr [esi], edx
        mov byte ptr [ebp - 6], cl
        cmp dword ptr [ebp - 0ch], edi
        ; Exact mapped bytes 75 1D: jne 0x58863682
        __asm _emit 0x75
        __asm _emit 0x1d
        cmp cl, 30h
        ; Exact mapped bytes 75 18: jne 0x58863682
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 10h]
        mov ch, 1
        mov cl, byte ptr [edx]
        dec eax
        inc edx
        mov byte ptr [ebp - 6], cl
        mov dword ptr [esi], edx
        cmp cl, 30h
        ; Exact mapped bytes 74 F2: je 0x5886366f
        __asm _emit 0x74
        __asm _emit 0xf2
        mov dword ptr [ebp - 10h], eax
        mov al, cl
        cmp byte ptr [ebp - 1], 0
        mov dl, al
        push 9
        pop edi
        push 0fh
        pop ebx
        cmovne edi, ebx
        mov ebx, dword ptr [ebp - 0ch]
        cmp al, 30h
        ; Exact mapped bytes 7C 0D: jl 0x588636a5
        __asm _emit 0x7c
        __asm _emit 0x0d
        cmp dl, 39h
        ; Exact mapped bytes 7F 08: jg 0x588636a5
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 30h
        ; Exact mapped bytes EB 23: jmp 0x588636c8
        __asm _emit 0xeb
        __asm _emit 0x23
        mov al, cl
        sub al, 61h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x588636b5
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 57h
        ; Exact mapped bytes EB 13: jmp 0x588636c8
        __asm _emit 0xeb
        __asm _emit 0x13
        mov al, cl
        sub al, 41h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x588636c5
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 37h
        ; Exact mapped bytes EB 03: jmp 0x588636c8
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        cmp eax, edi
        ; Exact mapped bytes 77 1A: ja 0x588636e6
        __asm _emit 0x77
        __asm _emit 0x1a
        mov ch, 1
        cmp ebx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 74 03: je 0x588636d6
        __asm _emit 0x74
        __asm _emit 0x03
        mov byte ptr [ebx], al
        inc ebx
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        mov dl, cl
        mov byte ptr [ebp - 6], cl
        mov al, cl
        ; Exact mapped bytes EB AE: jmp 0x58863694
        __asm _emit 0xeb
        __asm _emit 0xae
        mov dword ptr [ebp - 0ch], ebx
        xor ebx, ebx
        test ch, ch
        ; Exact mapped bytes 75 1E: jne 0x5886370d
        __asm _emit 0x75
        __asm _emit 0x1e
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 1D 04 00 00: call 0x58863b14
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 0A: je 0x58863705
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp byte ptr [ebp - 1], 0
        ; Exact mapped bytes 0F 85 66 01 00 00: jne 0x5886386b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 7
        pop eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
        push dword ptr [ebp - 6]
        mov ecx, esi
        ; Exact mapped bytes E8 29 27 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov dword ptr [ebp - 14h], eax
        mov cl, byte ptr [eax]
        lea edx, [eax + 1]
        mov dword ptr [esi], edx
        mov al, bl
        mov byte ptr [ebp - 6], cl
        cmp cl, 45h
        ; Exact mapped bytes 74 14: je 0x58863741
        __asm _emit 0x74
        __asm _emit 0x14
        cmp cl, 50h
        ; Exact mapped bytes 74 0A: je 0x5886373c
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp cl, 65h
        ; Exact mapped bytes 74 0A: je 0x58863741
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp cl, 70h
        ; Exact mapped bytes 75 0A: jne 0x58863746
        __asm _emit 0x75
        __asm _emit 0x0a
        mov al, byte ptr [ebp - 1]
        ; Exact mapped bytes EB 05: jmp 0x58863746
        __asm _emit 0xeb
        __asm _emit 0x05
        mov al, byte ptr [ebp - 1]
        xor al, 1
        mov edi, 1450h
        test al, al
        ; Exact mapped bytes 0F 84 F6 00 00 00: je 0x58863849
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ch, byte ptr [edx]
        inc edx
        mov dword ptr [esi], edx
        mov cl, ch
        mov byte ptr [ebp - 6], cl
        cmp ch, 2bh
        ; Exact mapped bytes 74 09: je 0x5886376b
        __asm _emit 0x74
        __asm _emit 0x09
        mov al, ch
        mov ah, ch
        cmp ch, 2dh
        ; Exact mapped bytes 75 0C: jne 0x58863777
        __asm _emit 0x75
        __asm _emit 0x0c
        mov cl, byte ptr [edx]
        inc edx
        mov dword ptr [esi], edx
        mov al, cl
        mov byte ptr [ebp - 6], cl
        mov ah, cl
        mov byte ptr [ebp - 2], bl
        cmp al, 30h
        ; Exact mapped bytes 75 17: jne 0x58863795
        __asm _emit 0x75
        __asm _emit 0x17
        mov byte ptr [ebp - 2], 1
        mov cl, byte ptr [edx]
        inc edx
        mov dword ptr [esi], edx
        mov ah, cl
        mov byte ptr [ebp - 6], cl
        cmp cl, 30h
        ; Exact mapped bytes 74 F1: je 0x58863782
        __asm _emit 0x74
        __asm _emit 0xf1
        mov al, cl
        cmp al, 30h
        ; Exact mapped bytes 7C 0D: jl 0x588637a4
        __asm _emit 0x7c
        __asm _emit 0x0d
        cmp ah, 39h
        ; Exact mapped bytes 7F 08: jg 0x588637a4
        __asm _emit 0x7f
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 30h
        ; Exact mapped bytes EB 1E: jmp 0x588637c2
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov al, cl
        sub al, 61h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x588637b4
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 57h
        ; Exact mapped bytes EB 0E: jmp 0x588637c2
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov al, cl
        sub al, 41h
        cmp al, 19h
        ; Exact mapped bytes 77 29: ja 0x588637e5
        __asm _emit 0x77
        __asm _emit 0x29
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 37h
        cmp eax, 0ah
        ; Exact mapped bytes 73 1E: jae 0x588637e5
        __asm _emit 0x73
        __asm _emit 0x1e
        imul ebx, ebx, 0ah
        mov byte ptr [ebp - 2], 1
        add ebx, eax
        cmp ebx, edi
        ; Exact mapped bytes 7F 0C: jg 0x588637e0
        __asm _emit 0x7f
        __asm _emit 0x0c
        mov cl, byte ptr [edx]
        inc edx
        mov dword ptr [esi], edx
        mov ah, cl
        mov byte ptr [ebp - 6], cl
        ; Exact mapped bytes EB B1: jmp 0x58863791
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov ebx, 1451h
        mov al, cl
        sub al, 30h
        cmp al, 9
        ; Exact mapped bytes 77 08: ja 0x588637f5
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 30h
        ; Exact mapped bytes EB 1E: jmp 0x58863813
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov al, cl
        sub al, 61h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x58863805
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 57h
        ; Exact mapped bytes EB 0E: jmp 0x58863813
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov al, cl
        sub al, 41h
        cmp al, 19h
        ; Exact mapped bytes 77 15: ja 0x58863822
        __asm _emit 0x77
        __asm _emit 0x15
        ; Exact mapped bytes 0F BE C1: movsx eax, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc1
        sub eax, 37h
        cmp eax, 0ah
        ; Exact mapped bytes 73 0A: jae 0x58863822
        __asm _emit 0x73
        __asm _emit 0x0a
        mov cl, byte ptr [edx]
        inc edx
        mov dword ptr [esi], edx
        mov byte ptr [ebp - 6], cl
        ; Exact mapped bytes EB C3: jmp 0x588637e5
        __asm _emit 0xeb
        __asm _emit 0xc3
        cmp ch, 2dh
        ; Exact mapped bytes 75 02: jne 0x58863829
        __asm _emit 0x75
        __asm _emit 0x02
        neg ebx
        cmp byte ptr [ebp - 2], 0
        ; Exact mapped bytes 75 1A: jne 0x58863849
        __asm _emit 0x75
        __asm _emit 0x1a
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 DD 02 00 00: call 0x58863b14
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 C6 FE FF FF: je 0x58863705
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov dl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        mov byte ptr [ebp - 6], dl
        push dword ptr [ebp - 6]
        mov ecx, esi
        ; Exact mapped bytes E8 ED 25 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x25
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 18h]
        ; Exact mapped bytes EB 0C: jmp 0x58863867
        __asm _emit 0xeb
        __asm _emit 0x0c
        lea eax, [edx - 1]
        mov ecx, edx
        cmp byte ptr [eax], 0
        mov edx, eax
        ; Exact mapped bytes 75 0B: jne 0x58863872
        __asm _emit 0x75
        __asm _emit 0x0b
        cmp edx, esi
        ; Exact mapped bytes 75 F0: jne 0x5886385b
        __asm _emit 0x75
        __asm _emit 0xf0
        push 2
        ; Exact mapped bytes E9 95 FE FF FF: jmp 0x58863707
        __asm _emit 0xe9
        __asm _emit 0x95
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp ebx, edi
        ; Exact mapped bytes 7F 45: jg 0x588638bb
        __asm _emit 0x7f
        __asm _emit 0x45
        cmp ebx, 0ffffebb0h
        ; Exact mapped bytes 7C 36: jl 0x588638b4
        __asm _emit 0x7c
        __asm _emit 0x36
        mov dl, byte ptr [ebp - 1]
        push 4
        pop edi
        test dl, dl
        push 1
        pop eax
        cmovne eax, edi
        imul eax, dword ptr [ebp - 10h]
        add ebx, eax
        cmp ebx, 1450h
        ; Exact mapped bytes 7F 21: jg 0x588638bb
        __asm _emit 0x7f
        __asm _emit 0x21
        cmp ebx, 0ffffebb0h
        ; Exact mapped bytes 7C 12: jl 0x588638b4
        __asm _emit 0x7c
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 10h]
        sub ecx, esi
        mov dword ptr [eax], ebx
        mov dword ptr [eax + 4], ecx
        movzx eax, dl
        ; Exact mapped bytes E9 54 FE FF FF: jmp 0x58863708
        __asm _emit 0xe9
        __asm _emit 0x54
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        ; Exact mapped bytes E9 4C FE FF FF: jmp 0x58863707
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push 9
        ; Exact mapped bytes E9 45 FE FF FF: jmp 0x58863707
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 14h]
        lea eax, [ebp - 6]
        push esi
        push eax
        ; Exact mapped bytes E8 C9 00 00 00: call 0x58863998
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 31 FE FF FF: jmp 0x58863708
        __asm _emit 0xe9
        __asm _emit 0x31
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 14h]
        lea eax, [ebp - 6]
        push esi
        push eax
        ; Exact mapped bytes E8 02 00 00 00: call 0x588638e6
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E9: jmp 0x588638cf
        __asm _emit 0xeb
        __asm _emit 0xe9
    }
}
