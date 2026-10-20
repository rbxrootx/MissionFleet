// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886FC53 .. +0x1CE bytes.
extern "C" __declspec(naked) void FUN_5886fc53_5886FC53() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 44h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        add edi, 0fffff894h
        cmp edi, 46h
        ; Exact mapped bytes 0F 8C 79 01 00 00: jl 0x5886fdf6
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x79
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp edi, 44dh
        ; Exact mapped bytes 0F 87 6D 01 00 00: ja 0x5886fdf6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x6d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebx - 1]
        cmp eax, 0bh
        ; Exact mapped bytes 0F 87 61 01 00 00: ja 0x5886fdf6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x61
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 10h]
        push eax
        push edi
        ; Exact mapped bytes E8 83 01 00 00: call 0x5886fe22
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test al, al
        ; Exact mapped bytes 0F 84 4C 01 00 00: je 0x5886fdf6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x4c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 14h], 17h
        ; Exact mapped bytes 0F 87 42 01 00 00: ja 0x5886fdf6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 18h], 3bh
        ; Exact mapped bytes 0F 87 38 01 00 00: ja 0x5886fdf6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 1ch], 3bh
        ; Exact mapped bytes 0F 87 2E 01 00 00: ja 0x5886fdf6
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x2e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebx*4 + 588c60b4h]
        add esi, dword ptr [ebp + 10h]
        push edi
        ; Exact mapped bytes E8 E6 27 FF FF: call 0x588624be
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test al, al
        ; Exact mapped bytes 74 06: je 0x5886fce3
        __asm _emit 0x74
        __asm _emit 0x06
        cmp ebx, 2
        ; Exact mapped bytes 7E 01: jle 0x5886fce3
        __asm _emit 0x7e
        __asm _emit 0x01
        inc esi
        ; Exact mapped bytes E8 95 89 FF FF: call 0x5886867d
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x89
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov dword ptr [ebp - 3ch], eax
        mov dword ptr [ebp - 38h], eax
        mov dword ptr [ebp - 34h], eax
        lea eax, [ebp - 3ch]
        push eax
        ; Exact mapped bytes E8 1F 17 00 00: call 0x5887141b
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 10 01 00 00: jne 0x5886fe15
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x10
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 39 17 00 00: call 0x58871447
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 FE 00 00 00: jne 0x5886fe15
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 34h]
        push eax
        ; Exact mapped bytes E8 53 17 00 00: call 0x58871473
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        test eax, eax
        ; Exact mapped bytes 0F 85 EC 00 00 00: jne 0x5886fe15
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        ; Exact mapped bytes E8 55 27 FF FF: call 0x58862484
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x27
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, 15180h
        imul ecx
        push 3ch
        mov ecx, eax
        mov dword ptr [ebp - 2ch], edx
        mov eax, esi
        mov edx, 15180h
        imul edx
        add ecx, eax
        mov eax, edi
        adc dword ptr [ebp - 2ch], edx
        mov edx, 1e13380h
        imul edx
        add ecx, eax
        mov eax, dword ptr [ebp + 14h]
        adc dword ptr [ebp - 2ch], edx
        mov edx, 0e10h
        imul edx
        add ecx, eax
        mov eax, dword ptr [ebp + 18h]
        adc dword ptr [ebp - 2ch], edx
        pop edx
        imul edx
        add ecx, eax
        mov eax, dword ptr [ebp - 34h]
        adc dword ptr [ebp - 2ch], edx
        cdq
        add ecx, eax
        mov dword ptr [ebp - 30h], ecx
        adc dword ptr [ebp - 2ch], edx
        mov ecx, dword ptr [ebp + 1ch]
        mov eax, ecx
        cdq
        add dword ptr [ebp - 30h], eax
        mov eax, dword ptr [ebp - 2ch]
        adc eax, edx
        sub dword ptr [ebp - 30h], 83941500h
        sbb eax, 0
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 38h]
        cdq
        add eax, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 40h], eax
        adc edx, dword ptr [ebp - 2ch]
        cmp dword ptr [ebp + 20h], 1
        mov dword ptr [ebp - 44h], edx
        ; Exact mapped bytes 74 55: je 0x5886fe06
        __asm _emit 0x74
        __asm _emit 0x55
        cmp dword ptr [ebp + 20h], -1
        lea eax, [ebx - 1]
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 0ch], esi
        mov dword ptr [ebp - 14h], edi
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 28h], ecx
        ; Exact mapped bytes 75 14: jne 0x5886fde6
        __asm _emit 0x75
        __asm _emit 0x14
        cmp dword ptr [ebp - 3ch], 0
        ; Exact mapped bytes 74 0E: je 0x5886fde6
        __asm _emit 0x74
        __asm _emit 0x0e
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 F9 88 FF FF: call 0x588686da
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x88
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x5886fdee
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 30h]
        mov edx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes EB 18: jmp 0x5886fe06
        __asm _emit 0xeb
        __asm _emit 0x18
        mov eax, dword ptr [ebp - 40h]
        mov edx, dword ptr [ebp - 44h]
        ; Exact mapped bytes EB 10: jmp 0x5886fe06
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes E8 74 26 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x26
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        or eax, 0ffffffffh
        or edx, eax
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 3D 12 FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x12
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 B8 11 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x11
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
