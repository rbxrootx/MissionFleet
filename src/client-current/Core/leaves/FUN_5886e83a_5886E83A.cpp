// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E83A .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_5886e83a_5886E83A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push dword ptr [ebp + 10h]
        mov ebx, dword ptr [ebp + 0ch]
        push ebx
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D6 FC FF FF: call 0x5886e527
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        add esp, 0ch
        test ecx, ecx
        ; Exact mapped bytes 0F 84 30 01 00 00: je 0x5886e98e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x30
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 8]
        and eax, 3fh
        sar edx, 6
        push edi
        imul edi, eax, 38h
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [edx*4 + 589699b0h]
        mov dword ptr [ebp - 8], eax
        cmp byte ptr [eax + edi + 29h], 0
        ; Exact mapped bytes 75 07: jne 0x5886e889
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, ecx
        ; Exact mapped bytes E9 04 01 00 00: jmp 0x5886e98d
        __asm _emit 0xe9
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ecx + ebx]
        push esi
        lea esi, [eax - 1]
        mov cl, byte ptr [esi]
        test cl, cl
        ; Exact mapped bytes 78 07: js 0x5886e89d
        __asm _emit 0x78
        __asm _emit 0x07
        mov esi, eax
        ; Exact mapped bytes E9 9B 00 00 00: jmp 0x5886e938
        __asm _emit 0xe9
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        movzx eax, cl
        inc edx
        ; Exact mapped bytes EB 0E: jmp 0x5886e8b3
        __asm _emit 0xeb
        __asm _emit 0x0e
        cmp edx, 4
        ; Exact mapped bytes 77 12: ja 0x5886e8bc
        __asm _emit 0x77
        __asm _emit 0x12
        cmp esi, ebx
        ; Exact mapped bytes 72 0E: jb 0x5886e8bc
        __asm _emit 0x72
        __asm _emit 0x0e
        dec esi
        inc edx
        movzx eax, byte ptr [esi]
        cmp byte ptr [eax + 58907568h], 0
        ; Exact mapped bytes 74 E9: je 0x5886e8a5
        __asm _emit 0x74
        __asm _emit 0xe9
        mov cl, byte ptr [esi]
        movzx eax, cl
        ; Exact mapped bytes 0F BE 80 68 75 90 58: movsx eax, byte ptr [eax + 0x58907568]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x80
        __asm _emit 0x68
        __asm _emit 0x75
        __asm _emit 0x90
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 10: jne 0x5886e8dc
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes E8 9E 3B FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        ; Exact mapped bytes E9 88 00 00 00: jmp 0x5886e964
        __asm _emit 0xe9
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        inc eax
        cmp eax, edx
        ; Exact mapped bytes 75 04: jne 0x5886e8e5
        __asm _emit 0x75
        __asm _emit 0x04
        add esi, edx
        ; Exact mapped bytes EB 53: jmp 0x5886e938
        __asm _emit 0xeb
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 8]
        test byte ptr [eax + edi + 28h], 48h
        ; Exact mapped bytes 74 35: je 0x5886e924
        __asm _emit 0x74
        __asm _emit 0x35
        inc esi
        mov byte ptr [eax + edi + 2ah], cl
        cmp edx, 2
        ; Exact mapped bytes 72 11: jb 0x5886e90a
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [esi]
        inc esi
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov byte ptr [edi + eax + 2bh], cl
        cmp edx, 3
        ; Exact mapped bytes 75 11: jne 0x5886e920
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov cl, byte ptr [esi]
        inc esi
        mov eax, dword ptr [eax*4 + 589699b0h]
        mov byte ptr [edi + eax + 2ch], cl
        sub esi, edx
        ; Exact mapped bytes EB 14: jmp 0x5886e938
        __asm _emit 0xeb
        __asm _emit 0x14
        neg edx
        mov eax, edx
        push 1
        cdq
        push edx
        push eax
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D9 29 00 00: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x29
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push dword ptr [ebp + 18h]
        sub esi, ebx
        push dword ptr [ebp + 14h]
        push esi
        push ebx
        push 0
        push 0fde9h
        ; Exact mapped bytes E8 E1 11 00 00: call 0x5886fb2f
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        add esp, 18h
        test ebx, ebx
        ; Exact mapped bytes 75 12: jne 0x5886e969
        __asm _emit 0x75
        __asm _emit 0x12
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes E8 B0 3A FF FF: call 0x58862413
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x3a
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 23: jmp 0x5886e98c
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 4]
        cmp ebx, esi
        sete cl
        dec cl
        mov edx, dword ptr [eax*4 + 589699b0h]
        and cl, 2
        mov al, byte ptr [edi + edx + 2dh]
        and al, 0fdh
        or cl, al
        lea eax, [ebx + ebx]
        mov byte ptr [edi + edx + 2dh], cl
        pop esi
        pop edi
        pop ebx
        leave
        ret
    }
}
