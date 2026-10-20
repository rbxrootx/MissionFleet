// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884AF5E .. +0x210 bytes.
extern "C" __declspec(naked) void FUN_5884af5e_5884AF5E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov eax, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp + 8]
        push ebx
        push esi
        mov ecx, dword ptr [eax + 8]
        mov ebx, dword ptr [eax]
        mov esi, dword ptr [eax + 14h]
        mov dword ptr [ebp - 24h], ecx
        mov ecx, dword ptr [eax + 0ch]
        push edi
        mov dword ptr [ebp - 14h], ecx
        lea edi, [edx + 0fe4h]
        mov ecx, dword ptr [eax + 18h]
        mov eax, dword ptr [eax + 4]
        mov dword ptr [ebp - 1ch], eax
        xor eax, eax
        mov dword ptr [ebp - 0ch], ecx
        push 8
        mov dword ptr [ebp - 8], eax
        pop ecx
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov eax, dword ptr [edx + 18fch]
        xor ecx, ecx
        mov edi, 23dh
        mov dword ptr [ebp + 0ch], ebx
        mov dword ptr [ebp - 4], esi
        mov eax, dword ptr [edx + eax*4 + 1004h]
        ; Exact mapped bytes 66 89 4C 83 02: mov word ptr [ebx + eax*4 + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x83
        __asm _emit 0x02
        mov eax, dword ptr [edx + 18fch]
        inc eax
        cmp eax, edi
        ; Exact mapped bytes 0F 8D 9F 01 00 00: jge 0x5884b167
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [edx + 1004h]
        sub edi, eax
        lea ecx, [ecx + eax*4]
        add eax, edi
        mov dword ptr [ebp - 20h], ecx
        mov dword ptr [ebp - 10h], eax
        mov ebx, dword ptr [ecx]
        mov eax, ebx
        mov ecx, dword ptr [ebp + 0ch]
        shl eax, 2
        mov dword ptr [ebp - 18h], eax
        movzx eax, word ptr [eax + ecx + 2]
        movzx ecx, word ptr [ecx + eax*4 + 2]
        inc ecx
        cmp ecx, esi
        ; Exact mapped bytes 7E 05: jle 0x5884affc
        __asm _emit 0x7e
        __asm _emit 0x05
        inc dword ptr [ebp - 8]
        mov ecx, esi
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 66 89 4C 10 02: mov word ptr [eax + edx + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x10
        __asm _emit 0x02
        mov edx, dword ptr [ebp + 8]
        cmp ebx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 7F 5D: jg 0x5884b06c
        __asm _emit 0x7f
        __asm _emit 0x5d
        ; Exact mapped bytes 66 FF 84 4A E4 0F 00 00: inc word ptr [edx + ecx*2 + 0xfe4]
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0x84
        __asm _emit 0x4a
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 28h], 0
        cmp ebx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 7C 0E: jl 0x5884b02e
        __asm _emit 0x7c
        __asm _emit 0x0e
        mov esi, dword ptr [ebp - 24h]
        sub ebx, dword ptr [ebp - 14h]
        mov ebx, dword ptr [esi + ebx*4]
        mov esi, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 03: jmp 0x5884b031
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ebx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [eax + edx]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], eax
        lea eax, [ebx + ecx]
        mov ecx, dword ptr [ebp - 28h]
        imul eax, ecx
        add dword ptr [edx + 1af3ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 19: je 0x5884b06c
        __asm _emit 0x74
        __asm _emit 0x19
        mov esi, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp - 18h]
        movzx eax, word ptr [eax + esi + 2]
        mov esi, dword ptr [ebp - 4]
        add eax, ebx
        imul eax, ecx
        add dword ptr [edx + 1af40h], eax
        mov ecx, dword ptr [ebp - 20h]
        add ecx, 4
        mov dword ptr [ebp - 20h], ecx
        sub edi, 1
        ; Exact mapped bytes 0F 85 5D FF FF FF: jne 0x5884afdb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x5d
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edi, dword ptr [ebp - 8]
        test edi, edi
        ; Exact mapped bytes 0F 84 DE 00 00 00: je 0x5884b167
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi - 1]
        add esi, 7f2h
        mov dword ptr [ebp - 20h], eax
        lea ebx, [edx + esi*2]
        mov esi, eax
        mov dword ptr [ebp + 8], ebx
        mov eax, esi
        xor ebx, ebx
        lea ecx, [eax + 7f2h]
        lea ecx, [edx + ecx*2]
        ; Exact mapped bytes 66 39 19: cmp word ptr [ecx], bx
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x19
        mov ebx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 0E: jne 0x5884b0c0
        __asm _emit 0x75
        __asm _emit 0x0e
        xor esi, esi
        lea ecx, [ecx - 2]
        dec eax
        ; Exact mapped bytes 66 39 31: cmp word ptr [ecx], si
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x31
        ; Exact mapped bytes 74 F7: je 0x5884b0b4
        __asm _emit 0x74
        __asm _emit 0xf7
        mov esi, dword ptr [ebp - 20h]
        mov ecx, 0ffffh
        ; Exact mapped bytes 66 01 8C 42 E4 0F 00 00: add word ptr [edx + eax*2 + 0xfe4], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        pop ecx
        ; Exact mapped bytes 66 01 8C 42 E6 0F 00 00: add word ptr [edx + eax*2 + 0xfe6], cx
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x8c
        __asm _emit 0x42
        __asm _emit 0xe6
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        sub edi, ecx
        mov eax, 0ffffh
        ; Exact mapped bytes 66 01 03: add word ptr [ebx], ax
        __asm _emit 0x66
        __asm _emit 0x01
        __asm _emit 0x03
        test edi, edi
        ; Exact mapped bytes 7F B7: jg 0x5884b09d
        __asm _emit 0x7f
        __asm _emit 0xb7
        mov esi, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 78: jmp 0x5884b163
        __asm _emit 0xeb
        __asm _emit 0x78
        movzx edi, word ptr [ebx]
        test edi, edi
        ; Exact mapped bytes 74 68: je 0x5884b15a
        __asm _emit 0x74
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        lea ebx, [eax + 401h]
        lea ebx, [edx + ebx*4]
        dec eax
        lea ebx, [ebx - 4]
        mov dword ptr [ebp - 10h], eax
        mov eax, dword ptr [ebx]
        mov dword ptr [ebp - 20h], eax
        cmp eax, ecx
        ; Exact mapped bytes 7F 3C: jg 0x5884b14d
        __asm _emit 0x7f
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp + 0ch]
        movzx eax, word ptr [ecx + eax*4 + 2]
        movzx ecx, si
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 74 25: je 0x5884b149
        __asm _emit 0x74
        __asm _emit 0x25
        mov ecx, esi
        mov esi, dword ptr [ebp + 0ch]
        sub ecx, eax
        mov eax, dword ptr [ebp - 20h]
        movzx eax, word ptr [esi + eax*4]
        imul ecx, eax
        mov eax, dword ptr [ebp - 20h]
        add dword ptr [edx + 1af3ch], ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 66 89 4C 86 02: mov word ptr [esi + eax*4 + 2], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4c
        __asm _emit 0x86
        __asm _emit 0x02
        mov esi, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 0ch]
        dec edi
        mov eax, dword ptr [ebp - 10h]
        test edi, edi
        ; Exact mapped bytes 75 AD: jne 0x5884b101
        __asm _emit 0x75
        __asm _emit 0xad
        mov ebx, dword ptr [ebp + 8]
        push 2
        pop ecx
        dec esi
        sub ebx, ecx
        mov dword ptr [ebp - 4], esi
        mov dword ptr [ebp + 8], ebx
        test esi, esi
        ; Exact mapped bytes 75 84: jne 0x5884b0eb
        __asm _emit 0x75
        __asm _emit 0x84
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
