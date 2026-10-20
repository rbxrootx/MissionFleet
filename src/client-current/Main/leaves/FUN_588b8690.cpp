// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B8690 .. +0x16F bytes.
extern "C" __declspec(naked) void FUN_588b8690() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        lea edx, [edi + 0e4h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        add ebp, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 7C 22: jl 0x588b86d2
        __asm _emit 0x7c
        __asm _emit 0x22
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 7D 19: jge 0x588b86d2
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        add ebp, ecx
        cmp dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 7C 0B: jl 0x588b86d2
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp dword ptr [esp + 18h], eax
        ; Exact mapped bytes 7C 09: jl 0x588b86db
        __asm _emit 0x7c
        __asm _emit 0x09
        inc esi
        add edx, 4
        cmp esi, 2
        ; Exact mapped bytes 7E C7: jle 0x588b86a2
        __asm _emit 0x7e
        __asm _emit 0xc7
        cmp esi, 3
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x588b87f8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*4 + 0e4h]
        ; Exact mapped bytes E8 D0 FA 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [edi + esi*4 + 0e4h]
        push ebx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 4A 00 05 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*4 + 0e4h]
        ; Exact mapped bytes E8 AE FA 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esp + 18h], eax
        xor ebx, ebx
        lea ebp, [edi + 0e4h]
        mov edi, edi
        cmp ebx, esi
        ; Exact mapped bytes 74 15: je 0x588b8739
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [edi + esi*4 + 0e4h]
        ; Exact mapped bytes E8 90 FA 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 F7 00 05 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x00
        inc ebx
        add ebp, 4
        cmp ebx, 2
        ; Exact mapped bytes 7E DE: jle 0x588b8720
        __asm _emit 0x7e
        __asm _emit 0xde
        mov edx, dword ptr [esp + 18h]
        cmp dword ptr [esp + 14h], edx
        ; Exact mapped bytes 75 1A: jne 0x588b8766
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [edi + 170h]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E9 08: shr cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe9
        __asm _emit 0x08
        and cl, 1fh
        cmp cl, 1
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x588b87f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0e4h]
        ; Exact mapped bytes E8 4F FA 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0e4h]
        push eax
        ; Exact mapped bytes E8 C3 F9 04 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 6F: jne 0x588b87f1
        __asm _emit 0x75
        __asm _emit 0x6f
        mov edx, dword ptr [edi + 170h]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 75 1B: jne 0x588b87b1
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [edi + 170h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        ; Exact mapped bytes E8 F6 D6 FF FF: call 0x588b5ea0
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0e4h]
        push 0
        push 1
        ; Exact mapped bytes E8 00 FA 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xfa
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0ech]
        push eax
        ; Exact mapped bytes E8 74 F9 04 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 164h]
        push eax
        ; Exact mapped bytes E8 C8 42 00 00: call 0x588bcaa0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 170h]
        push eax
        ; Exact mapped bytes E8 DC 65 00 00: call 0x588bedc0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x65
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 170h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, edi
        ; Exact mapped bytes E8 A8 D6 FF FF: call 0x588b5ea0
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
