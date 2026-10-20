// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004241D6 .. +0x208 bytes.
extern "C" __declspec(naked) void FUN_004241d6_004241D6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        ; Exact mapped bytes 8B 35 38 D0 44 00: mov esi, dword ptr [0x44d038]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        push edi
        mov edx, dword ptr [esi + 10h]
        cmp edx, -1
        ; Exact mapped bytes 0F 84 9F 00 00 00: je 0x42428f
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [esi + 8]
        lea ecx, [esi + 2018h]
        mov eax, edi
        sub eax, esi
        sub eax, 18h
        sar eax, 3
        shl eax, 0ch
        add eax, edx
        cmp edi, ecx
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 73 3A: jae 0x424249
        __asm _emit 0x73
        __asm _emit 0x3a
        mov ecx, dword ptr [edi]
        mov ebx, dword ptr [ebp + 8]
        cmp ecx, ebx
        ; Exact mapped bytes 7C 1A: jl 0x424232
        __asm _emit 0x7c
        __asm _emit 0x1a
        cmp dword ptr [edi + 4], ebx
        ; Exact mapped bytes 76 15: jbe 0x424232
        __asm _emit 0x76
        __asm _emit 0x15
        push ebx
        push ecx
        push eax
        ; Exact mapped bytes E8 B9 01 00 00: call 0x4243de
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 75: jne 0x4242a1
        __asm _emit 0x75
        __asm _emit 0x75
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edi + 4], ebx
        add edi, 8
        lea ecx, [esi + 2018h]
        add eax, 1000h
        cmp edi, ecx
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 72 C8: jb 0x42420f
        __asm _emit 0x72
        __asm _emit 0xc8
        ; Exact mapped bytes EB 03: jmp 0x42424c
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ebx, dword ptr [ebp + 8]
        mov eax, dword ptr [esi + 8]
        mov ecx, dword ptr [esi + 10h]
        lea edi, [esi + 18h]
        mov dword ptr [ebp - 8], eax
        cmp edi, eax
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 73 33: jae 0x424292
        __asm _emit 0x73
        __asm _emit 0x33
        mov eax, dword ptr [edi]
        cmp eax, ebx
        ; Exact mapped bytes 7C 19: jl 0x42427e
        __asm _emit 0x7c
        __asm _emit 0x19
        cmp dword ptr [edi + 4], ebx
        ; Exact mapped bytes 76 14: jbe 0x42427e
        __asm _emit 0x76
        __asm _emit 0x14
        push ebx
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 01 00 00: call 0x4243de
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 26: jne 0x4242a1
        __asm _emit 0x75
        __asm _emit 0x26
        mov dword ptr [edi + 4], ebx
        add dword ptr [ebp - 4], 1000h
        add edi, 8
        cmp edi, dword ptr [ebp - 8]
        ; Exact mapped bytes 72 D2: jb 0x42425f
        __asm _emit 0x72
        __asm _emit 0xd2
        ; Exact mapped bytes EB 03: jmp 0x424292
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ebx, dword ptr [ebp + 8]
        mov esi, dword ptr [esi]
        ; Exact mapped bytes 3B 35 38 D0 44 00: cmp esi, dword ptr [0x44d038]
        __asm _emit 0x3b
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        ; Exact mapped bytes 74 15: je 0x4242b1
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes E9 43 FF FF FF: jmp 0x4241e4
        __asm _emit 0xe9
        __asm _emit 0x43
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 89 35 38 D0 44 00: mov dword ptr [0x44d038], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        sub dword ptr [edi], ebx
        mov dword ptr [esi + 8], edi
        ; Exact mapped bytes E9 28 01 00 00: jmp 0x4243d9
        __asm _emit 0xe9
        __asm _emit 0x28
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 44b018h
        mov edi, eax
        cmp dword ptr [edi + 10h], -1
        ; Exact mapped bytes 74 06: je 0x4242c4
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [edi + 0ch], 0
        ; Exact mapped bytes 75 0C: jne 0x4242d0
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edi, dword ptr [edi]
        cmp edi, eax
        ; Exact mapped bytes 0F 84 D7 00 00 00: je 0x4243a5
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB E8: jmp 0x4242b8
        __asm _emit 0xeb
        __asm _emit 0xe8
        mov ebx, dword ptr [edi + 0ch]
        and dword ptr [ebp - 4], 0
        mov esi, ebx
        mov eax, ebx
        sub esi, edi
        sub esi, 18h
        sar esi, 3
        shl esi, 0ch
        add esi, dword ptr [edi + 10h]
        cmp dword ptr [ebx], -1
        ; Exact mapped bytes 75 11: jne 0x4242ff
        __asm _emit 0x75
        __asm _emit 0x11
        cmp dword ptr [ebp - 4], 10h
        ; Exact mapped bytes 7D 0B: jge 0x4242ff
        __asm _emit 0x7d
        __asm _emit 0x0b
        add eax, 8
        inc dword ptr [ebp - 4]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 74 EF: je 0x4242ee
        __asm _emit 0x74
        __asm _emit 0xef
        mov eax, dword ptr [ebp - 4]
        push 4
        shl eax, 0ch
        push 1000h
        push eax
        push esi
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes FF 15 80 C1 43 00: call dword ptr [0x43c180]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, esi
        ; Exact mapped bytes 0F 85 B8 00 00 00: jne 0x4243d7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push dword ptr [ebp - 8]
        push esi
        ; Exact mapped bytes E8 B6 A7 FF FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xa7
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        add esp, 0ch
        test edx, edx
        mov ecx, ebx
        ; Exact mapped bytes 7E 30: jle 0x424366
        __asm _emit 0x7e
        __asm _emit 0x30
        lea eax, [esi + 4]
        mov dword ptr [ebp - 4], edx
        or byte ptr [eax + 0f4h], 0ffh
        lea edx, [eax + 4]
        mov dword ptr [eax - 4], edx
        mov edx, 0f0h
        mov dword ptr [eax], edx
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], 0f1h
        add eax, 1000h
        add ecx, 8
        dec dword ptr [ebp - 4]
        ; Exact mapped bytes 75 D6: jne 0x42433c
        __asm _emit 0x75
        __asm _emit 0xd6
        ; Exact mapped bytes 89 3D 38 D0 44 00: mov dword ptr [0x44d038], edi
        __asm _emit 0x89
        __asm _emit 0x3d
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        lea eax, [edi + 2018h]
        cmp ecx, eax
        ; Exact mapped bytes 73 0C: jae 0x424382
        __asm _emit 0x73
        __asm _emit 0x0c
        cmp dword ptr [ecx], -1
        ; Exact mapped bytes 74 05: je 0x424380
        __asm _emit 0x74
        __asm _emit 0x05
        add ecx, 8
        ; Exact mapped bytes EB F2: jmp 0x424372
        __asm _emit 0xeb
        __asm _emit 0xf2
        cmp ecx, eax
        sbb eax, eax
        and eax, ecx
        mov dword ptr [edi + 0ch], eax
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [esi + 8], al
        mov dword ptr [edi + 8], ebx
        sub dword ptr [ebx], eax
        sub dword ptr [esi + 4], eax
        lea ecx, [esi + eax + 8]
        lea eax, [esi + 100h]
        mov dword ptr [esi], ecx
        ; Exact mapped bytes EB 34: jmp 0x4243d9
        __asm _emit 0xeb
        __asm _emit 0x34
        ; Exact mapped bytes E8 34 FB FF FF: call 0x423ede
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 29: je 0x4243d7
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [eax + 10h]
        mov byte ptr [ecx + 8], bl
        lea edx, [ecx + ebx + 8]
        ; Exact mapped bytes A3 38 D0 44 00: mov dword ptr [0x44d038], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0xd0
        __asm _emit 0x44
        __asm _emit 0x00
        mov dword ptr [ecx], edx
        mov edx, 0f0h
        sub edx, ebx
        mov dword ptr [ecx + 4], edx
        movzx edx, bl
        sub dword ptr [eax + 18h], edx
        lea eax, [ecx + 100h]
        ; Exact mapped bytes EB 02: jmp 0x4243d9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
