// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00423733 .. +0x309 bytes.
extern "C" __declspec(naked) void FUN_00423733_00423733() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes A1 5C 10 45 00: mov eax, dword ptr [0x45105c]
        __asm _emit 0xa1
        __asm _emit 0x5c
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 8B 15 60 10 45 00: mov edx, dword ptr [0x451060]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        push ebx
        push esi
        lea eax, [eax + eax*4]
        push edi
        lea edi, [edx + eax*4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], edi
        lea ecx, [eax + 17h]
        and ecx, 0fffffff0h
        mov dword ptr [ebp - 10h], ecx
        sar ecx, 4
        dec ecx
        cmp ecx, 20h
        ; Exact mapped bytes 7D 0E: jge 0x423773
        __asm _emit 0x7d
        __asm _emit 0x0e
        or esi, 0ffffffffh
        shr esi, cl
        or dword ptr [ebp - 8], 0ffffffffh
        mov dword ptr [ebp - 0ch], esi
        ; Exact mapped bytes EB 10: jmp 0x423783
        __asm _emit 0xeb
        __asm _emit 0x10
        add ecx, -20h
        or eax, 0ffffffffh
        xor esi, esi
        shr eax, cl
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes A1 54 10 45 00: mov eax, dword ptr [0x451054]
        __asm _emit 0xa1
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        mov ebx, eax
        cmp ebx, edi
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 73 19: jae 0x4237aa
        __asm _emit 0x73
        __asm _emit 0x19
        mov ecx, dword ptr [ebx + 4]
        mov edi, dword ptr [ebx]
        and ecx, dword ptr [ebp - 8]
        and edi, esi
        or ecx, edi
        ; Exact mapped bytes 75 0B: jne 0x4237aa
        __asm _emit 0x75
        __asm _emit 0x0b
        add ebx, 14h
        cmp ebx, dword ptr [ebp - 4]
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 72 E7: jb 0x423791
        __asm _emit 0x72
        __asm _emit 0xe7
        cmp ebx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 79: jne 0x423828
        __asm _emit 0x75
        __asm _emit 0x79
        mov ebx, edx
        cmp ebx, eax
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 73 15: jae 0x4237cd
        __asm _emit 0x73
        __asm _emit 0x15
        mov ecx, dword ptr [ebx + 4]
        mov edi, dword ptr [ebx]
        and ecx, dword ptr [ebp - 8]
        and edi, esi
        or ecx, edi
        ; Exact mapped bytes 75 05: jne 0x4237cb
        __asm _emit 0x75
        __asm _emit 0x05
        add ebx, 14h
        ; Exact mapped bytes EB E6: jmp 0x4237b1
        __asm _emit 0xeb
        __asm _emit 0xe6
        cmp ebx, eax
        ; Exact mapped bytes 75 59: jne 0x423828
        __asm _emit 0x75
        __asm _emit 0x59
        cmp ebx, dword ptr [ebp - 4]
        ; Exact mapped bytes 73 11: jae 0x4237e5
        __asm _emit 0x73
        __asm _emit 0x11
        cmp dword ptr [ebx + 8], 0
        ; Exact mapped bytes 75 08: jne 0x4237e2
        __asm _emit 0x75
        __asm _emit 0x08
        add ebx, 14h
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes EB ED: jmp 0x4237cf
        __asm _emit 0xeb
        __asm _emit 0xed
        cmp ebx, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 26: jne 0x42380d
        __asm _emit 0x75
        __asm _emit 0x26
        mov ebx, edx
        cmp ebx, eax
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 73 0D: jae 0x4237fd
        __asm _emit 0x73
        __asm _emit 0x0d
        cmp dword ptr [ebx + 8], 0
        ; Exact mapped bytes 75 05: jne 0x4237fb
        __asm _emit 0x75
        __asm _emit 0x05
        add ebx, 14h
        ; Exact mapped bytes EB EE: jmp 0x4237e9
        __asm _emit 0xeb
        __asm _emit 0xee
        cmp ebx, eax
        ; Exact mapped bytes 75 0E: jne 0x42380d
        __asm _emit 0x75
        __asm _emit 0x0e
        ; Exact mapped bytes E8 38 02 00 00: call 0x423a3c
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        test ebx, ebx
        mov dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 74 14: je 0x423821
        __asm _emit 0x74
        __asm _emit 0x14
        push ebx
        ; Exact mapped bytes E8 DA 02 00 00: call 0x423aed
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebx + 10h]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebx + 10h]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 75 07: jne 0x423828
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0F 02 00 00: jmp 0x423a37
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 1D 54 10 45 00: mov dword ptr [0x451054], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        mov eax, dword ptr [ebx + 10h]
        mov edx, dword ptr [eax]
        cmp edx, -1
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes 74 14: je 0x42384f
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        mov edi, dword ptr [eax + edx*4 + 44h]
        and ecx, dword ptr [ebp - 8]
        and edi, esi
        or ecx, edi
        ; Exact mapped bytes 75 37: jne 0x423886
        __asm _emit 0x75
        __asm _emit 0x37
        mov edx, dword ptr [eax + 0c4h]
        mov esi, dword ptr [eax + 44h]
        and edx, dword ptr [ebp - 8]
        and esi, dword ptr [ebp - 0ch]
        and dword ptr [ebp - 4], 0
        lea ecx, [eax + 44h]
        or edx, esi
        mov esi, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 75 17: jne 0x423883
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ecx + 84h]
        inc dword ptr [ebp - 4]
        and edx, dword ptr [ebp - 8]
        add ecx, 4
        mov edi, esi
        and edi, dword ptr [ecx]
        or edx, edi
        ; Exact mapped bytes 74 E9: je 0x42386c
        __asm _emit 0x74
        __asm _emit 0xe9
        mov edx, dword ptr [ebp - 4]
        mov ecx, edx
        xor edi, edi
        imul ecx, ecx, 204h
        lea ecx, [ecx + eax + 144h]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [eax + edx*4 + 44h]
        and ecx, esi
        ; Exact mapped bytes 75 0D: jne 0x4238af
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [eax + edx*4 + 0c4h]
        push 20h
        and ecx, dword ptr [ebp - 8]
        pop edi
        test ecx, ecx
        ; Exact mapped bytes 7C 05: jl 0x4238b8
        __asm _emit 0x7c
        __asm _emit 0x05
        shl ecx, 1
        inc edi
        ; Exact mapped bytes EB F7: jmp 0x4238af
        __asm _emit 0xeb
        __asm _emit 0xf7
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + edi*8 + 4]
        mov ecx, dword ptr [edx]
        sub ecx, dword ptr [ebp - 10h]
        mov esi, ecx
        mov dword ptr [ebp - 8], ecx
        sar esi, 4
        dec esi
        cmp esi, 3fh
        ; Exact mapped bytes 7E 03: jle 0x4238d5
        __asm _emit 0x7e
        __asm _emit 0x03
        push 3fh
        pop esi
        cmp esi, edi
        ; Exact mapped bytes 0F 84 0D 01 00 00: je 0x4239ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 75 61: jne 0x423946
        __asm _emit 0x75
        __asm _emit 0x61
        cmp edi, 20h
        ; Exact mapped bytes 7D 2B: jge 0x423915
        __asm _emit 0x7d
        __asm _emit 0x2b
        mov ebx, 80000000h
        mov ecx, edi
        shr ebx, cl
        mov ecx, dword ptr [ebp - 4]
        lea edi, [eax + edi + 4]
        not ebx
        mov dword ptr [ebp - 14h], ebx
        and ebx, dword ptr [eax + ecx*4 + 44h]
        mov dword ptr [eax + ecx*4 + 44h], ebx
        dec byte ptr [edi]
        ; Exact mapped bytes 75 38: jne 0x423943
        __asm _emit 0x75
        __asm _emit 0x38
        mov ebx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 14h]
        and dword ptr [ebx], ecx
        ; Exact mapped bytes EB 31: jmp 0x423946
        __asm _emit 0xeb
        __asm _emit 0x31
        lea ecx, [edi - 20h]
        mov ebx, 80000000h
        shr ebx, cl
        mov ecx, dword ptr [ebp - 4]
        lea edi, [eax + edi + 4]
        lea ecx, [eax + ecx*4 + 0c4h]
        not ebx
        and dword ptr [ecx], ebx
        dec byte ptr [edi]
        mov dword ptr [ebp - 14h], ebx
        ; Exact mapped bytes 75 0B: jne 0x423943
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ebx, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 14h]
        and dword ptr [ebx + 4], ecx
        ; Exact mapped bytes EB 03: jmp 0x423946
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ebx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8]
        mov edi, dword ptr [edx + 4]
        cmp dword ptr [ebp - 8], 0
        mov dword ptr [ecx + 4], edi
        mov ecx, dword ptr [edx + 4]
        mov edi, dword ptr [edx + 8]
        mov dword ptr [ecx + 8], edi
        ; Exact mapped bytes 0F 84 94 00 00 00: je 0x4239f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edi, dword ptr [ecx + esi*8 + 4]
        lea ecx, [ecx + esi*8]
        mov dword ptr [edx + 4], edi
        mov dword ptr [edx + 8], ecx
        mov dword ptr [ecx + 4], edx
        mov ecx, dword ptr [edx + 4]
        mov dword ptr [ecx + 8], edx
        mov ecx, dword ptr [edx + 4]
        cmp ecx, dword ptr [edx + 8]
        ; Exact mapped bytes 75 64: jne 0x4239e7
        __asm _emit 0x75
        __asm _emit 0x64
        mov cl, byte ptr [esi + eax + 4]
        cmp esi, 20h
        mov byte ptr [ebp + 0bh], cl
        ; Exact mapped bytes 7D 29: jge 0x4239b8
        __asm _emit 0x7d
        __asm _emit 0x29
        inc cl
        cmp byte ptr [ebp + 0bh], 0
        mov byte ptr [esi + eax + 4], cl
        ; Exact mapped bytes 75 0B: jne 0x4239a6
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edi, 80000000h
        mov ecx, esi
        shr edi, cl
        or dword ptr [ebx], edi
        mov edi, 80000000h
        mov ecx, esi
        shr edi, cl
        mov ecx, dword ptr [ebp - 4]
        or dword ptr [eax + ecx*4 + 44h], edi
        ; Exact mapped bytes EB 2F: jmp 0x4239e7
        __asm _emit 0xeb
        __asm _emit 0x2f
        inc cl
        cmp byte ptr [ebp + 0bh], 0
        mov byte ptr [esi + eax + 4], cl
        ; Exact mapped bytes 75 0D: jne 0x4239d1
        __asm _emit 0x75
        __asm _emit 0x0d
        lea ecx, [esi - 20h]
        mov edi, 80000000h
        shr edi, cl
        or dword ptr [ebx + 4], edi
        mov ecx, dword ptr [ebp - 4]
        lea edi, [eax + ecx*4 + 0c4h]
        lea ecx, [esi - 20h]
        mov esi, 80000000h
        shr esi, cl
        or dword ptr [edi], esi
        mov ecx, dword ptr [ebp - 8]
        test ecx, ecx
        ; Exact mapped bytes 74 0B: je 0x4239f9
        __asm _emit 0x74
        __asm _emit 0x0b
        mov dword ptr [edx], ecx
        mov dword ptr [ecx + edx - 4], ecx
        ; Exact mapped bytes EB 03: jmp 0x4239f9
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 10h]
        add edx, ecx
        lea ecx, [esi + 1]
        mov dword ptr [edx], ecx
        mov dword ptr [edx + esi - 4], ecx
        mov esi, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [esi]
        test ecx, ecx
        lea edi, [ecx + 1]
        mov dword ptr [esi], edi
        ; Exact mapped bytes 75 1A: jne 0x423a2f
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes 3B 1D 58 10 45 00: cmp ebx, dword ptr [0x451058]
        __asm _emit 0x3b
        __asm _emit 0x1d
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 75 12: jne 0x423a2f
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D 50 10 45 00: cmp ecx, dword ptr [0x451050]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x50
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x423a2f
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 83 25 58 10 45 00 00: and dword ptr [0x451058], 0
        __asm _emit 0x83
        __asm _emit 0x25
        __asm _emit 0x58
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax], ecx
        lea eax, [edx + 4]
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
