// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00481EA0 .. +0x28E bytes.
extern "C" __declspec(naked) void FUN_00481ea0_00481EA0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 1E: jne 0x481ecd
        __asm _emit 0x75
        __asm _emit 0x1e
        push 63edc4h
        push 0
        push 69h
        push 63edb8h
        push 2
        ; Exact mapped bytes E8 9C AF FE FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xaf
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x481ecd
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x481ea9
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 10h]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 82h
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x481eff
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 74 18: je 0x481f17
        __asm _emit 0x74
        __asm _emit 0x18
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        or al, 20h
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 0ch], eax
        mov eax, 0ffffh
        ; Exact mapped bytes E9 10 02 00 00: jmp 0x482127
        __asm _emit 0xe9
        __asm _emit 0x10
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        and eax, 1
        test eax, eax
        ; Exact mapped bytes 74 4C: je 0x481f70
        __asm _emit 0x74
        __asm _emit 0x4c
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 0ch]
        and eax, 10h
        test eax, eax
        ; Exact mapped bytes 74 1C: je 0x481f57
        __asm _emit 0x74
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 0fffffffeh
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        ; Exact mapped bytes EB 19: jmp 0x481f70
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        or edx, 20h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov eax, 0ffffh
        ; Exact mapped bytes E9 B7 01 00 00: jmp 0x482127
        __asm _emit 0xe9
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        or edx, 2
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 0ffffffefh
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 4], 0
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 10ch
        test ecx, ecx
        ; Exact mapped bytes 75 2E: jne 0x481fe3
        __asm _emit 0x75
        __asm _emit 0x2e
        cmp dword ptr [ebp - 8], 680618h
        ; Exact mapped bytes 74 09: je 0x481fc7
        __asm _emit 0x74
        __asm _emit 0x09
        cmp dword ptr [ebp - 8], 680638h
        ; Exact mapped bytes 75 10: jne 0x481fd7
        __asm _emit 0x75
        __asm _emit 0x10
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 E0 9A FF FF: call 0x47bab0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x481fe3
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 00 9A FF FF: call 0x47b9e0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x9a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        and edx, 108h
        test edx, edx
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x4820d6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        sub edx, dword ptr [ecx + 8]
        test edx, edx
        ; Exact mapped bytes 7D 21: jge 0x482027
        __asm _emit 0x7d
        __asm _emit 0x21
        push 63ed78h
        push 0
        push 0a0h
        push 63edb8h
        push 2
        ; Exact mapped bytes E8 42 AE FE FF: call 0x46ce60
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xae
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 14h
        cmp eax, 1
        ; Exact mapped bytes 75 01: jne 0x482027
        __asm _emit 0x75
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CA: jne 0x481ff7
        __asm _emit 0x75
        __asm _emit 0xca
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 8]
        add edx, 2
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 18h]
        sub edx, 2
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7E 1C: jle 0x48207a
        __asm _emit 0x7e
        __asm _emit 0x1c
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 5E 96 FF FF: call 0x47b6d0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x96
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 48: jmp 0x4820c2
        __asm _emit 0xeb
        __asm _emit 0x48
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 74 1D: je 0x48209d
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 10h]
        sar edx, 5
        mov eax, dword ptr [ebp - 10h]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [edx*4 + 6889a0h]
        add ecx, eax
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 07: jmp 0x4820a4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 67e168h
        mov edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 42 04: movsx eax, byte ptr [edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x04
        and eax, 20h
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x4820c2
        __asm _emit 0x74
        __asm _emit 0x10
        push 2
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 C1 94 FF FF: call 0x47b580
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x94
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 66 89 11: mov word ptr [ecx], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x11
        ; Exact mapped bytes EB 2B: jmp 0x482101
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 4], 2
        mov edx, dword ptr [ebp + 8]
        and edx, 0ffffh
        ; Exact mapped bytes 66 89 55 EC: mov word ptr [ebp - 0x14], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xec
        mov eax, dword ptr [ebp - 4]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 D5 95 FF FF: call 0x47b6d0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x95
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 0ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 16: je 0x48211f
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 0ch]
        or edx, 20h
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 0ch], edx
        mov eax, 0ffffh
        ; Exact mapped bytes EB 08: jmp 0x482127
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
