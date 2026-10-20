// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DBC40 .. +0x144 bytes.
extern "C" __declspec(naked) void FUN_100dbc40_100DBC40() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0e0h]
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x100dbc6e
        __asm _emit 0x75
        __asm _emit 0x1b
        mov esi, dword ptr [esi + 140h]
        mov al, byte ptr [esi + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 0F 85 1C 01 00 00: jne 0x100dbd82
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x1c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 66 24 FE FF: and word ptr [esi + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        ret
        push ebx
        push ebp
        push edi
        ; Exact mapped bytes E8 CA 81 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        mov edi, eax
        ; Exact mapped bytes E8 0D 82 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x82
        __asm _emit 0x02
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 7F 61: jg 0x100dbce8
        __asm _emit 0x7f
        __asm _emit 0x61
        mov ecx, dword ptr [esi + 0e0h]
        ; Exact mapped bytes E8 AE 81 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        mov edi, eax
        add edi, 8
        ; Exact mapped bytes E8 EE 81 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 7E 42: jle 0x100dbce8
        __asm _emit 0x7e
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 0e0h]
        ; Exact mapped bytes E8 8F 81 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        mov edi, eax
        ; Exact mapped bytes E8 D2 81 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        sub eax, edi
        lea ecx, [eax + eax*2]
        lea edx, [eax + ecx*4 + 0e8h]
        mov ecx, dword ptr [esi + 140h]
        push edx
        ; Exact mapped bytes E8 EA 30 02 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x30
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 140h]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 1D: jne 0x100dbcff
        __asm _emit 0x75
        __asm _emit 0x1d
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes EB 17: jmp 0x100dbcff
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [esi + 140h]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 06: jne 0x100dbcff
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        xor ebx, ebx
        lea edi, [esi + 0f8h]
        mov ecx, dword ptr [esi + 0e0h]
        ; Exact mapped bytes E8 2E 81 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0e0h]
        add eax, ebx
        push eax
        ; Exact mapped bytes E8 F0 80 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 48: jne 0x100dbd6d
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 0e0h]
        mov ebp, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 0A 81 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        add eax, ebx
        cmp eax, ebp
        ; Exact mapped bytes 7D 26: jge 0x100dbd62
        __asm _emit 0x7d
        __asm _emit 0x26
        mov ecx, dword ptr [esi + 0e0h]
        ; Exact mapped bytes E8 F9 80 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 164h]
        add al, bl
        push eax
        ; Exact mapped bytes E8 7B 16 00 00: call 0x100dd3d0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [eax + 60h]
        mov eax, dword ptr [edi]
        and edx, 0fh
        mov dword ptr [eax + 50h], edx
        ; Exact mapped bytes EB 14: jmp 0x100dbd76
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [edi]
        mov dword ptr [ecx + 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x100dbd76
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [edi]
        mov dword ptr [edx + 50h], 0
        inc ebx
        add edi, 4
        cmp ebx, 8
        ; Exact mapped bytes 7C 88: jl 0x100dbd07
        __asm _emit 0x7c
        __asm _emit 0x88
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret
    }
}
