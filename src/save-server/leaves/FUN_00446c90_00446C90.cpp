// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446C90 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_00446c90_00446C90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        mov dword ptr [ebp - 24h], ecx
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
        ; Exact mapped bytes 77 67: ja 0x446d25
        __asm _emit 0x77
        __asm _emit 0x67
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 76 61: jbe 0x446d25
        __asm _emit 0x76
        __asm _emit 0x61
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 31: je 0x446cfb
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 10h], 80h
        ; Exact mapped bytes 76 11: jbe 0x446ce4
        __asm _emit 0x76
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 84 57 08 00: call 0x4cc460
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x57
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 0F: jmp 0x446cf3
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 D3 D2 FE FF: call 0x433fc0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xd2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x446d02
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        add ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 8], ecx
        ; Exact mapped bytes EB 0D: jmp 0x446d32
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 D1 F2 FE FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 75 08: jne 0x446d56
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 30h], edx
        ; Exact mapped bytes EB 22: jmp 0x446d78
        __asm _emit 0xeb
        __asm _emit 0x22
        mov eax, dword ptr [ebp - 18h]
        sub eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 1ch]
        push edx
        ; Exact mapped bytes E8 F6 EE 01 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xee
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 18h]
        sub ecx, dword ptr [ebp - 14h]
        add eax, ecx
        mov dword ptr [ebp - 30h], eax
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 30h]
        mov dword ptr [edx + 4], eax
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 4]
        mov byte ptr [edx], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
