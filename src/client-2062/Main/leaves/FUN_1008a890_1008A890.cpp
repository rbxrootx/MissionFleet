// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x1008A890 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_1008a890_1008A890() {
    __asm {
        sub esp, 0ch
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov dword ptr [esp + 18h], ebp
        mov ecx, dword ptr [ebp + 218h]
        ; Exact mapped bytes E8 98 95 07 00: call 0x10103e40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        xor edi, edi
        xor ebx, ebx
        mov dword ptr [esp + 14h], eax
        mov dword ptr [esp + 10h], ebx
        lea esi, [ebp + 1f8h]
        mov eax, dword ptr [esp + 14h]
        lea ecx, [ebx + eax]
        push ecx
        mov ecx, dword ptr [ebp + 218h]
        ; Exact mapped bytes E8 43 95 07 00: call 0x10103e10
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x95
        __asm _emit 0x07
        __asm _emit 0x00
        cmp eax, edi
        ; Exact mapped bytes 0F 84 98 00 00 00: je 0x1008a96d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [eax + 78h], edi
        ; Exact mapped bytes 75 17: jne 0x1008a8f1
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, esi
        mov ecx, 2
        mov edx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [edx + 50h], edi
        ; Exact mapped bytes 75 F5: jne 0x1008a8e1
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes E9 8E 00 00 00: jmp 0x1008a97f
        __asm _emit 0xe9
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 88 80 00 00 00: mov cx, word ptr [eax + 0x80]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x88
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 F9 03: cmp cx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x03
        ; Exact mapped bytes 75 26: jne 0x1008a924
        __asm _emit 0x75
        __asm _emit 0x26
        mov ecx, esi
        mov edx, 2
        mov ebx, dword ptr [eax + 94h]
        mov ebp, dword ptr [ecx]
        add ecx, 4
        dec edx
        lea ebx, [ebx + ebx + 5]
        mov dword ptr [ebp + 50h], ebx
        ; Exact mapped bytes 75 EB: jne 0x1008a905
        __asm _emit 0x75
        __asm _emit 0xeb
        mov ebp, dword ptr [esp + 18h]
        mov ebx, dword ptr [esp + 10h]
        ; Exact mapped bytes EB 5B: jmp 0x1008a97f
        __asm _emit 0xeb
        __asm _emit 0x5b
        ; Exact mapped bytes 66 83 F9 04: cmp cx, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x04
        ; Exact mapped bytes 75 18: jne 0x1008a942
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, esi
        mov ecx, 2
        mov edx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [edx + 50h], 3
        ; Exact mapped bytes 75 F1: jne 0x1008a931
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes EB 3D: jmp 0x1008a97f
        __asm _emit 0xeb
        __asm _emit 0x3d
        ; Exact mapped bytes 66 83 F9 06: cmp cx, 6
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xf9
        __asm _emit 0x06
        mov eax, esi
        mov ecx, 2
        ; Exact mapped bytes 75 11: jne 0x1008a960
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [edx + 50h], 1
        ; Exact mapped bytes 75 F1: jne 0x1008a94f
        __asm _emit 0x75
        __asm _emit 0xf1
        ; Exact mapped bytes EB 1F: jmp 0x1008a97f
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov edx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [edx + 50h], edi
        ; Exact mapped bytes 75 F5: jne 0x1008a960
        __asm _emit 0x75
        __asm _emit 0xf5
        ; Exact mapped bytes EB 12: jmp 0x1008a97f
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, esi
        mov ecx, 2
        mov edx, dword ptr [eax]
        add eax, 4
        dec ecx
        mov dword ptr [edx + 50h], edi
        ; Exact mapped bytes 75 F5: jne 0x1008a974
        __asm _emit 0x75
        __asm _emit 0xf5
        inc ebx
        add esi, 8
        cmp ebx, 4
        mov dword ptr [esp + 10h], ebx
        ; Exact mapped bytes 0F 8C 2A FF FF FF: jl 0x1008a8ba
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0ch
        ret
    }
}
