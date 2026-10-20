// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x10003D60 .. +0x241 bytes.
extern "C" __declspec(naked) void FUN_10003d60_10003D60() {
    __asm {
        sub esp, 0ch
        mov eax, dword ptr [esp + 1ch]
        push esi
        push edi
        mov edi, dword ptr [esp + 18h]
        lea edx, [eax + eax*2]
        mov dword ptr [esp + 8], ecx
        lea eax, [eax + edx*4]
        lea esi, [ecx + eax*4]
        mov eax, dword ptr [ecx + eax*4 + 64h]
        cmp edi, eax
        ; Exact mapped bytes 0F 8D 13 02 00 00: jge 0x10003f99
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x13
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        test edi, edi
        ; Exact mapped bytes 0F 8C 0B 02 00 00: jl 0x10003f99
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x0b
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 1ch]
        mov edx, dword ptr [esp + 20h]
        push ebx
        push ebp
        mov eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx]
        mov ebp, dword ptr [edx]
        mov ebx, dword ptr [edx + 4]
        sub ecx, ebp
        sub eax, ebx
        mov edx, ecx
        imul edx, ecx
        mov ecx, eax
        imul ecx, eax
        add edx, ecx
        mov dword ptr [esp + 20h], edx
        ; Exact mapped bytes DB 44 24 20: fild dword ptr [esp + 0x20]
        __asm _emit 0xdb
        __asm _emit 0x44
        __asm _emit 0x24
        __asm _emit 0x20
        ; Exact mapped bytes DD 5C 24 14: fstp qword ptr [esp + 0x14]
        __asm _emit 0xdd
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0x14
        mov edx, dword ptr [esp + 18h]
        mov eax, dword ptr [esp + 14h]
        push edx
        push eax
        ; Exact mapped bytes E8 DF 89 16 00: call 0x1016c7ac
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x89
        __asm _emit 0x16
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes E8 D1 89 16 00: call 0x1016c7a6
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x89
        __asm _emit 0x16
        __asm _emit 0x00
        mov edx, dword ptr [esi + 60h]
        mov ecx, eax
        mov ebx, dword ptr [edx + edi*4]
        lea eax, [edx + edi*4]
        mov dword ptr [esp + 20h], eax
        mov eax, ebx
        sub eax, ecx
        cdq
        mov ebp, eax
        xor ebp, edx
        sub ebp, edx
        cmp ebp, 64h
        ; Exact mapped bytes 7E 60: jle 0x10003e54
        __asm _emit 0x7e
        __asm _emit 0x60
        mov eax, dword ptr [esp + 20h]
        lea ebp, [edi - 7]
        lea ebx, [edi + 7]
        test ebp, ebp
        mov dword ptr [eax], ecx
        mov dword ptr [esp + 20h], ebx
        ; Exact mapped bytes 7D 02: jge 0x10003e0a
        __asm _emit 0x7d
        __asm _emit 0x02
        xor ebp, ebp
        mov eax, dword ptr [esi + 64h]
        cmp ebx, eax
        ; Exact mapped bytes 7E 06: jle 0x10003e17
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esp + 20h], eax
        mov ebx, eax
        cmp ebp, ebx
        ; Exact mapped bytes 0F 8F 6A 01 00 00: jg 0x10003f89
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebp, edi
        ; Exact mapped bytes 74 27: je 0x10003e4a
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [esi + 60h]
        lea eax, [edx + ebp*4]
        mov edx, dword ptr [edx + ebp*4]
        cmp edx, ecx
        ; Exact mapped bytes 76 1A: jbe 0x10003e4a
        __asm _emit 0x76
        __asm _emit 0x1a
        lea edx, [edx + ecx*2]
        mov dword ptr [eax], edx
        mov eax, dword ptr [esi + 60h]
        lea ebx, [eax + ebp*4]
        mov eax, 0aaaaaaabh
        mul dword ptr [ebx]
        shr edx, 1
        mov dword ptr [ebx], edx
        mov ebx, dword ptr [esp + 20h]
        inc ebp
        cmp ebp, ebx
        ; Exact mapped bytes 7E D0: jle 0x10003e1f
        __asm _emit 0x7e
        __asm _emit 0xd0
        ; Exact mapped bytes E9 35 01 00 00: jmp 0x10003f89
        __asm _emit 0xe9
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 0cccccccdh
        mul ebx
        shr edx, 3
        cmp ebp, edx
        ; Exact mapped bytes 76 5E: jbe 0x10003ec0
        __asm _emit 0x76
        __asm _emit 0x5e
        mov edx, dword ptr [esp + 20h]
        add ebx, ecx
        lea ebp, [edi + 7]
        mov dword ptr [edx], ebx
        mov eax, dword ptr [esi + 60h]
        mov ebx, dword ptr [eax + edi*4]
        lea eax, [eax + edi*4]
        shr ebx, 1
        mov dword ptr [eax], ebx
        lea eax, [edi - 7]
        test eax, eax
        ; Exact mapped bytes 7D 02: jge 0x10003e83
        __asm _emit 0x7d
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esi + 64h]
        cmp ebp, edx
        ; Exact mapped bytes 7E 02: jle 0x10003e8c
        __asm _emit 0x7e
        __asm _emit 0x02
        mov ebp, edx
        cmp eax, ebp
        ; Exact mapped bytes 0F 8F F5 00 00 00: jg 0x10003f89
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xf5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 74 1E: je 0x10003eb6
        __asm _emit 0x74
        __asm _emit 0x1e
        mov edx, dword ptr [esi + 60h]
        mov ebx, dword ptr [edx + eax*4]
        lea edx, [edx + eax*4]
        cmp ebx, ecx
        ; Exact mapped bytes 76 11: jbe 0x10003eb6
        __asm _emit 0x76
        __asm _emit 0x11
        add ebx, ecx
        mov dword ptr [edx], ebx
        mov edx, dword ptr [esi + 60h]
        mov ebx, dword ptr [edx + eax*4]
        lea edx, [edx + eax*4]
        shr ebx, 1
        mov dword ptr [edx], ebx
        inc eax
        cmp eax, ebp
        ; Exact mapped bytes 7E D9: jle 0x10003e94
        __asm _emit 0x7e
        __asm _emit 0xd9
        ; Exact mapped bytes E9 C9 00 00 00: jmp 0x10003f89
        __asm _emit 0xe9
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebx + ebx*4]
        mov eax, 51eb851fh
        mul edx
        shr edx, 5
        cmp ebp, edx
        ; Exact mapped bytes 0F 86 89 00 00 00: jbe 0x10003f5e
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [esp + 20h]
        lea eax, [ebx + ebx]
        lea ebp, [edi + 4]
        mov dword ptr [edx], eax
        mov eax, dword ptr [esi + 60h]
        mov dword ptr [esp + 20h], ebp
        mov edx, dword ptr [eax + edi*4]
        lea eax, [eax + edi*4]
        add edx, ecx
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 60h]
        mov eax, 0aaaaaaabh
        lea ebx, [edx + edi*4]
        mul dword ptr [edx + edi*4]
        shr edx, 1
        mov dword ptr [ebx], edx
        lea ebx, [edi - 4]
        test ebx, ebx
        ; Exact mapped bytes 7D 02: jge 0x10003f0d
        __asm _emit 0x7d
        __asm _emit 0x02
        xor ebx, ebx
        mov eax, dword ptr [esi + 64h]
        cmp ebp, eax
        ; Exact mapped bytes 7E 06: jle 0x10003f1a
        __asm _emit 0x7e
        __asm _emit 0x06
        mov dword ptr [esp + 20h], eax
        mov ebp, eax
        cmp ebx, ebp
        ; Exact mapped bytes 7F 6B: jg 0x10003f89
        __asm _emit 0x7f
        __asm _emit 0x6b
        cmp ebx, edi
        ; Exact mapped bytes 74 35: je 0x10003f57
        __asm _emit 0x74
        __asm _emit 0x35
        mov eax, dword ptr [esi + 60h]
        mov edx, dword ptr [eax + ebx*4]
        lea eax, [eax + ebx*4]
        cmp edx, ecx
        ; Exact mapped bytes 76 28: jbe 0x10003f57
        __asm _emit 0x76
        __asm _emit 0x28
        add edx, edx
        mov dword ptr [eax], edx
        mov eax, dword ptr [esi + 60h]
        mov edx, dword ptr [eax + ebx*4]
        lea eax, [eax + ebx*4]
        add edx, ecx
        mov dword ptr [eax], edx
        mov edx, dword ptr [esi + 60h]
        mov eax, 0aaaaaaabh
        lea ebp, [edx + ebx*4]
        mul dword ptr [edx + ebx*4]
        shr edx, 1
        mov dword ptr [ebp], edx
        mov ebp, dword ptr [esp + 20h]
        inc ebx
        cmp ebx, ebp
        ; Exact mapped bytes 7E C2: jle 0x10003f1e
        __asm _emit 0x7e
        __asm _emit 0xc2
        ; Exact mapped bytes EB 2B: jmp 0x10003f89
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov edx, dword ptr [esp + 20h]
        lea eax, [ebx + ebx*4]
        shl eax, 1
        mov dword ptr [edx], eax
        mov eax, dword ptr [esi + 60h]
        mov edx, dword ptr [eax + edi*4]
        lea eax, [eax + edi*4]
        add edx, ecx
        mov dword ptr [eax], edx
        mov ecx, dword ptr [esi + 60h]
        mov eax, 0ba2e8ba3h
        mul dword ptr [ecx + edi*4]
        lea ecx, [ecx + edi*4]
        shr edx, 3
        mov dword ptr [ecx], edx
        mov edx, dword ptr [esp + 2ch]
        mov ecx, dword ptr [esp + 10h]
        push edx
        ; Exact mapped bytes E8 69 01 00 00: call 0x10004100
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ebp
        pop ebx
        pop edi
        pop esi
        add esp, 0ch
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
