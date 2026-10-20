// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100748D0 .. +0x1AE bytes.
extern "C" __declspec(naked) void FUN_100748d0_100748D0() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 20h
        ; Exact mapped bytes A1 C4 58 1C 10: mov eax, dword ptr [0x101c58c4]
        __asm _emit 0xa1
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push ebx
        mov ebx, ecx
        push ebp
        mov ecx, dword ptr [eax + 4]
        xor ebp, ebp
        push esi
        cmp ecx, ebp
        push edi
        ; Exact mapped bytes 0F 84 85 01 00 00: je 0x10074a76
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x85
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        lea edi, [ebx + 238h]
        mov dword ptr [esp + 14h], eax
        mov dword ptr [edi], ebp
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        mov esi, dword ptr [ecx + 0ch]
        cmp esi, ebp
        ; Exact mapped bytes 74 7E: je 0x1007498a
        __asm _emit 0x74
        __asm _emit 0x7e
        xor edx, edx
        mov dl, byte ptr [esi + 330h]
        cmp edx, eax
        ; Exact mapped bytes 75 6B: jne 0x10074983
        __asm _emit 0x75
        __asm _emit 0x6b
        mov eax, dword ptr [esi + 0e74h]
        mov dword ptr [esp + 24h], ebp
        mov eax, dword ptr [eax + 60h]
        mov dword ptr [esp + 20h], eax
        ; Exact mapped bytes DF 6C 24 20: fild qword ptr [esp + 0x20]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DD 5C 24 18: fstp qword ptr [esp + 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 18h]
        push ecx
        push edx
        ; Exact mapped bytes E8 6C 7E 0F 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x7e
        __asm _emit 0x0f
        __asm _emit 0x00
        xor eax, eax
        mov ecx, dword ptr [edi]
        ; Exact mapped bytes 66 8B 83 C0 01 00 00: mov ax, word ptr [ebx + 0x1c0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x83
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 30h], ecx
        mov dword ptr [esp + 20h], eax
        mov dword ptr [esp + 34h], ebp
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        add esp, 8
        ; Exact mapped bytes DD 5C 24 18: fstp qword ptr [esp + 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DC 4C 24 18: fmul qword ptr [esp + 0x18]
        __asm _emit 0xdc
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DC 0D 70 53 17 10: fmul qword ptr [0x10175370]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes DF 6C 24 28: fild qword ptr [esp + 0x28]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes DD 5C 24 18: fstp qword ptr [esp + 0x18]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DC 44 24 18: fadd qword ptr [esp + 0x18]
        __asm _emit 0xdc
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes E8 29 7E 0F 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x7e
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [edi], eax
        mov eax, dword ptr [esp + 14h]
        mov esi, dword ptr [esi + 78h]
        cmp esi, ebp
        ; Exact mapped bytes 75 82: jne 0x1007490c
        __asm _emit 0x75
        __asm _emit 0x82
        inc eax
        add edi, 4
        cmp eax, 8
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 0F 8C 62 FF FF FF: jl 0x100748fd
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor ecx, ecx
        mov dword ptr [esp + 2ch], ebp
        mov eax, dword ptr [edx + 4]
        mov cl, byte ptr [eax + 330h]
        mov eax, dword ptr [eax + 0e74h]
        mov edi, ecx
        mov edx, dword ptr [eax + 60h]
        mov dword ptr [esp + 28h], edx
        ; Exact mapped bytes DF 6C 24 28: fild qword ptr [esp + 0x28]
        __asm _emit 0xdf
        __asm _emit 0x6c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes DD 5C 24 28: fstp qword ptr [esp + 0x28]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        mov eax, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 28h]
        push eax
        push ecx
        ; Exact mapped bytes E8 D6 7D 0F 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x7d
        __asm _emit 0x0f
        __asm _emit 0x00
        xor edx, edx
        add esp, 8
        ; Exact mapped bytes 66 8B 93 C0 01 00 00: mov dx, word ptr [ebx + 0x1c0]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x93
        __asm _emit 0xc0
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 18h], edx
        ; Exact mapped bytes DB 44 24 18: fild dword ptr [esp + 0x18]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x18
        ; Exact mapped bytes DD 5C 24 28: fstp qword ptr [esp + 0x28]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes DC 4C 24 28: fmul qword ptr [esp + 0x28]
        __asm _emit 0xdc
        __asm _emit 0x4c
        __asm _emit 0x24
        __asm _emit 0x28
        ; Exact mapped bytes DC 0D 70 53 17 10: fmul qword ptr [0x10175370]
        __asm _emit 0xdc
        __asm _emit 0x0d
        __asm _emit 0x70
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x10
        ; Exact mapped bytes E8 A9 7D 0F 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7d
        __asm _emit 0x0f
        __asm _emit 0x00
        mov esi, eax
        xor eax, eax
        xor ecx, ecx
        lea edx, [ebx + 238h]
        cmp ecx, edi
        ; Exact mapped bytes 74 02: je 0x10074a0f
        __asm _emit 0x74
        __asm _emit 0x02
        add eax, dword ptr [edx]
        inc ecx
        add edx, 4
        cmp ecx, 8
        ; Exact mapped bytes 7C F1: jl 0x10074a09
        __asm _emit 0x7c
        __asm _emit 0xf1
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        imul eax, esi
        mov edx, dword ptr [ecx + 4]
        xor ecx, ecx
        mov cl, byte ptr [edx + 330h]
        xor edx, edx
        div dword ptr [ebx + ecx*4 + 238h]
        ; Exact mapped bytes 8B 15 18 57 1C 10: mov edx, dword ptr [0x101c5718]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        mov ecx, dword ptr [edx + 174h]
        mov dword ptr [ecx + 64h], eax
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        mov ecx, dword ptr [edx + 10a5ch]
        ; Exact mapped bytes E8 CA AC 08 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xac
        __asm _emit 0x08
        __asm _emit 0x00
        xor esi, esi
        lea edi, [ebx + 238h]
        mov eax, dword ptr [edi]
        mov ecx, dword ptr [ebx + 174h]
        push eax
        push esi
        ; Exact mapped bytes E8 E3 14 05 00: call 0x100c5f50
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        inc esi
        add edi, 4
        cmp esi, 8
        ; Exact mapped bytes 7C E8: jl 0x10074a5e
        __asm _emit 0x7c
        __asm _emit 0xe8
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
