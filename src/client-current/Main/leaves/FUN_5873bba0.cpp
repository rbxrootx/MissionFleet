// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5873BBA0 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_5873bba0() {
    __asm {
        mov eax, dword ptr [ecx + 74h]
        test eax, eax
        ; Exact mapped bytes 0F 84 DB 00 00 00: je 0x5873bc86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ecx + 7ch]
        shl edx, 4
        lea eax, [edx + eax + 138ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x5873bc86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x5873bc86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0ch]
        test eax, eax
        ; Exact mapped bytes 0F 84 B0 00 00 00: je 0x5873bc86
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [ecx + 328h]
        push esi
        push edi
        mov edi, dword ptr [eax + 328h]
        cmp ebx, edi
        ; Exact mapped bytes 7E 45: jle 0x5873bc2e
        __asm _emit 0x7e
        __asm _emit 0x45
        mov edx, dword ptr [ecx + 230h]
        imul edx, edx, 69h
        mov eax, 51eb851fh
        imul edx
        movzx eax, word ptr [ecx + 2deh]
        sar edx, 5
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        lea edx, [eax + eax*2]
        add edx, edx
        add edx, edx
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp esi, eax
        mov dword ptr [ecx + 230h], esi
        ; Exact mapped bytes 7E 4F: jle 0x5873bc7b
        __asm _emit 0x7e
        __asm _emit 0x4f
        ; Exact mapped bytes EB 47: jmp 0x5873bc75
        __asm _emit 0xeb
        __asm _emit 0x47
        ; Exact mapped bytes 7D 4B: jge 0x5873bc7b
        __asm _emit 0x7d
        __asm _emit 0x4b
        mov edx, dword ptr [ecx + 230h]
        imul edx, edx, 5fh
        mov eax, 51eb851fh
        imul edx
        movzx eax, word ptr [ecx + 2deh]
        sar edx, 5
        mov esi, edx
        shr esi, 1fh
        add esi, edx
        lea edx, [eax*8]
        sub edx, eax
        mov eax, 66666667h
        imul edx
        sar edx, 2
        mov eax, edx
        shr eax, 1fh
        add eax, edx
        cmp esi, eax
        mov dword ptr [ecx + 230h], esi
        ; Exact mapped bytes 7D 06: jge 0x5873bc7b
        __asm _emit 0x7d
        __asm _emit 0x06
        mov dword ptr [ecx + 230h], eax
        xor eax, eax
        cmp ebx, edi
        pop edi
        pop esi
        sete al
        pop ebx
        ret
        xor eax, eax
        ret
    }
}
