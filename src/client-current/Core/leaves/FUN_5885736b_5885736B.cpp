// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5885736B .. +0x2B0 bytes.
extern "C" __declspec(naked) void FUN_5885736b_5885736B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 28h
        lea ecx, [ebp + 0ch]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 14h]
        push edi
        ; Exact mapped bytes E8 7A EB FF FF: call 0x58855efb
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xeb
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 2C: je 0x588573b1
        __asm _emit 0x74
        __asm _emit 0x2c
        test esi, esi
        ; Exact mapped bytes 74 3D: je 0x588573c6
        __asm _emit 0x74
        __asm _emit 0x3d
        cmp esi, 2
        ; Exact mapped bytes 7C 05: jl 0x58857393
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp esi, 24h
        ; Exact mapped bytes 7E 33: jle 0x588573c6
        __asm _emit 0x7e
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 80 9B FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov ecx, dword ptr [ebp + 10h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 D9 01 00 00: je 0x58857595
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes E9 CF 01 00 00: jmp 0x58857595
        __asm _emit 0xe9
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 66 0F 13 45 DC: movlpd qword ptr [ebp - 0x24], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xdc
        mov bl, byte ptr [eax]
        inc eax
        cmp byte ptr [edi + 14h], 0
        mov byte ptr [ebp - 4], bl
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 07: jne 0x588573ed
        __asm _emit 0x75
        __asm _emit 0x07
        mov ecx, edi
        ; Exact mapped bytes E8 B3 EA FF FF: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        add edi, 0ch
        ; Exact mapped bytes EB 0C: jmp 0x588573fe
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov eax, dword ptr [ebp + 0ch]
        mov bl, byte ptr [eax]
        inc eax
        mov byte ptr [ebp - 4], bl
        mov dword ptr [ebp + 0ch], eax
        push edi
        movzx eax, bl
        push 8
        push eax
        ; Exact mapped bytes E8 11 02 00 00: call 0x5885761b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 E1: jne 0x588573f2
        __asm _emit 0x75
        __asm _emit 0xe1
        movzx eax, byte ptr [ebp + 18h]
        mov ecx, eax
        or ecx, 2
        cmp bl, 2dh
        cmovne ecx, eax
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 74 0A: je 0x5885742f
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp bl, 2bh
        ; Exact mapped bytes 74 05: je 0x5885742f
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 0C: jmp 0x5885743b
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp + 0ch]
        mov bl, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebp - 4], bl
        mov dword ptr [ebp + 0ch], ecx
        push 10h
        pop edx
        test esi, esi
        ; Exact mapped bytes 74 04: je 0x58857446
        __asm _emit 0x74
        __asm _emit 0x04
        cmp esi, edx
        ; Exact mapped bytes 75 70: jne 0x588574b6
        __asm _emit 0x75
        __asm _emit 0x70
        mov al, bl
        sub al, 30h
        cmp al, 9
        ; Exact mapped bytes 77 08: ja 0x58857456
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        add eax, -30h
        ; Exact mapped bytes EB 1E: jmp 0x58857474
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov al, bl
        sub al, 61h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x58857466
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        add eax, -57h
        ; Exact mapped bytes EB 0E: jmp 0x58857474
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov al, bl
        sub al, 41h
        cmp al, 19h
        ; Exact mapped bytes 77 3E: ja 0x588574ac
        __asm _emit 0x77
        __asm _emit 0x3e
        ; Exact mapped bytes 0F BE C3: movsx eax, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xc3
        add eax, -37h
        test eax, eax
        ; Exact mapped bytes 75 34: jne 0x588574ac
        __asm _emit 0x75
        __asm _emit 0x34
        mov al, byte ptr [ecx]
        inc ecx
        mov byte ptr [ebp - 0ch], al
        mov dword ptr [ebp + 0ch], ecx
        cmp al, 78h
        ; Exact mapped bytes 74 13: je 0x58857498
        __asm _emit 0x74
        __asm _emit 0x13
        cmp al, 58h
        ; Exact mapped bytes 74 0F: je 0x58857498
        __asm _emit 0x74
        __asm _emit 0x0f
        push dword ptr [ebp - 0ch]
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 AC E9 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        push 8
        ; Exact mapped bytes EB 16: jmp 0x588574ae
        __asm _emit 0xeb
        __asm _emit 0x16
        mov bl, byte ptr [ecx]
        lea eax, [ecx + 1]
        test esi, esi
        mov byte ptr [ebp - 4], bl
        mov dword ptr [ebp + 0ch], eax
        cmovne edx, esi
        mov esi, edx
        ; Exact mapped bytes EB 0A: jmp 0x588574b6
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 0ah
        test esi, esi
        pop eax
        cmovne eax, esi
        mov esi, eax
        mov eax, esi
        cdq
        mov ecx, edx
        mov dword ptr [ebp - 14h], eax
        push ecx
        push eax
        push -1
        push -1
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes E8 D4 A6 FD FF: call 0x58831ba0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edi, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], edx
        mov dword ptr [ebp - 0ch], ecx
        mov al, bl
        sub al, 30h
        cmp al, 9
        ; Exact mapped bytes 77 08: ja 0x588574eb
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE DB: movsx ebx, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xdb
        add ebx, -30h
        ; Exact mapped bytes EB 23: jmp 0x5885750e
        __asm _emit 0xeb
        __asm _emit 0x23
        mov al, bl
        sub al, 61h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x588574fb
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE DB: movsx ebx, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xdb
        add ebx, -57h
        ; Exact mapped bytes EB 13: jmp 0x5885750e
        __asm _emit 0xeb
        __asm _emit 0x13
        mov al, bl
        sub al, 41h
        cmp al, 19h
        ; Exact mapped bytes 77 08: ja 0x5885750b
        __asm _emit 0x77
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE DB: movsx ebx, bl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xdb
        add ebx, -37h
        ; Exact mapped bytes EB 03: jmp 0x5885750e
        __asm _emit 0xeb
        __asm _emit 0x03
        or ebx, 0ffffffffh
        cmp ebx, esi
        ; Exact mapped bytes 73 65: jae 0x58857577
        __asm _emit 0x73
        __asm _emit 0x65
        push edi
        push ecx
        push dword ptr [ebp - 10h]
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 31 A6 FD FF: call 0x58831b50
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, eax
        mov eax, edx
        xor edx, edx
        mov dword ptr [ebp - 20h], ecx
        add ebx, ecx
        adc edx, eax
        cmp edi, dword ptr [ebp - 18h]
        ; Exact mapped bytes 72 0F: jb 0x58857540
        __asm _emit 0x72
        __asm _emit 0x0f
        ; Exact mapped bytes 77 08: ja 0x5885753b
        __asm _emit 0x77
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 76 05: jbe 0x58857540
        __asm _emit 0x76
        __asm _emit 0x05
        xor ecx, ecx
        inc ecx
        ; Exact mapped bytes EB 02: jmp 0x58857542
        __asm _emit 0xeb
        __asm _emit 0x02
        xor ecx, ecx
        cmp edx, eax
        ; Exact mapped bytes 77 0C: ja 0x58857552
        __asm _emit 0x77
        __asm _emit 0x0c
        ; Exact mapped bytes 72 05: jb 0x5885754d
        __asm _emit 0x72
        __asm _emit 0x05
        cmp ebx, dword ptr [ebp - 20h]
        ; Exact mapped bytes 73 05: jae 0x58857552
        __asm _emit 0x73
        __asm _emit 0x05
        xor eax, eax
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x58857554
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or eax, ecx
        mov dword ptr [ebp - 0ch], ebx
        shl eax, 2
        mov ecx, ebx
        or eax, 8
        mov edi, edx
        or dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 0ch]
        mov bl, byte ptr [eax]
        inc eax
        mov byte ptr [ebp - 4], bl
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x588574db
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp - 4]
        lea ecx, [ebp + 0ch]
        ; Exact mapped bytes E8 BE E8 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        test al, 8
        ; Exact mapped bytes 75 12: jne 0x5885759b
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58857595
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [eax], ecx
        xor eax, eax
        xor edx, edx
        ; Exact mapped bytes EB 7B: jmp 0x58857616
        __asm _emit 0xeb
        __asm _emit 0x7b
        mov ebx, dword ptr [ebp - 0ch]
        push edi
        push ebx
        push eax
        ; Exact mapped bytes E8 16 F5 FF FF: call 0x58856abc
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 74 4C: je 0x588575f9
        __asm _emit 0x74
        __asm _emit 0x4c
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 22h
        mov eax, dword ptr [ebp - 8]
        test al, 1
        ; Exact mapped bytes 75 08: jne 0x588575ca
        __asm _emit 0x75
        __asm _emit 0x08
        or ebx, 0ffffffffh
        or edi, 0ffffffffh
        ; Exact mapped bytes EB 3C: jmp 0x58857606
        __asm _emit 0xeb
        __asm _emit 0x3c
        test al, 2
        ; Exact mapped bytes 74 15: je 0x588575e3
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 10h]
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x588575da
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        xor eax, eax
        mov edx, 80000000h
        ; Exact mapped bytes EB 33: jmp 0x58857616
        __asm _emit 0xeb
        __asm _emit 0x33
        mov edx, dword ptr [ebp + 10h]
        test edx, edx
        ; Exact mapped bytes 74 05: je 0x588575ef
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        or eax, 0ffffffffh
        mov edx, 7fffffffh
        ; Exact mapped bytes EB 1D: jmp 0x58857616
        __asm _emit 0xeb
        __asm _emit 0x1d
        test byte ptr [ebp - 8], 2
        ; Exact mapped bytes 74 07: je 0x58857606
        __asm _emit 0x74
        __asm _emit 0x07
        neg ebx
        adc edi, 0
        neg edi
        mov eax, dword ptr [ebp + 10h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58857612
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, ebx
        mov edx, edi
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
