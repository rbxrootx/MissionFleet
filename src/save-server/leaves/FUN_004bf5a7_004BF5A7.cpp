// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BF5A7 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_004bf5a7_004BF5A7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 0fch
        push 67462ch
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 9A AC 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4bf5e0
        __asm _emit 0x75
        __asm _emit 0x14
        push 0fdh
        push 67462ch
        ; Exact mapped bytes E8 65 97 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x97
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bf5e0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bf5c6
        __asm _emit 0x75
        __asm _emit 0xe0
        push 6375f8h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 9D AB 01 00: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4bf60b
        __asm _emit 0x75
        __asm _emit 0x14
        push 0feh
        push 67462ch
        ; Exact mapped bytes E8 3A 97 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x97
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bf60b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4bf5e6
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0ffh
        push 67462ch
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 3C AC 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 7D 14: jge 0x4bf63e
        __asm _emit 0x7d
        __asm _emit 0x14
        push 100h
        push 67462ch
        ; Exact mapped bytes E8 07 97 06 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x97
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4bf63e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4bf624
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 5E 6D 06 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7E 5D: jle 0x4bf6ad
        __asm _emit 0x7e
        __asm _emit 0x5d
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 52 6D 06 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 83 6D 06 00: call 0x5263e6
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 FD FF FF: call 0x4bf383
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x4bf682
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 20 6D 06 00: call 0x5263aa
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 7D 1E: jge 0x4bf6ad
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 4B 6D 06 00: call 0x5263e6
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 85 6D 06 00: call 0x526430
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x6d
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB CC: jmp 0x4bf679
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
