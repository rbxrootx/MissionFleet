// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D463 .. +0xF7 bytes.
extern "C" __declspec(naked) void FUN_0042d463_0042D463() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        push esi
        cmp eax, -1
        push edi
        mov esi, ecx
        ; Exact mapped bytes 74 03: je 0x42d476
        __asm _emit 0x74
        __asm _emit 0x03
        mov dword ptr [esi + 10h], eax
        mov edi, dword ptr [ebp + 8]
        xor ebx, ebx
        cmp edi, ebx
        ; Exact mapped bytes 75 17: jne 0x42d496
        __asm _emit 0x75
        __asm _emit 0x17
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 8E 04 00 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 0ch], ebx
        mov dword ptr [esi + 8], ebx
        ; Exact mapped bytes E9 BD 00 00 00: jmp 0x42d553
        __asm _emit 0xe9
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 4]
        cmp ecx, ebx
        ; Exact mapped bytes 75 1F: jne 0x42d4bc
        __asm _emit 0x75
        __asm _emit 0x1f
        push edi
        ; Exact mapped bytes E8 49 04 00 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        push edi
        push ebx
        push eax
        mov dword ptr [esi + 4], eax
        ; Exact mapped bytes E8 32 16 FF FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [esi + 0ch], edi
        mov dword ptr [esi + 8], edi
        ; Exact mapped bytes E9 97 00 00 00: jmp 0x42d553
        __asm _emit 0xe9
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esi + 0ch]
        cmp edi, ebx
        ; Exact mapped bytes 7F 1B: jg 0x42d4de
        __asm _emit 0x7f
        __asm _emit 0x1b
        mov eax, dword ptr [esi + 8]
        cmp edi, eax
        ; Exact mapped bytes 7E EA: jle 0x42d4b4
        __asm _emit 0x7e
        __asm _emit 0xea
        mov edx, edi
        sub edx, eax
        add eax, ecx
        push edx
        push 0
        push eax
        ; Exact mapped bytes E8 07 16 FF FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB D6: jmp 0x42d4b4
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov eax, dword ptr [esi + 10h]
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x42d508
        __asm _emit 0x75
        __asm _emit 0x23
        mov eax, dword ptr [esi + 8]
        push 8
        cdq
        pop ecx
        idiv ecx
        cmp eax, 4
        ; Exact mapped bytes 7C 12: jl 0x42d505
        __asm _emit 0x7c
        __asm _emit 0x12
        mov ecx, 400h
        cmp eax, ecx
        ; Exact mapped bytes 7E 04: jle 0x42d500
        __asm _emit 0x7e
        __asm _emit 0x04
        mov eax, ecx
        ; Exact mapped bytes EB 08: jmp 0x42d508
        __asm _emit 0xeb
        __asm _emit 0x08
        cmp eax, 4
        ; Exact mapped bytes 7D 03: jge 0x42d508
        __asm _emit 0x7d
        __asm _emit 0x03
        push 4
        pop eax
        add eax, ebx
        cmp edi, eax
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 7C 03: jl 0x42d514
        __asm _emit 0x7c
        __asm _emit 0x03
        mov dword ptr [ebp + 0ch], edi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 D0 03 00 00: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [esi + 8]
        mov ebx, eax
        push dword ptr [esi + 4]
        push ebx
        ; Exact mapped bytes E8 96 16 FF FF: call 0x41ebc0
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi + 8]
        mov ecx, edi
        sub ecx, eax
        add eax, ebx
        push ecx
        push 0
        push eax
        ; Exact mapped bytes E8 A4 15 FF FF: call 0x41eae0
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0x15
        __asm _emit 0xff
        __asm _emit 0xff
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 D1 03 00 00: call 0x42d915
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        add esp, 20h
        mov dword ptr [esi + 4], ebx
        mov dword ptr [esi + 8], edi
        mov dword ptr [esi + 0ch], eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
