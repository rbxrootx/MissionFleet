// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588B8800 .. +0x175 bytes.
extern "C" __declspec(naked) void FUN_588b8800() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        lea edx, [edi + 0f0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        add ebp, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 7C 22: jl 0x588b8842
        __asm _emit 0x7c
        __asm _emit 0x22
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 7D 19: jge 0x588b8842
        __asm _emit 0x7d
        __asm _emit 0x19
        mov ecx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        add ebp, ecx
        cmp dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 7C 0B: jl 0x588b8842
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        cmp dword ptr [esp + 18h], eax
        ; Exact mapped bytes 7C 09: jl 0x588b884b
        __asm _emit 0x7c
        __asm _emit 0x09
        inc esi
        add edx, 4
        cmp esi, 2
        ; Exact mapped bytes 7E C7: jle 0x588b8812
        __asm _emit 0x7e
        __asm _emit 0xc7
        cmp esi, 3
        ; Exact mapped bytes 0F 84 1A 01 00 00: je 0x588b896e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x1a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*4 + 0f0h]
        ; Exact mapped bytes E8 60 F9 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        push ecx
        mov ecx, dword ptr [edi + esi*4 + 0f0h]
        push ebx
        mov dword ptr [esp + 1ch], eax
        ; Exact mapped bytes E8 DA FE 04 00: call 0x58908750
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*4 + 0f0h]
        ; Exact mapped bytes E8 3E F9 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [esp + 18h], eax
        xor ebx, ebx
        lea ebp, [edi + 0f0h]
        mov edi, edi
        cmp ebx, esi
        ; Exact mapped bytes 74 15: je 0x588b88a9
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [edi + esi*4 + 0f0h]
        ; Exact mapped bytes E8 20 F9 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xf9
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 87 FF 04 00: call 0x58908830
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xff
        __asm _emit 0x04
        __asm _emit 0x00
        inc ebx
        add ebp, 4
        cmp ebx, 2
        ; Exact mapped bytes 7E DE: jle 0x588b8890
        __asm _emit 0x7e
        __asm _emit 0xde
        mov eax, dword ptr [esp + 18h]
        test eax, eax
        ; Exact mapped bytes 0F 8C B0 00 00 00: jl 0x588b896e
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [esp + 14h], eax
        ; Exact mapped bytes 75 18: jne 0x588b88dc
        __asm _emit 0x75
        __asm _emit 0x18
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
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x588b8967
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0f0h]
        ; Exact mapped bytes E8 D9 F8 04 00: call 0x589081c0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0f0h]
        push eax
        ; Exact mapped bytes E8 4D F8 04 00: call 0x58908140
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 6F: jne 0x588b8967
        __asm _emit 0x75
        __asm _emit 0x6f
        mov ecx, dword ptr [edi + 170h]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 1
        ; Exact mapped bytes 75 1B: jne 0x588b8929
        __asm _emit 0x75
        __asm _emit 0x1b
        mov ecx, dword ptr [edi + 170h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        ; Exact mapped bytes E8 2E D7 FF FF: call 0x588b6050
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd7
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
        mov eax, dword ptr [edi + 0f8h]
        mov eax, dword ptr [eax + 84h]
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x588b893e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [eax + 8]
        ; Exact mapped bytes EB 03: jmp 0x588b8941
        __asm _emit 0xeb
        __asm _emit 0x03
        or eax, 0ffffffffh
        mov ecx, dword ptr [edi + 18ch]
        mov edx, dword ptr [ecx + eax*4]
        mov ecx, dword ptr [edi + 170h]
        push 1
        push 0
        push edx
        ; Exact mapped bytes E8 66 64 00 00: call 0x588bedc0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x64
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 170h]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, edi
        ; Exact mapped bytes E8 E2 D6 FF FF: call 0x588b6050
        __asm _emit 0xe8
        __asm _emit 0xe2
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
