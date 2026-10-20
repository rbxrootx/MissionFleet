// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58974F40 .. +0x10C bytes.
extern "C" __declspec(naked) void FUN_58974f40() {
    __asm {
        push ebx
        push ebp
        mov ebp, dword ptr [esp + 0ch]
        push esi
        push edi
        mov ebx, dword ptr [ebp + 18h]
        mov edi, dword ptr [ebx]
        mov esi, dword ptr [ebx + 4]
        test esi, esi
        ; Exact mapped bytes 75 14: jne 0x58974f68
        __asm _emit 0x75
        __asm _emit 0x14
        push ebp
        ; Exact mapped bytes FF 53 0C: call dword ptr [ebx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x0c
        add esp, 4
        test al, al
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x58974fea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebx]
        mov esi, dword ptr [ebx + 4]
        xor eax, eax
        dec esi
        mov al, byte ptr [edi]
        inc edi
        cmp eax, 0ffh
        ; Exact mapped bytes 74 33: je 0x58974fa8
        __asm _emit 0x74
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 194h]
        mov ecx, dword ptr [eax + 14h]
        inc ecx
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [ebx], edi
        test esi, esi
        mov dword ptr [ebx + 4], esi
        ; Exact mapped bytes 75 10: jne 0x58974f9b
        __asm _emit 0x75
        __asm _emit 0x10
        push ebp
        ; Exact mapped bytes FF 53 0C: call dword ptr [ebx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x0c
        add esp, 4
        test al, al
        ; Exact mapped bytes 74 54: je 0x58974fea
        __asm _emit 0x74
        __asm _emit 0x54
        mov edi, dword ptr [ebx]
        mov esi, dword ptr [ebx + 4]
        xor eax, eax
        dec esi
        mov al, byte ptr [edi]
        inc edi
        cmp eax, 0ffh
        ; Exact mapped bytes 75 CD: jne 0x58974f75
        __asm _emit 0x75
        __asm _emit 0xcd
        test esi, esi
        ; Exact mapped bytes 75 10: jne 0x58974fbc
        __asm _emit 0x75
        __asm _emit 0x10
        push ebp
        ; Exact mapped bytes FF 53 0C: call dword ptr [ebx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x53
        __asm _emit 0x0c
        add esp, 4
        test al, al
        ; Exact mapped bytes 74 33: je 0x58974fea
        __asm _emit 0x74
        __asm _emit 0x33
        mov edi, dword ptr [ebx]
        mov esi, dword ptr [ebx + 4]
        xor eax, eax
        dec esi
        mov al, byte ptr [edi]
        inc edi
        cmp eax, 0ffh
        mov dword ptr [esp + 14h], eax
        ; Exact mapped bytes 74 DB: je 0x58974fa8
        __asm _emit 0x74
        __asm _emit 0xdb
        test eax, eax
        ; Exact mapped bytes 75 20: jne 0x58974ff1
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 194h]
        mov ecx, dword ptr [eax + 14h]
        add ecx, 2
        mov dword ptr [eax + 14h], ecx
        mov dword ptr [ebx], edi
        mov dword ptr [ebx + 4], esi
        ; Exact mapped bytes E9 66 FF FF FF: jmp 0x58974f50
        __asm _emit 0xe9
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret
        mov ecx, dword ptr [ebp + 194h]
        mov edx, dword ptr [ecx + 14h]
        test edx, edx
        ; Exact mapped bytes 74 3C: je 0x5897503a
        __asm _emit 0x74
        __asm _emit 0x3c
        mov edx, dword ptr [ebp]
        push -1
        push ebp
        mov dword ptr [edx + 14h], 74h
        mov ecx, dword ptr [ebp + 194h]
        mov edx, dword ptr [ebp]
        mov ecx, dword ptr [ecx + 14h]
        mov dword ptr [edx + 18h], ecx
        mov edx, dword ptr [ebp]
        mov dword ptr [edx + 1ch], eax
        mov eax, dword ptr [ebp]
        ; Exact mapped bytes FF 50 04: call dword ptr [eax + 4]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 194h]
        mov eax, dword ptr [esp + 1ch]
        add esp, 8
        mov dword ptr [ecx + 14h], 0
        mov dword ptr [ebp + 17ch], eax
        mov dword ptr [ebx], edi
        mov dword ptr [ebx + 4], esi
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret
    }
}
