// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856A3B .. +0x81 bytes.
extern "C" __declspec(naked) void FUN_58856a3b_58856A3B() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 14h]
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x58856a4c
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 6D: jmp 0x58856ab9
        __asm _emit 0xeb
        __asm _emit 0x6d
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x58856a66
        __asm _emit 0x75
        __asm _emit 0x13
        ; Exact mapped bytes E8 17 BA 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xba
        __asm _emit 0x00
        __asm _emit 0x00
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 49 A5 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 53: jmp 0x58856ab9
        __asm _emit 0xeb
        __asm _emit 0x53
        push edi
        mov edi, dword ptr [ebp + 10h]
        test edi, edi
        ; Exact mapped bytes 74 14: je 0x58856a82
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes 72 0F: jb 0x58856a82
        __asm _emit 0x72
        __asm _emit 0x0f
        push esi
        push edi
        push eax
        ; Exact mapped bytes E8 15 5E FF FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        xor eax, eax
        ; Exact mapped bytes EB 36: jmp 0x58856ab8
        __asm _emit 0xeb
        __asm _emit 0x36
        push dword ptr [ebp + 0ch]
        push 0
        push eax
        ; Exact mapped bytes E8 83 63 FF FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test edi, edi
        ; Exact mapped bytes 75 09: jne 0x58856a9d
        __asm _emit 0x75
        __asm _emit 0x09
        ; Exact mapped bytes E8 D6 B9 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        push 16h
        ; Exact mapped bytes EB 0C: jmp 0x58856aa9
        __asm _emit 0xeb
        __asm _emit 0x0c
        cmp dword ptr [ebp + 0ch], esi
        ; Exact mapped bytes 73 13: jae 0x58856ab5
        __asm _emit 0x73
        __asm _emit 0x13
        ; Exact mapped bytes E8 C8 B9 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        push 22h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 FA A4 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xa4
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 03: jmp 0x58856ab8
        __asm _emit 0xeb
        __asm _emit 0x03
        push 16h
        pop eax
        pop edi
        pop esi
        pop ebp
        ret
    }
}
