// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587AAF50 .. +0x5D1 bytes.
extern "C" __declspec(naked) void FUN_587aaf50_587AAF50() {
    __asm {
        sub esp, 1ch
        mov edx, dword ptr [esp + 24h]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        xor cl, cl
        mov dword ptr [esp + 0ch], 58905d80h
        push ebx
        mov ebx, dword ptr [esp + 24h]
        ; Exact mapped bytes 0F 11 02: movups xmmword ptr [edx], xmm0
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x02
        mov byte ptr [esp + 0ch], cl
        ; Exact mapped bytes 66 0F D6 42 10: movq qword ptr [edx + 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xd6
        __asm _emit 0x42
        __asm _emit 0x10
        mov dword ptr [edx + 18h], 0
        mov byte ptr [esp + 0ah], 10h
        mov ch, byte ptr [ebx]
        inc ebx
        movzx eax, ch
        sub eax, 26h
        mov byte ptr [esp + 28h], ch
        cmp eax, 0cdh
        ; Exact mapped bytes 77 43: ja 0x587aafd8
        __asm _emit 0x77
        __asm _emit 0x43
        movzx eax, byte ptr [eax + 587ab540h]
        ; Exact mapped bytes FF 24 85 24 B5 7A 58: jmp dword ptr [eax*4 + 0x587ab524]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x24
        __asm _emit 0xb5
        __asm _emit 0x7a
        __asm _emit 0x58
        mov byte ptr [edx + 1], ch
        or cl, 4
        ; Exact mapped bytes EB 26: jmp 0x587aafd1
        __asm _emit 0xeb
        __asm _emit 0x26
        mov byte ptr [edx + 1], ch
        or cl, 2
        ; Exact mapped bytes EB 1E: jmp 0x587aafd1
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov byte ptr [edx + 2], ch
        or cl, 20h
        ; Exact mapped bytes EB 16: jmp 0x587aafd1
        __asm _emit 0xeb
        __asm _emit 0x16
        mov byte ptr [edx + 3], ch
        or cl, 40h
        ; Exact mapped bytes EB 0E: jmp 0x587aafd1
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov byte ptr [edx + 4], ch
        or cl, 8
        ; Exact mapped bytes EB 06: jmp 0x587aafd1
        __asm _emit 0xeb
        __asm _emit 0x06
        mov byte ptr [edx + 5], ch
        or cl, 10h
        add byte ptr [esp + 0ah], 0ffh
        ; Exact mapped bytes 75 A9: jne 0x587aaf81
        __asm _emit 0x75
        __asm _emit 0xa9
        push esi
        push edi
        movzx edi, cl
        mov esi, 1
        shl edi, 17h
        test cl, cl
        movzx eax, cl
        cmovne esi, eax
        mov dword ptr [edx + 18h], edi
        mov dword ptr [esp + 20h], esi
        mov byte ptr [edx + 6], ch
        cmp ch, 0fh
        ; Exact mapped bytes 75 18: jne 0x587ab014
        __asm _emit 0x75
        __asm _emit 0x18
        mov ch, byte ptr [ebx]
        inc ebx
        mov cl, byte ptr [esp + 20h]
        mov byte ptr [esp + 30h], ch
        mov byte ptr [edx + 7], ch
        mov dword ptr [esp + 18h], 58905dcah
        ; Exact mapped bytes EB 24: jmp 0x587ab038
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, dword ptr [esp + 20h]
        mov cl, al
        mov byte ptr [esp + 0eh], cl
        cmp ch, 0a0h
        ; Exact mapped bytes 72 19: jb 0x587ab03c
        __asm _emit 0x72
        __asm _emit 0x19
        mov byte ptr [esp + 0eh], cl
        cmp ch, 0a3h
        ; Exact mapped bytes 77 10: ja 0x587ab03c
        __asm _emit 0x77
        __asm _emit 0x10
        test al, 10h
        ; Exact mapped bytes 74 05: je 0x587ab035
        __asm _emit 0x74
        __asm _emit 0x05
        or cl, 8
        ; Exact mapped bytes EB 03: jmp 0x587ab038
        __asm _emit 0xeb
        __asm _emit 0x03
        and cl, 0f7h
        mov byte ptr [esp + 0eh], cl
        movzx eax, ch
        push ebp
        mov ebp, eax
        mov dword ptr [esp + 24h], eax
        mov esi, eax
        shr ebp, 2
        and esi, 80000003h
        ; Exact mapped bytes 79 05: jns 0x587ab058
        __asm _emit 0x79
        __asm _emit 0x05
        dec esi
        or esi, 0fffffffch
        inc esi
        mov eax, dword ptr [esp + 1ch]
        mov dword ptr [esp + 28h], esi
        movzx eax, byte ptr [eax + ebp]
        add eax, esi
        mov esi, dword ptr [esp + 1ch]
        mov al, byte ptr [eax + esi]
        mov dword ptr [esp + 1ch], eax
        cmp al, 0ffh
        ; Exact mapped bytes 75 2C: jne 0x587ab0a1
        __asm _emit 0x75
        __asm _emit 0x2c
        xor al, al
        or edi, 3000h
        mov dword ptr [esp + 1ch], eax
        mov eax, dword ptr [esp + 24h]
        and eax, 0fffffffdh
        mov dword ptr [edx + 18h], edi
        cmp eax, 24h
        ; Exact mapped bytes 75 0D: jne 0x587ab09d
        __asm _emit 0x75
        __asm _emit 0x0d
        mov al, 1
        mov byte ptr [esp + 20h], 0
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes EB 22: jmp 0x587ab0bf
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [esp + 1ch]
        mov byte ptr [esp + 20h], 0
        test al, al
        ; Exact mapped bytes 79 15: jns 0x587ab0bf
        __asm _emit 0x79
        __asm _emit 0x15
        movzx eax, al
        and eax, 7fh
        movzx eax, word ptr [eax + esi]
        mov dword ptr [esp + 1ch], eax
        shr eax, 8
        mov dword ptr [esp + 20h], eax
        mov al, byte ptr [edx + 7]
        mov esi, edi
        mov byte ptr [esp + 16h], al
        test al, al
        ; Exact mapped bytes 74 1D: je 0x587ab0e9
        __asm _emit 0x74
        __asm _emit 0x1d
        movzx eax, byte ptr [ebp + 58905eb0h]
        mov ebp, dword ptr [esp + 28h]
        test byte ptr [eax + ebp + 58905eb0h], cl
        ; Exact mapped bytes 74 09: je 0x587ab0e9
        __asm _emit 0x74
        __asm _emit 0x09
        or esi, 3000h
        mov dword ptr [edx + 18h], esi
        mov eax, dword ptr [esp + 1ch]
        pop ebp
        test al, 1
        ; Exact mapped bytes 0F 84 29 03 00 00: je 0x587ab41f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x29
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        or esi, 1
        mov dword ptr [edx + 18h], esi
        mov edi, esi
        mov cl, byte ptr [ebx]
        mov al, cl
        mov byte ptr [edx + 8], cl
        shr al, 6
        mov byte ptr [esp + 10h], al
        mov byte ptr [edx + 9], al
        mov al, cl
        and al, 7
        shr cl, 3
        and cl, 7
        mov byte ptr [esp + 11h], al
        mov byte ptr [edx + 0bh], al
        mov eax, dword ptr [esp + 1ch]
        mov byte ptr [esp + 0fh], cl
        mov byte ptr [edx + 0ah], cl
        test al, al
        ; Exact mapped bytes 74 12: je 0x587ab141
        __asm _emit 0x74
        __asm _emit 0x12
        movzx eax, al
        shl eax, cl
        test al, al
        ; Exact mapped bytes 79 09: jns 0x587ab141
        __asm _emit 0x79
        __asm _emit 0x09
        or edi, 3000h
        mov dword ptr [edx + 18h], edi
        cmp byte ptr [esp + 12h], 0
        mov eax, edi
        ; Exact mapped bytes 75 4B: jne 0x587ab195
        __asm _emit 0x75
        __asm _emit 0x4b
        cmp ch, 0d9h
        ; Exact mapped bytes 72 46: jb 0x587ab195
        __asm _emit 0x72
        __asm _emit 0x46
        cmp ch, 0dfh
        ; Exact mapped bytes 77 41: ja 0x587ab195
        __asm _emit 0x77
        __asm _emit 0x41
        mov al, ch
        movzx esi, cl
        add al, 27h
        cmp byte ptr [esp + 10h], 3
        movzx eax, al
        ; Exact mapped bytes 75 0D: jne 0x587ab172
        __asm _emit 0x75
        __asm _emit 0x0d
        mov al, byte ptr [esi + eax*8 + 58905e78h]
        mov cl, byte ptr [esp + 11h]
        ; Exact mapped bytes EB 0C: jmp 0x587ab17e
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov al, byte ptr [eax + 58905e71h]
        mov ecx, esi
        mov ch, byte ptr [esp + 30h]
        shl al, cl
        mov byte ptr [esp + 13h], al
        mov eax, edi
        cmp byte ptr [esp + 13h], 0
        ; Exact mapped bytes 7D 08: jge 0x587ab195
        __asm _emit 0x7d
        __asm _emit 0x08
        or eax, 3000h
        mov dword ptr [edx + 18h], eax
        test byte ptr [esp + 0eh], 20h
        ; Exact mapped bytes 74 57: je 0x587ab1f3
        __asm _emit 0x74
        __asm _emit 0x57
        cmp byte ptr [esp + 10h], 3
        ; Exact mapped bytes 75 0A: jne 0x587ab1ad
        __asm _emit 0x75
        __asm _emit 0x0a
        or eax, 9000h
        mov dword ptr [edx + 18h], eax
        ; Exact mapped bytes EB 46: jmp 0x587ab1f3
        __asm _emit 0xeb
        __asm _emit 0x46
        cmp byte ptr [esp + 12h], 0
        mov cl, ch
        ; Exact mapped bytes 74 0C: je 0x587ab1c2
        __asm _emit 0x74
        __asm _emit 0x0c
        mov esi, 58905f39h
        mov edi, 58905f4bh
        ; Exact mapped bytes EB 0F: jmp 0x587ab1d1
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov cl, ch
        mov esi, 58905f21h
        mov edi, 58905f39h
        and cl, 0feh
        cmp byte ptr [esi], cl
        ; Exact mapped bytes 74 09: je 0x587ab1de
        __asm _emit 0x74
        __asm _emit 0x09
        add esi, 2
        cmp esi, edi
        ; Exact mapped bytes 75 F5: jne 0x587ab1d1
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes EB 0E: jmp 0x587ab1ec
        __asm _emit 0xeb
        __asm _emit 0x0e
        movzx eax, byte ptr [esi + 1]
        mov cl, byte ptr [esp + 0fh]
        shl eax, cl
        test al, al
        ; Exact mapped bytes 79 07: jns 0x587ab1f3
        __asm _emit 0x79
        __asm _emit 0x07
        or dword ptr [edx + 18h], 9000h
        cmp byte ptr [esp + 12h], 0
        mov ecx, dword ptr [esp + 20h]
        ; Exact mapped bytes 74 4B: je 0x587ab249
        __asm _emit 0x74
        __asm _emit 0x4b
        lea eax, [ecx - 20h]
        cmp eax, 3
        ; Exact mapped bytes 77 59: ja 0x587ab25f
        __asm _emit 0x77
        __asm _emit 0x59
        ; Exact mapped bytes FF 24 85 10 B6 7A 58: jmp dword ptr [eax*4 + 0x587ab610]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0xb6
        __asm _emit 0x7a
        __asm _emit 0x58
        mov al, byte ptr [esp + 0fh]
        mov byte ptr [esp + 10h], 3
        cmp al, 4
        ; Exact mapped bytes 0F 87 DB 00 00 00: ja 0x587ab2f9
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 1
        ; Exact mapped bytes 0F 85 DA 00 00 00: jne 0x587ab300
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 CE 00 00 00: jmp 0x587ab2f9
        __asm _emit 0xe9
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esp + 0fh]
        mov byte ptr [esp + 10h], 3
        cmp al, 4
        ; Exact mapped bytes 0F 84 BD 00 00 00: je 0x587ab2f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 5
        ; Exact mapped bytes 0F 85 BC 00 00 00: jne 0x587ab300
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x587ab2f9
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ecx
        sub eax, 8ch
        ; Exact mapped bytes 0F 84 9C 00 00 00: je 0x587ab2f2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub eax, 2
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x587ab2e6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [esp + 10h], 3
        mov al, byte ptr [edx + 7]
        ; Exact mapped bytes 75 4F: jne 0x587ab2b8
        __asm _emit 0x75
        __asm _emit 0x4f
        mov ah, byte ptr [esp + 30h]
        test al, al
        mov ecx, 58905f84h
        mov esi, 58905f5ah
        cmovne esi, ecx
        mov edi, 58905f5ah
        mov ecx, 58905f4bh
        cmovne ecx, edi
        cmp ecx, esi
        ; Exact mapped bytes 74 77: je 0x587ab304
        __asm _emit 0x74
        __asm _emit 0x77
        ; Exact mapped bytes 0F 1F 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x00
        mov al, byte ptr [ecx]
        inc ecx
        cmp al, ah
        ; Exact mapped bytes 74 09: je 0x587ab2a0
        __asm _emit 0x74
        __asm _emit 0x09
        add ecx, 2
        cmp ecx, esi
        ; Exact mapped bytes 75 F2: jne 0x587ab290
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes EB 64: jmp 0x587ab304
        __asm _emit 0xeb
        __asm _emit 0x64
        mov al, byte ptr [esp + 0eh]
        test byte ptr [ecx], al
        ; Exact mapped bytes 74 5C: je 0x587ab304
        __asm _emit 0x74
        __asm _emit 0x5c
        movzx eax, byte ptr [ecx + 1]
        mov cl, byte ptr [esp + 0fh]
        shl eax, cl
        test al, al
        ; Exact mapped bytes 79 43: jns 0x587ab2f9
        __asm _emit 0x79
        __asm _emit 0x43
        ; Exact mapped bytes EB 48: jmp 0x587ab300
        __asm _emit 0xeb
        __asm _emit 0x48
        test al, al
        ; Exact mapped bytes 74 44: je 0x587ab300
        __asm _emit 0x74
        __asm _emit 0x44
        lea eax, [ecx - 50h]
        cmp eax, 0a7h
        ; Exact mapped bytes 77 3A: ja 0x587ab300
        __asm _emit 0x77
        __asm _emit 0x3a
        movzx eax, byte ptr [eax + 587ab630h]
        ; Exact mapped bytes FF 24 85 20 B6 7A 58: jmp dword ptr [eax*4 + 0x587ab620]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x20
        __asm _emit 0xb6
        __asm _emit 0x7a
        __asm _emit 0x58
        test byte ptr [esp + 0eh], 9
        ; Exact mapped bytes 75 1E: jne 0x587ab2f9
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes EB 23: jmp 0x587ab300
        __asm _emit 0xeb
        __asm _emit 0x23
        test byte ptr [esp + 0eh], 6
        ; Exact mapped bytes 75 15: jne 0x587ab2f9
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes EB 1A: jmp 0x587ab300
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov al, byte ptr [esp + 0fh]
        cmp al, 1
        ; Exact mapped bytes 74 0B: je 0x587ab2f9
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp al, 5
        ; Exact mapped bytes EB 05: jmp 0x587ab2f7
        __asm _emit 0xeb
        __asm _emit 0x05
        cmp byte ptr [esp + 0fh], 5
        ; Exact mapped bytes 76 07: jbe 0x587ab300
        __asm _emit 0x76
        __asm _emit 0x07
        or dword ptr [edx + 18h], 11000h
        mov ah, byte ptr [esp + 30h]
        mov ch, byte ptr [ebx + 1]
        add ebx, 2
        cmp byte ptr [esp + 0fh], 1
        ; Exact mapped bytes 77 16: ja 0x587ab327
        __asm _emit 0x77
        __asm _emit 0x16
        cmp ah, 0f6h
        ; Exact mapped bytes 75 07: jne 0x587ab31d
        __asm _emit 0x75
        __asm _emit 0x07
        or byte ptr [esp + 18h], 2
        ; Exact mapped bytes EB 0A: jmp 0x587ab327
        __asm _emit 0xeb
        __asm _emit 0x0a
        cmp ah, 0f7h
        ; Exact mapped bytes 75 05: jne 0x587ab327
        __asm _emit 0x75
        __asm _emit 0x05
        or byte ptr [esp + 18h], 10h
        movzx eax, byte ptr [esp + 10h]
        mov esi, 4
        mov cl, byte ptr [esp + 0eh]
        sub eax, 0
        ; Exact mapped bytes 74 22: je 0x587ab35c
        __asm _emit 0x74
        __asm _emit 0x22
        sub eax, 1
        ; Exact mapped bytes 74 16: je 0x587ab355
        __asm _emit 0x74
        __asm _emit 0x16
        sub eax, 1
        ; Exact mapped bytes 75 41: jne 0x587ab385
        __asm _emit 0x75
        __asm _emit 0x41
        mov byte ptr [esp + 14h], 2
        test cl, 10h
        ; Exact mapped bytes 75 37: jne 0x587ab385
        __asm _emit 0x75
        __asm _emit 0x37
        mov byte ptr [esp + 14h], 4
        ; Exact mapped bytes EB 30: jmp 0x587ab385
        __asm _emit 0xeb
        __asm _emit 0x30
        mov byte ptr [esp + 14h], 1
        ; Exact mapped bytes EB 29: jmp 0x587ab385
        __asm _emit 0xeb
        __asm _emit 0x29
        test cl, 10h
        ; Exact mapped bytes 74 11: je 0x587ab372
        __asm _emit 0x74
        __asm _emit 0x11
        cmp byte ptr [esp + 11h], 6
        setne al
        sub al, 1
        and eax, 0ffffff02h
        ; Exact mapped bytes EB 0F: jmp 0x587ab381
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [esp + 14h]
        cmp byte ptr [esp + 11h], 5
        movzx eax, al
        cmove eax, esi
        mov dword ptr [esp + 14h], eax
        mov ah, byte ptr [esp + 10h]
        cmp ah, 3
        ; Exact mapped bytes 74 40: je 0x587ab3ce
        __asm _emit 0x74
        __asm _emit 0x40
        cmp byte ptr [esp + 11h], 4
        ; Exact mapped bytes 75 39: jne 0x587ab3ce
        __asm _emit 0x75
        __asm _emit 0x39
        test cl, 10h
        ; Exact mapped bytes 75 34: jne 0x587ab3ce
        __asm _emit 0x75
        __asm _emit 0x34
        or dword ptr [edx + 18h], 2
        mov al, ch
        shr al, 6
        inc ebx
        mov byte ptr [edx + 0dh], al
        mov al, ch
        shr al, 3
        mov byte ptr [edx + 0ch], ch
        and al, 7
        and ch, 7
        mov byte ptr [edx + 0eh], al
        mov byte ptr [edx + 0fh], ch
        cmp ch, 5
        ; Exact mapped bytes 75 0F: jne 0x587ab3ce
        __asm _emit 0x75
        __asm _emit 0x0f
        test ah, 1
        mov eax, dword ptr [esp + 14h]
        movzx eax, al
        cmove eax, esi
        ; Exact mapped bytes EB 04: jmp 0x587ab3d2
        __asm _emit 0xeb
        __asm _emit 0x04
        mov eax, dword ptr [esp + 14h]
        movzx esi, al
        dec ebx
        mov eax, esi
        sub eax, 1
        ; Exact mapped bytes 74 31: je 0x587ab40e
        __asm _emit 0x74
        __asm _emit 0x31
        sub eax, 1
        ; Exact mapped bytes 74 19: je 0x587ab3fb
        __asm _emit 0x74
        __asm _emit 0x19
        sub eax, 2
        ; Exact mapped bytes 75 30: jne 0x587ab417
        __asm _emit 0x75
        __asm _emit 0x30
        or dword ptr [edx + 18h], 80h
        mov eax, dword ptr [ebx]
        add ebx, esi
        mov dword ptr [edx + 14h], eax
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes EB 32: jmp 0x587ab42d
        __asm _emit 0xeb
        __asm _emit 0x32
        or dword ptr [edx + 18h], 40h
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        add ebx, esi
        ; Exact mapped bytes 66 89 42 14: mov word ptr [edx + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x14
        mov eax, dword ptr [esp + 18h]
        ; Exact mapped bytes EB 1F: jmp 0x587ab42d
        __asm _emit 0xeb
        __asm _emit 0x1f
        or dword ptr [edx + 18h], 20h
        mov al, byte ptr [ebx]
        mov byte ptr [edx + 14h], al
        mov eax, dword ptr [esp + 18h]
        add ebx, esi
        ; Exact mapped bytes EB 0E: jmp 0x587ab42d
        __asm _emit 0xeb
        __asm _emit 0x0e
        test cl, 20h
        ; Exact mapped bytes 74 09: je 0x587ab42d
        __asm _emit 0x74
        __asm _emit 0x09
        or esi, 9000h
        mov dword ptr [edx + 18h], esi
        pop edi
        pop esi
        test al, 10h
        ; Exact mapped bytes 74 4C: je 0x587ab47f
        __asm _emit 0x74
        __asm _emit 0x4c
        and cl, 8
        test al, 40h
        ; Exact mapped bytes 74 1E: je 0x587ab458
        __asm _emit 0x74
        __asm _emit 0x1e
        test cl, cl
        ; Exact mapped bytes 0F 84 95 00 00 00: je 0x587ab4d7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [edx + 18h], 108h
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        add ebx, 2
        ; Exact mapped bytes 66 89 42 10: mov word ptr [edx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x587ab4fa
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edx + 18h]
        test cl, cl
        ; Exact mapped bytes 74 12: je 0x587ab471
        __asm _emit 0x74
        __asm _emit 0x12
        or eax, 8
        mov dword ptr [edx + 18h], eax
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        add ebx, 2
        ; Exact mapped bytes 66 89 42 10: mov word ptr [edx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x10
        ; Exact mapped bytes EB 0E: jmp 0x587ab47f
        __asm _emit 0xeb
        __asm _emit 0x0e
        or eax, 10h
        mov dword ptr [edx + 18h], eax
        mov eax, dword ptr [ebx]
        add ebx, 4
        mov dword ptr [edx + 10h], eax
        mov ecx, dword ptr [esp + 10h]
        test cl, 4
        ; Exact mapped bytes 74 3B: je 0x587ab4c3
        __asm _emit 0x74
        __asm _emit 0x3b
        mov eax, dword ptr [edx + 18h]
        test al, 10h
        ; Exact mapped bytes 74 0F: je 0x587ab49e
        __asm _emit 0x74
        __asm _emit 0x0f
        or eax, 8
        mov dword ptr [edx + 18h], eax
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 66 89 42 14: mov word ptr [edx + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes EB 22: jmp 0x587ab4c0
        __asm _emit 0xeb
        __asm _emit 0x22
        test al, 8
        ; Exact mapped bytes 74 11: je 0x587ab4b3
        __asm _emit 0x74
        __asm _emit 0x11
        or eax, 800h
        mov dword ptr [edx + 18h], eax
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 66 89 42 14: mov word ptr [edx + 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x14
        ; Exact mapped bytes EB 0D: jmp 0x587ab4c0
        __asm _emit 0xeb
        __asm _emit 0x0d
        or eax, 8
        mov dword ptr [edx + 18h], eax
        ; Exact mapped bytes 66 8B 03: mov ax, word ptr [ebx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x03
        ; Exact mapped bytes 66 89 42 10: mov word ptr [edx + 0x10], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x42
        __asm _emit 0x10
        add ebx, 2
        test cl, 2
        ; Exact mapped bytes 74 0A: je 0x587ab4d2
        __asm _emit 0x74
        __asm _emit 0x0a
        or dword ptr [edx + 18h], 4
        mov al, byte ptr [ebx]
        inc ebx
        mov byte ptr [edx + 10h], al
        test cl, 40h
        ; Exact mapped bytes 74 11: je 0x587ab4e8
        __asm _emit 0x74
        __asm _emit 0x11
        or dword ptr [edx + 18h], 110h
        mov eax, dword ptr [ebx]
        add ebx, 4
        mov dword ptr [edx + 10h], eax
        ; Exact mapped bytes EB 12: jmp 0x587ab4fa
        __asm _emit 0xeb
        __asm _emit 0x12
        test cl, 20h
        ; Exact mapped bytes 74 0D: je 0x587ab4fa
        __asm _emit 0x74
        __asm _emit 0x0d
        or dword ptr [edx + 18h], 104h
        mov al, byte ptr [ebx]
        inc ebx
        mov byte ptr [edx + 10h], al
        sub bl, byte ptr [esp + 24h]
        mov byte ptr [edx], bl
        cmp bl, 0fh
        ; Exact mapped bytes 76 14: jbe 0x587ab519
        __asm _emit 0x76
        __asm _emit 0x14
        or dword ptr [edx + 18h], 5000h
        mov al, 0fh
        mov byte ptr [edx], 0fh
        movzx eax, al
        pop ebx
        add esp, 1ch
        ret
        movzx eax, bl
        pop ebx
        add esp, 1ch
        ret
    }
}
