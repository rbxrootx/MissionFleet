// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C2380 .. +0x4AC bytes.
extern "C" __declspec(naked) void FUN_587c2380_587C2380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 48 08: movsx ecx, byte ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x08
        cmp ecx, 8
        ; Exact mapped bytes 0F 85 55 02 00 00: jne 0x587c25ef
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x55
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 84h]
        ; Exact mapped bytes 0F 84 31 02 00 00: je 0x587c25e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 0F 84 21 02 00 00: je 0x587c25e3
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x21
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F B7 05 8C 5F 96 58: movzx eax, word ptr [0x58965f8c]
        __asm _emit 0x0f
        __asm _emit 0xb7
        __asm _emit 0x05
        __asm _emit 0x8c
        __asm _emit 0x5f
        __asm _emit 0x96
        __asm _emit 0x58
        cmp eax, 412h
        ; Exact mapped bytes 74 3E: je 0x587c240e
        __asm _emit 0x74
        __asm _emit 0x3e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes 0F BE 54 11 FF: movsx edx, byte ptr [ecx + edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x54
        __asm _emit 0x11
        __asm _emit 0xff
        and edx, 80h
        ; Exact mapped bytes 75 41: jne 0x587c2430
        __asm _emit 0x75
        __asm _emit 0x41
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 0F BE 4C 08 FE: movsx ecx, byte ptr [eax + ecx - 2]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0xfe
        and ecx, 80h
        ; Exact mapped bytes 75 22: jne 0x587c2430
        __asm _emit 0x75
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        ; Exact mapped bytes 0F BE 44 02 FF: movsx eax, byte ptr [edx + eax - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x44
        __asm _emit 0x02
        __asm _emit 0xff
        and eax, 80h
        ; Exact mapped bytes 0F 84 89 00 00 00: je 0x587c24b9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 90h], 1
        ; Exact mapped bytes 7E 7D: jle 0x587c24b9
        __asm _emit 0x7e
        __asm _emit 0x7d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 4]
        sub eax, dword ptr [edx + 90h]
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 90h]
        push ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        lea ecx, [eax + ecx - 2]
        push ecx
        ; Exact mapped bytes E8 09 A4 08 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xa4
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        sub eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        sub eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 84h], eax
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x587c253d
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 90h], 0
        ; Exact mapped bytes 7E 78: jle 0x587c253d
        __asm _emit 0x7e
        __asm _emit 0x78
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 4]
        sub ecx, dword ptr [eax + 90h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 90h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        lea edx, [ecx + edx - 1]
        push edx
        ; Exact mapped bytes E8 80 A3 08 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xa3
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 90h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        sub ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 88h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 80h]
        mov byte ptr [edx + ecx], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        ; Exact mapped bytes 0F BE 0C 08: movsx ecx, byte ptr [eax + ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x0c
        __asm _emit 0x08
        test ecx, ecx
        ; Exact mapped bytes 74 6D: je 0x587c25e3
        __asm _emit 0x74
        __asm _emit 0x6d
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7D 32: jge 0x587c25c2
        __asm _emit 0x7d
        __asm _emit 0x32
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 94h], 2
        ; Exact mapped bytes 7C 17: jl 0x587c25b3
        __asm _emit 0x7c
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 94h]
        sub eax, 2
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 94h], eax
        ; Exact mapped bytes EB 0D: jmp 0x587c25c0
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 94h], 0
        ; Exact mapped bytes EB 21: jmp 0x587c25e3
        __asm _emit 0xeb
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 94h], 0
        ; Exact mapped bytes 74 15: je 0x587c25e3
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], edx
        xor eax, eax
        ; Exact mapped bytes E9 45 02 00 00: jmp 0x587c282f
        __asm _emit 0xe9
        __asm _emit 0x45
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 3A 02 00 00: jmp 0x587c2829
        __asm _emit 0xe9
        __asm _emit 0x3a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 51 08: movsx edx, byte ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x08
        cmp edx, 0dh
        ; Exact mapped bytes 75 17: jne 0x587c2612
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes E9 22 02 00 00: jmp 0x587c282f
        __asm _emit 0xe9
        __asm _emit 0x22
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 17 02 00 00: jmp 0x587c2829
        __asm _emit 0xe9
        __asm _emit 0x17
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 51 08: movsx edx, byte ptr [ecx + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x51
        __asm _emit 0x08
        cmp edx, 1bh
        ; Exact mapped bytes 75 05: jne 0x587c2623
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 06 02 00 00: jmp 0x587c2829
        __asm _emit 0xe9
        __asm _emit 0x06
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 48 08: movsx ecx, byte ptr [eax + 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x08
        cmp ecx, 9
        ; Exact mapped bytes 75 05: jne 0x587c2634
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 F5 01 00 00: jmp 0x587c2829
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 84h]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8ch]
        sub ecx, 1
        cmp eax, ecx
        ; Exact mapped bytes 0F 8D CF 01 00 00: jge 0x587c2829
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 8], 80h
        ; Exact mapped bytes 0F 83 BB 01 00 00: jae 0x587c2825
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xbb
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 88h]
        mov edx, dword ptr [ebp - 4]
        add ecx, dword ptr [edx + 84h]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 90h], ecx
        ; Exact mapped bytes 7D 53: jge 0x587c26da
        __asm _emit 0x7d
        __asm _emit 0x53
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 88h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        lea edx, [edx + ecx - 1]
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB 09: jmp 0x587c26ab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 90h]
        ; Exact mapped bytes 7C 21: jl 0x587c26da
        __asm _emit 0x7c
        __asm _emit 0x21
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 80h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 8]
        mov cl, byte ptr [ecx + esi]
        mov byte ptr [eax + edx + 1], cl
        ; Exact mapped bytes EB C8: jmp 0x587c26a2
        __asm _emit 0xeb
        __asm _emit 0xc8
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 80h]
        mov ecx, dword ptr [ebp + 8]
        mov cl, byte ptr [ecx + 8]
        mov byte ptr [edx + eax], cl
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        add eax, 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 90h], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 88h]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [eax + 84h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov byte ptr [eax + ecx], 0
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        sub ecx, dword ptr [eax + 94h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 94h]
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 50h]
        ; Exact mapped bytes E8 39 42 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x42
        __asm _emit 0xcc
        __asm _emit 0xff
        mov esi, eax
        add esi, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3C 31 CD FF: call 0x584958d0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0x31
        __asm _emit 0xcd
        __asm _emit 0xff
        cmp esi, eax
        ; Exact mapped bytes 0F 8C 89 00 00 00: jl 0x587c2825
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        ; Exact mapped bytes 0F BE 04 10: movsx eax, byte ptr [eax + edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x04
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7D 17: jge 0x587c27cd
        __asm _emit 0x7d
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        add edx, 2
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], edx
        ; Exact mapped bytes EB 15: jmp 0x587c27e2
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 94h]
        add edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 94h], edx
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 90h]
        sub ecx, dword ptr [eax + 94h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 80h]
        mov ecx, dword ptr [ebp - 4]
        add eax, dword ptr [ecx + 94h]
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ecx + 50h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes E9 57 FF FF FF: jmp 0x587c277c
        __asm _emit 0xe9
        __asm _emit 0x57
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes EB 06: jmp 0x587c282f
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
    }
}
