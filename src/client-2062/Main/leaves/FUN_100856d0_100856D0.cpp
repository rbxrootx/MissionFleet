// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100856D0 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_100856d0_100856D0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 8]
        push ebp
        push esi
        test ebx, ebx
        push edi
        mov ebp, ecx
        ; Exact mapped bytes 0F 84 8C 00 00 00: je 0x1008576e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 94h]
        xor edi, edi
        mov eax, dword ptr [ecx + 88h]
        test eax, eax
        ; Exact mapped bytes 7E 4B: jle 0x1008573f
        __asm _emit 0x7e
        __asm _emit 0x4b
        add ebx, 2dh
        push edi
        mov esi, ebx
        ; Exact mapped bytes E8 B1 E6 07 00: call 0x10103db0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xe6
        __asm _emit 0x07
        __asm _emit 0x00
        mov dl, byte ptr [eax]
        mov cl, dl
        cmp dl, byte ptr [esi]
        ; Exact mapped bytes 75 1C: jne 0x10085723
        __asm _emit 0x75
        __asm _emit 0x1c
        test cl, cl
        ; Exact mapped bytes 74 14: je 0x1008571f
        __asm _emit 0x74
        __asm _emit 0x14
        mov dl, byte ptr [eax + 1]
        mov cl, dl
        cmp dl, byte ptr [esi + 1]
        ; Exact mapped bytes 75 0E: jne 0x10085723
        __asm _emit 0x75
        __asm _emit 0x0e
        add eax, 2
        add esi, 2
        test cl, cl
        ; Exact mapped bytes 75 E0: jne 0x100856ff
        __asm _emit 0x75
        __asm _emit 0xe0
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x10085728
        __asm _emit 0xeb
        __asm _emit 0x05
        sbb eax, eax
        sbb eax, -1
        test eax, eax
        ; Exact mapped bytes 74 42: je 0x1008576e
        __asm _emit 0x74
        __asm _emit 0x42
        mov ecx, dword ptr [ebp + 94h]
        inc edi
        cmp edi, dword ptr [ecx + 88h]
        ; Exact mapped bytes 7C BC: jl 0x100856f7
        __asm _emit 0x7c
        __asm _emit 0xbc
        mov ebx, dword ptr [esp + 14h]
        mov eax, dword ptr [ebx]
        push 0ffffffh
        lea ecx, [ebx + 2dh]
        push eax
        push ecx
        mov ecx, dword ptr [ebp + 94h]
        ; Exact mapped bytes E8 5A E5 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebx + 4]
        mov ecx, dword ptr [ebp + 98h]
        push 0ffffffh
        add ebx, 0ch
        push edx
        push ebx
        ; Exact mapped bytes E8 42 E5 07 00: call 0x10103cb0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xe5
        __asm _emit 0x07
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebp
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
