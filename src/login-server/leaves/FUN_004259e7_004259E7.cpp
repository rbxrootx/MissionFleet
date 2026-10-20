// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004259E7 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_004259e7_004259E7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        lea eax, [ebp - 28h]
        push edi
        push eax
        lea eax, [ebp - 10h]
        push eax
        mov eax, dword ptr [ebp + 8]
        push ecx
        push ecx
        ; Exact mapped bytes DD 00: fld qword ptr [eax]
        __asm _emit 0xdd
        __asm _emit 0x00
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 41 1A 00 00: call 0x427448
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x1a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ebx, dword ptr [ebp + 10h]
        lea esi, [eax - 1]
        xor eax, eax
        cmp dword ptr [ebp - 10h], 2dh
        sete al
        add eax, dword ptr [ebp + 0ch]
        mov edi, eax
        lea eax, [ebp - 10h]
        push eax
        push ebx
        push edi
        ; Exact mapped bytes E8 A8 19 00 00: call 0x4273d1
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        add esp, 1ch
        dec eax
        cmp esi, eax
        setl cl
        cmp eax, -4
        ; Exact mapped bytes 7C 26: jl 0x425a60
        __asm _emit 0x7c
        __asm _emit 0x26
        cmp eax, ebx
        ; Exact mapped bytes 7D 22: jge 0x425a60
        __asm _emit 0x7d
        __asm _emit 0x22
        test cl, cl
        ; Exact mapped bytes 74 0A: je 0x425a4c
        __asm _emit 0x74
        __asm _emit 0x0a
        mov al, byte ptr [edi]
        inc edi
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x425a42
        __asm _emit 0x75
        __asm _emit 0xf9
        and byte ptr [edi - 2], al
        lea eax, [ebp - 10h]
        push 1
        push eax
        push ebx
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E5 FE FF FF: call 0x425940
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        ; Exact mapped bytes EB 15: jmp 0x425a75
        __asm _emit 0xeb
        __asm _emit 0x15
        lea eax, [ebp - 10h]
        push 1
        push eax
        push dword ptr [ebp + 14h]
        push ebx
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B7 FD FF FF: call 0x425829
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
