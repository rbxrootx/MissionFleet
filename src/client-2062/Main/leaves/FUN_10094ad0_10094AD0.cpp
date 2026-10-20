// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10094AD0 .. +0xBA bytes.
extern "C" __declspec(naked) void FUN_10094ad0_10094AD0() {
    __asm {
        sub esp, 20h
        mov eax, dword ptr [esp + 2ch]
        push esi
        mov esi, ecx
        test eax, eax
        mov dword ptr [esp + 4], esi
        ; Exact mapped bytes 75 0A: jne 0x10094aec
        __asm _emit 0x75
        __asm _emit 0x0a
        ; Exact mapped bytes E8 89 05 00 00: call 0x10095070
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x10094b73
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 2ch]
        push ebx
        mov ebx, dword ptr [esp + 2ch]
        xor esi, esi
        push ebp
        push edi
        mov dword ptr [esp + 14h], esi
        lea ebp, [eax - 1]
        mov ecx, 6
        xor eax, eax
        lea edi, [esp + 18h]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea ecx, [esp + 18h]
        mov al, byte ptr [esi + ebx]
        cmp al, 3bh
        ; Exact mapped bytes 74 0A: je 0x10094b22
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp esi, ebp
        ; Exact mapped bytes 74 06: je 0x10094b22
        __asm _emit 0x74
        __asm _emit 0x06
        mov byte ptr [ecx], al
        inc esi
        inc ecx
        ; Exact mapped bytes EB EF: jmp 0x10094b11
        __asm _emit 0xeb
        __asm _emit 0xef
        mov edi, dword ptr [esp + 10h]
        lea ecx, [esp + 18h]
        push ecx
        mov ecx, edi
        ; Exact mapped bytes E8 5E 01 00 00: call 0x10094c90
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, ebp
        ; Exact mapped bytes 74 1E: je 0x10094b54
        __asm _emit 0x74
        __asm _emit 0x1e
        ; Exact mapped bytes 0F BF 97 DE 00 00 00: movsx edx, word ptr [edi + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x97
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edx, dword ptr [esp + 3ch]
        ; Exact mapped bytes 74 11: je 0x10094b54
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [esp + 14h]
        inc esi
        inc eax
        cmp eax, 1000h
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 7C AC: jl 0x10094b00
        __asm _emit 0x7c
        __asm _emit 0xac
        ; Exact mapped bytes 0F BF 87 DE 00 00 00: movsx eax, word ptr [edi + 0xde]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x87
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 3ch]
        pop edi
        pop ebp
        cmp eax, ecx
        pop ebx
        ; Exact mapped bytes 74 09: je 0x10094b6f
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [esp + 4]
        ; Exact mapped bytes E8 01 05 00 00: call 0x10095070
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [esp + 4]
        mov ecx, dword ptr [esi + 30h]
        push 0
        push 0ee49h
        push esi
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 18: call dword ptr [edx + 0x18]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x18
        pop esi
        add esp, 20h
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
