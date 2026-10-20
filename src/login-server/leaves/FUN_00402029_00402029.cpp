// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00402029 .. +0x31A bytes.
extern "C" __declspec(naked) void FUN_00402029_00402029() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 118h
        push esi
        mov dword ptr [ebp - 110h], ecx
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 134h]
        mov dword ptr [eax + 164h], edx
        mov eax, dword ptr [ebp - 110h]
        mov dword ptr [eax + 168h], 0
        mov ecx, dword ptr [ebp - 110h]
        mov dword ptr [ecx + 16ch], 0
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [ebp - 110h]
        mov cl, byte ptr [eax + 13dh]
        mov byte ptr [edx + 195h], cl
        mov edx, dword ptr [ebp - 110h]
        xor eax, eax
        mov al, byte ptr [edx + 195h]
        cmp eax, 1
        ; Exact mapped bytes 0F 85 88 02 00 00: jne 0x402328
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 4]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 110h]
        add edx, 168h
        push edx
        push 4
        push 1
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 35 F8 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        lea edx, [ebp - 4]
        push edx
        push 0
        mov eax, dword ptr [ebp - 110h]
        add eax, 16ch
        push eax
        push 4
        push 2
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 09 F8 00 00: call 0x4118fe
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax + 164h]
        push ecx
        push 4482d8h
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 0ch
        push -3
        lea eax, [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 C2 F7 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 A6 F7 00 00: call 0x4118f2
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BF D0: movsx edx, ax
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0xd0
        cmp edx, 64h
        ; Exact mapped bytes 0F 84 D0 01 00 00: je 0x402328
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 110h]
        cmp dword ptr [eax + 16ch], 0
        ; Exact mapped bytes 7E 0F: jle 0x402176
        __asm _emit 0x7e
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 110h]
        cmp dword ptr [ecx + 168h], 0
        ; Exact mapped bytes 7D 26: jge 0x40219c
        __asm _emit 0x7d
        __asm _emit 0x26
        mov edx, dword ptr [ebp - 110h]
        cmp dword ptr [edx + 168h], 1
        ; Exact mapped bytes 0F 8C 9F 01 00 00: jl 0x402328
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 110h]
        cmp dword ptr [eax + 16ch], 0
        ; Exact mapped bytes 0F 8C 8C 01 00 00: jl 0x402328
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x8c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [edx + 0cc8h]
        add edx, ecx
        mov dword ptr [ebp - 10ch], edx
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 48h], 0
        mov ecx, dword ptr [ebp - 110h]
        mov eax, dword ptr [ecx + 168h]
        cdq
        push 0
        push 927c0h
        push edx
        push eax
        ; Exact mapped bytes E8 CA C5 01 00: call 0x41e7b0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, eax
        mov esi, edx
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [edx + 16ch]
        imul eax, eax, 0ea60h
        cdq
        add ecx, eax
        adc esi, edx
        mov eax, dword ptr [ebp - 10ch]
        mov dword ptr [eax + 58h], ecx
        mov dword ptr [eax + 5ch], esi
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [edx + 164h]
        mov dword ptr [ecx + 60h], eax
        mov ecx, dword ptr [ebp - 110h]
        cmp dword ptr [ecx + 16ch], 0
        ; Exact mapped bytes 74 14: je 0x402245
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [edx + 16ch]
        mov dword ptr [ebp - 114h], eax
        ; Exact mapped bytes EB 0A: jmp 0x40224f
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 114h], 0ah
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ebp - 114h]
        mov dword ptr [ecx + 64h], edx
        push 10000h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        mov ecx, dword ptr [ecx + 4]
        ; Exact mapped bytes E8 16 AE 00 00: call 0x40d08b
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 65 F6 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 110h]
        cmp dword ptr [ecx + 16ch], 0
        ; Exact mapped bytes 74 14: je 0x4022aa
        __asm _emit 0x74
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [edx + 16ch]
        mov dword ptr [ebp - 118h], eax
        ; Exact mapped bytes EB 0A: jmp 0x4022b4
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov dword ptr [ebp - 118h], 0ah
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 164h]
        push edx
        mov eax, dword ptr [ebp - 118h]
        push eax
        mov ecx, dword ptr [ebp - 110h]
        xor edx, edx
        cmp dword ptr [ecx + 16ch], 0
        sete dl
        push edx
        push 448320h
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes FF 15 50 C5 43 00: call dword ptr [0x43c550]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        add esp, 14h
        push -3
        lea ecx, [ebp - 108h]
        push ecx
        mov edx, dword ptr [ebp - 110h]
        mov eax, dword ptr [edx + 160h]
        push eax
        ; Exact mapped bytes E8 ED F5 00 00: call 0x4118f8
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 110h]
        mov edx, dword ptr [ecx + 160h]
        push edx
        ; Exact mapped bytes E8 CB F5 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 14: jmp 0x40233c
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp - 110h]
        mov ecx, dword ptr [eax + 160h]
        push ecx
        ; Exact mapped bytes E8 B2 F5 00 00: call 0x4118ec
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
