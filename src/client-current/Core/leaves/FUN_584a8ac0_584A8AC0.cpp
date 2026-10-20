// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A8AC0 .. +0x13C bytes.
extern "C" __declspec(naked) void FUN_584a8ac0_584A8AC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 0F: jne 0x584a8ade
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp + 0ch]
        cmp ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 75 07: jne 0x584a8ade
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 19 01 00 00: jmp 0x584a8bf7
        __asm _emit 0xe9
        __asm _emit 0x19
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 5D F8 FF FF: call 0x584a8350
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cdq
        mov ecx, 0e10h
        idiv ecx
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 0C: jge 0x584a8b19
        __asm _emit 0x7d
        __asm _emit 0x0c
        mov edx, dword ptr [ebp - 4]
        add edx, 0e10h
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EE 87 FE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 E0 87 FE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov edx, 0e10h
        sub edx, eax
        cmp esi, edx
        ; Exact mapped bytes 7D 11: jge 0x584a8b4f
        __asm _emit 0x7d
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 C9 87 FE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 16: jmp 0x584a8b65
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B8 87 FE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov edx, 0e10h
        sub edx, eax
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 708h
        push ecx
        ; Exact mapped bytes E8 96 87 FE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        sub edx, 708h
        push edx
        ; Exact mapped bytes E8 82 87 FE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, 0e10h
        sub ecx, eax
        cmp esi, ecx
        ; Exact mapped bytes 7D 17: jge 0x584a8bb3
        __asm _emit 0x7d
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        sub edx, 708h
        push edx
        ; Exact mapped bytes E8 65 87 FE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 1B: jmp 0x584a8bce
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov eax, dword ptr [ebp - 4]
        sub eax, 708h
        push eax
        ; Exact mapped bytes E8 4F 87 FE FF: call 0x58491310
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x87
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, 0e10h
        sub ecx, eax
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        cmp eax, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7E 11: jle 0x584a8bed
        __asm _emit 0x7e
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 7E 09: jle 0x584a8bed
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 07: jmp 0x584a8bf4
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 1
        mov al, byte ptr [ebp - 10h]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
