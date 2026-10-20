// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588677D8 .. +0x1A1 bytes.
extern "C" __declspec(naked) void FUN_588677d8_588677D8() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        cmp dword ptr [ebp + 8], 0
        push edi
        ; Exact mapped bytes 75 28: jne 0x5886780f
        __asm _emit 0x75
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 0ch]
        xor edi, edi
        push eax
        push edi
        push edi
        push edi
        push edi
        push edi
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        ; Exact mapped bytes E8 2C 97 FE FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x97
        __asm _emit 0xfe
        __asm _emit 0xff
        or eax, 0ffffffffh
        add esp, 18h
        or edx, eax
        ; Exact mapped bytes E9 67 01 00 00: jmp 0x58867976
        __asm _emit 0xe9
        __asm _emit 0x67
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E 54 00 00: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp + 8]
        xor edi, edi
        mov ebx, eax
        cmp dword ptr [ecx + 8], edi
        ; Exact mapped bytes 7D 03: jge 0x58867828
        __asm _emit 0x7d
        __asm _emit 0x03
        mov dword ptr [ecx + 8], edi
        push esi
        push dword ptr [ebp + 0ch]
        push 1
        push edi
        push edi
        push ebx
        ; Exact mapped bytes E8 BA 9A 00 00: call 0x588712f0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, edx
        add esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov esi, eax
        mov dword ptr [ebp - 18h], esi
        cmp ecx, edi
        ; Exact mapped bytes 7F 0E: jg 0x58867855
        __asm _emit 0x7f
        __asm _emit 0x0e
        ; Exact mapped bytes 0F 8C D2 00 00 00: jl 0x5886791f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp esi, edi
        ; Exact mapped bytes 0F 82 CA 00 00 00: jb 0x5886791f
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 0ch]
        nop
        test al, 0c0h
        ; Exact mapped bytes 75 12: jne 0x58867872
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 8]
        cdq
        sub esi, eax
        mov eax, esi
        sbb ecx, edx
        ; Exact mapped bytes E9 00 01 00 00: jmp 0x58867972
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebx
        and ebx, 3fh
        sar eax, 6
        imul ecx, ebx, 38h
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov dword ptr [ebp - 10h], ecx
        mov al, byte ptr [ecx + eax + 29h]
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ebp - 8], al
        mov eax, dword ptr [ecx]
        sub eax, dword ptr [ecx + 4]
        mov ecx, dword ptr [ecx + 0ch]
        cdq
        mov ebx, eax
        mov dword ptr [ebp - 14h], edx
        nop
        test cl, 3
        ; Exact mapped bytes 74 5B: je 0x58867903
        __asm _emit 0x74
        __asm _emit 0x5b
        cmp byte ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 25: jne 0x588678d9
        __asm _emit 0x75
        __asm _emit 0x25
        mov eax, dword ptr [ecx*4 + 589699b0h]
        test byte ptr [edx + eax + 2dh], 2
        ; Exact mapped bytes 74 17: je 0x588678d9
        __asm _emit 0x74
        __asm _emit 0x17
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp - 4]
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 02 00 00: call 0x58867b44
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x58867974
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx*4 + 589699b0h]
        cmp byte ptr [edx + eax + 28h], 0
        ; Exact mapped bytes 7D 3F: jge 0x58867926
        __asm _emit 0x7d
        __asm _emit 0x3f
        mov esi, dword ptr [ebp + 8]
        push dword ptr [ebp - 8]
        push dword ptr [esi]
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 13 04 00 00: call 0x58867d0a
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        add esp, 0ch
        add ebx, eax
        adc ecx, edx
        ; Exact mapped bytes EB 29: jmp 0x5886792c
        __asm _emit 0xeb
        __asm _emit 0x29
        mov eax, dword ptr [ebp + 8]
        mov eax, dword ptr [eax + 0ch]
        nop
        shr eax, 2
        test al, 1
        ; Exact mapped bytes 75 15: jne 0x58867926
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 0ch]
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        or eax, 0ffffffffh
        or edx, eax
        ; Exact mapped bytes EB 4E: jmp 0x58867974
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov esi, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, edx
        or eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 3A: je 0x58867970
        __asm _emit 0x74
        __asm _emit 0x3a
        mov eax, dword ptr [esi + 0ch]
        nop
        test al, 1
        ; Exact mapped bytes 74 16: je 0x58867954
        __asm _emit 0x74
        __asm _emit 0x16
        push dword ptr [ebp + 0ch]
        push ecx
        push ebx
        push dword ptr [ebp - 4]
        push edx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2A 00 00 00: call 0x58867979
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 18h
        ; Exact mapped bytes EB 20: jmp 0x58867974
        __asm _emit 0xeb
        __asm _emit 0x20
        cmp byte ptr [ebp - 8], 1
        ; Exact mapped bytes 75 11: jne 0x5886796b
        __asm _emit 0x75
        __asm _emit 0x11
        push edi
        push 2
        push ecx
        push ebx
        ; Exact mapped bytes E8 7C 57 01 00: call 0x5887d0e0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x57
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, edx
        mov ebx, eax
        mov edx, dword ptr [ebp - 18h]
        add ebx, edx
        adc ecx, dword ptr [ebp - 4]
        mov eax, ebx
        mov edx, ecx
        pop esi
        pop ebx
        pop edi
        leave
        ret
    }
}
