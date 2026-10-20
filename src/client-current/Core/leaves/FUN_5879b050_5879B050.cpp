// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5879B050 .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_5879b050_5879B050() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891c4dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
        push ebx
        push esi
        push edi
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], esp
        mov ebx, dword ptr [ebp + 8]
        xor edi, edi
        mov dword ptr [ebp - 18h], edi
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 4]
        mov esi, dword ptr [eax + ebx + 20h]
        cmp dword ptr [eax + ebx + 24h], edi
        ; Exact mapped bytes 7C 11: jl 0x5879b0a3
        __asm _emit 0x7c
        __asm _emit 0x11
        ; Exact mapped bytes 7F 04: jg 0x5879b098
        __asm _emit 0x7f
        __asm _emit 0x04
        test esi, esi
        ; Exact mapped bytes 74 0B: je 0x5879b0a3
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 10h]
        cmp esi, eax
        ; Exact mapped bytes 76 04: jbe 0x5879b0a3
        __asm _emit 0x76
        __asm _emit 0x04
        sub esi, eax
        ; Exact mapped bytes EB 02: jmp 0x5879b0a5
        __asm _emit 0xeb
        __asm _emit 0x02
        xor esi, esi
        push ebx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A2 BB D6 FF: call 0x58506c50
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xbb
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp byte ptr [ebp - 24h], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 0A: jne 0x5879b0c5
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edi, 4
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x5879b1f0
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebx]
        mov byte ptr [ebp - 4], 1
        mov eax, dword ptr [eax + 4]
        mov eax, dword ptr [eax + ebx + 14h]
        and eax, 1c0h
        cmp eax, 40h
        ; Exact mapped bytes 74 5E: je 0x5879b13a
        __asm _emit 0x74
        __asm _emit 0x5e
        ; Exact mapped bytes 0F 1F 40 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x40
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 56: je 0x5879b13a
        __asm _emit 0x74
        __asm _emit 0x56
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + ebx + 38h]
        mov dl, byte ptr [eax + ebx + 40h]
        mov byte ptr [ebp - 11h], dl
        mov eax, dword ptr [ecx + 20h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 23: je 0x5879b11f
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ecx + 30h]
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 7E 1A: jle 0x5879b11f
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov edx, dword ptr [ecx + 30h]
        dec eax
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ecx]
        lea eax, [edx + 1]
        mov dword ptr [ecx], eax
        mov al, byte ptr [ebp - 11h]
        mov byte ptr [edx], al
        movzx eax, al
        ; Exact mapped bytes EB 09: jmp 0x5879b128
        __asm _emit 0xeb
        __asm _emit 0x09
        movzx eax, dl
        mov edx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp eax, -1
        ; Exact mapped bytes 75 0A: jne 0x5879b137
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edi, 4
        mov dword ptr [ebp - 18h], edi
        ; Exact mapped bytes EB 29: jmp 0x5879b160
        __asm _emit 0xeb
        __asm _emit 0x29
        dec esi
        ; Exact mapped bytes EB A6: jmp 0x5879b0e0
        __asm _emit 0xeb
        __asm _emit 0xa6
        mov eax, dword ptr [ebx]
        push 0
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [eax + 4]
        push dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + ebx + 38h]
        mov eax, dword ptr [ecx]
        mov eax, dword ptr [eax + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 59: jne 0x5879b1b0
        __asm _emit 0x75
        __asm _emit 0x59
        test edx, edx
        ; Exact mapped bytes 75 55: jne 0x5879b1b0
        __asm _emit 0x75
        __asm _emit 0x55
        ; Exact mapped bytes 0F 1F 44 00 00: nop dword ptr [eax + eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 74 4F: je 0x5879b1b3
        __asm _emit 0x74
        __asm _emit 0x4f
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [eax + ebx + 38h]
        mov dl, byte ptr [eax + ebx + 40h]
        mov byte ptr [ebp - 11h], dl
        mov eax, dword ptr [ecx + 20h]
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 74 23: je 0x5879b19f
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ecx + 30h]
        mov eax, dword ptr [eax]
        test eax, eax
        ; Exact mapped bytes 7E 1A: jle 0x5879b19f
        __asm _emit 0x7e
        __asm _emit 0x1a
        mov edx, dword ptr [ecx + 30h]
        dec eax
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ecx + 20h]
        mov edx, dword ptr [ecx]
        lea eax, [edx + 1]
        mov dword ptr [ecx], eax
        mov al, byte ptr [ebp - 11h]
        mov byte ptr [edx], al
        movzx eax, al
        ; Exact mapped bytes EB 09: jmp 0x5879b1a8
        __asm _emit 0xeb
        __asm _emit 0x09
        movzx eax, dl
        mov edx, dword ptr [ecx]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        cmp eax, -1
        ; Exact mapped bytes 74 03: je 0x5879b1b0
        __asm _emit 0x74
        __asm _emit 0x03
        dec esi
        ; Exact mapped bytes EB B0: jmp 0x5879b160
        __asm _emit 0xeb
        __asm _emit 0xb0
        or edi, 4
        mov eax, dword ptr [ebx]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [eax + ebx + 20h], 0
        mov dword ptr [eax + ebx + 24h], 0
        ; Exact mapped bytes EB 1F: jmp 0x5879b1e9
        __asm _emit 0xeb
        __asm _emit 0x1f
    }
}
