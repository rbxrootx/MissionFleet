// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886E252 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_5886e252_5886E252() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ebx
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        push esi
        ; Exact mapped bytes E8 B1 FF FF FF: call 0x5886e214
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        test al, al
        ; Exact mapped bytes 0F 84 8A 00 00 00: je 0x5886e2f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes E8 ED B9 FE FF: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        push 2
        pop ebx
        cmp esi, eax
        ; Exact mapped bytes 75 07: jne 0x5886e282
        __asm _emit 0x75
        __asm _emit 0x07
        mov edi, 589699a4h
        ; Exact mapped bytes EB 10: jmp 0x5886e292
        __asm _emit 0xeb
        __asm _emit 0x10
        push ebx
        ; Exact mapped bytes E8 D8 B9 FE FF: call 0x58859c60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb9
        __asm _emit 0xfe
        __asm _emit 0xff
        pop ecx
        cmp esi, eax
        ; Exact mapped bytes 75 69: jne 0x5886e2f6
        __asm _emit 0x75
        __asm _emit 0x69
        mov edi, 589699a8h
        ; Exact mapped bytes FF 05 1C 96 96 58: inc dword ptr [0x5896961c]
        __asm _emit 0xff
        __asm _emit 0x05
        __asm _emit 0x1c
        __asm _emit 0x96
        __asm _emit 0x96
        __asm _emit 0x58
        lea ecx, [esi + 0ch]
        mov eax, dword ptr [ecx]
        nop
        test eax, 4c0h
        ; Exact mapped bytes 75 51: jne 0x5886e2f6
        __asm _emit 0x75
        __asm _emit 0x51
        mov eax, 282h
        ; Exact mapped bytes F0 09 01: lock or dword ptr [ecx], eax
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x01
        cmp dword ptr [edi], 0
        ; Exact mapped bytes 75 15: jne 0x5886e2c7
        __asm _emit 0x75
        __asm _emit 0x15
        push 1000h
        ; Exact mapped bytes E8 14 EC FF FF: call 0x5886ced0
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0xec
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov dword ptr [edi], eax
        ; Exact mapped bytes E8 4B E9 FF FF: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        mov ecx, dword ptr [edi]
        test ecx, ecx
        ; Exact mapped bytes 75 12: jne 0x5886e2df
        __asm _emit 0x75
        __asm _emit 0x12
        lea ecx, [esi + 14h]
        mov dword ptr [esi + 8], ebx
        mov dword ptr [esi + 4], ecx
        mov dword ptr [esi], ecx
        mov dword ptr [esi + 18h], ebx
        mov al, 1
        ; Exact mapped bytes EB 19: jmp 0x5886e2f8
        __asm _emit 0xeb
        __asm _emit 0x19
        mov dword ptr [esi + 4], ecx
        mov eax, dword ptr [edi]
        mov dword ptr [esi], eax
        mov dword ptr [esi + 8], 1000h
        mov dword ptr [esi + 18h], 1000h
        ; Exact mapped bytes EB E5: jmp 0x5886e2db
        __asm _emit 0xeb
        __asm _emit 0xe5
        xor al, al
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
