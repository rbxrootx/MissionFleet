// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889E280 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_5889e280() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        push edi
        test al, 2
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x5889e36d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov eax, dword ptr [ecx + 4]
        cmp eax, 204h
        ; Exact mapped bytes 77 43: ja 0x5889e2e1
        __asm _emit 0x77
        __asm _emit 0x43
        ; Exact mapped bytes 74 27: je 0x5889e2c7
        __asm _emit 0x74
        __asm _emit 0x27
        cmp eax, 100h
        ; Exact mapped bytes 74 2B: je 0x5889e2d2
        __asm _emit 0x74
        __asm _emit 0x2b
        cmp eax, 201h
        ; Exact mapped bytes 0F 85 8A 00 00 00: jne 0x5889e33c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        add ecx, 4
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 7D 32 E9 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x32
        __asm _emit 0xe9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 75: jne 0x5889e33c
        __asm _emit 0x75
        __asm _emit 0x75
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 8]
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes EB 6A: jmp 0x5889e33c
        __asm _emit 0xeb
        __asm _emit 0x6a
        cmp dword ptr [ecx + 8], 0dh
        ; Exact mapped bytes 75 64: jne 0x5889e33c
        __asm _emit 0x75
        __asm _emit 0x64
        mov ecx, esi
        ; Exact mapped bytes E8 E1 F9 FF FF: call 0x5889dcc0
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 5B: jmp 0x5889e33c
        __asm _emit 0xeb
        __asm _emit 0x5b
        cmp eax, 20ah
        ; Exact mapped bytes 75 54: jne 0x5889e33c
        __asm _emit 0x75
        __asm _emit 0x54
        mov ecx, dword ptr [esi + 8]
        mov eax, dword ptr [esi + 4]
        push ebx
        push ebp
        lea edi, [ecx + 1ah]
        lea ebp, [ecx + 2ch]
        ; Exact mapped bytes 8B 0D C8 84 A2 58: mov ecx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        lea edx, [eax + 62h]
        lea ebx, [eax + 80h]
        mov eax, dword ptr [ecx + 4]
        cmp eax, edx
        ; Exact mapped bytes 7E 2E: jle 0x5889e33a
        __asm _emit 0x7e
        __asm _emit 0x2e
        mov ecx, dword ptr [ecx + 8]
        cmp ecx, edi
        ; Exact mapped bytes 7E 27: jle 0x5889e33a
        __asm _emit 0x7e
        __asm _emit 0x27
        cmp eax, ebx
        ; Exact mapped bytes 7D 23: jge 0x5889e33a
        __asm _emit 0x7d
        __asm _emit 0x23
        cmp ecx, ebp
        ; Exact mapped bytes 7D 1F: jge 0x5889e33a
        __asm _emit 0x7d
        __asm _emit 0x1f
        mov ecx, dword ptr [esp + 14h]
        movzx eax, word ptr [ecx + 0ah]
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 7E 09: jle 0x5889e331
        __asm _emit 0x7e
        __asm _emit 0x09
        mov ecx, esi
        ; Exact mapped bytes E8 C1 F9 FF FF: call 0x5889dcf0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 09: jmp 0x5889e33a
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes 7D 07: jge 0x5889e33a
        __asm _emit 0x7d
        __asm _emit 0x07
        mov ecx, esi
        ; Exact mapped bytes E8 D6 F9 FF FF: call 0x5889dd10
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop ebx
        mov eax, dword ptr [esi + 3ch]
        test eax, eax
        ; Exact mapped bytes 74 2A: je 0x5889e36d
        __asm _emit 0x74
        __asm _emit 0x2a
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x5889e366
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edi, dword ptr [esp + 0ch]
        mov edi, edi
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [esi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x5889e36d
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x5889e350
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
