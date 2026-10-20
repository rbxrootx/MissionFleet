// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886977C .. +0x19C bytes.
extern "C" __declspec(naked) void FUN_5886977c_5886977C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        xor esi, esi
        inc esi
        push 6a6h
        mov dword ptr [ebp - 8], esi
        ; Exact mapped bytes E8 3A 37 00 00: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x37
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        xor eax, eax
        pop ecx
        test ebx, ebx
        ; Exact mapped bytes 0F 84 19 01 00 00: je 0x588698bc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        mov dword ptr [ebx], esi
        lea edi, [ebx + 4]
        mov esi, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 07: mov word ptr [edi], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x07
        lea eax, [esi + 30h]
        push dword ptr [eax]
        mov dword ptr [ebp - 0ch], eax
        push 588c4e58h
        ; Exact mapped bytes FF 35 94 4D 8C 58: push dword ptr [0x588c4d94]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x94
        __asm _emit 0x4d
        __asm _emit 0x8c
        __asm _emit 0x58
        push 3
        push 351h
        push edi
        ; Exact mapped bytes E8 E9 FE FF FF: call 0x588696b8
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 588c4d94h
        add esp, 18h
        mov dword ptr [ebp - 4], eax
        push 588c4e54h
        push 351h
        push edi
        ; Exact mapped bytes E8 D6 C6 FF FF: call 0x58865ec0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 85 17 01 00 00: jne 0x5886990c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        lea ecx, [eax + 10h]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ecx]
        mov dword ptr [ebp - 10h], ecx
        ; Exact mapped bytes 66 8B 10: mov dx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x10
        ; Exact mapped bytes 66 3B 11: cmp dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x11
        ; Exact mapped bytes 75 1E: jne 0x5886982b
        __asm _emit 0x75
        __asm _emit 0x1e
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 74 15: je 0x58869827
        __asm _emit 0x74
        __asm _emit 0x15
        ; Exact mapped bytes 66 8B 50 02: mov dx, word ptr [eax + 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x02
        ; Exact mapped bytes 66 3B 51 02: cmp dx, word ptr [ecx + 2]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x51
        __asm _emit 0x02
        ; Exact mapped bytes 75 0F: jne 0x5886982b
        __asm _emit 0x75
        __asm _emit 0x0f
        add eax, 4
        add ecx, 4
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 DE: jne 0x58869805
        __asm _emit 0x75
        __asm _emit 0xde
        xor ecx, ecx
        ; Exact mapped bytes EB 05: jmp 0x58869830
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb ecx, ecx
        or ecx, 1
        push dword ptr [ebp - 10h]
        xor eax, eax
        test ecx, ecx
        push 588c4e58h
        cmove eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 0ch
        mov dword ptr [ebp - 4], eax
        push dword ptr [eax]
        push 3
        push 351h
        push edi
        ; Exact mapped bytes E8 57 FE FF FF: call 0x588696b8
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        add esp, 18h
        cmp eax, 588c4dc4h
        ; Exact mapped bytes 0F 8C 68 FF FF FF: jl 0x588697da
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x68
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 48: jne 0x588698c0
        __asm _emit 0x75
        __asm _emit 0x48
        mov ecx, dword ptr [esi + 28h]
        or edi, 0ffffffffh
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x58869893
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, edi
        ; Exact mapped bytes F0 0F C1 01: lock xadd dword ptr [ecx], eax
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 75 09: jne 0x58869893
        __asm _emit 0x75
        __asm _emit 0x09
        push dword ptr [esi + 28h]
        ; Exact mapped bytes E8 7E 33 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, dword ptr [esi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x588698aa
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes F0 0F C1 38: lock xadd dword ptr [eax], edi
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x38
        dec edi
        ; Exact mapped bytes 75 09: jne 0x588698aa
        __asm _emit 0x75
        __asm _emit 0x09
        push dword ptr [esi + 24h]
        ; Exact mapped bytes E8 67 33 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        and dword ptr [esi + 24h], 0
        lea eax, [ebx + 4]
        and dword ptr [esi + 1ch], 0
        mov dword ptr [esi + 28h], ebx
        mov dword ptr [esi + 20h], eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
        push ebx
        ; Exact mapped bytes E8 4A 33 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [esi + 28h]
        or edi, 0ffffffffh
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x588698e2
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, edi
        ; Exact mapped bytes F0 0F C1 01: lock xadd dword ptr [ecx], eax
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x01
        ; Exact mapped bytes 75 09: jne 0x588698e2
        __asm _emit 0x75
        __asm _emit 0x09
        push dword ptr [esi + 28h]
        ; Exact mapped bytes E8 2F 33 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, dword ptr [esi + 24h]
        test eax, eax
        ; Exact mapped bytes 74 10: je 0x588698f9
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes F0 0F C1 38: lock xadd dword ptr [eax], edi
        __asm _emit 0xf0
        __asm _emit 0x0f
        __asm _emit 0xc1
        __asm _emit 0x38
        dec edi
        ; Exact mapped bytes 75 09: jne 0x588698f9
        __asm _emit 0x75
        __asm _emit 0x09
        push dword ptr [esi + 24h]
        ; Exact mapped bytes E8 18 33 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x33
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor eax, eax
        mov dword ptr [esi + 24h], eax
        mov dword ptr [esi + 1ch], eax
        mov dword ptr [esi + 28h], eax
        mov dword ptr [esi + 20h], eax
        mov eax, dword ptr [esi + 40h]
        ; Exact mapped bytes EB AF: jmp 0x588698bb
        __asm _emit 0xeb
        __asm _emit 0xaf
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 C1 76 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x76
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
