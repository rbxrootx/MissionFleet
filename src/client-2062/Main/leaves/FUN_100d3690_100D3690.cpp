// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D3690 .. +0xFE bytes.
extern "C" __declspec(naked) void FUN_100d3690_100D3690() {
    __asm {
        sub esp, 10h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        ; Exact mapped bytes 66 8B 86 38 0C 00 00: mov ax, word ptr [esi + 0xc38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x86
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 85 C0: test ax, ax
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xc0
        ; Exact mapped bytes 0F 84 DD 00 00 00: je 0x100d3786
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D E8 58 1C 10: mov ecx, dword ptr [0x101c58e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        push eax
        ; Exact mapped bytes E8 5B 17 F5 FF: call 0x10024e10
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x17
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 C9 00 00 00: je 0x100d3786
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [eax + 352h]
        add eax, 34ah
        mov dword ptr [esp + 18h], ecx
        mov ecx, dword ptr [esi + 0bch]
        mov ebx, dword ptr [eax]
        mov ebp, dword ptr [eax + 4]
        mov eax, dword ptr [eax + 0ch]
        xor edi, edi
        ; Exact mapped bytes 66 8B BE 38 0C 00 00: mov di, word ptr [esi + 0xc38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0xbe
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, ecx
        shl edi, 10h
        and ecx, 0ffffh
        shr edx, 10h
        or edi, ecx
        test dh, 0e0h
        mov dword ptr [esi + 0bch], edi
        ; Exact mapped bytes 74 03: je 0x100d3701
        __asm _emit 0x74
        __asm _emit 0x03
        shr edx, 5
        or edi, 0ffffffffh
        xor ecx, ecx
        cmp edi, -1
        ; Exact mapped bytes 75 0C: jne 0x100d3717
        __asm _emit 0x75
        __asm _emit 0x0c
        cmp byte ptr [esi + ecx + 178h], 0
        ; Exact mapped bytes 75 02: jne 0x100d3717
        __asm _emit 0x75
        __asm _emit 0x02
        mov edi, ecx
        cmp byte ptr [esi + ecx + 178h], dl
        ; Exact mapped bytes 74 06: je 0x100d3726
        __asm _emit 0x74
        __asm _emit 0x06
        inc ecx
        cmp ecx, 20h
        ; Exact mapped bytes 7C E0: jl 0x100d3706
        __asm _emit 0x7c
        __asm _emit 0xe0
        cmp edi, -1
        ; Exact mapped bytes 74 5B: je 0x100d3786
        __asm _emit 0x74
        __asm _emit 0x5b
        cmp ecx, 20h
        ; Exact mapped bytes 75 56: jne 0x100d3786
        __asm _emit 0x75
        __asm _emit 0x56
        mov byte ptr [edi + esi + 178h], dl
        mov edx, dword ptr [esp + 18h]
        mov dword ptr [esi + 148h], ebx
        mov dword ptr [esi + 14ch], ebp
        mov dword ptr [esi + 150h], edx
        mov dword ptr [esi + 154h], eax
        mov eax, dword ptr [esi + 0ach]
        ; Exact mapped bytes 66 81 66 24 FD FF: and word ptr [esi + 0x24], 0xfffd
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x66
        __asm _emit 0x24
        __asm _emit 0xfd
        __asm _emit 0xff
        xor ecx, ecx
        push 0
        ; Exact mapped bytes 66 8B 8E 38 0C 00 00: mov cx, word ptr [esi + 0xc38]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8e
        __asm _emit 0x38
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        shl eax, 10h
        or eax, ecx
        ; Exact mapped bytes 8B 0D E8 56 1C 10: mov ecx, dword ptr [0x101c56e8]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        push 0
        push eax
        push 0ah
        push 80011034h
        ; Exact mapped bytes E8 CA 87 09 00: call 0x1016bf50
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x87
        __asm _emit 0x09
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 10h
        ret
    }
}
