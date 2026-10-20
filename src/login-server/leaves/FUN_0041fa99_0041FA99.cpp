// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041FA99 .. +0x8A bytes.
extern "C" __declspec(naked) void FUN_0041fa99_0041FA99() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        push 19h
        ; Exact mapped bytes E8 65 2B 00 00: call 0x42260a
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 8]
        pop ecx
        mov esi, edi
        cmp byte ptr [edi], 0
        ; Exact mapped bytes 74 59: je 0x41fb09
        __asm _emit 0x74
        __asm _emit 0x59
        movzx ecx, byte ptr [esi]
        mov al, byte ptr [ecx + 4512c1h]
        test al, 4
        ; Exact mapped bytes 74 37: je 0x41faf4
        __asm _emit 0x74
        __asm _emit 0x37
        push 1
        lea eax, [ebp + 8]
        ; Exact mapped bytes FF 35 9C 11 45 00: push dword ptr [0x45119c]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x9c
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0x00
        push 2
        push eax
        push 2
        push esi
        push 200h
        ; Exact mapped bytes FF 35 C4 13 45 00: push dword ptr [0x4513c4]
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes E8 CC 4D 00 00: call 0x4248aa
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x4d
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 20h
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x41fb17
        __asm _emit 0x74
        __asm _emit 0x32
        mov ecx, dword ptr [ebp + 8]
        cmp eax, 1
        mov byte ptr [esi], cl
        ; Exact mapped bytes 7E 14: jle 0x41fb03
        __asm _emit 0x7e
        __asm _emit 0x14
        inc esi
        mov byte ptr [esi], ch
        ; Exact mapped bytes EB 0F: jmp 0x41fb03
        __asm _emit 0xeb
        __asm _emit 0x0f
        and al, 20h
        cmp al, 20h
        ; Exact mapped bytes 75 07: jne 0x41fb01
        __asm _emit 0x75
        __asm _emit 0x07
        movzx ecx, byte ptr [ecx + 4511c0h]
        mov byte ptr [esi], cl
        inc esi
        cmp byte ptr [esi], 0
        ; Exact mapped bytes 75 A7: jne 0x41fab0
        __asm _emit 0x75
        __asm _emit 0xa7
        push 19h
        ; Exact mapped bytes E8 5B 2B 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        ret
        push 19h
        ; Exact mapped bytes E8 4D 2B 00 00: call 0x42266b
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x2b
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        xor eax, eax
        ; Exact mapped bytes EB F0: jmp 0x41fb13
        __asm _emit 0xeb
        __asm _emit 0xf0
    }
}
