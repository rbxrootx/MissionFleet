// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10077880 .. +0xEC bytes.
extern "C" __declspec(naked) void FUN_10077880_10077880() {
    __asm {
        mov eax, dword ptr [esp + 8]
        push ebp
        push esi
        mov esi, ecx
        test eax, eax
        mov ebp, 1
        ; Exact mapped bytes 7E 4C: jle 0x100778dd
        __asm _emit 0x7e
        __asm _emit 0x4c
        mov ecx, dword ptr [esp + 0ch]
        push ebx
        push edi
        mov ebx, eax
        lea edi, [ecx + 10h]
        mov eax, dword ptr [edi]
        lea edx, [edi - 10h]
        shr eax, 0ch
        and eax, 0fh
        push edx
        mov ecx, dword ptr [esi + eax*4 + 2e8h]
        ; Exact mapped bytes E8 DC C7 06 00: call 0x100e4090
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xc7
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, dword ptr [edi]
        shr ecx, 0ch
        and ecx, 0fh
        mov edx, dword ptr [esi + ecx*4 + 2e8h]
        cmp dword ptr [edx + 98h], ebp
        ; Exact mapped bytes 75 07: jne 0x100778d2
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [esi + 64h], 0ffffffffh
        add edi, 37ch
        dec ebx
        ; Exact mapped bytes 75 C1: jne 0x1007789c
        __asm _emit 0x75
        __asm _emit 0xc1
        pop edi
        pop ebx
        mov eax, dword ptr [esi + 64h]
        cmp eax, -1
        mov eax, dword ptr [esi + 3fch]
        ; Exact mapped bytes 75 12: jne 0x100778fd
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 18 FE FF FF: call 0x10077710
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes 66 09 68 24: or word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x68
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 70h]
        xor eax, eax
        test ecx, ecx
        ; Exact mapped bytes 7E 16: jle 0x10077920
        __asm _emit 0x7e
        __asm _emit 0x16
        lea ecx, [esi + 368h]
        mov edx, dword ptr [ecx]
        inc eax
        add ecx, 4
        mov dword ptr [edx + 50h], ebp
        mov edx, dword ptr [esi + 70h]
        cmp eax, edx
        ; Exact mapped bytes 7C F0: jl 0x10077910
        __asm _emit 0x7c
        __asm _emit 0xf0
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [eax + 4]
        xor eax, eax
        mov al, byte ptr [ecx + 330h]
        push eax
        mov edx, dword ptr [esi + eax*4 + 0a4h]
        mov ecx, dword ptr [esi + edx*4 + 368h]
        mov dword ptr [ecx + 50h], 5
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov cl, byte ptr [edx + 20bc4h]
        test cl, cl
        mov ecx, esi
        ; Exact mapped bytes 74 0A: je 0x10077962
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes E8 13 00 00 00: call 0x10077970
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        ; Exact mapped bytes E8 79 EE FF FF: call 0x100767e0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
