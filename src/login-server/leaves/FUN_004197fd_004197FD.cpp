// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004197FD .. +0x17A bytes.
extern "C" __declspec(naked) void FUN_004197fd_004197FD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, 440448h
        mov ebx, ecx
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov eax, dword ptr [ebx + 4ch]
        xor edi, edi
        lea edx, [ebp - 0ch]
        mov dword ptr [ebp - 0ch], edi
        mov ecx, dword ptr [eax]
        push edx
        push 440438h
        push eax
        ; Exact mapped bytes FF 11: call dword ptr [ecx]
        __asm _emit 0xff
        __asm _emit 0x11
        test eax, eax
        ; Exact mapped bytes 7C 17: jl 0x419845
        __asm _emit 0x7c
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        push dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push 1
        push eax
        ; Exact mapped bytes FF 51 10: call dword ptr [ecx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        push 10h
        push 440448h
        push dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], edi
        ; Exact mapped bytes E8 39 78 00 00: call 0x421090
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 F6 00 00 00: jne 0x419958
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [ebx + 4ch]
        lea ecx, [ebp - 14h]
        push ecx
        push 440428h
        mov eax, dword ptr [ebx]
        push ebx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 8C DD 00 00 00: jl 0x419958
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xdd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 14h]
        lea edx, [ebp - 4]
        mov dword ptr [ebp - 4], edi
        push edx
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 0F 8C BC 00 00 00: jl 0x41994f
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        lea edx, [ebp - 10h]
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 0F 8C 9E 00 00 00: jl 0x419946
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 10h]
        xor esi, esi
        ; Exact mapped bytes 66 39 78 30: cmp word ptr [eax + 0x30], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x78
        __asm _emit 0x30
        ; Exact mapped bytes 0F 86 83 00 00 00: jbe 0x41993a
        __asm _emit 0x0f
        __asm _emit 0x86
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        lea edx, [ebp - 1ch]
        push edx
        push esi
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 24: call dword ptr [ecx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x24
        test eax, eax
        ; Exact mapped bytes 7C 0A: jl 0x4198d3
        __asm _emit 0x7c
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 1ch]
        and eax, 7
        cmp al, 3
        ; Exact mapped bytes 74 0E: je 0x4198e1
        __asm _emit 0x74
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 10h]
        inc esi
        movzx eax, word ptr [eax + 30h]
        cmp esi, eax
        ; Exact mapped bytes 72 D8: jb 0x4198b7
        __asm _emit 0x72
        __asm _emit 0xd8
        ; Exact mapped bytes EB 59: jmp 0x41993a
        __asm _emit 0xeb
        __asm _emit 0x59
        mov eax, dword ptr [ebp - 4]
        lea edx, [ebp - 20h]
        mov dword ptr [ebp - 8], edi
        push edx
        mov ecx, dword ptr [eax]
        push esi
        push eax
        ; Exact mapped bytes FF 51 20: call dword ptr [ecx + 0x20]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x20
        test eax, eax
        ; Exact mapped bytes 7C 44: jl 0x41993a
        __asm _emit 0x7c
        __asm _emit 0x44
        mov eax, dword ptr [ebp - 4]
        lea edx, [ebp - 8]
        push edx
        push dword ptr [ebp - 20h]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 38: call dword ptr [ecx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x38
        test eax, eax
        ; Exact mapped bytes 7C 30: jl 0x41993a
        __asm _emit 0x7c
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        lea edx, [ebp - 18h]
        push edx
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 0C: call dword ptr [ecx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x0c
        test eax, eax
        ; Exact mapped bytes 7C 16: jl 0x419931
        __asm _emit 0x7c
        __asm _emit 0x16
        mov esi, dword ptr [ebp - 18h]
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov eax, dword ptr [ebp - 8]
        push dword ptr [ebp - 18h]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 4C: call dword ptr [ecx + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 4]
        push dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax]
        push eax
        ; Exact mapped bytes FF 51 4C: call dword ptr [ecx + 0x4c]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x4c
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [eax]
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        push 10h
        push 440448h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 77 00 00: call 0x421090
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x77
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        neg eax
        sbb eax, eax
        pop edi
        pop esi
        pop ebx
        neg eax
        leave
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
