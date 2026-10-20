// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853973 .. +0x285 bytes.
extern "C" __declspec(naked) void FUN_58853973_58853973() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        mov esi, ecx
        push edi
        push dword ptr [esi + 8]
        lea ecx, [esi + 448h]
        ; Exact mapped bytes E8 88 25 00 00: call 0x58855f16
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 74 27: je 0x588539b9
        __asm _emit 0x74
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 0ch]
        test ecx, ecx
        ; Exact mapped bytes 75 28: jne 0x588539c1
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [esi + 8]
        xor ebx, ebx
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        push dword ptr [esi + 8]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 78 D5 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        pop edi
        pop esi
        pop ebx
        leave
        ret
        mov eax, dword ptr [esi + 450h]
        inc eax
        mov dword ptr [esi + 450h], eax
        cmp eax, 2
        ; Exact mapped bytes 0F 84 CD 01 00 00: je 0x58853ba4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        mov dword ptr [esi + 34h], ebx
        mov byte ptr [esi + 18h], bl
        mov dl, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebp - 1], dl
        mov dword ptr [esi + 0ch], ecx
        mov byte ptr [esi + 2dh], dl
        test dl, dl
        ; Exact mapped bytes 0F 84 9E 01 00 00: je 0x58853b91
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 9], dl
        lea eax, [esi + 14h]
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 0F 8C 90 01 00 00: jl 0x58853b91
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x90
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, byte ptr [esi + 18h]
        mov ecx, esi
        push eax
        push dword ptr [ebp - 9]
        ; Exact mapped bytes E8 5B FD FF FF: call 0x5885376b
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [esi + 18h], al
        cmp al, 8
        ; Exact mapped bytes 0F 83 CA 01 00 00: jae 0x58853be5
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, al
        cmp eax, 7
        ; Exact mapped bytes 77 96: ja 0x588539b9
        __asm _emit 0x77
        __asm _emit 0x96
        ; Exact mapped bytes FF 24 85 FB 3B 85 58: jmp dword ptr [eax*4 + 0x58853bfb]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xfb
        __asm _emit 0x3b
        __asm _emit 0x85
        __asm _emit 0x58
        mov edi, dword ptr [esi + 8]
        mov byte ptr [esi + 38h], bl
        cmp byte ptr [edi + 14h], bl
        ; Exact mapped bytes 75 07: jne 0x58853a3c
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 64 24 00 00: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + 2dh]
        mov dword ptr [ebp - 10h], eax
        mov byte ptr [ebp - 5], al
        ; Exact mapped bytes 0F BE C0: movsx eax, al
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc0
        push 8000h
        push eax
        mov eax, dword ptr [edi + 0ch]
        push dword ptr [eax]
        ; Exact mapped bytes E8 9D 27 00 00: call 0x588561f5
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        lea edi, [esi + 14h]
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x58853a8b
        __asm _emit 0x74
        __asm _emit 0x29
        push dword ptr [esi + 8]
        lea ecx, [esi + 448h]
        push edi
        push dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 92 25 00 00: call 0x58856006
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0ch]
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi + 0ch], eax
        mov byte ptr [esi + 2dh], cl
        test cl, cl
        ; Exact mapped bytes 0F 84 24 01 00 00: je 0x58853bac
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x24
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ebp - 5], cl
        push dword ptr [esi + 8]
        lea ecx, [esi + 448h]
        push edi
        push dword ptr [ebp - 5]
        ; Exact mapped bytes E8 69 25 00 00: call 0x58856006
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x58853b72
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 24h], 0ffffffffh
        mov dword ptr [esi + 20h], ebx
        mov byte ptr [esi + 2ch], bl
        mov dword ptr [esi + 1ch], ebx
        mov dword ptr [esi + 28h], ebx
        mov byte ptr [esi + 38h], bl
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x58853b72
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 45 FF: movsx eax, byte ptr [ebp - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xff
        sub eax, 20h
        ; Exact mapped bytes 74 37: je 0x58853afa
        __asm _emit 0x74
        __asm _emit 0x37
        sub eax, 3
        ; Exact mapped bytes 74 2C: je 0x58853af4
        __asm _emit 0x74
        __asm _emit 0x2c
        sub eax, 8
        ; Exact mapped bytes 74 21: je 0x58853aee
        __asm _emit 0x74
        __asm _emit 0x21
        dec eax
        sub eax, 1
        ; Exact mapped bytes 74 12: je 0x58853ae5
        __asm _emit 0x74
        __asm _emit 0x12
        sub eax, 3
        ; Exact mapped bytes 0F 85 96 00 00 00: jne 0x58853b72
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 8
        ; Exact mapped bytes E9 8D 00 00 00: jmp 0x58853b72
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 4
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x58853b72
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        or dword ptr [esi + 1ch], 1
        ; Exact mapped bytes EB 7E: jmp 0x58853b72
        __asm _emit 0xeb
        __asm _emit 0x7e
        or dword ptr [esi + 1ch], 20h
        ; Exact mapped bytes EB 78: jmp 0x58853b72
        __asm _emit 0xeb
        __asm _emit 0x78
        or dword ptr [esi + 1ch], 2
        ; Exact mapped bytes EB 72: jmp 0x58853b72
        __asm _emit 0xeb
        __asm _emit 0x72
        cmp byte ptr [ebp - 1], 2ah
        ; Exact mapped bytes 74 0D: je 0x58853b13
        __asm _emit 0x74
        __asm _emit 0x0d
        lea eax, [esi + 20h]
        push eax
        mov ecx, esi
        ; Exact mapped bytes E8 70 FD FF FF: call 0x58853881
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 57: jmp 0x58853b6a
        __asm _emit 0xeb
        __asm _emit 0x57
        mov ecx, dword ptr [esi + 10h]
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [esi + 20h], eax
        test eax, eax
        ; Exact mapped bytes 79 09: jns 0x58853b2e
        __asm _emit 0x79
        __asm _emit 0x09
        or dword ptr [esi + 1ch], 4
        neg eax
        mov dword ptr [esi + 20h], eax
        mov al, 1
        ; Exact mapped bytes EB 38: jmp 0x58853b6a
        __asm _emit 0xeb
        __asm _emit 0x38
        mov dword ptr [esi + 24h], ebx
        ; Exact mapped bytes EB 3B: jmp 0x58853b72
        __asm _emit 0xeb
        __asm _emit 0x3b
        cmp byte ptr [ebp - 1], 2ah
        ; Exact mapped bytes 74 05: je 0x58853b42
        __asm _emit 0x74
        __asm _emit 0x05
        lea eax, [esi + 24h]
        ; Exact mapped bytes EB C7: jmp 0x58853b09
        __asm _emit 0xeb
        __asm _emit 0xc7
        mov ecx, dword ptr [esi + 10h]
        lea eax, [ecx + 4]
        mov dword ptr [esi + 10h], eax
        mov eax, dword ptr [ecx]
        mov dword ptr [esi + 24h], eax
        test eax, eax
        ; Exact mapped bytes 79 DA: jns 0x58853b2e
        __asm _emit 0x79
        __asm _emit 0xda
        or dword ptr [esi + 24h], 0ffffffffh
        ; Exact mapped bytes EB D4: jmp 0x58853b2e
        __asm _emit 0xeb
        __asm _emit 0xd4
        mov ecx, esi
        ; Exact mapped bytes E8 CE 08 00 00: call 0x5885442f
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 07: jmp 0x58853b6a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 01 0D 00 00: call 0x5885486b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test al, al
        ; Exact mapped bytes 0F 84 47 FE FF FF: je 0x588539b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0ch]
        mov dl, byte ptr [eax]
        lea ecx, [eax + 1]
        mov dword ptr [esi + 0ch], ecx
        lea eax, [esi + 14h]
        mov byte ptr [ebp - 1], dl
        mov byte ptr [esi + 2dh], dl
        mov byte ptr [ebp - 9], dl
        test dl, dl
        ; Exact mapped bytes 0F 85 68 FE FF FF: jne 0x588539f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        inc dword ptr [esi + 450h]
        cmp dword ptr [esi + 450h], 2
        ; Exact mapped bytes 0F 85 35 FE FF FF: jne 0x588539d9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 14h]
        ; Exact mapped bytes E9 10 FE FF FF: jmp 0x588539bc
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        push 16h
        pop edi
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], edi
        push dword ptr [esi + 8]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 68 D3 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], edi
        push dword ptr [esi + 8]
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 51 D3 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 30h
        ; Exact mapped bytes E9 D4 FD FF FF: jmp 0x588539b9
        __asm _emit 0xe9
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [esi + 8]
        mov byte ptr [ecx + 1ch], 1
        mov dword ptr [ecx + 18h], 16h
        ; Exact mapped bytes E9 B1 FD FF FF: jmp 0x588539a9
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
