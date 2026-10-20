// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10017980 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_10017980_10017980() {
    __asm {
        push esi
        push edi
        mov esi, ecx
        ; Exact mapped bytes FF 15 80 51 17 10: call dword ptr [0x10175180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        mov eax, dword ptr [esi + 68h]
        mov edi, dword ptr [esi + 14h]
        and al, 0feh
        mov dword ptr [esi + 68h], eax
        ; Exact mapped bytes 8B 15 D4 92 1C 10: mov edx, dword ptr [0x101c92d4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x92
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 4]
        mov ecx, dword ptr [edx + 4]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8C 8E 00 00 00: jl 0x10017a39
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 1ch]
        add edi, eax
        cmp ecx, edi
        ; Exact mapped bytes 0F 8D 81 00 00 00: jge 0x10017a39
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 8]
        mov eax, dword ptr [esi + 8]
        mov edx, dword ptr [esi + 18h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7C 72: jl 0x10017a39
        __asm _emit 0x7c
        __asm _emit 0x72
        mov edx, dword ptr [esi + 20h]
        add edx, eax
        cmp ecx, edx
        ; Exact mapped bytes 7D 69: jge 0x10017a39
        __asm _emit 0x7d
        __asm _emit 0x69
        mov eax, dword ptr [esi + 50h]
        cmp eax, 4
        ; Exact mapped bytes 75 2E: jne 0x10017a06
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 30h]
        mov eax, dword ptr [esi + 5ch]
        test ecx, ecx
        mov dword ptr [esi + 58h], eax
        mov dword ptr [esi + 50h], 3
        ; Exact mapped bytes 74 15: je 0x10017a01
        __asm _emit 0x74
        __asm _emit 0x15
        mov dl, byte ptr [ecx + 24h]
        shr dl, 5
        test dl, 1
        ; Exact mapped bytes 74 0A: je 0x10017a01
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        push 1
        push 2
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        pop edi
        xor eax, eax
        pop esi
        ret
        cmp eax, 6
        ; Exact mapped bytes 75 2E: jne 0x10017a39
        __asm _emit 0x75
        __asm _emit 0x2e
        mov ecx, dword ptr [esi + 5ch]
        mov dword ptr [esi + 50h], 2
        mov dword ptr [esi + 58h], ecx
        mov ecx, dword ptr [esi + 30h]
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x10017a34
        __asm _emit 0x74
        __asm _emit 0x15
        mov dl, byte ptr [ecx + 24h]
        shr dl, 5
        test dl, 1
        ; Exact mapped bytes 74 0A: je 0x10017a34
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ecx]
        push 0
        push 2
        push esi
        ; Exact mapped bytes FF 50 18: call dword ptr [eax + 0x18]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x18
        pop edi
        xor eax, eax
        pop esi
        ret
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ret
    }
}
