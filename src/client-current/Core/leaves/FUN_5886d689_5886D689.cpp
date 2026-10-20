// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D689 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_5886d689_5886D689() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov edx, dword ptr [ebp + 14h]
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        mov ecx, dword ptr [edx + 4]
        dec ecx
        cmp byte ptr [ebp + 18h], 0
        push edi
        mov edi, dword ptr [ebp + 10h]
        ; Exact mapped bytes 74 14: je 0x5886d6b8
        __asm _emit 0x74
        __asm _emit 0x14
        cmp ecx, edi
        ; Exact mapped bytes 75 10: jne 0x5886d6b8
        __asm _emit 0x75
        __asm _emit 0x10
        xor eax, eax
        cmp dword ptr [edx], 2dh
        sete al
        add eax, ecx
        ; Exact mapped bytes 66 C7 04 18 30 00: mov word ptr [eax + ebx], 0x30
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x18
        __asm _emit 0x30
        __asm _emit 0x00
        cmp dword ptr [edx], 2dh
        mov esi, ebx
        ; Exact mapped bytes 75 06: jne 0x5886d6c5
        __asm _emit 0x75
        __asm _emit 0x06
        mov byte ptr [ebx], 2dh
        lea esi, [ebx + 1]
        mov eax, dword ptr [edx + 4]
        test eax, eax
        ; Exact mapped bytes 7F 2F: jg 0x5886d6fb
        __asm _emit 0x7f
        __asm _emit 0x2f
        ; Exact mapped bytes 75 0C: jne 0x5886d6da
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [edx + 8]
        cmp byte ptr [eax], 30h
        ; Exact mapped bytes 75 04: jne 0x5886d6da
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x5886d6dc
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        cmp byte ptr [ebp + 18h], 0
        ; Exact mapped bytes 74 04: je 0x5886d6e6
        __asm _emit 0x74
        __asm _emit 0x04
        test al, al
        ; Exact mapped bytes 75 0F: jne 0x5886d6f5
        __asm _emit 0x75
        __asm _emit 0x0f
        push 1
        push esi
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 D3 01 00 00: call 0x5886d8c5
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov byte ptr [esi], 30h
        inc esi
        ; Exact mapped bytes EB 02: jmp 0x5886d6fd
        __asm _emit 0xeb
        __asm _emit 0x02
        add esi, eax
        test edi, edi
        ; Exact mapped bytes 7E 61: jle 0x5886d762
        __asm _emit 0x7e
        __asm _emit 0x61
        push 1
        push esi
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 B8 01 00 00: call 0x5886d8c5
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        add esp, 10h
        cmp byte ptr [eax + 14h], 0
        ; Exact mapped bytes 75 0A: jne 0x5886d723
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, eax
        ; Exact mapped bytes E8 80 87 FE FF: call 0x58855ea0
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 1ch]
        mov eax, dword ptr [eax + 0ch]
        mov eax, dword ptr [eax + 88h]
        mov eax, dword ptr [eax]
        mov al, byte ptr [eax]
        mov byte ptr [esi], al
        inc esi
        mov eax, dword ptr [ebp + 14h]
        mov eax, dword ptr [eax + 4]
        test eax, eax
        ; Exact mapped bytes 79 25: jns 0x5886d762
        __asm _emit 0x79
        __asm _emit 0x25
        neg eax
        cmp byte ptr [ebp + 18h], 0
        ; Exact mapped bytes 75 04: jne 0x5886d749
        __asm _emit 0x75
        __asm _emit 0x04
        cmp eax, edi
        ; Exact mapped bytes 7D 02: jge 0x5886d74b
        __asm _emit 0x7d
        __asm _emit 0x02
        mov edi, eax
        push edi
        push esi
        push dword ptr [ebp + 0ch]
        push ebx
        ; Exact mapped bytes E8 6F 01 00 00: call 0x5886d8c5
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push 30h
        push esi
        ; Exact mapped bytes E8 B1 F6 FD FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xf6
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 1ch
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        pop ebp
        ret
    }
}
