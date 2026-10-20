// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100322A0 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_100322a0_100322A0() {
    __asm {
        push ebx
        push esi
        mov esi, ecx
        ; Exact mapped bytes 8B 1D 44 51 17 10: mov ebx, dword ptr [0x10175144]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x44
        __asm _emit 0x51
        __asm _emit 0x17
        __asm _emit 0x10
        push edi
        mov eax, dword ptr [esi + 9ffch]
        mov cl, byte ptr [eax + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 44: je 0x100322ff
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [eax + 80h]
        or ecx, 0ffffffffh
        mov edi, edx
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        mov al, byte ptr [edx]
        not ecx
        dec ecx
        test al, al
        mov cl, byte ptr [ecx + edx - 1]
        ; Exact mapped bytes 74 28: je 0x100322ff
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 0F BE D1: movsx edx, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xd1
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        cmp eax, 30h
        ; Exact mapped bytes 7C 05: jl 0x100322ea
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp eax, 39h
        ; Exact mapped bytes 7E 15: jle 0x100322ff
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, 61h
        ; Exact mapped bytes 7C 05: jl 0x100322f4
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp eax, 7ah
        ; Exact mapped bytes 7E 0B: jle 0x100322ff
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 9ffch]
        ; Exact mapped bytes E8 C1 9A FE FF: call 0x1001bdc0
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [esi + 0a000h]
        mov cl, byte ptr [eax + 24h]
        shr cl, 1
        test cl, 1
        ; Exact mapped bytes 74 44: je 0x10032353
        __asm _emit 0x74
        __asm _emit 0x44
        mov edx, dword ptr [eax + 80h]
        or ecx, 0ffffffffh
        mov edi, edx
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        mov al, byte ptr [edx]
        not ecx
        dec ecx
        test al, al
        mov cl, byte ptr [ecx + edx - 1]
        ; Exact mapped bytes 74 28: je 0x10032353
        __asm _emit 0x74
        __asm _emit 0x28
        ; Exact mapped bytes 0F BE D1: movsx edx, cl
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0xd1
        push edx
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        add esp, 4
        cmp eax, 30h
        ; Exact mapped bytes 7C 05: jl 0x1003233e
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp eax, 39h
        ; Exact mapped bytes 7E 15: jle 0x10032353
        __asm _emit 0x7e
        __asm _emit 0x15
        cmp eax, 61h
        ; Exact mapped bytes 7C 05: jl 0x10032348
        __asm _emit 0x7c
        __asm _emit 0x05
        cmp eax, 7ah
        ; Exact mapped bytes 7E 0B: jle 0x10032353
        __asm _emit 0x7e
        __asm _emit 0x0b
        mov ecx, dword ptr [esi + 0a000h]
        ; Exact mapped bytes E8 7D 38 0D 00: call 0x10105bd0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x38
        __asm _emit 0x0d
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        ret
    }
}
