// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5890B0D0 .. +0x296 bytes.
extern "C" __declspec(naked) void FUN_5890b0d0() {
    __asm {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 14h]
        mov al, byte ptr [ebp + 8]
        push esi
        push edi
        mov esi, ecx
        cmp al, 8
        ; Exact mapped bytes 0F 85 22 01 00 00: jne 0x5890b20a
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 88h]
        mov eax, dword ptr [esi + 84h]
        lea ecx, [eax + ebx]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 FF 00 00 00: je 0x5890b1fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esi + 90h]
        test edx, edx
        ; Exact mapped bytes 0F 84 F1 00 00 00: je 0x5890b1fe
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 412h
        ; Exact mapped bytes 66 39 0D 28 85 A2 58: cmp word ptr [0x58a28528], cx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x0d
        __asm _emit 0x28
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 74 17: je 0x5890b132
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [esi + 80h]
        add ecx, edx
        test byte ptr [ecx - 1], 80h
        lea edi, [ecx - 1]
        ; Exact mapped bytes 75 17: jne 0x5890b143
        __asm _emit 0x75
        __asm _emit 0x17
        test byte ptr [ecx - 2], 80h
        ; Exact mapped bytes 75 11: jne 0x5890b143
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [esi + 80h]
        add ecx, edx
        test byte ptr [ecx - 1], 80h
        lea edi, [ecx - 1]
        ; Exact mapped bytes 74 2A: je 0x5890b16d
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp edx, 1
        ; Exact mapped bytes 7E 25: jle 0x5890b16d
        __asm _emit 0x7e
        __asm _emit 0x25
        sub eax, edx
        add eax, ebx
        push eax
        push ecx
        add ecx, -2
        push ecx
        ; Exact mapped bytes E8 F5 1B 07 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 0fffffffeh
        add dword ptr [esi + 90h], eax
        add esp, 0ch
        add dword ptr [esi + 84h], eax
        ; Exact mapped bytes EB 22: jmp 0x5890b18f
        __asm _emit 0xeb
        __asm _emit 0x22
        test edx, edx
        ; Exact mapped bytes 7E 1E: jle 0x5890b18f
        __asm _emit 0x7e
        __asm _emit 0x1e
        sub eax, edx
        add eax, ebx
        push eax
        push ecx
        push edi
        ; Exact mapped bytes E8 CF 1B 07 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x1b
        __asm _emit 0x07
        __asm _emit 0x00
        or eax, 0ffffffffh
        add dword ptr [esi + 90h], eax
        add esp, 0ch
        add dword ptr [esi + 88h], eax
        mov edx, dword ptr [esi + 84h]
        add edx, dword ptr [esi + 80h]
        mov eax, dword ptr [esi + 88h]
        mov byte ptr [edx + eax], 0
        mov ecx, dword ptr [esi + 80h]
        mov edx, dword ptr [esi + 90h]
        cmp byte ptr [ecx + edx], 0
        ; Exact mapped bytes 74 47: je 0x5890b1fe
        __asm _emit 0x74
        __asm _emit 0x47
        mov eax, dword ptr [esi + 94h]
        cmp byte ptr [eax + ecx], 0
        ; Exact mapped bytes 7D 30: jge 0x5890b1f3
        __asm _emit 0x7d
        __asm _emit 0x30
        cmp eax, 2
        ; Exact mapped bytes 7C 15: jl 0x5890b1dd
        __asm _emit 0x7c
        __asm _emit 0x15
        add eax, -2
        pop edi
        mov dword ptr [esi + 94h], eax
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        pop edi
        mov dword ptr [esi + 94h], 0
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x5890b1fe
        __asm _emit 0x74
        __asm _emit 0x07
        dec eax
        mov dword ptr [esi + 94h], eax
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp al, 0dh
        ; Exact mapped bytes 75 11: jne 0x5890b21f
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 20h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        cmp al, 1bh
        ; Exact mapped bytes 0F 84 32 01 00 00: je 0x5890b359
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x32
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 9
        ; Exact mapped bytes 0F 84 2A 01 00 00: je 0x5890b359
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x2a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 84h]
        mov ecx, dword ptr [esi + 88h]
        mov edx, dword ptr [esi + 8ch]
        mov edi, 1
        add eax, ecx
        sub edx, edi
        cmp eax, edx
        ; Exact mapped bytes 0F 8D 07 01 00 00: jge 0x5890b359
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 80h
        ; Exact mapped bytes 0F 83 EE 00 00 00: jae 0x5890b34d
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 90h]
        cmp ecx, eax
        ; Exact mapped bytes 7D 1F: jge 0x5890b288
        __asm _emit 0x7d
        __asm _emit 0x1f
        dec eax
        cmp eax, ecx
        ; Exact mapped bytes 7C 1A: jl 0x5890b288
        __asm _emit 0x7c
        __asm _emit 0x1a
        mov edi, edi
        mov ecx, dword ptr [esi + 80h]
        mov dl, byte ptr [ecx + eax]
        add ecx, eax
        sub eax, edi
        mov byte ptr [ecx + 1], dl
        cmp eax, dword ptr [esi + 90h]
        ; Exact mapped bytes 7D E8: jge 0x5890b270
        __asm _emit 0x7d
        __asm _emit 0xe8
        mov dl, byte ptr [ebp + 8]
        mov ecx, dword ptr [esi + 90h]
        mov eax, dword ptr [esi + 80h]
        mov byte ptr [eax + ecx], dl
        add dword ptr [esi + 88h], edi
        add dword ptr [esi + 90h], edi
        mov eax, dword ptr [esi + 88h]
        mov ecx, dword ptr [esi + 84h]
        mov edx, dword ptr [esi + 80h]
        add ecx, eax
        mov byte ptr [ecx + edx], 0
        mov eax, dword ptr [esi + 94h]
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx]
        lea edi, [esp + 10h]
        push edi
        mov edi, dword ptr [esi + 90h]
        sub edi, eax
        push edi
        mov edi, dword ptr [esi + 80h]
        add edi, eax
        mov eax, dword ptr [edx + 4]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 50h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [esi + 1ch]
        add edx, dword ptr [esp + 10h]
        sub eax, dword ptr [esi + 14h]
        cmp edx, eax
        ; Exact mapped bytes 7C 54: jl 0x5890b34d
        __asm _emit 0x7c
        __asm _emit 0x54
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esi + 94h]
        mov edx, dword ptr [esi + 80h]
        cmp byte ptr [eax + edx], 0
        ; Exact mapped bytes 7D 05: jge 0x5890b317
        __asm _emit 0x7d
        __asm _emit 0x05
        add eax, 2
        ; Exact mapped bytes EB 01: jmp 0x5890b318
        __asm _emit 0xeb
        __asm _emit 0x01
        inc eax
        mov ecx, dword ptr [esi + 50h]
        lea ebx, [esp + 10h]
        push ebx
        mov ebx, dword ptr [esi + 90h]
        sub ebx, eax
        mov dword ptr [esi + 94h], eax
        mov edi, dword ptr [ecx]
        add eax, edx
        mov edx, dword ptr [edi + 4]
        push ebx
        push eax
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov eax, dword ptr [esi + 50h]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [esi + 1ch]
        add ecx, dword ptr [esp + 10h]
        sub edx, dword ptr [esi + 14h]
        cmp ecx, edx
        ; Exact mapped bytes 7D B3: jge 0x5890b300
        __asm _emit 0x7d
        __asm _emit 0xb3
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
