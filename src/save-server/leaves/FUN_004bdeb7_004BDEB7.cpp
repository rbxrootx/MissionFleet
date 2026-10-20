// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BDEB7 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004bdeb7_004BDEB7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 674560h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 8A C3 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4bdef0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 674560h
        ; Exact mapped bytes E8 55 AE 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bdef0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bded6
        __asm _emit 0x75
        __asm _emit 0xe0
        push 674570h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8D C2 01 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xc2
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4bdf1b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 674560h
        ; Exact mapped bytes E8 2A AE 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xae
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bdf1b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4bdef6
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 674560h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 2C C3 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4bdf4e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 674560h
        ; Exact mapped bytes E8 F7 AD 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xad
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bdf4e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bdf34
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 25 81 06 00: call 0x526081
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4bdfbd
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 19 81 06 00: call 0x526081
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4A 81 06 00: call 0x5260bd
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 FD FF FF: call 0x4bdc93
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4bdf92
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E7 80 06 00: call 0x526081
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x80
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4bdfbd
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 12 81 06 00: call 0x5260bd
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 49 81 06 00: call 0x526104
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x81
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4bdf89
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
