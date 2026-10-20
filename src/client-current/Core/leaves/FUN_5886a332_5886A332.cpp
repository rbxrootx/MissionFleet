// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A332 .. +0x6F bytes.
extern "C" __declspec(naked) void FUN_5886a332_5886A332() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        xor ebx, ebx
        cmp dword ptr [esi + 8], ebx
        ; Exact mapped bytes 75 4E: jne 0x5886a391
        __asm _emit 0x75
        __asm _emit 0x4e
        cmp dword ptr [esi + 4], 4
        ; Exact mapped bytes 75 48: jne 0x5886a391
        __asm _emit 0x75
        __asm _emit 0x48
        push 4
        push dword ptr [esi]
        ; Exact mapped bytes E8 50 00 00 00: call 0x5886a3a2
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 39: je 0x5886a391
        __asm _emit 0x74
        __asm _emit 0x39
        push edi
        mov edi, dword ptr [ebp + 8]
        push 1
        push 588c1bb4h
        add edi, 120h
        push 55h
        push edi
        ; Exact mapped bytes E8 6F CA 00 00: call 0x58876de0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x5886a397
        __asm _emit 0x75
        __asm _emit 0x1f
        push dword ptr [esi + 4]
        push dword ptr [esi]
        push 55h
        push edi
        ; Exact mapped bytes E8 5B CA 00 00: call 0x58876de0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        pop edi
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x5886a397
        __asm _emit 0x75
        __asm _emit 0x0a
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x5886a393
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop esi
        pop ebx
        pop ebp
        ret
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 38 6C FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
