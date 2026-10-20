// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00420D02 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_00420d02_00420D02() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        xor eax, eax
        push edi
        ; Exact mapped bytes 39 05 98 11 45 00: cmp dword ptr [0x451198], eax
        __asm _emit 0x39
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 13: je 0x420d27
        __asm _emit 0x74
        __asm _emit 0x13
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4F 00 00 00: call 0x420d71
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 47: jmp 0x420d6e
        __asm _emit 0xeb
        __asm _emit 0x47
        mov edi, dword ptr [ebp + 14h]
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [edi]
        ; Exact mapped bytes 73 3B: jae 0x420d6c
        __asm _emit 0x73
        __asm _emit 0x3b
        dec ecx
        push esi
        mov esi, dword ptr [ebp + 10h]
        lea eax, [ecx + 1]
        test eax, eax
        ; Exact mapped bytes 74 25: je 0x420d62
        __asm _emit 0x74
        __asm _emit 0x25
        push ebx
        mov eax, dword ptr [ebp + 8]
        push 0ah
        cdq
        pop ebx
        idiv ebx
        mov eax, dword ptr [esi]
        add dl, 30h
        mov byte ptr [eax + ecx], dl
        mov eax, dword ptr [ebp + 8]
        cdq
        idiv ebx
        inc dword ptr [ebp - 4]
        dec ecx
        cmp ecx, -1
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 DD: jne 0x420d3e
        __asm _emit 0x75
        __asm _emit 0xdd
        pop ebx
        mov eax, dword ptr [ebp - 4]
        add dword ptr [esi], eax
        sub dword ptr [edi], eax
        pop esi
        ; Exact mapped bytes EB 02: jmp 0x420d6e
        __asm _emit 0xeb
        __asm _emit 0x02
        mov dword ptr [edi], eax
        pop edi
        leave
        ret
    }
}
