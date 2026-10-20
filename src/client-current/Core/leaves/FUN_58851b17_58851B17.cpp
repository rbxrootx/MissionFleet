// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58851B17 .. +0x9A bytes.
extern "C" __declspec(naked) void FUN_58851b17_58851B17() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        cmp dword ptr [ebp + 18h], 0
        push edi
        ; Exact mapped bytes 75 23: jne 0x58851b46
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 F0 F3 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 68: jmp 0x58851bae
        __asm _emit 0xeb
        __asm _emit 0x68
        push esi
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 74 3E: je 0x58851b8c
        __asm _emit 0x74
        __asm _emit 0x3e
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 76 38: jbe 0x58851b8c
        __asm _emit 0x76
        __asm _emit 0x38
        push dword ptr [ebp + 20h]
        mov edi, dword ptr [ebp + 1ch]
        push edi
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push esi
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 14 FC FF FF: call 0x58851781
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 1ch
        test eax, eax
        ; Exact mapped bytes 79 05: jns 0x58851b79
        __asm _emit 0x79
        __asm _emit 0x05
        xor ecx, ecx
        ; Exact mapped bytes 66 89 0E: mov word ptr [esi], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0e
        cmp eax, -2
        ; Exact mapped bytes 75 2F: jne 0x58851bad
        __asm _emit 0x75
        __asm _emit 0x2f
        mov byte ptr [edi + 1ch], 1
        mov dword ptr [edi + 18h], 22h
        push edi
        ; Exact mapped bytes EB 0F: jmp 0x58851b9b
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], 16h
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 87 F3 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xf3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        or eax, 0ffffffffh
        pop esi
        pop edi
        pop ebp
        ret
    }
}
