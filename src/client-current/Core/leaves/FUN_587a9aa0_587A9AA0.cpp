// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587A9AA0 .. +0x246 bytes.
extern "C" __declspec(naked) void FUN_587a9aa0_587A9AA0() {
    __asm {
        push ecx
        xor edx, edx
        cmp dword ptr [esp + 18h], edx
        push ebx
        mov ebx, dword ptr [esp + 14h]
        setne dl
        push esi
        mov esi, dword ptr [esp + 10h]
        mov dword ptr [esp + 8], edx
        lea eax, [edx + ebx]
        mov ecx, dword ptr [esi + 2b4h]
        cmp ecx, eax
        ; Exact mapped bytes 0F 82 09 02 00 00: jb 0x587a9cd2
        __asm _emit 0x0f
        __asm _emit 0x82
        __asm _emit 0x09
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        push ebp
        mov ebp, dword ptr [esp + 20h]
        lea eax, [edx + ebx]
        sub ecx, eax
        push edi
        cmp ecx, dword ptr [ebp]
        ; Exact mapped bytes 73 03: jae 0x587a9adc
        __asm _emit 0x73
        __asm _emit 0x03
        mov dword ptr [ebp], ecx
        push dword ptr [esi + 120h]
        push esi
        ; Exact mapped bytes E8 B8 03 00 00: call 0x587a9ea0
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 8
        test edi, edi
        ; Exact mapped bytes 0F 85 CA 01 00 00: jne 0x587a9cbf
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xca
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        sub eax, ebx
        push ebp
        mov dword ptr [esp + 1ch], eax
        lea eax, [esp + 1ch]
        push edi
        push eax
        mov eax, dword ptr [esi + 2d0h]
        add eax, ebx
        push eax
        push 1
        push dword ptr [esi + 120h]
        push esi
        ; Exact mapped bytes E8 D3 01 00 00: call 0x587a9cf0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 1ch
        cmp edi, 1
        ; Exact mapped bytes 0F 85 78 01 00 00: jne 0x587a9ca3
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esi + 84h]
        push eax
        ; Exact mapped bytes E8 69 5D 00 00: call 0x587af8a0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 0F 85 3F 01 00 00: jne 0x587a9c81
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x3f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp]
        mov edi, dword ptr [esp + 10h]
        add edi, ecx
        mov dword ptr [esp + 20h], ecx
        add edi, ebx
        push edi
        push esi
        mov dword ptr [esp + 18h], edi
        ; Exact mapped bytes E8 44 CF FF FF: call 0x587a6aa0
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xcf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ebp, eax
        add esp, 8
        test ebp, ebp
        ; Exact mapped bytes 0F 84 F7 00 00 00: je 0x587a9c60
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 0
        push ebp
        ; Exact mapped bytes E8 9E 32 0A 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x32
        __asm _emit 0x0a
        __asm _emit 0x00
        push dword ptr [esp + 30h]
        lea eax, [ebx + ebp]
        push eax
        lea eax, [esp + 2ch]
        push eax
        mov eax, dword ptr [esi + 2d0h]
        add eax, ebx
        push eax
        push 1
        push dword ptr [esi + 120h]
        push esi
        ; Exact mapped bytes E8 5A 01 00 00: call 0x587a9cf0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        add esp, 28h
        cmp edi, 1
        ; Exact mapped bytes 0F 85 97 00 00 00: jne 0x587a9c3b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 24h]
        mov eax, dword ptr [eax]
        cmp dword ptr [esp + 20h], eax
        ; Exact mapped bytes 75 43: jne 0x587a9bf3
        __asm _emit 0x75
        __asm _emit 0x43
        cmp dword ptr [esp + 28h], 0
        ; Exact mapped bytes 74 06: je 0x587a9bbd
        __asm _emit 0x74
        __asm _emit 0x06
        add eax, ebp
        mov byte ptr [eax + ebx], 0
        test ebx, ebx
        ; Exact mapped bytes 74 10: je 0x587a9bd1
        __asm _emit 0x74
        __asm _emit 0x10
        push ebx
        push dword ptr [esi + 2d0h]
        push ebp
        ; Exact mapped bytes E8 C2 2C 0A 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x2c
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [esi + 2d0h]
        mov ecx, dword ptr [esp + 10h]
        push eax
        push esi
        mov dword ptr [esi + 2d0h], ebp
        mov dword ptr [esi + 2d4h], ecx
        ; Exact mapped bytes E8 E2 CD FF FF: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 18: jmp 0x587a9c0b
        __asm _emit 0xeb
        __asm _emit 0x18
        mov edi, 0fffffff9h
        push ebp
        push esi
        ; Exact mapped bytes E8 D1 CD FF FF: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp edi, 1
        ; Exact mapped bytes 0F 85 A2 00 00 00: jne 0x587a9cad
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [esp + 1ch]
        sub eax, ebx
        cmp eax, dword ptr [esp + 18h]
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x587a9cad
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588b96fch
        push esi
        ; Exact mapped bytes E8 5A 50 FF FF: call 0x5879ec80
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [esi + 80h], 0
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        pop ebx
        pop ecx
        ret
        test edi, edi
        ; Exact mapped bytes 75 B9: jne 0x587a9bf8
        __asm _emit 0x75
        __asm _emit 0xb9
        push ebp
        push esi
        mov edi, 0fffffff9h
        ; Exact mapped bytes E8 85 CD FF FF: call 0x587a69d0
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [esi + 80h], 0
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        pop ebx
        pop ecx
        ret
        mov edi, 0fffffffch
        push edi
        push esi
        ; Exact mapped bytes E8 14 6E FF FF: call 0x587a0a80
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x6e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [esi + 80h], 0
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        pop ebx
        pop ecx
        ret
        push 1
        push esi
        ; Exact mapped bytes E8 F7 6D FF FF: call 0x587a0a80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [esi + 80h], 0
        mov edi, 0fffffff9h
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        pop ebx
        pop ecx
        ret
        test edi, edi
        mov eax, 0fffffff9h
        cmove edi, eax
        mov eax, edi
        mov dword ptr [esi + 80h], 0
        pop edi
        pop ebp
        pop esi
        pop ebx
        pop ecx
        ret
        cmp edi, 1
        mov eax, 0fffffff9h
        cmove edi, eax
        mov eax, edi
        pop edi
        pop ebp
        pop esi
        pop ebx
        pop ecx
        ret
        push -4
        push esi
        ; Exact mapped bytes E8 A6 6D FF FF: call 0x587a0a80
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov eax, 0fffffffch
        pop esi
        pop ebx
        pop ecx
        ret
    }
}
