// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58977320 .. +0xBC bytes.
extern "C" __declspec(naked) void FUN_58977320() {
    __asm {
        mov al, byte ptr [esp + 0ch]
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, dword ptr [esp + 0ch]
        push edi
        test al, al
        ; Exact mapped bytes 74 09: je 0x5897733c
        __asm _emit 0x74
        __asm _emit 0x09
        mov edi, dword ptr [esi + ebx*4 + 68h]
        add ebx, 10h
        ; Exact mapped bytes EB 04: jmp 0x58977340
        __asm _emit 0xeb
        __asm _emit 0x04
        mov edi, dword ptr [esi + ebx*4 + 58h]
        test edi, edi
        ; Exact mapped bytes 75 16: jne 0x5897735a
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [esi]
        push esi
        mov dword ptr [eax + 14h], 32h
        mov ecx, dword ptr [esi]
        mov dword ptr [ecx + 18h], ebx
        mov edx, dword ptr [esi]
        ; Exact mapped bytes FF 12: call dword ptr [edx]
        __asm _emit 0xff
        __asm _emit 0x12
        add esp, 4
        mov al, byte ptr [edi + 111h]
        test al, al
        ; Exact mapped bytes 75 74: jne 0x589773d8
        __asm _emit 0x75
        __asm _emit 0x74
        push ebp
        push 0c4h
        push esi
        ; Exact mapped bytes E8 E0 F9 FF FF: call 0x58976d50
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor ebp, ebp
        mov eax, 1
        xor ecx, ecx
        mov cl, byte ptr [eax + edi]
        add ebp, ecx
        inc eax
        cmp eax, 10h
        ; Exact mapped bytes 7E F3: jle 0x5897737a
        __asm _emit 0x7e
        __asm _emit 0xf3
        lea edx, [ebp + 13h]
        push edx
        push esi
        ; Exact mapped bytes E8 1F FA FF FF: call 0x58976db0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push ebx
        push esi
        ; Exact mapped bytes E8 D8 F9 FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov ebx, 1
        xor eax, eax
        mov al, byte ptr [ebx + edi]
        push eax
        push esi
        ; Exact mapped bytes E8 C4 F9 FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        inc ebx
        cmp ebx, 10h
        ; Exact mapped bytes 7E EB: jle 0x589773a0
        __asm _emit 0x7e
        __asm _emit 0xeb
        xor ebx, ebx
        test ebp, ebp
        ; Exact mapped bytes 7E 15: jle 0x589773d0
        __asm _emit 0x7e
        __asm _emit 0x15
        xor ecx, ecx
        mov cl, byte ptr [edi + ebx + 11h]
        push ecx
        push esi
        ; Exact mapped bytes E8 A8 F9 FF FF: call 0x58976d70
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        inc ebx
        cmp ebx, ebp
        ; Exact mapped bytes 7C EB: jl 0x589773bb
        __asm _emit 0x7c
        __asm _emit 0xeb
        mov byte ptr [edi + 111h], 1
        pop ebp
        pop edi
        pop esi
        pop ebx
        ret
    }
}
