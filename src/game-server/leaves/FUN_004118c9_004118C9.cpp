// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004118C9 .. +0x2AA bytes.
extern "C" __declspec(naked) void FUN_004118c9_004118C9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], eax
        mov dword ptr [ebp - 1ch], eax
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 24h], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 24h], 0
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 28h], 0
        push 20h
        push 0
        mov edx, dword ptr [ebp - 24h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 52 7A 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x7a
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 AC 6E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        cmp eax, 20h
        ; Exact mapped bytes 7E 17: jle 0x411950
        __asm _emit 0x7e
        __asm _emit 0x17
        push 20h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 D5 76 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x76
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 27: jmp 0x411977
        __asm _emit 0xeb
        __asm _emit 0x27
        mov esi, esp
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 7D 6E 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x6e
        __asm _emit 0x09
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        add edx, 4
        push edx
        ; Exact mapped bytes E8 AC 76 09 00: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x76
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x411989
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 3D: jge 0x4119cc
        __asm _emit 0x7d
        __asm _emit 0x3d
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [ecx + 4]
        xor dl, 0aah
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 0ch]
        mov byte ptr [eax + 4], dl
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 4]
        mov ecx, edx
        mov eax, dword ptr [ebp - 0ch]
        cdq
        mov esi, 0dh
        idiv esi
        add edx, 1
        imul ecx, edx
        mov edx, dword ptr [ebp - 8]
        add edx, ecx
        mov dword ptr [ebp - 8], edx
        ; Exact mapped bytes EB B4: jmp 0x411980
        __asm _emit 0xeb
        __asm _emit 0xb4
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x4119de
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 10h
        ; Exact mapped bytes 7D 30: jge 0x411a14
        __asm _emit 0x7d
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 24h]
        mov al, byte ptr [edx + ecx*2 + 4]
        mov byte ptr [ebp - 14h], al
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ebp - 0ch]
        mov esi, dword ptr [ebp - 24h]
        mov al, byte ptr [esi + eax*2 + 5]
        mov byte ptr [edx + ecx*2 + 4], al
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 24h]
        mov al, byte ptr [ebp - 14h]
        mov byte ptr [edx + ecx*2 + 5], al
        ; Exact mapped bytes EB C1: jmp 0x4119d5
        __asm _emit 0xeb
        __asm _emit 0xc1
        mov ecx, dword ptr [ebp - 8]
        xor ecx, 390a4f16h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x411a32
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 7D 33: jge 0x411a6b
        __asm _emit 0x7d
        __asm _emit 0x33
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 3
        mov eax, 0ffh
        shl eax, cl
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        and ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        shl ecx, 3
        mov edx, dword ptr [ebp - 1ch]
        shr edx, cl
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [ebp - 20h]
        mov byte ptr [ebp + eax - 4], cl
        ; Exact mapped bytes EB BE: jmp 0x411a29
        __asm _emit 0xeb
        __asm _emit 0xbe
        mov dl, byte ptr [ebp - 4]
        mov byte ptr [ebp - 10h], dl
        mov al, byte ptr [ebp - 1]
        mov byte ptr [ebp - 4], al
        mov cl, byte ptr [ebp - 10h]
        mov byte ptr [ebp - 1], cl
        mov dl, byte ptr [ebp - 3]
        mov byte ptr [ebp - 10h], dl
        mov al, byte ptr [ebp - 2]
        mov byte ptr [ebp - 3], al
        mov cl, byte ptr [ebp - 10h]
        mov byte ptr [ebp - 2], cl
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x411aa1
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 0ch]
        add edx, 1
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], 20h
        ; Exact mapped bytes 7D 7A: jge 0x411b21
        __asm _emit 0x7d
        __asm _emit 0x7a
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 4]
        mov eax, dword ptr [ebp - 0ch]
        imul eax, ecx
        cdq
        mov ecx, 3
        idiv ecx
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 0ch]
        mov cl, byte ptr [eax + 4]
        xor cl, byte ptr [ebp + edx - 4]
        mov edx, dword ptr [ebp - 24h]
        add edx, dword ptr [ebp - 0ch]
        mov byte ptr [edx + 4], cl
        mov eax, dword ptr [ebp - 24h]
        add eax, dword ptr [ebp - 0ch]
        xor ecx, ecx
        mov cl, byte ptr [eax + 4]
        mov edx, dword ptr [ebp - 0ch]
        add edx, 11h
        imul ecx, edx
        mov eax, dword ptr [ebp - 24h]
        mov edx, dword ptr [eax + 24h]
        add edx, ecx
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [eax + 24h], edx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, dword ptr [ebp - 0ch]
        xor edx, edx
        mov dl, byte ptr [ecx + 4]
        mov eax, dword ptr [ebp - 0ch]
        add eax, 0dh
        imul edx, eax
        mov ecx, dword ptr [ebp - 24h]
        mov eax, dword ptr [ecx + 28h]
        lea ecx, [eax + edx - 1]
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 28h], ecx
        ; Exact mapped bytes E9 77 FF FF FF: jmp 0x411a98
        __asm _emit 0xe9
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 24h]
        xor ecx, 390a4f16h
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 24h], ecx
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 28h]
        xor ecx, 390a4f16h
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 28h], ecx
        mov eax, dword ptr [ebp - 24h]
        cmp dword ptr [eax + 24h], 0
        ; Exact mapped bytes 75 0A: jne 0x411b58
        __asm _emit 0x75
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 24h]
        mov dword ptr [ecx + 24h], 0b4920f27h
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [edx + 2ch], 1
        pop esi
        add esp, 24h
        cmp ebp, esp
        ; Exact mapped bytes E8 73 6C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x6c
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
