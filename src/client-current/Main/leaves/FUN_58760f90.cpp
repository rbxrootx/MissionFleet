// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58760F90 .. +0xFA bytes.
extern "C" __declspec(naked) void FUN_58760f90() {
    __asm {
        mov edx, dword ptr [ecx + 8ch]
        mov eax, dword ptr [esp + 4]
        push esi
        mov esi, dword ptr [ecx + 84h]
        push edi
        lea edi, [esi + edx]
        cmp eax, edi
        ; Exact mapped bytes 0F 8D DB 00 00 00: jge 0x58761088
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 0fch]
        cmp edi, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x58761088
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ecx + 80h]
        test byte ptr [eax + edi], 80h
        ; Exact mapped bytes 74 70: je 0x5876103b
        __asm _emit 0x74
        __asm _emit 0x70
        cmp esi, 2
        ; Exact mapped bytes 7C 0B: jl 0x58760fdb
        __asm _emit 0x7c
        __asm _emit 0x0b
        add esi, -2
        mov dword ptr [ecx + 84h], esi
        ; Exact mapped bytes EB 20: jmp 0x58760ffb
        __asm _emit 0xeb
        __asm _emit 0x20
        test esi, esi
        ; Exact mapped bytes 74 0E: je 0x58760fed
        __asm _emit 0x74
        __asm _emit 0x0e
        test edx, edx
        ; Exact mapped bytes 74 0A: je 0x58760fed
        __asm _emit 0x74
        __asm _emit 0x0a
        dec esi
        mov dword ptr [ecx + 84h], esi
        dec edx
        ; Exact mapped bytes EB 08: jmp 0x58760ff5
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp edx, 2
        ; Exact mapped bytes 7C 09: jl 0x58760ffb
        __asm _emit 0x7c
        __asm _emit 0x09
        add edx, -2
        mov dword ptr [ecx + 8ch], edx
        mov edx, dword ptr [ecx + 84h]
        add edx, dword ptr [ecx + 8ch]
        cmp eax, edx
        ; Exact mapped bytes 7F 24: jg 0x5876102f
        __asm _emit 0x7f
        __asm _emit 0x24
        ; Exact mapped bytes EB 03: jmp 0x58761010
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 80h]
        lea esi, [edx + eax]
        mov dl, byte ptr [esi + 2]
        mov byte ptr [esi], dl
        mov edx, dword ptr [ecx + 84h]
        add edx, dword ptr [ecx + 8ch]
        inc eax
        cmp eax, edx
        ; Exact mapped bytes 7E E1: jle 0x58761010
        __asm _emit 0x7e
        __asm _emit 0xe1
        add dword ptr [ecx + 94h], -2
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x58761048
        __asm _emit 0x74
        __asm _emit 0x09
        dec edx
        mov dword ptr [ecx + 8ch], edx
        ; Exact mapped bytes EB 0B: jmp 0x58761053
        __asm _emit 0xeb
        __asm _emit 0x0b
        test esi, esi
        ; Exact mapped bytes 74 07: je 0x58761053
        __asm _emit 0x74
        __asm _emit 0x07
        dec esi
        mov dword ptr [ecx + 84h], esi
        mov edx, dword ptr [ecx + 84h]
        add edx, dword ptr [ecx + 8ch]
        cmp eax, edx
        ; Exact mapped bytes 7F 1F: jg 0x58761082
        __asm _emit 0x7f
        __asm _emit 0x1f
        mov edx, dword ptr [ecx + 80h]
        lea esi, [edx + eax]
        mov dl, byte ptr [esi + 1]
        mov byte ptr [esi], dl
        mov edx, dword ptr [ecx + 84h]
        add edx, dword ptr [ecx + 8ch]
        inc eax
        cmp eax, edx
        ; Exact mapped bytes 7E E1: jle 0x58761063
        __asm _emit 0x7e
        __asm _emit 0xe1
        dec dword ptr [ecx + 94h]
        pop edi
        pop esi
    }
}
