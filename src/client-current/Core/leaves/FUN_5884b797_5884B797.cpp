// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884B797 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_5884b797_5884B797() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr [esi + 5ch], ebx
        mov dword ptr [esi + 64h], ebx
        mov byte ptr [esi + 60h], bl
        mov dword ptr [esi + 58h], ebx
        mov dword ptr [esi + 50h], ebx
        mov dword ptr [esi + 70h], ebx
        mov dword ptr [esi + 54h], ebx
        cmp dword ptr [ebp + 8], ebx
        ; Exact mapped bytes 75 07: jne 0x5884b7c1
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 10000h
        ; Exact mapped bytes EB 45: jmp 0x5884b806
        __asm _emit 0xeb
        __asm _emit 0x45
        push edi
        push ebx
        push ebx
        push 3
        push ebx
        push 1
        push 80000000h
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov edi, eax
        cmp edi, -1
        ; Exact mapped bytes 75 07: jne 0x5884b7e5
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 200h
        ; Exact mapped bytes EB 20: jmp 0x5884b805
        __asm _emit 0xeb
        __asm _emit 0x20
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 1E 00 00 00: call 0x5884b80c
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, eax
        test ebx, ebx
        ; Exact mapped bytes 74 0B: je 0x5884b7ff
        __asm _emit 0x74
        __asm _emit 0x0b
        push edi
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, ebx
        ; Exact mapped bytes EB 06: jmp 0x5884b805
        __asm _emit 0xeb
        __asm _emit 0x06
        mov byte ptr [esi + 60h], 1
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
