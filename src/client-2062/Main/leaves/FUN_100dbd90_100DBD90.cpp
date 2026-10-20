// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100DBD90 .. +0x141 bytes.
extern "C" __declspec(naked) void FUN_100dbd90_100DBD90() {
    __asm {
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 0ech]
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x100dbdbe
        __asm _emit 0x75
        __asm _emit 0x1b
        mov esi, dword ptr [esi + 144h]
        mov al, byte ptr [esi + 24h]
        and al, 1
        cmp al, 1
        ; Exact mapped bytes 0F 85 19 01 00 00: jne 0x100dbecf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x19
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
        ; Exact mapped bytes E8 7A 80 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        mov edi, eax
        ; Exact mapped bytes E8 BD 80 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 7F 61: jg 0x100dbe38
        __asm _emit 0x7f
        __asm _emit 0x61
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 5E 80 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        mov edi, eax
        add edi, 8
        ; Exact mapped bytes E8 9E 80 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        cmp edi, eax
        ; Exact mapped bytes 7E 42: jle 0x100dbe38
        __asm _emit 0x7e
        __asm _emit 0x42
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 3F 80 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        mov edi, eax
        ; Exact mapped bytes E8 82 80 02 00: call 0x10103e90
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        sub eax, edi
        lea ecx, [eax + eax*2]
        lea edx, [eax + ecx*4 + 0e8h]
        mov ecx, dword ptr [esi + 144h]
        push edx
        ; Exact mapped bytes E8 9A 2F 02 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x2f
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [esi + 144h]
        test byte ptr [eax + 24h], 1
        ; Exact mapped bytes 75 1D: jne 0x100dbe4f
        __asm _emit 0x75
        __asm _emit 0x1d
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes EB 17: jmp 0x100dbe4f
        __asm _emit 0xeb
        __asm _emit 0x17
        mov eax, dword ptr [esi + 144h]
        mov cl, byte ptr [eax + 24h]
        and cl, 1
        cmp cl, 1
        ; Exact mapped bytes 75 06: jne 0x100dbe4f
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 81 60 24 FE FF: and word ptr [eax + 0x24], 0xfffe
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        xor edi, edi
        lea ebx, [esi + 118h]
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 DE 7F 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0ech]
        add eax, edi
        push eax
        ; Exact mapped bytes E8 A0 7F 02 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 75 45: jne 0x100dbeba
        __asm _emit 0x75
        __asm _emit 0x45
        mov ecx, dword ptr [esi + 0ech]
        mov ebp, dword ptr [ecx + 88h]
        ; Exact mapped bytes E8 BA 7F 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        add eax, edi
        cmp eax, ebp
        ; Exact mapped bytes 7D 23: jge 0x100dbeaf
        __asm _emit 0x7d
        __asm _emit 0x23
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes E8 A9 7F 02 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x7f
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [esi + 188h]
        mov ecx, dword ptr [ebx]
        add eax, edi
        mov eax, dword ptr [edx + eax*4]
        mov eax, dword ptr [eax + 60h]
        and eax, 0fh
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes EB 14: jmp 0x100dbec3
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebx]
        mov dword ptr [edx + 50h], 0
        ; Exact mapped bytes EB 09: jmp 0x100dbec3
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebx]
        mov dword ptr [eax + 50h], 0
        inc edi
        add ebx, 4
        cmp edi, 8
        ; Exact mapped bytes 7C 8B: jl 0x100dbe57
        __asm _emit 0x7c
        __asm _emit 0x8b
        pop edi
        pop ebp
        pop ebx
        pop esi
        ret
    }
}
