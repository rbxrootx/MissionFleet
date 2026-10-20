// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422D81 .. +0x1BC bytes.
extern "C" __declspec(naked) void FUN_00422d81_00422D81() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        push ebx
        push esi
        push edi
        push 480h
        ; Exact mapped bytes E8 50 C6 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 08: jne 0x422da3
        __asm _emit 0x75
        __asm _emit 0x08
        push 1bh
        ; Exact mapped bytes E8 95 C2 FF FF: call 0x41f037
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc2
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes 89 35 80 10 45 00: mov dword ptr [0x451080], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 80 11 45 00 20 00 00 00: mov dword ptr [0x451180], 0x20
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 480h]
        cmp esi, eax
        ; Exact mapped bytes 73 1E: jae 0x422ddb
        __asm _emit 0x73
        __asm _emit 0x1e
        and byte ptr [esi + 4], 0
        or dword ptr [esi], 0ffffffffh
        and dword ptr [esi + 8], 0
        mov byte ptr [esi + 5], 0ah
        ; Exact mapped bytes A1 80 10 45 00: mov eax, dword ptr [0x451080]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        add esi, 24h
        add eax, 480h
        ; Exact mapped bytes EB DE: jmp 0x422db9
        __asm _emit 0xeb
        __asm _emit 0xde
        lea eax, [ebp - 48h]
        push eax
        ; Exact mapped bytes FF 15 1C C1 43 00: call dword ptr [0x43c11c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7D EA 00: cmp word ptr [ebp - 0x16], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0xea
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 D1 00 00 00: je 0x422ec1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        test eax, eax
        ; Exact mapped bytes 0F 84 C6 00 00 00: je 0x422ec1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [eax]
        lea ebx, [eax + 4]
        lea eax, [ebx + edi]
        mov dword ptr [ebp - 4], eax
        mov eax, 800h
        cmp edi, eax
        ; Exact mapped bytes 7C 02: jl 0x422e11
        __asm _emit 0x7c
        __asm _emit 0x02
        mov edi, eax
        ; Exact mapped bytes 39 3D 80 11 45 00: cmp dword ptr [0x451180], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7D 56: jge 0x422e6f
        __asm _emit 0x7d
        __asm _emit 0x56
        mov esi, 451084h
        push 480h
        ; Exact mapped bytes E8 BC C5 FF FF: call 0x41f3e4
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xc5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        pop ecx
        ; Exact mapped bytes 74 3C: je 0x422e69
        __asm _emit 0x74
        __asm _emit 0x3c
        ; Exact mapped bytes 83 05 80 11 45 00 20: add dword ptr [0x451180], 0x20
        __asm _emit 0x83
        __asm _emit 0x05
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x20
        mov dword ptr [esi], eax
        lea ecx, [eax + 480h]
        cmp eax, ecx
        ; Exact mapped bytes 73 1C: jae 0x422e5c
        __asm _emit 0x73
        __asm _emit 0x1c
        and byte ptr [eax + 4], 0
        or dword ptr [eax], 0ffffffffh
        and dword ptr [eax + 8], 0
        mov byte ptr [eax + 5], 0ah
        mov ecx, dword ptr [esi]
        add eax, 24h
        add ecx, 480h
        ; Exact mapped bytes EB E0: jmp 0x422e3c
        __asm _emit 0xeb
        __asm _emit 0xe0
        add esi, 4
        ; Exact mapped bytes 39 3D 80 11 45 00: cmp dword ptr [0x451180], edi
        __asm _emit 0x39
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 7C B7: jl 0x422e1e
        __asm _emit 0x7c
        __asm _emit 0xb7
        ; Exact mapped bytes EB 06: jmp 0x422e6f
        __asm _emit 0xeb
        __asm _emit 0x06
        ; Exact mapped bytes 8B 3D 80 11 45 00: mov edi, dword ptr [0x451180]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        xor esi, esi
        test edi, edi
        ; Exact mapped bytes 7E 4C: jle 0x422ec1
        __asm _emit 0x7e
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        cmp ecx, -1
        ; Exact mapped bytes 74 38: je 0x422eb7
        __asm _emit 0x74
        __asm _emit 0x38
        mov al, byte ptr [ebx]
        test al, 1
        ; Exact mapped bytes 74 32: je 0x422eb7
        __asm _emit 0x74
        __asm _emit 0x32
        test al, 8
        ; Exact mapped bytes 75 0B: jne 0x422e94
        __asm _emit 0x75
        __asm _emit 0x0b
        push ecx
        ; Exact mapped bytes FF 15 68 C1 43 00: call dword ptr [0x43c168]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x422eb7
        __asm _emit 0x74
        __asm _emit 0x23
        mov ecx, esi
        mov eax, esi
        sar ecx, 5
        and eax, 1fh
        mov ecx, dword ptr [ecx*4 + 451080h]
        lea eax, [eax + eax*8]
        lea eax, [ecx + eax*4]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx]
        mov dword ptr [eax], ecx
        mov cl, byte ptr [ebx]
        mov byte ptr [eax + 4], cl
        add dword ptr [ebp - 4], 4
        inc esi
        inc ebx
        cmp esi, edi
        ; Exact mapped bytes 7C B4: jl 0x422e75
        __asm _emit 0x7c
        __asm _emit 0xb4
        xor ebx, ebx
        ; Exact mapped bytes 8B 0D 80 10 45 00: mov ecx, dword ptr [0x451080]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x00
        lea eax, [ebx + ebx*8]
        cmp dword ptr [ecx + eax*4], -1
        lea esi, [ecx + eax*4]
        ; Exact mapped bytes 75 4D: jne 0x422f22
        __asm _emit 0x75
        __asm _emit 0x4d
        test ebx, ebx
        mov byte ptr [esi + 4], 81h
        ; Exact mapped bytes 75 05: jne 0x422ee2
        __asm _emit 0x75
        __asm _emit 0x05
        push -0ah
        pop eax
        ; Exact mapped bytes EB 0A: jmp 0x422eec
        __asm _emit 0xeb
        __asm _emit 0x0a
        mov eax, ebx
        dec eax
        neg eax
        sbb eax, eax
        add eax, -0bh
        push eax
        ; Exact mapped bytes FF 15 64 C1 43 00: call dword ptr [0x43c164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 74 17: je 0x422f11
        __asm _emit 0x74
        __asm _emit 0x17
        push edi
        ; Exact mapped bytes FF 15 68 C1 43 00: call dword ptr [0x43c168]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 0C: je 0x422f11
        __asm _emit 0x74
        __asm _emit 0x0c
        and eax, 0ffh
        mov dword ptr [esi], edi
        cmp eax, 2
        ; Exact mapped bytes 75 06: jne 0x422f17
        __asm _emit 0x75
        __asm _emit 0x06
        or byte ptr [esi + 4], 40h
        ; Exact mapped bytes EB 0F: jmp 0x422f26
        __asm _emit 0xeb
        __asm _emit 0x0f
        cmp eax, 3
        ; Exact mapped bytes 75 0A: jne 0x422f26
        __asm _emit 0x75
        __asm _emit 0x0a
        or byte ptr [esi + 4], 8
        ; Exact mapped bytes EB 04: jmp 0x422f26
        __asm _emit 0xeb
        __asm _emit 0x04
        or byte ptr [esi + 4], 80h
        inc ebx
        cmp ebx, 3
        ; Exact mapped bytes 7C 97: jl 0x422ec3
        __asm _emit 0x7c
        __asm _emit 0x97
        ; Exact mapped bytes FF 35 80 11 45 00: push dword ptr [0x451180]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x80
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 60 C1 43 00: call dword ptr [0x43c160]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
