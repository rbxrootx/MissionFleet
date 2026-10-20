// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054643F .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_0054643f_0054643F() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x546452
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x54651c
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x546469
        __asm _emit 0x75
        __asm _emit 0x11
        push 7bh
        push 6792d4h
        ; Exact mapped bytes E8 DC 28 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x28
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546469
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x546452
        __asm _emit 0x75
        __asm _emit 0xe3
        push 2ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 82 EE F1 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xee
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 0ch
        push 5
        mov eax, dword ptr [ebp + 0ch]
        add eax, 34h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 30h
        push ecx
        ; Exact mapped bytes E8 6A EE F1 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xee
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 0ch
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp + 8]
        add edx, 2ch
        push edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        add eax, 2ch
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp + 8]
        add ecx, 2dh
        push ecx
        push 1
        mov edx, dword ptr [ebp + 0ch]
        add edx, 2eh
        push edx
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        push 0
        push 1
        mov eax, dword ptr [ebp + 8]
        add eax, 2eh
        push eax
        push 1
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 30h
        push ecx
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        push 0
        push 0
        push 1
        mov edx, dword ptr [ebp + 8]
        add edx, 2fh
        push edx
        push 1
        mov eax, dword ptr [ebp + 0ch]
        add eax, 32h
        push eax
        push 0
        push 0
        ; Exact mapped bytes FF 15 1C BA 68 00: call dword ptr [0x68ba1c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xba
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
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
