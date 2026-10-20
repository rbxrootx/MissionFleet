// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00411170 .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_00411170_00411170() {
    __asm {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr [esp + 14h]
        mov ebp, ecx
        xor ebx, ebx
        cmp esi, ebx
        ; Exact mapped bytes 66 C7 85 8C 0C 00 00 00 80: mov word ptr [ebp + 0xc8c], 0x8000
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x8c
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x80
        ; Exact mapped bytes 66 89 9D 8E 0C 00 00: mov word ptr [ebp + 0xc8e], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x8e
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp], 43d444h
        mov dword ptr [ebp + 104h], ebx
        mov dword ptr [ebp + 108h], ebx
        ; Exact mapped bytes 74 11: je 0x4111b3
        __asm _emit 0x74
        __asm _emit 0x11
        push edi
        lea edi, [ebp + 4]
        mov ecx, 10h
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        mov byte ptr [ebp + 43h], bl
        pop edi
        ; Exact mapped bytes EB 03: jmp 0x4111b6
        __asm _emit 0xeb
        __asm _emit 0x03
        mov byte ptr [ebp + 4], bl
        mov eax, dword ptr [esp + 18h]
        mov dword ptr [ebp + 110h], ebx
        mov dword ptr [ebp + 10ch], eax
        mov dword ptr [ebp + 114h], ebx
        mov dword ptr [ebp + 118h], ebx
        ; Exact mapped bytes FF 15 80 C5 43 00: call dword ptr [0x43c580]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x80
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov dword ptr [ebp + 11ch], eax
        mov dword ptr [ebp + 120h], ebx
        mov dword ptr [ebp + 124h], ebx
        mov dword ptr [ebp + 128h], ebx
        mov dword ptr [ebp + 12ch], ebx
        mov dword ptr [ebp + 130h], ebx
        lea eax, [ebp + 138h]
        mov ecx, 0b4h
        mov dword ptr [eax - 4], ebx
        mov dword ptr [eax], ebx
        mov dword ptr [eax + 4], ebx
        mov dword ptr [eax + 8], ebx
        add eax, 10h
        dec ecx
        ; Exact mapped bytes 75 EF: jne 0x411207
        __asm _emit 0x75
        __asm _emit 0xef
        lea ecx, [esp + 14h]
        push ecx
        ; Exact mapped bytes E8 00 BA 01 00: call 0x42cc22
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xba
        __asm _emit 0x01
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [esp + 1ch]
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [ebp + 0c78h], edx
        lea eax, [eax + eax*4]
        mov edx, dword ptr [esp + 24h]
        mov dword ptr [ebp + 0c7ch], ebx
        mov dword ptr [ebp + 0c80h], ebx
        lea eax, [eax + eax*4]
        mov dword ptr [ebp + 0c84h], ebx
        pop esi
        lea eax, [eax + eax*4]
        shl eax, 3
        mov dword ptr [ebp + 0c74h], eax
        mov eax, dword ptr [esp + 24h]
        mov dword ptr [ebp + 0c90h], ecx
        mov dword ptr [ebp + 0c98h], edx
        mov dword ptr [ebp + 0c9ch], eax
        ; Exact mapped bytes 66 C7 85 88 0C 00 00 01 00: mov word ptr [ebp + 0xc88], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x85
        __asm _emit 0x88
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 9D 8A 0C 00 00: mov word ptr [ebp + 0xc8a], bx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x9d
        __asm _emit 0x8a
        __asm _emit 0x0c
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, ebp
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
