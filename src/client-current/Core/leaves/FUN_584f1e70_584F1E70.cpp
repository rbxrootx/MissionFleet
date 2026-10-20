// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F1E70 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_584f1e70_584F1E70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9C B2 F9 FF: call 0x5848d120
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x584f1edd
        __asm _emit 0x74
        __asm _emit 0x55
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 50 9E F9 FF: call 0x5848bce0
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x584f1eae
        __asm _emit 0x74
        __asm _emit 0x1a
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 44 9E F9 FF: call 0x5848bce0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x9e
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 07 10 00 00: call 0x584f2eb0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 07: jmp 0x584f1eb5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F1 0F 00 00: call 0x584f2eb0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 76 0A: jbe 0x584f1ece
        __asm _emit 0x76
        __asm _emit 0x0a
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x584f1f7f
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x584f1ed8
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, 1
        ; Exact mapped bytes E9 A7 00 00 00: jmp 0x584f1f7f
        __asm _emit 0xe9
        __asm _emit 0xa7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x584f1f7d
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x584f1f7d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F1 9F F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CA 4A F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 C0 4A F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        sub esi, eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D6 9F F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 AF 4A F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edi, eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 A5 4A F9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xa5
        __asm _emit 0x4a
        __asm _emit 0xf9
        __asm _emit 0xff
        sub edi, eax
        imul esi, edi
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B8 9F F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 81 A1 F9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xa1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edi, eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 77 A1 F9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa1
        __asm _emit 0xf9
        __asm _emit 0xff
        sub edi, eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9D 9F F9 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x9f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 66 A1 F9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ebx, eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 5C A1 F9 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xa1
        __asm _emit 0xf9
        __asm _emit 0xff
        sub ebx, eax
        imul edi, ebx
        add esi, edi
        mov dword ptr [ebp - 0ch], esi
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 68 0F 00 00: call 0x584f2ed0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        shr eax, 1
        cmp dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes 76 09: jbe 0x584f1f78
        __asm _emit 0x76
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 09: jmp 0x584f1f7f
        __asm _emit 0xeb
        __asm _emit 0x09
        ; Exact mapped bytes EB 05: jmp 0x584f1f7d
        __asm _emit 0xeb
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 02: jmp 0x584f1f7f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
    }
}
