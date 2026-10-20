// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C00D7 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004c00d7_004C00D7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 674680h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 6A A1 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4c0110
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 674680h
        ; Exact mapped bytes E8 35 8C 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c0110
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4c00f6
        __asm _emit 0x75
        __asm _emit 0xe0
        push 674690h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 6D A0 01 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0xa0
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4c013b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 674680h
        ; Exact mapped bytes E8 0A 8C 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x8c
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c013b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4c0116
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 674680h
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 0C A1 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4c016e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 674680h
        ; Exact mapped bytes E8 D7 8B 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x8b
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4c016e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4c0154
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 CA 63 06 00: call 0x526546
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4c01dd
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 BE 63 06 00: call 0x526546
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 EF 63 06 00: call 0x526582
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 FD FF FF: call 0x4bfeb3
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4c01b2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 8C 63 06 00: call 0x526546
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4c01dd
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B7 63 06 00: call 0x526582
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F1 63 06 00: call 0x5265cc
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x63
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4c01a9
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
