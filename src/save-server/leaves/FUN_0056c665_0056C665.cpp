// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056C665 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_0056c665_0056C665() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 11fh
        push 67d450h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 DC DB F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xdb
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 23: je 0x56c6ad
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 AD 6D F3 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x6d
        __asm _emit 0xf3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56c6ad
        __asm _emit 0x75
        __asm _emit 0x14
        push 120h
        push 67d450h
        ; Exact mapped bytes E8 98 C6 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xc6
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c6ad
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x56c684
        __asm _emit 0x75
        __asm _emit 0xd1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 47 4E FC FF: call 0x531502
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x4e
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 123h
        push 67d450h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 8F DB F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xdb
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 20h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 70: je 0x56c750
        __asm _emit 0x74
        __asm _emit 0x70
        push 63b8a8h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A3 DA F6 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xda
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x56c705
        __asm _emit 0x75
        __asm _emit 0x14
        push 12ah
        push 67d450h
        ; Exact mapped bytes E8 40 C6 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x40
        __asm _emit 0xc6
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x56c705
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x56c6e0
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 88h], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B8 F7 FF FF: call 0x56bedf
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 25: jne 0x56c750
        __asm _emit 0x75
        __asm _emit 0x25
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 1B: je 0x56c74c
        __asm _emit 0x74
        __asm _emit 0x1b
        push 0f185h
        push 0
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x56c755
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
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
