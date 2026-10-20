// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042877B .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_0042877b_0042877B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        mov ebx, 44d6b8h
        xor ecx, ecx
        sub ebx, 60h
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 74 63: je 0x4287f4
        __asm _emit 0x74
        __asm _emit 0x63
        ; Exact mapped bytes 7D 10: jge 0x4287a3
        __asm _emit 0x7d
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 0ch]
        mov ebx, 44d818h
        neg eax
        mov dword ptr [ebp + 0ch], eax
        sub ebx, 60h
        cmp dword ptr [ebp + 10h], ecx
        ; Exact mapped bytes 75 06: jne 0x4287ae
        __asm _emit 0x75
        __asm _emit 0x06
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 89 08: mov word ptr [eax], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x08
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 74 41: je 0x4287f4
        __asm _emit 0x74
        __asm _emit 0x41
        push esi
        push edi
        mov eax, dword ptr [ebp + 0ch]
        add ebx, 54h
        sar dword ptr [ebp + 0ch], 3
        and eax, 7
        cmp eax, ecx
        ; Exact mapped bytes 74 27: je 0x4287ed
        __asm _emit 0x74
        __asm _emit 0x27
        lea eax, [eax + eax*2]
        ; Exact mapped bytes 66 81 3C 83 00 80: cmp word ptr [ebx + eax*4], 0x8000
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0x3c
        __asm _emit 0x83
        __asm _emit 0x00
        __asm _emit 0x80
        lea esi, [ebx + eax*4]
        ; Exact mapped bytes 72 0C: jb 0x4287e0
        __asm _emit 0x72
        __asm _emit 0x0c
        lea edi, [ebp - 0ch]
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        ; Exact mapped bytes A5: movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xa5
        dec dword ptr [ebp - 0ah]
        lea esi, [ebp - 0ch]
        push esi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 72 FD FF FF: call 0x42855b
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        xor ecx, ecx
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 75 C3: jne 0x4287b5
        __asm _emit 0x75
        __asm _emit 0xc3
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
