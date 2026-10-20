// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D4BD .. +0x142 bytes.
extern "C" __declspec(naked) void FUN_5886d4bd_5886D4BD() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        xor eax, eax
        push ebx
        mov ebx, dword ptr [ebp + 10h]
        test ebx, ebx
        push esi
        cmovg eax, ebx
        add eax, 9
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 77 23: ja 0x5886d4f9
        __asm _emit 0x77
        __asm _emit 0x23
        mov ecx, dword ptr [ebp + 24h]
        push 22h
        pop esi
        push ecx
        mov byte ptr [ecx + 1ch], 1
        mov dword ptr [ecx + 18h], esi
        xor ecx, ecx
        push ecx
        push ecx
        push ecx
        push ecx
        push ecx
        ; Exact mapped bytes E8 3E 3A FE FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x3a
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 18h
        mov eax, esi
        pop esi
        pop ebx
        pop ebp
        ret
        cmp byte ptr [ebp + 20h], 0
        push edi
        mov edi, dword ptr [ebp + 8]
        ; Exact mapped bytes 74 22: je 0x5886d525
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp + 1ch]
        xor eax, eax
        test ebx, ebx
        setg al
        push eax
        xor eax, eax
        cmp dword ptr [ecx], 2dh
        sete al
        add eax, edi
        push eax
        push dword ptr [ebp + 0ch]
        push edi
        ; Exact mapped bytes E8 A3 03 00 00: call 0x5886d8c5
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov eax, dword ptr [ebp + 1ch]
        mov esi, edi
        cmp dword ptr [eax], 2dh
        ; Exact mapped bytes 75 06: jne 0x5886d535
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [edi], 2dh
        lea esi, [edi + 1]
        test ebx, ebx
        ; Exact mapped bytes 7E 28: jle 0x5886d561
        __asm _emit 0x7e
        __asm _emit 0x28
        mov al, byte ptr [esi + 1]
        mov byte ptr [esi], al
        inc esi
        mov eax, dword ptr [ebp + 24h]
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x5886d552
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, eax
        ; Exact mapped bytes E8 51 89 FE FF: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 24h]
        mov eax, dword ptr [eax + 0ch]
        mov eax, dword ptr [eax + 88h]
        mov eax, dword ptr [eax]
        mov al, byte ptr [eax]
        mov byte ptr [esi], al
        movzx eax, byte ptr [ebp + 20h]
        xor eax, 1
        add eax, ebx
        add esi, eax
        sub edi, esi
        add edi, dword ptr [ebp + 0ch]
        cmp dword ptr [ebp + 0ch], -1
        push 588c5950h
        cmove edi, dword ptr [ebp + 0ch]
        push edi
        push esi
        ; Exact mapped bytes E8 0B A2 FE FF: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 67: jne 0x5886d5f3
        __asm _emit 0x75
        __asm _emit 0x67
        lea ecx, [esi + 2]
        cmp byte ptr [ebp + 14h], al
        ; Exact mapped bytes 74 03: je 0x5886d597
        __asm _emit 0x74
        __asm _emit 0x03
        mov byte ptr [esi], 45h
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [edx + 8]
        cmp byte ptr [eax], 30h
        ; Exact mapped bytes 74 2F: je 0x5886d5d1
        __asm _emit 0x74
        __asm _emit 0x2f
        mov edx, dword ptr [edx + 4]
        sub edx, 1
        ; Exact mapped bytes 79 06: jns 0x5886d5b0
        __asm _emit 0x79
        __asm _emit 0x06
        neg edx
        mov byte ptr [esi + 1], 2dh
        push 64h
        pop edi
        cmp edx, edi
        ; Exact mapped bytes 7C 08: jl 0x5886d5bf
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, edx
        cdq
        idiv edi
        add byte ptr [esi + 2], al
        push 0ah
        pop edi
        cmp edx, edi
        ; Exact mapped bytes 7C 08: jl 0x5886d5ce
        __asm _emit 0x7c
        __asm _emit 0x08
        mov eax, edx
        cdq
        idiv edi
        add byte ptr [esi + 3], al
        add byte ptr [esi + 4], dl
        cmp dword ptr [ebp + 18h], 2
        pop edi
        ; Exact mapped bytes 75 14: jne 0x5886d5ec
        __asm _emit 0x75
        __asm _emit 0x14
        cmp byte ptr [ecx], 30h
        ; Exact mapped bytes 75 0F: jne 0x5886d5ec
        __asm _emit 0x75
        __asm _emit 0x0f
        push 3
        lea eax, [ecx + 1]
        push eax
        push ecx
        ; Exact mapped bytes E8 A7 F2 FD FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf2
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        xor eax, eax
        ; Exact mapped bytes E9 02 FF FF FF: jmp 0x5886d4f5
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        push ecx
        push ecx
        push ecx
        push ecx
        push ecx
        ; Exact mapped bytes E8 DA 39 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x39
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
