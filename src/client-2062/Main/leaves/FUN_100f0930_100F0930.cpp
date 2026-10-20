// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100F0930 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_100f0930_100F0930() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi + 0e74h]
        test eax, eax
        ; Exact mapped bytes 0F 84 D3 00 00 00: je 0x100f0a16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 10h]
        mov ecx, dword ptr [esi + ebx*4 + 5f00h]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 C0 00 00 00: je 0x100f0a16
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [esi + 8]
        mov edi, dword ptr [edx + 1047ch]
        lea eax, [edi + eax*2]
        mov edi, dword ptr [edx + 10474h]
        add eax, edi
        mov edi, 0ah
        add eax, ebx
        cdq
        idiv edi
        test edx, edx
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x100f0a16
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 10h], edx
        mov ecx, dword ptr [ecx]
        lea edx, [esp + 10h]
        lea eax, [esp + 14h]
        push edx
        and ecx, 1fh
        push eax
        push ecx
        mov ecx, esi
        ; Exact mapped bytes E8 83 00 00 00: call 0x100f0a20
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [edx + 4], esi
        ; Exact mapped bytes 75 6E: jne 0x100f0a16
        __asm _emit 0x75
        __asm _emit 0x6e
        mov edx, dword ptr [esi + ebx*4 + 5f00h]
        mov eax, dword ptr [esi + 0e74h]
        mov edx, dword ptr [edx]
        mov cl, byte ptr [eax + 0eh]
        and edx, 1fh
        and ecx, 0ffh
        mov edi, ecx
        lea eax, [edx + 44h]
        lea ecx, [eax*8]
        sub ecx, eax
        mov ecx, dword ptr [esi + ecx*4]
        mov eax, ecx
        xor ecx, 0aa00000h
        xor eax, 2a800h
        shr eax, 0ah
        shr ecx, 14h
        and eax, 3ffh
        and ecx, 3ffh
        add eax, ecx
        cmp edi, eax
        ; Exact mapped bytes 7D 02: jge 0x100f09fa
        __asm _emit 0x7d
        __asm _emit 0x02
        mov eax, edi
        test eax, eax
        ; Exact mapped bytes 75 05: jne 0x100f0a03
        __asm _emit 0x75
        __asm _emit 0x05
        mov eax, 1
        push eax
        push edx
        ; Exact mapped bytes 8B 15 1C 57 1C 10: mov edx, dword ptr [0x101c571c]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 9ch]
        ; Exact mapped bytes E8 7A FE FA FF: call 0x100a0890
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
