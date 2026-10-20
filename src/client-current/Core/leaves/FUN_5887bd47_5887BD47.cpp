// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887BD47 .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_5887bd47_5887BD47() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr [ebp + 8]
        push ebx
        mov ebx, eax
        and eax, 3fh
        sar ebx, 6
        imul edx, eax, 38h
        push esi
        push edi
        mov edi, dword ptr [ebx*4 + 589699b0h]
        mov esi, 10000h
        mov al, byte ptr [edi + edx + 28h]
        mov ah, byte ptr [edi + edx + 29h]
        movzx ecx, al
        and ecx, 80h
        mov byte ptr [ebp - 1], ah
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, 4000h
        ; Exact mapped bytes 74 4F: je 0x5887bddc
        __asm _emit 0x74
        __asm _emit 0x4f
        cmp ecx, 8000h
        ; Exact mapped bytes 74 3F: je 0x5887bdd4
        __asm _emit 0x74
        __asm _emit 0x3f
        cmp ecx, esi
        ; Exact mapped bytes 74 27: je 0x5887bdc0
        __asm _emit 0x74
        __asm _emit 0x27
        cmp ecx, 20000h
        ; Exact mapped bytes 74 1F: je 0x5887bdc0
        __asm _emit 0x74
        __asm _emit 0x1f
        cmp ecx, 40000h
        ; Exact mapped bytes 75 45: jne 0x5887bdee
        __asm _emit 0x75
        __asm _emit 0x45
        or al, 80h
        mov byte ptr [edi + edx + 28h], al
        mov eax, dword ptr [ebx*4 + 589699b0h]
        mov byte ptr [eax + edx + 29h], 1
        mov ah, byte ptr [ebp - 1]
        ; Exact mapped bytes EB 2E: jmp 0x5887bdee
        __asm _emit 0xeb
        __asm _emit 0x2e
        or al, 80h
        mov byte ptr [edi + edx + 28h], al
        mov eax, dword ptr [ebx*4 + 589699b0h]
        mov byte ptr [eax + edx + 29h], 2
        ; Exact mapped bytes EB E7: jmp 0x5887bdbb
        __asm _emit 0xeb
        __asm _emit 0xe7
        and al, 7fh
        mov byte ptr [edi + edx + 28h], al
        ; Exact mapped bytes EB 12: jmp 0x5887bdee
        __asm _emit 0xeb
        __asm _emit 0x12
        or al, 80h
        mov byte ptr [edi + edx + 28h], al
        mov ecx, dword ptr [ebx*4 + 589699b0h]
        mov byte ptr [ecx + edx + 29h], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x5887bdfb
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 8000h
        ; Exact mapped bytes EB 18: jmp 0x5887be13
        __asm _emit 0xeb
        __asm _emit 0x18
        test ah, ah
        ; Exact mapped bytes 75 07: jne 0x5887be06
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 4000h
        ; Exact mapped bytes EB 0D: jmp 0x5887be13
        __asm _emit 0xeb
        __asm _emit 0x0d
        cmp ah, 1
        mov eax, 40000h
        cmove esi, eax
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
