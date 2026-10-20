// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047BF15 .. +0x2DC bytes.
extern "C" __declspec(naked) void FUN_0047bf15_0047BF15() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push edi
        push ecx
        lea edi, [ebp - 28h]
        mov ecx, 0ah
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        cmp dword ptr [edx + 0fch], 4
        ; Exact mapped bytes 0F 85 8C 02 00 00: jne 0x47c1d6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 178h], 0
        ; Exact mapped bytes 0F 85 7C 02 00 00: jne 0x47c1d6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x7c
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x47bf6c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 8D B6 01 00 00: jge 0x47c12c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x47bf88
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 10h]
        add edx, 1
        mov dword ptr [ebp - 10h], edx
        cmp dword ptr [ebp - 10h], 20h
        ; Exact mapped bytes 0F 8D 95 01 00 00: jge 0x47c127
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x95
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 8]
        mov edx, dword ptr [ecx + 0d78h]
        mov eax, dword ptr [edx + 1ch]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 2ch]
        shl eax, 7
        lea ecx, [ecx + eax + 0ch]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 8]
        mov edx, dword ptr [eax + 0d78h]
        mov eax, dword ptr [edx + 1ch]
        mov edx, dword ptr [eax + 10h]
        mov eax, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ecx + eax*4]
        and ecx, dword ptr [edx + esi*4 + 40ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 85 47 01 00 00: jne 0x47c122
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x47
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], 280h
        mov dword ptr [ebp - 20h], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 184h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 1ch]
        push ecx
        lea edx, [ebp - 20h]
        push edx
        lea eax, [ebp - 24h]
        push eax
        ; Exact mapped bytes E8 BA 77 F8 FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x47c0a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 184h]
        and edx, 1fh
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 184h]
        and ecx, 3e0h
        sar ecx, 5
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 180h]
        shl edx, 7
        lea eax, [eax + edx + 0ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 0d78h]
        mov edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [edx + 10h]
        mov edx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + edx*4 + 40ch]
        not ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [eax + edx*4]
        and eax, ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 180h]
        shl edx, 7
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [ecx + 10h]
        lea edx, [ecx + edx + 0ch]
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [edx + ecx*4], eax
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 8]
        mov ecx, dword ptr [eax + 0d78h]
        mov edx, dword ptr [ecx + 1ch]
        mov eax, dword ptr [edx + 10h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 2ch]
        shl edx, 7
        lea eax, [eax + edx + 0ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 8]
        mov ecx, dword ptr [edx + 0d78h]
        mov edx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [edx + 10h]
        mov edx, dword ptr [ebp - 4]
        mov esi, dword ptr [ebp - 10h]
        mov eax, dword ptr [eax + edx*4]
        or eax, dword ptr [ecx + esi*4 + 40ch]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 2ch]
        shl edx, 7
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 8]
        mov ecx, dword ptr [ecx + 0d78h]
        mov ecx, dword ptr [ecx + 1ch]
        mov ecx, dword ptr [ecx + 10h]
        lea edx, [ecx + edx + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [edx + ecx*4], eax
        mov edx, dword ptr [ebp - 4]
        shl edx, 5
        add edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 184h], edx
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x47c1da
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E9 58 FE FF FF: jmp 0x47bf7f
        __asm _emit 0xe9
        __asm _emit 0x58
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E9 37 FE FF FF: jmp 0x47bf63
        __asm _emit 0xe9
        __asm _emit 0x37
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx + 2ch]
        mov dword ptr [ecx + 180h], eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 0F B6 91 70 01 00 00: movzx dx, byte ptr [ecx + 0x170]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x91
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 F4: mov word ptr [ebp - 0xc], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf4
        mov eax, dword ptr [ebp - 28h]
        mov cl, byte ptr [eax + 2ch]
        mov byte ptr [ebp - 8], cl
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 8B 82 84 01 00 00: mov ax, word ptr [edx + 0x184]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F6: mov word ptr [ebp - 0xa], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf6
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 B7 86 F8 FF: call 0x404820
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x86
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 7], al
        mov ecx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 99 7E F8 FF: call 0x404010
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x7e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 52 E2 F8 FF: call 0x40a3d0
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xe2
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 19: je 0x47c19b
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push 46bh
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 7C 7E F8 FF: call 0x404010
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x7e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 75 77 F8 FF: call 0x403910
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x77
        __asm _emit 0xf8
        __asm _emit 0xff
        push 6
        lea eax, [ebp - 0ch]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        and ecx, 0ffffh
        or ecx, 10000h
        push ecx
        push 80020116h
        mov edx, dword ptr [ebp - 28h]
        mov ecx, dword ptr [edx + 8]
        ; Exact mapped bytes E8 33 D9 00 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 93 F4 FF FF: call 0x47b662
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 1
        ; Exact mapped bytes EB 09: jmp 0x47c1df
        __asm _emit 0xeb
        __asm _emit 0x09
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x47c1df
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 4D FF FF FF: jmp 0x47c12c
        __asm _emit 0xe9
        __asm _emit 0x4d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        add esp, 28h
        cmp ebp, esp
        ; Exact mapped bytes E8 F5 C5 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
