// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BEA77 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004bea77_004BEA77() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 6745d4h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 CA B7 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4beab0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 6745d4h
        ; Exact mapped bytes E8 95 A2 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4beab0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bea96
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6375c8h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CD B6 01 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0xb6
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4beadb
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 6745d4h
        ; Exact mapped bytes E8 6A A2 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4beadb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4beab6
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 6745d4h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 6C B7 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xb7
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4beb0e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 6745d4h
        ; Exact mapped bytes E8 37 A2 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xa2
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4beb0e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4beaf4
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 F8 76 06 00: call 0x526214
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4beb7d
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 EC 76 06 00: call 0x526214
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 1D 77 06 00: call 0x526250
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x77
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 FD FF FF: call 0x4be853
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4beb52
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BA 76 06 00: call 0x526214
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4beb7d
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E5 76 06 00: call 0x526250
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x76
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1C 77 06 00: call 0x526297
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x77
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4beb49
        __asm _emit 0xeb
        __asm _emit 0xcc
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
