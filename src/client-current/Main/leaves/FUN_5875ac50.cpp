// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5875AC50 .. +0x71 bytes.
extern "C" __declspec(naked) void FUN_5875ac50() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        test al, 4
        ; Exact mapped bytes 74 60: je 0x5875acbb
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [esi + 58h]
        mov eax, dword ptr [esi + 50h]
        cmp ecx, eax
        ; Exact mapped bytes 74 38: je 0x5875ac9d
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 7E 0A: jle 0x5875ac71
        __asm _emit 0x7e
        __asm _emit 0x0a
        sub ecx, eax
        cmp ecx, 12h
        ; Exact mapped bytes 7F 0F: jg 0x5875ac7d
        __asm _emit 0x7f
        __asm _emit 0x0f
        inc eax
        ; Exact mapped bytes EB 0D: jmp 0x5875ac7e
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, eax
        sub edx, ecx
        cmp edx, 12h
        ; Exact mapped bytes 7E 03: jle 0x5875ac7d
        __asm _emit 0x7e
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 01: jmp 0x5875ac7e
        __asm _emit 0xeb
        __asm _emit 0x01
        dec eax
        mov dword ptr [esi + 50h], eax
        test eax, eax
        ; Exact mapped bytes 7D 08: jge 0x5875ac8d
        __asm _emit 0x7d
        __asm _emit 0x08
        add eax, 24h
        mov dword ptr [esi + 50h], eax
        ; Exact mapped bytes EB 10: jmp 0x5875ac9d
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp eax, 24h
        ; Exact mapped bytes 7C 0B: jl 0x5875ac9d
        __asm _emit 0x7c
        __asm _emit 0x0b
        cdq
        mov ecx, 24h
        idiv ecx
        mov dword ptr [esi + 50h], edx
        mov ecx, dword ptr [esi + 3ch]
        test ecx, ecx
        ; Exact mapped bytes 74 17: je 0x5875acbb
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        mov edi, dword ptr [ecx + 38h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 0ch]
        cmp edi, dword ptr [esi + 3ch]
        ; Exact mapped bytes 74 0B: je 0x5875acbd
        __asm _emit 0x74
        __asm _emit 0x0b
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        test edi, edi
        ; Exact mapped bytes 75 EB: jne 0x5875aca5
        __asm _emit 0x75
        __asm _emit 0xeb
        pop edi
        pop esi
        ret
        pop edi
        pop esi
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
    }
}
