// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464685 .. +0x373 bytes.
extern "C" __declspec(naked) void FUN_00464685_00464685() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        push edi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, 1b0h
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 EE A9 FD FF: call 0x43f0ac
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 1D 03 00 00: je 0x4649e8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1d
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov dl, byte ptr [ecx + 0b2h]
        shr dl, 5
        and dl, 1
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 3E: je 0x46472b
        __asm _emit 0x74
        __asm _emit 0x3e
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        shr al, 5
        and al, 1
        and eax, 0ffh
        cmp eax, 1
        ; Exact mapped bytes 0F 85 DE 01 00 00: jne 0x4648f0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xde
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 0F 84 C5 01 00 00: je 0x4648f0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        mov eax, dword ptr [edx + 0d78h]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 88 C0 00 00 00: mov cx, word ptr [eax + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test ecx, ecx
        ; Exact mapped bytes 0F 84 CB 00 00 00: je 0x464813
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 148h]
        shr eax, 0ch
        and eax, 0fh
        cmp eax, 1
        ; Exact mapped bytes 0F 85 B1 00 00 00: jne 0x464811
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 148h]
        shr edx, 4
        and edx, 0fh
        mov eax, dword ptr [ebp - 4]
        cmp edx, dword ptr [eax + 180h]
        ; Exact mapped bytes 0F 85 86 00 00 00: jne 0x464804
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 148h]
        shr edx, 4
        and edx, 0fh
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 148h]
        and ecx, 0fh
        cmp edx, ecx
        ; Exact mapped bytes 75 67: jne 0x464804
        __asm _emit 0x75
        __asm _emit 0x67
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [edx + 168h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 82 C0 00 00 00: mov ax, word ptr [edx + 0xc0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edi, dword ptr [ecx + 8bch]
        imul edi, eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 180h]
        shl edx, 6
        lea ecx, [eax + edx + 0cb0h]
        ; Exact mapped bytes E8 3B 3E 00 00: call 0x468620
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x3e
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, edi
        xor edx, edx
        mov ecx, 3e8h
        div ecx
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 168h]
        mov dword ptr [ecx + 18h], edx
        ; Exact mapped bytes EB 0D: jmp 0x464811
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 72 2E FE FF: call 0x44767e
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x2e
        __asm _emit 0xfe
        __asm _emit 0xff
        ; Exact mapped bytes E9 D7 01 00 00: jmp 0x4649e8
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 7F: jmp 0x464892
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 8]
        add ecx, dword ptr [edx + 13ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 168h]
        mov dword ptr [edx + 18h], ecx
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 168h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 13ch]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes DF 6D F0: fild qword ptr [ebp - 0x10]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xf0
        ; Exact mapped bytes DC C0: fadd st(0), st(0)
        __asm _emit 0xdc
        __asm _emit 0xc0
        ; Exact mapped bytes D8 35 20 1C 58 00: fdiv dword ptr [0x581c20]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x20
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 9C 4C 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ch]
        add ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 1ch], ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx + 144h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 168h]
        mov dword ptr [ecx + 1ch], eax
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        mov al, byte ptr [edx + 130h]
        cmp eax, 5
        ; Exact mapped bytes 7E 4C: jle 0x4648ee
        __asm _emit 0x7e
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 130h]
        cmp edx, 3dh
        ; Exact mapped bytes 7D 3C: jge 0x4648ee
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes DB 80 24 01 00 00: fild dword ptr [eax + 0x124]
        __asm _emit 0xdb
        __asm _emit 0x80
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes D8 0D 1C 1C 58 00: fmul dword ptr [0x581c1c]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 130h]
        mov eax, edx
        sub eax, 1
        cdq
        mov ecx, 5
        idiv ecx
        ; Exact mapped bytes D8 0C 85 B0 AC 5B 00: fmul dword ptr [eax*4 + 0x5bacb0]
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x85
        __asm _emit 0xb0
        __asm _emit 0xac
        __asm _emit 0x5b
        __asm _emit 0x00
        ; Exact mapped bytes E8 17 4C 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x4c
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 1c8h], eax
        ; Exact mapped bytes EB 7A: jmp 0x46496a
        __asm _emit 0xeb
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov al, byte ptr [edx + 0b2h]
        shr al, 5
        and al, 1
        and eax, 0ffh
        cmp eax, 1
        ; Exact mapped bytes 75 59: jne 0x46496a
        __asm _emit 0x75
        __asm _emit 0x59
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 120h], 1f4h
        ; Exact mapped bytes 76 16: jbe 0x464936
        __asm _emit 0x76
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + 120h], 1f4h
        mov dword ptr [ebp - 14h], 1f4h
        ; Exact mapped bytes EB 07: jmp 0x46493d
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 140h], 0
        ; Exact mapped bytes 74 21: je 0x46496a
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [ebp - 8]
        add eax, dword ptr [ecx + 140h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 168h]
        mov dword ptr [ecx + 1ch], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 120h], 0
        ; Exact mapped bytes 76 72: jbe 0x4649e8
        __asm _emit 0x76
        __asm _emit 0x72
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [eax + 168h]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 120h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes DF 6D E4: fild qword ptr [ebp - 0x1c]
        __asm _emit 0xdf
        __asm _emit 0x6d
        __asm _emit 0xe4
        ; Exact mapped bytes D8 0D 18 1C 58 00: fmul dword ptr [0x581c18]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 5C 4B 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x4b
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B4 00 00 00: call 0x464a5d
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 18h]
        add ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 18h], ecx
        mov ecx, dword ptr [ebp - 4]
        mov esi, dword ptr [ecx + 168h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 120h]
        shr eax, 1
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 01 00 00: call 0x464b18
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 1ch]
        add ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 168h]
        mov dword ptr [eax + 1ch], ecx
        pop edi
        pop esi
        add esp, 1ch
        cmp ebp, esp
        ; Exact mapped bytes E8 EC 3D 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
