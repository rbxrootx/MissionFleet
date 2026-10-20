// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BECC0 .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_588becc0() {
    __asm {
        push esi
        push edi
        mov edi, ecx
        ; Exact mapped bytes 66 8B 47 24: mov ax, word ptr [edi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x47
        __asm _emit 0x24
        test al, 2
        ; Exact mapped bytes 0F 84 E8 00 00 00: je 0x588bedb8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [edi + 3ch]
        mov esi, dword ptr [esp + 0ch]
        test eax, eax
        ; Exact mapped bytes 74 24: je 0x588becff
        __asm _emit 0x74
        __asm _emit 0x24
        mov eax, dword ptr [eax + 34h]
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x588becf8
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [eax]
        mov ecx, eax
        mov eax, dword ptr [edx + 10h]
        push esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [edi + 3ch]
        cmp eax, dword ptr [ecx + 34h]
        ; Exact mapped bytes 74 0B: je 0x588becff
        __asm _emit 0x74
        __asm _emit 0x0b
        test eax, eax
        ; Exact mapped bytes 75 EA: jne 0x588bece2
        __asm _emit 0x75
        __asm _emit 0xea
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [esi + 4]
        sub eax, 201h
        ; Exact mapped bytes 74 23: je 0x588bed2c
        __asm _emit 0x74
        __asm _emit 0x23
        sub eax, 9
        ; Exact mapped bytes 0F 85 A6 00 00 00: jne 0x588bedb8
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 39 46 0A: cmp word ptr [esi + 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x46
        __asm _emit 0x0a
        ; Exact mapped bytes 7E 05: jle 0x588bed1d
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 1
        push eax
        mov ecx, edi
        ; Exact mapped bytes E8 DB FD FF FF: call 0x588beb00
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [edi + 6ch]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 03 28 E7 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x28
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 77: je 0x588bedb8
        __asm _emit 0x74
        __asm _emit 0x77
        push ebx
        push ebp
        lea ebp, [edi + 138h]
        xor esi, esi
        mov ebx, ebp
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes A1 C8 84 A2 58: mov eax, dword ptr [0x58a284c8]
        __asm _emit 0xa1
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ebx]
        add eax, 4
        push eax
        ; Exact mapped bytes E8 E0 27 E7 FF: call 0x58731540
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x27
        __asm _emit 0xe7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x588bed74
        __asm _emit 0x75
        __asm _emit 0x10
        inc esi
        add ebx, 4
        cmp esi, 2
        ; Exact mapped bytes 7C E3: jl 0x588bed50
        __asm _emit 0x7c
        __asm _emit 0xe3
        pop ebp
        pop ebx
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C8 84 A2 58: mov edx, dword ptr [0x58a284c8]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x84
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [edi + 13ch]
        mov edx, dword ptr [ecx + 4]
        push eax
        add edx, 0ah
        push edx
        ; Exact mapped bytes E8 C0 99 04 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x99
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 13ch]
        ; Exact mapped bytes E8 25 94 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 8C 9A 04 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x9a
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 13ch]
        ; Exact mapped bytes E8 11 94 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x00
        pop ebp
        pop ebx
        pop edi
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [edi + 34h]
        pop edi
        pop esi
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
