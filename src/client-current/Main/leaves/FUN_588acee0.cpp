// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588ACEE0 .. +0x131 bytes.
extern "C" __declspec(naked) void FUN_588acee0() {
    __asm {
        push ebp
        ; Exact mapped bytes 8B 2D A8 C1 98 58: mov ebp, dword ptr [0x5898c1a8]
        __asm _emit 0x8b
        __asm _emit 0x2d
        __asm _emit 0xa8
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        push edi
        mov edi, ecx
        mov eax, dword ptr [edi + 60h]
        mov eax, dword ptr [eax + 80h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 0F 8E EE 00 00 00: jle 0x588acfec
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 60h]
        mov edx, dword ptr [ecx + 80h]
        push ebx
        push esi
        test edx, edx
        ; Exact mapped bytes 0F 84 E6 00 00 00: je 0x588acff7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edx
        lea esi, [eax + 1]
        mov cl, byte ptr [eax]
        inc eax
        test cl, cl
        ; Exact mapped bytes 75 F9: jne 0x588acf16
        __asm _emit 0x75
        __asm _emit 0xf9
        ; Exact mapped bytes 8B 0D 78 45 A2 58: mov ecx, dword ptr [0x58a24578]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        sub eax, esi
        inc eax
        push eax
        push edx
        ; Exact mapped bytes E8 13 5E EF FF: call 0x587a2d40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5e
        __asm _emit 0xef
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 85 C2 00 00 00: jne 0x588acff7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [edi + 60h]
        mov eax, dword ptr [edx + 80h]
        push eax
        xor esi, esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        test eax, eax
        ; Exact mapped bytes 74 7B: je 0x588acfc2
        __asm _emit 0x74
        __asm _emit 0x7b
        ; Exact mapped bytes EB 07: jmp 0x588acf50
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 60h]
        mov eax, dword ptr [eax + 80h]
        mov bl, byte ptr [eax + esi]
        cmp bl, 20h
        ; Exact mapped bytes 75 14: jne 0x588acf75
        __asm _emit 0x75
        __asm _emit 0x14
        test esi, esi
        ; Exact mapped bytes 0F 84 8E 00 00 00: je 0x588acff7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        dec eax
        cmp esi, eax
        ; Exact mapped bytes 0F 84 82 00 00 00: je 0x588acff7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test esi, esi
        ; Exact mapped bytes 7E 24: jle 0x588acf9d
        __asm _emit 0x7e
        __asm _emit 0x24
        mov ecx, dword ptr [edi + 60h]
        mov eax, dword ptr [ecx + 80h]
        push eax
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cmp esi, eax
        ; Exact mapped bytes 7D 14: jge 0x588acf9d
        __asm _emit 0x7d
        __asm _emit 0x14
        cmp bl, 20h
        ; Exact mapped bytes 75 0F: jne 0x588acf9d
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [edi + 60h]
        mov eax, dword ptr [edx + 80h]
        cmp byte ptr [eax + esi - 1], bl
        ; Exact mapped bytes EB 12: jmp 0x588acfaf
        __asm _emit 0xeb
        __asm _emit 0x12
        cmp bl, 27h
        ; Exact mapped bytes 74 55: je 0x588acff7
        __asm _emit 0x74
        __asm _emit 0x55
        cmp bl, 1
        ; Exact mapped bytes 7C 05: jl 0x588acfac
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp bl, 1fh
        ; Exact mapped bytes 7E 4B: jle 0x588acff7
        __asm _emit 0x7e
        __asm _emit 0x4b
        cmp bl, 7fh
        ; Exact mapped bytes 74 46: je 0x588acff7
        __asm _emit 0x74
        __asm _emit 0x46
        mov ecx, dword ptr [edi + 60h]
        mov eax, dword ptr [ecx + 80h]
        push eax
        inc esi
        ; Exact mapped bytes FF D5: call ebp
        __asm _emit 0xff
        __asm _emit 0xd5
        cmp esi, eax
        ; Exact mapped bytes 75 8E: jne 0x588acf50
        __asm _emit 0x75
        __asm _emit 0x8e
        mov edx, dword ptr [edi + 60h]
        mov eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx + 0d78h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        mov eax, dword ptr [edx + 48h]
        shr eax, 0ah
        push eax
        ; Exact mapped bytes E8 86 C8 F0 FF: call 0x587b9870
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xc8
        __asm _emit 0xf0
        __asm _emit 0xff
        pop esi
        pop ebx
        mov edx, dword ptr [edi]
        mov eax, dword ptr [edx + 8]
        mov ecx, edi
        pop edi
        pop ebp
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        mov ecx, dword ptr [edi + 60h]
        ; Exact mapped bytes E8 41 29 EB FF: call 0x5875f940
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x29
        __asm _emit 0xeb
        __asm _emit 0xff
        push 0
        push 0
        push 0
        push 3e6h
        ; Exact mapped bytes E8 E1 EA EB FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xea
        __asm _emit 0xeb
        __asm _emit 0xff
        mov ecx, eax
    }
}
