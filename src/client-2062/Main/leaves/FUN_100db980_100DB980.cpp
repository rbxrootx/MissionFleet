// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DB980 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_100db980_100DB980() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        xor esi, esi
        lea edx, [edi + 0e0h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov ebp, dword ptr [eax + 14h]
        add ebp, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 7C 24: jl 0x100db9c4
        __asm _emit 0x7c
        __asm _emit 0x24
        mov ebp, dword ptr [eax + 1ch]
        add ebp, ecx
        cmp ebx, ebp
        ; Exact mapped bytes 7D 1B: jge 0x100db9c4
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [eax + 8]
        mov ebp, dword ptr [eax + 18h]
        add ebp, ecx
        cmp dword ptr [esp + 18h], ebp
        ; Exact mapped bytes 7C 0D: jl 0x100db9c4
        __asm _emit 0x7c
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 20h]
        add eax, ecx
        mov ecx, dword ptr [esp + 18h]
        cmp ecx, eax
        ; Exact mapped bytes 7C 09: jl 0x100db9cd
        __asm _emit 0x7c
        __asm _emit 0x09
        inc esi
        add edx, 4
        cmp esi, 2
        ; Exact mapped bytes 7E C5: jle 0x100db992
        __asm _emit 0x7e
        __asm _emit 0xc5
        cmp esi, 3
        ; Exact mapped bytes 0F 84 00 01 00 00: je 0x100dbad6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*4 + 0e0h]
        ; Exact mapped bytes E8 AE 84 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [esp + 14h], eax
        push ecx
        mov ecx, dword ptr [edi + esi*4 + 0e0h]
        push ebx
        ; Exact mapped bytes E8 88 8C 02 00: call 0x10104680
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + esi*4 + 0e0h]
        ; Exact mapped bytes E8 8C 84 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [esp + 18h], eax
        xor ebx, ebx
        lea ebp, [edi + 0e0h]
        cmp ebx, esi
        ; Exact mapped bytes 74 15: je 0x100dba29
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [edi + esi*4 + 0e0h]
        ; Exact mapped bytes E8 70 84 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        push eax
        ; Exact mapped bytes E8 27 8D 02 00: call 0x10104750
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        inc ebx
        add ebp, 4
        cmp ebx, 2
        ; Exact mapped bytes 7E DE: jle 0x100dba10
        __asm _emit 0x7e
        __asm _emit 0xde
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 14h]
        cmp eax, edx
        ; Exact mapped bytes 75 13: jne 0x100dba51
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [edi + 170h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 25h]
        and cl, 1fh
        cmp cl, 1
        ; Exact mapped bytes 74 7E: je 0x100dbacf
        __asm _emit 0x74
        __asm _emit 0x7e
        mov ecx, dword ptr [edi + 0e0h]
        ; Exact mapped bytes E8 34 84 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x84
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0e0h]
        push eax
        ; Exact mapped bytes E8 A8 83 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 62: jne 0x100dbacf
        __asm _emit 0x75
        __asm _emit 0x62
        mov ecx, dword ptr [edi + 170h]
        xor edx, edx
        mov dl, byte ptr [ecx + 25h]
        and dl, 1fh
        cmp dl, 1
        ; Exact mapped bytes 75 13: jne 0x100dba93
        __asm _emit 0x75
        __asm _emit 0x13
        mov eax, dword ptr [ecx]
        ; Exact mapped bytes FF 50 08: call dword ptr [eax + 8]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x08
        mov ecx, edi
        ; Exact mapped bytes E8 B4 01 00 00: call 0x100dbc40
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0e0h]
        push 1
        ; Exact mapped bytes E8 F0 83 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 0e8h]
        push eax
        ; Exact mapped bytes E8 64 83 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 160h]
        push eax
        ; Exact mapped bytes E8 18 32 00 00: call 0x100decd0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x32
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 170h]
        push eax
        ; Exact mapped bytes E8 5C 55 00 00: call 0x100e1020
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edi + 170h]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, edi
        ; Exact mapped bytes E8 6A 01 00 00: call 0x100dbc40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
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
