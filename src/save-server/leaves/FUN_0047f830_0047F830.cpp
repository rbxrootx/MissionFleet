// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047F830 .. +0x222 bytes.
extern "C" __declspec(naked) void FUN_0047f830_0047F830() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 0ch]
        and ecx, 40h
        test ecx, ecx
        ; Exact mapped bytes 0F 85 B2 01 00 00: jne 0x47f9f9
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 10h], -1
        ; Exact mapped bytes 74 23: je 0x47f873
        __asm _emit 0x74
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 10h]
        sar ecx, 5
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 10h]
        and eax, 1fh
        imul eax, eax, 24h
        mov ecx, dword ptr [ecx*4 + 6889a0h]
        add ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes EB 07: jmp 0x47f87a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 67e168h
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BE 42 04: movsx eax, byte ptr [edx + 4]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x04
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 0F 84 6B 01 00 00: je 0x47f9f9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D 08: mov cx, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x08
        push ecx
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 84 C4 FF FF: call 0x47bd20
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xc4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], -1
        ; Exact mapped bytes 75 14: jne 0x47f8bc
        __asm _emit 0x75
        __asm _emit 0x14
        ; Exact mapped bytes E8 D3 DD FE FF: call 0x46d680
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xdd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        ; Exact mapped bytes 66 0D FF FF: or ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 92 01 00 00: jmp 0x47fa4e
        __asm _emit 0xe9
        __asm _emit 0x92
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 75 73: jne 0x47f935
        __asm _emit 0x75
        __asm _emit 0x73
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 7C 26: jl 0x47f900
        __asm _emit 0x7c
        __asm _emit 0x26
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        mov al, byte ptr [ebp - 8]
        mov byte ptr [edx], al
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        and ecx, 0ffh
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        add eax, 1
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 14: jmp 0x47f914
        __asm _emit 0xeb
        __asm _emit 0x14
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes 0F BE 45 F8: movsx eax, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xf8
        push eax
        ; Exact mapped bytes E8 02 FD FE FF: call 0x46f610
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xfd
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], -1
        ; Exact mapped bytes 75 09: jne 0x47f923
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes 66 0D FF FF: or ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 2B 01 00 00: jmp 0x47fa4e
        __asm _emit 0xe9
        __asm _emit 0x2b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        and eax, 0ffffh
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x47fa4e
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, 1
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 4], edx
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 7C 26: jl 0x47f973
        __asm _emit 0x7c
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov cl, byte ptr [ebp - 8]
        mov byte ptr [eax], cl
        ; Exact mapped bytes 0F BE 55 F8: movsx edx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xf8
        and edx, 0ffh
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 14: jmp 0x47f987
        __asm _emit 0xeb
        __asm _emit 0x14
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        push ecx
        ; Exact mapped bytes E8 8F FC FE FF: call 0x46f610
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], -1
        ; Exact mapped bytes 74 57: je 0x47f9e4
        __asm _emit 0x74
        __asm _emit 0x57
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 4]
        sub eax, 1
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp + 0ch]
        cmp dword ptr [edx + 4], 0
        ; Exact mapped bytes 7C 25: jl 0x47f9ca
        __asm _emit 0x7c
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dl, byte ptr [ebp - 7]
        mov byte ptr [ecx], dl
        ; Exact mapped bytes 0F BE 45 F9: movsx eax, byte ptr [ebp - 7]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xf9
        and eax, 0ffh
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        add edx, 1
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], edx
        ; Exact mapped bytes EB 14: jmp 0x47f9de
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes 0F BE 55 F9: movsx edx, byte ptr [ebp - 7]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xf9
        push edx
        ; Exact mapped bytes E8 38 FC FE FF: call 0x46f610
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xfc
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], -1
        ; Exact mapped bytes 75 06: jne 0x47f9ea
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 0D FF FF: or ax, 0xffff
        __asm _emit 0x66
        __asm _emit 0x0d
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 64: jmp 0x47fa4e
        __asm _emit 0xeb
        __asm _emit 0x64
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        and eax, 0ffffh
        ; Exact mapped bytes EB 55: jmp 0x47fa4e
        __asm _emit 0xeb
        __asm _emit 0x55
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 2
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 7C 28: jl 0x47fa39
        __asm _emit 0x7c
        __asm _emit 0x28
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 02: mov word ptr [edx], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x02
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        and eax, 0ffffh
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ecx]
        add edx, 2
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], edx
        ; Exact mapped bytes EB 15: jmp 0x47fa4e
        __asm _emit 0xeb
        __asm _emit 0x15
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffffh
        push eax
        ; Exact mapped bytes E8 55 24 00 00: call 0x481ea0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov esp, ebp
        pop ebp
        ret
    }
}
