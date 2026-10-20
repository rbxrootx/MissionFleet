// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886A274 .. +0xBD bytes.
extern "C" __declspec(naked) void FUN_5886a274_5886A274() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        xor ebx, ebx
        cmp dword ptr [edi + 8], ebx
        ; Exact mapped bytes 0F 85 95 00 00 00: jne 0x5886a320
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x95
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [edi + 4], 2
        ; Exact mapped bytes 75 0F: jne 0x5886a2a0
        __asm _emit 0x75
        __asm _emit 0x0f
        push 2
        push dword ptr [edi]
        ; Exact mapped bytes E8 08 01 00 00: call 0x5886a3a2
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 75 2F: jne 0x5886a2cf
        __asm _emit 0x75
        __asm _emit 0x2f
        cmp dword ptr [edi + 4], 3
        ; Exact mapped bytes 75 7A: jne 0x5886a320
        __asm _emit 0x75
        __asm _emit 0x7a
        mov eax, dword ptr [edi]
        mov dword ptr [ebp - 4], eax
        movzx esi, word ptr [eax + ebx*2]
        ; Exact mapped bytes E8 6B 9C FF FF: call 0x58863f1f
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        push 4
        push esi
        push eax
        ; Exact mapped bytes E8 38 BF FE FF: call 0x588561f5
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 5C: je 0x5886a320
        __asm _emit 0x74
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 4]
        inc ebx
        cmp ebx, 3
        ; Exact mapped bytes 72 DE: jb 0x5886a2ab
        __asm _emit 0x72
        __asm _emit 0xde
        xor ebx, ebx
        push dword ptr [edi + 4]
        mov esi, dword ptr [ebp + 8]
        push dword ptr [edi]
        push 40h
        lea eax, [esi + 80h]
        push eax
        ; Exact mapped bytes E8 8B BC FF FF: call 0x58865f70
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 3B: jne 0x5886a327
        __asm _emit 0x75
        __asm _emit 0x3b
        push 1
        push 588c1bb4h
        add esi, 120h
        push 55h
        push esi
        ; Exact mapped bytes E8 DF CA 00 00: call 0x58876de0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 1F: jne 0x5886a327
        __asm _emit 0x75
        __asm _emit 0x1f
        push dword ptr [edi + 4]
        push dword ptr [edi]
        push 55h
        push esi
        ; Exact mapped bytes E8 CB CA 00 00: call 0x58876de0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x5886a327
        __asm _emit 0x75
        __asm _emit 0x0b
        mov al, 1
        ; Exact mapped bytes EB 02: jmp 0x5886a322
        __asm _emit 0xeb
        __asm _emit 0x02
        xor al, al
        pop edi
        pop esi
        pop ebx
        leave
        ret
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 A8 6C FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x6c
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
