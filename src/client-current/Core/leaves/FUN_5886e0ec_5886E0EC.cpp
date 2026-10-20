// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E0EC .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_5886e0ec_5886E0EC() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        cmp dword ptr [ebp + 8], 0
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        mov edi, dword ptr [edi]
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x5886e1a9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebp + 10h]
        mov esi, dword ptr [ebp + 8]
        test ebx, ebx
        ; Exact mapped bytes 74 6B: je 0x5886e17a
        __asm _emit 0x74
        __asm _emit 0x6b
        push edi
        lea ecx, [ebp - 1]
        ; Exact mapped bytes E8 65 FF FF FF: call 0x5886e07d
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push eax
        lea eax, [ebp - 8]
        push edi
        push eax
        ; Exact mapped bytes E8 F0 FC FF FF: call 0x5886de19
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        add esp, 14h
        cmp edx, -1
        ; Exact mapped bytes 74 5E: je 0x5886e191
        __asm _emit 0x74
        __asm _emit 0x5e
        test edx, edx
        ; Exact mapped bytes 74 51: je 0x5886e188
        __asm _emit 0x74
        __asm _emit 0x51
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, 0ffffh
        ; Exact mapped bytes 76 2B: jbe 0x5886e16d
        __asm _emit 0x76
        __asm _emit 0x2b
        cmp ebx, 1
        ; Exact mapped bytes 76 33: jbe 0x5886e17a
        __asm _emit 0x76
        __asm _emit 0x33
        sub ecx, 10000h
        dec ebx
        mov eax, ecx
        mov dword ptr [ebp - 8], ecx
        shr eax, 0ah
        and ecx, 3ffh
        or eax, 0d800h
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        add esi, 2
        or ecx, 0dc00h
        ; Exact mapped bytes 66 89 0E: mov word ptr [esi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0e
        add edi, edx
        add esi, 2
        sub ebx, 1
        ; Exact mapped bytes 75 95: jne 0x5886e10f
        __asm _emit 0x75
        __asm _emit 0x95
        mov ebx, dword ptr [ebp + 0ch]
        sub esi, dword ptr [ebp + 8]
        sar esi, 1
        mov eax, esi
        mov dword ptr [ebx], edi
        ; Exact mapped bytes EB 6E: jmp 0x5886e1f6
        __asm _emit 0xeb
        __asm _emit 0x6e
        xor edi, edi
        xor eax, eax
        ; Exact mapped bytes 66 89 06: mov word ptr [esi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x06
        ; Exact mapped bytes EB E9: jmp 0x5886e17a
        __asm _emit 0xeb
        __asm _emit 0xe9
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edi
        mov eax, dword ptr [ebp + 18h]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 2ah
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 4D: jmp 0x5886e1f6
        __asm _emit 0xeb
        __asm _emit 0x4d
        push edi
        lea ecx, [ebp - 1]
        xor ebx, ebx
        ; Exact mapped bytes E8 C9 FE FF FF: call 0x5886e07d
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, dword ptr [ebp + 18h]
        ; Exact mapped bytes EB 1B: jmp 0x5886e1d4
        __asm _emit 0xeb
        __asm _emit 0x1b
        test ecx, ecx
        ; Exact mapped bytes 74 3E: je 0x5886e1fb
        __asm _emit 0x74
        __asm _emit 0x3e
        add edi, ecx
        lea eax, [ebx + 1]
        cmp ecx, 4
        lea ecx, [ebp - 1]
        push edi
        cmovne eax, ebx
        lea ebx, [eax + 1]
        ; Exact mapped bytes E8 A9 FE FF FF: call 0x5886e07d
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        push dword ptr [ebp + 14h]
        push eax
        push edi
        push 0
        ; Exact mapped bytes E8 38 FC FF FF: call 0x5886de19
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        add esp, 14h
        cmp ecx, -1
        ; Exact mapped bytes 75 CE: jne 0x5886e1b9
        __asm _emit 0x75
        __asm _emit 0xce
        mov byte ptr [esi + 1ch], 1
        mov dword ptr [esi + 18h], 2ah
        pop edi
        pop esi
        pop ebx
        leave
        ret
        mov eax, ebx
        ; Exact mapped bytes EB F7: jmp 0x5886e1f6
        __asm _emit 0xeb
        __asm _emit 0xf7
    }
}
