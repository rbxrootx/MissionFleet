// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58797000 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_58797000() {
    __asm {
        mov al, byte ptr [ecx + 50h]
        test al, 1
        ; Exact mapped bytes 0F 84 A7 00 00 00: je 0x587970b2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        test al, 2
        ; Exact mapped bytes 74 2C: je 0x5879703b
        __asm _emit 0x74
        __asm _emit 0x2c
        mov edx, dword ptr [ecx + 60h]
        add dword ptr [ecx + 80h], edx
        mov eax, dword ptr [ecx + 5ch]
        add dword ptr [ecx + 7ch], eax
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ecx + 7ch]
        sar edx, 0ah
        add edx, dword ptr [ecx + 78h]
        sar eax, 0ah
        add eax, dword ptr [ecx + 74h]
        push edx
        push eax
        ; Exact mapped bytes E8 56 C2 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xc2
        __asm _emit 0x16
        __asm _emit 0x00
        ret
        push ebx
        mov ebx, dword ptr [ecx + 64h]
        cmp ebx, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 08: jne 0x5879704c
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ecx + 68h]
        cmp eax, dword ptr [ecx + 8]
        ; Exact mapped bytes 74 65: je 0x587970b1
        __asm _emit 0x74
        __asm _emit 0x65
        push esi
        mov esi, dword ptr [ecx + 5ch]
        add dword ptr [ecx + 7ch], esi
        mov eax, dword ptr [ecx + 7ch]
        push edi
        mov edi, dword ptr [ecx + 60h]
        add dword ptr [ecx + 80h], edi
        mov edx, dword ptr [ecx + 80h]
        sar eax, 0ah
        add eax, dword ptr [ecx + 74h]
        sar edx, 0ah
        add edx, dword ptr [ecx + 78h]
        test esi, esi
        mov esi, eax
        ; Exact mapped bytes 7D 06: jge 0x5879707e
        __asm _emit 0x7d
        __asm _emit 0x06
        sub esi, ebx
        ; Exact mapped bytes 79 0A: jns 0x58797086
        __asm _emit 0x79
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x58797084
        __asm _emit 0xeb
        __asm _emit 0x06
        sub esi, ebx
        test esi, esi
        ; Exact mapped bytes 7F 02: jg 0x58797086
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, ebx
        mov dword ptr [ecx + 64h], eax
        mov eax, dword ptr [ecx + 68h]
        mov esi, edx
        test edi, edi
        ; Exact mapped bytes 7D 06: jge 0x58797098
        __asm _emit 0x7d
        __asm _emit 0x06
        sub esi, eax
        ; Exact mapped bytes 79 0A: jns 0x587970a0
        __asm _emit 0x79
        __asm _emit 0x0a
        ; Exact mapped bytes EB 06: jmp 0x5879709e
        __asm _emit 0xeb
        __asm _emit 0x06
        sub esi, eax
        test esi, esi
        ; Exact mapped bytes 7F 02: jg 0x587970a0
        __asm _emit 0x7f
        __asm _emit 0x02
        mov eax, edx
        mov edx, eax
        mov dword ptr [ecx + 68h], eax
        mov eax, dword ptr [ecx + 64h]
        push edx
        push eax
        ; Exact mapped bytes E8 E1 C1 16 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc1
        __asm _emit 0x16
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
    }
}
