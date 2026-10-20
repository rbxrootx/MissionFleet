// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D8885 .. +0x13F bytes.
extern "C" __declspec(naked) void FUN_004d8885_004D8885() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58c647h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 10h
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4d88bd
        __asm _emit 0x75
        __asm _emit 0x14
        push 0a4h
        push 6725f0h
        ; Exact mapped bytes E8 88 04 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x04
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d88bd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d88a3
        __asm _emit 0x75
        __asm _emit 0xe0
        push 0a6h
        push 6725f0h
        push 6ch
        ; Exact mapped bytes E8 2B 38 FF FF: call 0x4cc0ff
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x38
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 15: je 0x4d88f9
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8C 60 06 00: call 0x53e980
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x60
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 07: jmp 0x4d8900
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 10h], ecx
        push 0a7h
        push 6725f0h
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 3A 19 00 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        or edx, 4
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 07 04 00 00: call 0x4d8d44
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x4d8953
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 10h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 92 80 00 00 00: call dword ptr [edx + 0x80]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 5E: jmp 0x4d89b1
        __asm _emit 0xeb
        __asm _emit 0x5e
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 75 8C 05 00: call 0x5315d4
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d8977
        __asm _emit 0x75
        __asm _emit 0x14
        push 0afh
        push 6725f0h
        ; Exact mapped bytes E8 CE 03 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8977
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x4d8953
        __asm _emit 0x75
        __asm _emit 0xd6
        mov edx, dword ptr [ebp + 18h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 75 27: jne 0x4d89ae
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CD 8C 05 00: call 0x53165c
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x8c
        __asm _emit 0x05
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 75 14: jne 0x4d89a8
        __asm _emit 0x75
        __asm _emit 0x14
        push 0b1h
        push 6725f0h
        ; Exact mapped bytes E8 9D 03 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d89a8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x4d8987
        __asm _emit 0x75
        __asm _emit 0xd9
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
