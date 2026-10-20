// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10077710 .. +0x16A bytes.
extern "C" __declspec(naked) void FUN_10077710_10077710() {
    __asm {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov edx, 4
        lea eax, [esi + 3b8h]
        mov ebp, 0fffeh
        mov ecx, dword ptr [eax - 10h]
        add eax, 4
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax - 4]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov ecx, dword ptr [eax + 1ch]
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        dec edx
        ; Exact mapped bytes 75 DE: jne 0x10077727
        __asm _emit 0x75
        __asm _emit 0xde
        mov eax, dword ptr [esi + 3e8h]
        mov ecx, 0fff0h
        xor edi, edi
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 388h]
        ; Exact mapped bytes 66 21 68 24: and word ptr [eax + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x68
        __asm _emit 0x24
        mov eax, dword ptr [esi + 400h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 404h]
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov eax, dword ptr [esi + 0c4h]
        test eax, eax
        ; Exact mapped bytes 7E 1B: jle 0x1007779d
        __asm _emit 0x7e
        __asm _emit 0x1b
        lea ebx, [esi + 0c8h]
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 B1 B8 06 00: call 0x100e3040
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 0c4h]
        inc edi
        add ebx, 4
        cmp edi, eax
        ; Exact mapped bytes 7C EB: jl 0x10077788
        __asm _emit 0x7c
        __asm _emit 0xeb
        mov eax, dword ptr [esi + 70h]
        xor edi, edi
        test eax, eax
        ; Exact mapped bytes 7E 18: jle 0x100777be
        __asm _emit 0x7e
        __asm _emit 0x18
        lea ebx, [esi + 2c8h]
        mov ecx, dword ptr [ebx]
        ; Exact mapped bytes E8 8D B8 06 00: call 0x100e3040
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xb8
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [esi + 70h]
        inc edi
        add ebx, 4
        cmp edi, eax
        ; Exact mapped bytes 7C EE: jl 0x100777ac
        __asm _emit 0x7c
        __asm _emit 0xee
        lea ecx, [esi + 368h]
        mov edx, 8
        mov eax, dword ptr [ecx]
        add ecx, 4
        ; Exact mapped bytes 66 81 60 24 F0 FF: and word ptr [eax + 0x24], 0xfff0
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x60
        __asm _emit 0x24
        __asm _emit 0xf0
        __asm _emit 0xff
        dec edx
        ; Exact mapped bytes 75 F2: jne 0x100777c9
        __asm _emit 0x75
        __asm _emit 0xf2
        ; Exact mapped bytes A1 9C 57 1C 10: mov eax, dword ptr [0x101c579c]
        __asm _emit 0xa1
        __asm _emit 0x9c
        __asm _emit 0x57
        __asm _emit 0x1c
        __asm _emit 0x10
        cmp dword ptr [eax + 164h], 5fh
        ; Exact mapped bytes 7E 12: jle 0x100777f7
        __asm _emit 0x7e
        __asm _emit 0x12
        mov eax, dword ptr [eax + 18ch]
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x100777f7
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [eax + 17ch]
        ; Exact mapped bytes EB 02: jmp 0x100777f9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 3f8h]
        test eax, eax
        mov dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 74 28: je 0x1007782e
        __asm _emit 0x74
        __asm _emit 0x28
        mov edx, dword ptr [eax + 10h]
        add eax, 18h
        mov dword ptr [ecx + 0ch], edx
        mov edx, dword ptr [eax - 4]
        mov dword ptr [ecx + 10h], edx
        mov edx, dword ptr [eax]
        add ecx, 14h
        mov dword ptr [ecx], edx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ecx + 4], edx
        mov edx, dword ptr [eax + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [eax + 0ch]
        mov dword ptr [ecx + 0ch], eax
        xor ebx, ebx
        lea edi, [esi + 2e8h]
        mov dword ptr [esp + 10h], 20h
        mov ecx, dword ptr [edi]
        mov eax, dword ptr [ecx + 90h]
        test eax, eax
        ; Exact mapped bytes 74 18: je 0x10077862
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [esi + 8]
        add ebx, 16h
        lea eax, [edx + ebx + 70h]
        push eax
        ; Exact mapped bytes E8 66 75 08 00: call 0x100fedc0
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x75
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [edi]
        or byte ptr [eax + 24h], 1
        ; Exact mapped bytes EB 04: jmp 0x10077866
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes 66 21 69 24: and word ptr [ecx + 0x24], bp
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x69
        __asm _emit 0x24
        mov eax, dword ptr [esp + 10h]
        add edi, 4
        dec eax
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 75 CA: jne 0x1007783e
        __asm _emit 0x75
        __asm _emit 0xca
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret
    }
}
