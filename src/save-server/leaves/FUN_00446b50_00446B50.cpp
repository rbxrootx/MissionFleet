// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446B50 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_00446b50_00446B50() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 68h
        mov dword ptr [ebp - 60h], ecx
        mov al, byte ptr [ebp - 0ch]
        mov byte ptr [ebp - 8], al
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        mov eax, 0fffffffeh
        add eax, 1
        cmp dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 77 67: ja 0x446be5
        __asm _emit 0x77
        __asm _emit 0x67
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 76 61: jbe 0x446be5
        __asm _emit 0x76
        __asm _emit 0x61
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 31: je 0x446bbb
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 10h], 80h
        ; Exact mapped bytes 76 11: jbe 0x446ba4
        __asm _emit 0x76
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 C4 58 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        ; Exact mapped bytes EB 0F: jmp 0x446bb3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 13 D4 FE FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xd4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 64h], eax
        mov eax, dword ptr [ebp - 64h]
        mov dword ptr [ebp - 68h], eax
        ; Exact mapped bytes EB 07: jmp 0x446bc2
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 68h], 0
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ebp - 68h]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 60h]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB 0D: jmp 0x446bf2
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 11 F4 FE FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf4
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 54h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 50h], eax
        mov cl, byte ptr [ebp - 1ch]
        mov byte ptr [ebp - 14h], cl
        mov dl, byte ptr [ebp - 20h]
        mov byte ptr [ebp - 18h], dl
        mov al, byte ptr [ebp - 28h]
        mov byte ptr [ebp - 24h], al
        mov cl, byte ptr [ebp - 34h]
        mov byte ptr [ebp - 2ch], cl
        mov dl, byte ptr [ebp - 38h]
        mov byte ptr [ebp - 30h], dl
        mov al, byte ptr [ebp - 40h]
        mov byte ptr [ebp - 3ch], al
        mov ecx, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 4ch], ecx
        mov edx, dword ptr [ebp - 50h]
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 54h]
        sub eax, dword ptr [ebp - 48h]
        mov dword ptr [ebp - 44h], eax
        ; Exact mapped bytes EB 09: jmp 0x446c4a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 44h]
        sub ecx, 1
        mov dword ptr [ebp - 44h], ecx
        cmp dword ptr [ebp - 44h], 0
        ; Exact mapped bytes 7E 1E: jle 0x446c6e
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 4ch]
        mov eax, dword ptr [ebp - 48h]
        mov cl, byte ptr [eax]
        mov byte ptr [edx], cl
        mov edx, dword ptr [ebp - 48h]
        add edx, 1
        mov dword ptr [ebp - 48h], edx
        mov eax, dword ptr [ebp - 4ch]
        add eax, 1
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes EB D3: jmp 0x446c41
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ebp - 4ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 60h]
        mov ecx, dword ptr [eax + 4]
        mov byte ptr [ecx], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
