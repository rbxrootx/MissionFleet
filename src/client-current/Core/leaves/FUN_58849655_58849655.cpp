// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58849655 .. +0x14E bytes.
extern "C" __declspec(naked) void FUN_58849655_58849655() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov edi, ecx
        xor ebx, ebx
        cmp dword ptr [edi], ebx
        ; Exact mapped bytes 0F 85 30 01 00 00: jne 0x58849797
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 4], ebx
        ; Exact mapped bytes 0F 85 27 01 00 00: jne 0x58849797
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x27
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 18h], ebx
        ; Exact mapped bytes 0F 85 1E 01 00 00: jne 0x58849797
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 10h], ebx
        ; Exact mapped bytes 0F 85 15 01 00 00: jne 0x58849797
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x15
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 0ch], ebx
        ; Exact mapped bytes 0F 85 0C 01 00 00: jne 0x58849797
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [edi + 24h], bl
        ; Exact mapped bytes 0F 85 03 01 00 00: jne 0x58849797
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x03
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 75 58: jne 0x588496f2
        __asm _emit 0x75
        __asm _emit 0x58
        ; Exact mapped bytes 8B 35 54 42 89 58: mov esi, dword ptr [0x58894254]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x54
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push 2
        push ebx
        push ebx
        push edi
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push eax
        ; Exact mapped bytes FF 15 90 42 89 58: call dword ptr [0x58894290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x588496c2
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, 100h
        ; Exact mapped bytes E9 DA 00 00 00: jmp 0x5884979c
        __asm _emit 0xe9
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 20 43 89 58: call dword ptr [0x58894320]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 1
        sete cl
        mov byte ptr [edi + 14h], cl
        cmp eax, 1
        ; Exact mapped bytes 75 10: jne 0x588496e8
        __asm _emit 0x75
        __asm _emit 0x10
        push eax
        push ebx
        push ebx
        push dword ptr [edi]
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi + 8], eax
        ; Exact mapped bytes EB 03: jmp 0x588496eb
        __asm _emit 0xeb
        __asm _emit 0x03
        mov dword ptr [edi + 8], ebx
        xor eax, eax
        ; Exact mapped bytes E9 AA 00 00 00: jmp 0x5884979c
        __asm _emit 0xe9
        __asm _emit 0xaa
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 2
        ; Exact mapped bytes 75 2E: jne 0x58849726
        __asm _emit 0x75
        __asm _emit 0x2e
        push ebx
        push 80h
        push 2
        push ebx
        push ebx
        push 40000000h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi], eax
        cmp eax, -1
        ; Exact mapped bytes 75 09: jne 0x58849720
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [edi], ebx
        mov eax, 200h
        ; Exact mapped bytes EB 7C: jmp 0x5884979c
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov byte ptr [edi + 14h], 1
        ; Exact mapped bytes EB C2: jmp 0x588496e8
        __asm _emit 0xeb
        __asm _emit 0xc2
        cmp dword ptr [ebp + 10h], 3
        ; Exact mapped bytes 75 64: jne 0x58849790
        __asm _emit 0x75
        __asm _emit 0x64
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 75 07: jne 0x5884973a
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 30000h
        ; Exact mapped bytes EB 62: jmp 0x5884979c
        __asm _emit 0xeb
        __asm _emit 0x62
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 0F: je 0x58849750
        __asm _emit 0x74
        __asm _emit 0x0f
        mov dword ptr [edi + 18h], eax
        mov byte ptr [edi + 14h], 1
        mov dword ptr [edi + 1ch], ebx
        mov dword ptr [edi + 20h], esi
        ; Exact mapped bytes EB 9B: jmp 0x588496eb
        __asm _emit 0xeb
        __asm _emit 0x9b
        push ebx
        push esi
        push ebx
        push 4
        push ebx
        push -1
        ; Exact mapped bytes FF 15 A8 42 89 58: call dword ptr [0x588942a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi + 4], eax
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5884976c
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 300h
        ; Exact mapped bytes EB 30: jmp 0x5884979c
        __asm _emit 0xeb
        __asm _emit 0x30
        push esi
        push ebx
        push ebx
        push 0f001fh
        push eax
        ; Exact mapped bytes FF 15 B4 42 89 58: call dword ptr [0x588942b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi + 18h], eax
        test eax, eax
        ; Exact mapped bytes 75 C2: jne 0x58849744
        __asm _emit 0x75
        __asm _emit 0xc2
        push dword ptr [edi + 4]
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [edi + 4], ebx
        ; Exact mapped bytes EB D5: jmp 0x58849765
        __asm _emit 0xeb
        __asm _emit 0xd5
        mov eax, 10000h
        ; Exact mapped bytes EB 05: jmp 0x5884979c
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1000000h
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
