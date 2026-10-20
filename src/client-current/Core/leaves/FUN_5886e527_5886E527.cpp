// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E527 .. +0x153 bytes.
extern "C" __declspec(naked) void FUN_5886e527_5886E527() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov edx, dword ptr [ebp + 8]
        mov ecx, edx
        push ebx
        mov ebx, dword ptr [ebp + 0ch]
        mov eax, edx
        sar ecx, 6
        and eax, 3fh
        push esi
        push edi
        imul edi, eax, 38h
        mov eax, dword ptr [ecx*4 + 589699b0h]
        mov dword ptr [ebp - 18h], ecx
        mov ecx, dword ptr [edi + eax + 18h]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp + 10h]
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x5886e569
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp byte ptr [ebx], 0ah
        ; Exact mapped bytes 75 07: jne 0x5886e569
        __asm _emit 0x75
        __asm _emit 0x07
        or byte ptr [edi + eax + 28h], 4
        ; Exact mapped bytes EB 05: jmp 0x5886e56e
        __asm _emit 0xeb
        __asm _emit 0x05
        and byte ptr [edi + eax + 28h], 0fbh
        add ecx, ebx
        mov eax, ebx
        mov dword ptr [ebp - 10h], ecx
        mov esi, ebx
        cmp ebx, ecx
        ; Exact mapped bytes 0F 83 F2 00 00 00: jae 0x5886e671
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xf2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov cl, byte ptr [eax]
        cmp cl, 1ah
        ; Exact mapped bytes 0F 84 C2 00 00 00: je 0x5886e64c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ebx, [eax + 1]
        mov dword ptr [ebp - 8], ebx
        mov ebx, dword ptr [ebp + 0ch]
        cmp cl, 0dh
        ; Exact mapped bytes 74 05: je 0x5886e59d
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 20: jmp 0x5886e5bd
        __asm _emit 0xeb
        __asm _emit 0x20
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [ebp - 8], edx
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 73 31: jae 0x5886e5d9
        __asm _emit 0x73
        __asm _emit 0x31
        mov ebx, dword ptr [ebp - 8]
        cmp byte ptr [ebx], 0ah
        ; Exact mapped bytes 75 07: jne 0x5886e5b7
        __asm _emit 0x75
        __asm _emit 0x07
        add eax, 2
        mov cl, 0ah
        ; Exact mapped bytes EB 03: jmp 0x5886e5ba
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp - 8]
        mov ebx, dword ptr [ebp + 0ch]
        mov byte ptr [esi], cl
        mov dword ptr [ebp - 0ch], 1
        mov dword ptr [ebp - 8], esi
        mov esi, dword ptr [ebp - 0ch]
        add esi, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 72 AB: jb 0x5886e57f
        __asm _emit 0x72
        __asm _emit 0xab
        ; Exact mapped bytes E9 98 00 00 00: jmp 0x5886e671
        __asm _emit 0xe9
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 10h]
        push eax
        push 1
        lea eax, [ebp - 1]
        push eax
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 55: je 0x5886e647
        __asm _emit 0x74
        __asm _emit 0x55
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 4F: je 0x5886e647
        __asm _emit 0x74
        __asm _emit 0x4f
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx*4 + 589699b0h]
        test byte ptr [eax + edi + 28h], 48h
        ; Exact mapped bytes 74 1D: je 0x5886e626
        __asm _emit 0x74
        __asm _emit 0x1d
        mov cl, byte ptr [ebp - 1]
        cmp cl, 0ah
        ; Exact mapped bytes 75 05: jne 0x5886e616
        __asm _emit 0x75
        __asm _emit 0x05
        mov byte ptr [esi], 0ah
        ; Exact mapped bytes EB 5A: jmp 0x5886e670
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov byte ptr [esi], 0dh
        mov eax, dword ptr [edx*4 + 589699b0h]
        mov byte ptr [eax + edi + 2ah], cl
        ; Exact mapped bytes EB 4A: jmp 0x5886e670
        __asm _emit 0xeb
        __asm _emit 0x4a
        cmp byte ptr [ebp - 1], 0ah
        ; Exact mapped bytes 75 04: jne 0x5886e630
        __asm _emit 0x75
        __asm _emit 0x04
        cmp esi, ebx
        ; Exact mapped bytes 74 E1: je 0x5886e611
        __asm _emit 0x74
        __asm _emit 0xe1
        push 1
        push -1
        push -1
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D0 2C 00 00: call 0x5887130e
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x2c
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        cmp byte ptr [ebp - 1], 0ah
        ; Exact mapped bytes 74 2A: je 0x5886e671
        __asm _emit 0x74
        __asm _emit 0x2a
        mov byte ptr [esi], 0dh
        ; Exact mapped bytes EB 24: jmp 0x5886e670
        __asm _emit 0xeb
        __asm _emit 0x24
        mov eax, edx
        and edx, 3fh
        sar eax, 6
        imul edx, edx, 38h
        mov edi, dword ptr [eax*4 + 589699b0h]
        mov al, byte ptr [edi + edx + 28h]
        test al, 40h
        ; Exact mapped bytes 75 08: jne 0x5886e66e
        __asm _emit 0x75
        __asm _emit 0x08
        or al, 2
        mov byte ptr [edi + edx + 28h], al
        ; Exact mapped bytes EB 03: jmp 0x5886e671
        __asm _emit 0xeb
        __asm _emit 0x03
        mov byte ptr [esi], cl
        inc esi
        sub esi, ebx
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        leave
        ret
    }
}
