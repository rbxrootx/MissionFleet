// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886F0B2 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_5886f0b2_5886F0B2() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 20h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push dword ptr [ebp + 10h]
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 08 8C FE FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x8c
        __asm _emit 0xfe
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        cmp edx, -1
        ; Exact mapped bytes 7C 13: jl 0x5886f0ea
        __asm _emit 0x7c
        __asm _emit 0x13
        cmp edx, 0ffh
        ; Exact mapped bytes 7F 0B: jg 0x5886f0ea
        __asm _emit 0x7f
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 1ch]
        mov eax, dword ptr [eax]
        movzx eax, word ptr [eax + edx*2]
        ; Exact mapped bytes EB 74: jmp 0x5886f15e
        __asm _emit 0xeb
        __asm _emit 0x74
        push ebx
        push esi
        mov esi, dword ptr [ebp - 1ch]
        mov ebx, edx
        sar ebx, 8
        movzx ecx, bl
        push edi
        mov eax, dword ptr [esi]
        xor edi, edi
        ; Exact mapped bytes 66 39 3C 48: cmp word ptr [eax + ecx*2], di
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x3c
        __asm _emit 0x48
        ; Exact mapped bytes 7D 10: jge 0x5886f112
        __asm _emit 0x7d
        __asm _emit 0x10
        xor ecx, ecx
        mov byte ptr [ebp - 10h], bl
        push 2
        mov byte ptr [ebp - 0fh], dl
        mov byte ptr [ebp - 0eh], cl
        pop eax
        ; Exact mapped bytes EB 0B: jmp 0x5886f11d
        __asm _emit 0xeb
        __asm _emit 0x0b
        xor ecx, ecx
        mov byte ptr [ebp - 10h], dl
        xor eax, eax
        mov byte ptr [ebp - 0fh], cl
        inc eax
        push 1
        mov dword ptr [ebp - 0ch], ecx
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        lea ecx, [ebp - 0ch]
        push dword ptr [esi + 8]
        push ecx
        push eax
        lea eax, [ebp - 10h]
        push eax
        lea eax, [ebp - 1ch]
        push 1
        push eax
        ; Exact mapped bytes E8 21 4A 00 00: call 0x58873b5e
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 1ch
        pop edi
        pop esi
        pop ebx
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x5886f15a
        __asm _emit 0x75
        __asm _emit 0x13
        cmp byte ptr [ebp - 14h], al
        ; Exact mapped bytes 74 0A: je 0x5886f156
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 20h]
        and dword ptr [eax + 350h], 0fffffffdh
        xor eax, eax
        ; Exact mapped bytes EB 17: jmp 0x5886f171
        __asm _emit 0xeb
        __asm _emit 0x17
        movzx eax, word ptr [ebp - 0ch]
        and eax, dword ptr [ebp + 0ch]
        cmp byte ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0A: je 0x5886f171
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 20h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 D5 1E FC FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x1e
        __asm _emit 0xfc
        __asm _emit 0xff
        leave
        ret
    }
}
