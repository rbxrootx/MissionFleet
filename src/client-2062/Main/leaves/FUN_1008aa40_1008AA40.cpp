// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008AA40 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_1008aa40_1008AA40() {
    __asm {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        mov ecx, dword ptr [edi + 218h]
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        ; Exact mapped bytes 0F 8E 8A 00 00 00: jle 0x1008aae6
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebp, dword ptr [esp + 14h]
        ; Exact mapped bytes 8B 1D A0 50 17 10: mov ebx, dword ptr [0x101750a0]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0xa0
        __asm _emit 0x50
        __asm _emit 0x17
        __asm _emit 0x10
        push ebp
        push esi
        ; Exact mapped bytes E8 43 93 07 00: call 0x10103db0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x1008aa8a
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [edi + 218h]
        inc esi
        cmp esi, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7C E3: jl 0x1008aa66
        __asm _emit 0x7c
        __asm _emit 0xe3
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 1f4h]
        mov eax, dword ptr [ecx + 64h]
        dec eax
        push eax
        ; Exact mapped bytes E8 86 4C 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 21ch]
        push 101abaa4h
        push esi
        ; Exact mapped bytes E8 05 93 07 00: call 0x10103db0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF D3: call ebx
        __asm _emit 0xff
        __asm _emit 0xd3
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x1008aac2
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [edi + 1f0h]
        mov edx, dword ptr [ecx + 64h]
        dec edx
        push edx
        ; Exact mapped bytes E8 5E 4C 07 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x4c
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 218h]
        push esi
        ; Exact mapped bytes E8 E2 93 07 00: call 0x10103eb0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 21ch]
        push esi
        ; Exact mapped bytes E8 D6 93 07 00: call 0x10103eb0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 220h]
        push esi
        ; Exact mapped bytes E8 CA 93 07 00: call 0x10103eb0
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x93
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
