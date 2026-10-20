// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042129E .. +0x205 bytes.
extern "C" __declspec(naked) void FUN_0042129e_0042129E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        and dword ptr [ebp - 8], 0
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov bl, byte ptr [edi]
        lea esi, [edi + 1]
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes 83 3D CC AE 44 00 01: cmp dword ptr [0x44aecc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0F: jle 0x4212ce
        __asm _emit 0x7e
        __asm _emit 0x0f
        movzx eax, bl
        push 8
        push eax
        ; Exact mapped bytes E8 3A 14 00 00: call 0x422704
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 0F: jmp 0x4212dd
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes 8B 0D C0 AC 44 00: mov ecx, dword ptr [0x44acc0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        movzx eax, bl
        mov al, byte ptr [ecx + eax*2]
        and eax, 8
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4212e6
        __asm _emit 0x74
        __asm _emit 0x05
        mov bl, byte ptr [esi]
        inc esi
        ; Exact mapped bytes EB D0: jmp 0x4212b6
        __asm _emit 0xeb
        __asm _emit 0xd0
        cmp bl, 2dh
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes 75 06: jne 0x4212f4
        __asm _emit 0x75
        __asm _emit 0x06
        or dword ptr [ebp + 14h], 2
        ; Exact mapped bytes EB 05: jmp 0x4212f9
        __asm _emit 0xeb
        __asm _emit 0x05
        cmp bl, 2bh
        ; Exact mapped bytes 75 06: jne 0x4212ff
        __asm _emit 0x75
        __asm _emit 0x06
        mov bl, byte ptr [esi]
        inc esi
        mov dword ptr [ebp - 4], esi
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 0F 8C 89 01 00 00: jl 0x421493
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 0F 84 80 01 00 00: je 0x421493
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 24h
        ; Exact mapped bytes 0F 8F 77 01 00 00: jg 0x421493
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x77
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        test eax, eax
        pop ecx
        ; Exact mapped bytes 75 24: jne 0x421347
        __asm _emit 0x75
        __asm _emit 0x24
        cmp bl, 30h
        ; Exact mapped bytes 74 09: je 0x421331
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp + 10h], 0ah
        ; Exact mapped bytes EB 32: jmp 0x421363
        __asm _emit 0xeb
        __asm _emit 0x32
        mov al, byte ptr [esi]
        cmp al, 78h
        ; Exact mapped bytes 74 0D: je 0x421344
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp al, 58h
        ; Exact mapped bytes 74 09: je 0x421344
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp + 10h], 8
        ; Exact mapped bytes EB 1F: jmp 0x421363
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov dword ptr [ebp + 10h], ecx
        cmp dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes 75 17: jne 0x421363
        __asm _emit 0x75
        __asm _emit 0x17
        cmp bl, 30h
        ; Exact mapped bytes 75 12: jne 0x421363
        __asm _emit 0x75
        __asm _emit 0x12
        mov al, byte ptr [esi]
        cmp al, 78h
        ; Exact mapped bytes 74 04: je 0x42135b
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 58h
        ; Exact mapped bytes 75 08: jne 0x421363
        __asm _emit 0x75
        __asm _emit 0x08
        mov bl, byte ptr [esi + 1]
        inc esi
        inc esi
        mov dword ptr [ebp - 4], esi
        or eax, 0ffffffffh
        xor edx, edx
        div dword ptr [ebp + 10h]
        mov edi, 103h
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 83 3D CC AE 44 00 01: cmp dword ptr [0x44aecc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        movzx esi, bl
        ; Exact mapped bytes 7E 0C: jle 0x42138b
        __asm _emit 0x7e
        __asm _emit 0x0c
        push 4
        push esi
        ; Exact mapped bytes E8 7D 13 00 00: call 0x422704
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 0B: jmp 0x421396
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes A1 C0 AC 44 00: mov eax, dword ptr [0x44acc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        mov al, byte ptr [eax + esi*2]
        and eax, 4
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4213a2
        __asm _emit 0x74
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE CB: movsx ecx, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xcb
        sub ecx, 30h
        ; Exact mapped bytes EB 32: jmp 0x4213d4
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes 83 3D CC AE 44 00 01: cmp dword ptr [0x44aecc], 1
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0xcc
        __asm _emit 0xae
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x01
        ; Exact mapped bytes 7E 0B: jle 0x4213b6
        __asm _emit 0x7e
        __asm _emit 0x0b
        push edi
        push esi
        ; Exact mapped bytes E8 52 13 00 00: call 0x422704
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        ; Exact mapped bytes EB 0B: jmp 0x4213c1
        __asm _emit 0xeb
        __asm _emit 0x0b
        ; Exact mapped bytes A1 C0 AC 44 00: mov eax, dword ptr [0x44acc0]
        __asm _emit 0xa1
        __asm _emit 0xc0
        __asm _emit 0xac
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 04 70: mov ax, word ptr [eax + esi*2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x70
        and eax, edi
        test eax, eax
        ; Exact mapped bytes 74 4A: je 0x42140f
        __asm _emit 0x74
        __asm _emit 0x4a
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        push eax
        ; Exact mapped bytes E8 AF 50 00 00: call 0x42647d
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, eax
        sub ecx, 37h
        cmp ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 73 36: jae 0x42140f
        __asm _emit 0x73
        __asm _emit 0x36
        mov esi, dword ptr [ebp - 8]
        or dword ptr [ebp + 14h], 8
        cmp esi, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 72 14: jb 0x4213f9
        __asm _emit 0x72
        __asm _emit 0x14
        ; Exact mapped bytes 75 0C: jne 0x4213f3
        __asm _emit 0x75
        __asm _emit 0x0c
        or eax, 0ffffffffh
        xor edx, edx
        div dword ptr [ebp + 10h]
        cmp ecx, edx
        ; Exact mapped bytes 76 06: jbe 0x4213f9
        __asm _emit 0x76
        __asm _emit 0x06
        or dword ptr [ebp + 14h], 4
        ; Exact mapped bytes EB 09: jmp 0x421402
        __asm _emit 0xeb
        __asm _emit 0x09
        imul esi, dword ptr [ebp + 10h]
        add esi, ecx
        mov dword ptr [ebp - 8], esi
        mov eax, dword ptr [ebp - 4]
        inc dword ptr [ebp - 4]
        mov bl, byte ptr [eax]
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x421373
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 14h]
        dec dword ptr [ebp - 4]
        mov ebx, dword ptr [ebp + 0ch]
        test al, 8
        ; Exact mapped bytes 75 10: jne 0x42142c
        __asm _emit 0x75
        __asm _emit 0x10
        test ebx, ebx
        ; Exact mapped bytes 74 06: je 0x421426
        __asm _emit 0x74
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        and dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 4B: jmp 0x421477
        __asm _emit 0xeb
        __asm _emit 0x4b
        test al, 4
        mov esi, 7fffffffh
        ; Exact mapped bytes 75 1B: jne 0x421450
        __asm _emit 0x75
        __asm _emit 0x1b
        test al, 1
        ; Exact mapped bytes 75 3E: jne 0x421477
        __asm _emit 0x75
        __asm _emit 0x3e
        and eax, 2
        ; Exact mapped bytes 74 09: je 0x421447
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 8], 80000000h
        ; Exact mapped bytes 77 09: ja 0x421450
        __asm _emit 0x77
        __asm _emit 0x09
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x421477
        __asm _emit 0x75
        __asm _emit 0x2c
        cmp dword ptr [ebp - 8], esi
        ; Exact mapped bytes 76 27: jbe 0x421477
        __asm _emit 0x76
        __asm _emit 0x27
        ; Exact mapped bytes E8 85 07 00 00: call 0x421bda
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x07
        __asm _emit 0x00
        __asm _emit 0x00
        test byte ptr [ebp + 14h], 1
        mov dword ptr [eax], 22h
        ; Exact mapped bytes 74 06: je 0x421467
        __asm _emit 0x74
        __asm _emit 0x06
        or dword ptr [ebp - 8], 0ffffffffh
        ; Exact mapped bytes EB 10: jmp 0x421477
        __asm _emit 0xeb
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 14h]
        and al, 2
        neg al
        sbb eax, eax
        neg eax
        add eax, esi
        mov dword ptr [ebp - 8], eax
        test ebx, ebx
        ; Exact mapped bytes 74 05: je 0x421480
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebx], eax
        test byte ptr [ebp + 14h], 2
        ; Exact mapped bytes 74 08: je 0x42148e
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        neg eax
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 0B: jmp 0x42149e
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x42149c
        __asm _emit 0x74
        __asm _emit 0x02
        mov dword ptr [eax], edi
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
