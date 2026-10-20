// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584C6D60 .. +0x2AF bytes.
extern "C" __declspec(naked) void FUN_584c6d60_584C6D60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        push esi
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 28h], 0
        push 20h
        push 0
        mov edx, dword ptr [ebp - 0ch]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 7B 60 38 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x60
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        cmp eax, 20h
        ; Exact mapped bytes 7E 17: jle 0x584c6dbe
        __asm _emit 0x7e
        __asm _emit 0x17
        push 20h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 D7 5A 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x5a
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 1E: jmp 0x584c6ddc
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 B7 5A 38 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x5a
        __asm _emit 0x38
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584c6dee
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 3C: jge 0x584c6e30
        __asm _emit 0x7d
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + 4]
        xor edx, 0aah
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 4], dl
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, dword ptr [ebp - 8]
        movzx ecx, byte ptr [ecx + 4]
        mov eax, dword ptr [ebp - 8]
        cdq
        mov esi, 0dh
        idiv esi
        add edx, 1
        imul ecx, edx
        add ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB B5: jmp 0x584c6de5
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584c6e42
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 10h
        ; Exact mapped bytes 7D 30: jge 0x584c6e78
        __asm _emit 0x7d
        __asm _emit 0x30
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [ecx + eax*2 + 4]
        mov byte ptr [ebp - 2], dl
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 0ch]
        mov dl, byte ptr [esi + edx*2 + 5]
        mov byte ptr [ecx + eax*2 + 4], dl
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [ebp - 2]
        mov byte ptr [ecx + eax*2 + 5], dl
        ; Exact mapped bytes EB C1: jmp 0x584c6e39
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov eax, dword ptr [ebp - 14h]
        xor eax, 390a4f16h
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584c6e95
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 8], 4
        ; Exact mapped bytes 7D 33: jge 0x584c6ece
        __asm _emit 0x7d
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 3
        mov edx, 0ffh
        shl edx, cl
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 18h]
        and eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 8]
        shl ecx, 3
        mov edx, dword ptr [ebp - 1ch]
        shr edx, cl
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [ebp + eax - 10h], cl
        ; Exact mapped bytes EB BE: jmp 0x584c6e8c
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov edx, 1
        imul eax, edx, 0
        mov cl, byte ptr [ebp + eax - 10h]
        mov byte ptr [ebp - 1], cl
        mov edx, 1
        imul eax, edx, 3
        mov ecx, 1
        imul edx, ecx, 0
        mov al, byte ptr [ebp + eax - 10h]
        mov byte ptr [ebp + edx - 10h], al
        mov ecx, 1
        imul edx, ecx, 3
        mov al, byte ptr [ebp - 1]
        mov byte ptr [ebp + edx - 10h], al
        mov ecx, 1
        shl ecx, 0
        mov dl, byte ptr [ebp + ecx - 10h]
        mov byte ptr [ebp - 1], dl
        mov eax, 1
        shl eax, 1
        mov ecx, 1
        shl ecx, 0
        mov dl, byte ptr [ebp + eax - 10h]
        mov byte ptr [ebp + ecx - 10h], dl
        mov eax, 1
        shl eax, 1
        mov cl, byte ptr [ebp - 1]
        mov byte ptr [ebp + eax - 10h], cl
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x584c6f4a
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 20h
        ; Exact mapped bytes 7D 79: jge 0x584c6fc9
        __asm _emit 0x7d
        __asm _emit 0x79
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 4]
        mov eax, ecx
        imul eax, dword ptr [ebp - 8]
        cdq
        mov ecx, 3
        idiv ecx
        movzx edx, byte ptr [ebp + edx - 10h]
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 4]
        xor ecx, edx
        mov edx, dword ptr [ebp - 0ch]
        add edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 4], cl
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 4]
        mov edx, dword ptr [ebp - 8]
        add edx, 11h
        imul ecx, edx
        mov eax, dword ptr [ebp - 0ch]
        add ecx, dword ptr [eax + 24h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 0ch]
        add eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + 4]
        mov edx, dword ptr [ebp - 8]
        add edx, 0dh
        imul ecx, edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 28h]
        lea eax, [ecx + edx - 1]
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 28h], eax
        ; Exact mapped bytes E9 78 FF FF FF: jmp 0x584c6f41
        __asm _emit 0xe9
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 24h]
        xor eax, 390a4f16h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 24h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 28h]
        xor eax, 390a4f16h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 28h], eax
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 24h], 0
        ; Exact mapped bytes 75 0A: jne 0x584c6ffe
        __asm _emit 0x75
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [eax + 24h], 0b4920f27h
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx + 2ch], 1
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
