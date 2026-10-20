// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551143 .. +0xD5 bytes.
extern "C" __declspec(naked) void FUN_00551143_00551143() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 45 FD FF: call 0x5256df
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x551176
        __asm _emit 0x74
        __asm _emit 0x1b
        push 327h
        push 67bf90h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes E8 EF 90 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x5511fc
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 1ch], 0
        ; Exact mapped bytes 75 7D: jne 0x5511fc
        __asm _emit 0x75
        __asm _emit 0x7d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        push 330h
        push 67bf90h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 C6 90 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        push 63c7d0h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E9 8F F8 FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5511bf
        __asm _emit 0x75
        __asm _emit 0x14
        push 331h
        push 67bf90h
        ; Exact mapped bytes E8 86 7B FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5511bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x55119a
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 C4 00 00 00: call dword ptr [eax + 0xc4]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes 74 14: je 0x5511f6
        __asm _emit 0x74
        __asm _emit 0x14
        push 333h
        push 67bf90h
        ; Exact mapped bytes E8 4F 7B FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x7b
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5511f6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x5511d7
        __asm _emit 0x75
        __asm _emit 0xdb
        push 338h
        push 67bf90h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 51 90 F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x90
        __asm _emit 0xf8
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
