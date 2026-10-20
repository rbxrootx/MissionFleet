// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D788F .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_004d788f_004D788F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 5A: je 0x4d78fc
        __asm _emit 0x74
        __asm _emit 0x5a
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 05: je 0x4d78b0
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 C1 00 00 00: jmp 0x4d7971
        __asm _emit 0xe9
        __asm _emit 0xc1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 72 14: jb 0x4d78d2
        __asm _emit 0x72
        __asm _emit 0x14
        push 289h
        push 6720f4h
        ; Exact mapped bytes E8 73 14 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d78d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d78b0
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        neg eax
        sbb eax, eax
        and al, 0fdh
        add eax, 3
        or ah, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 63 FD 05 00: call 0x53765d
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 6B: jmp 0x4d7967
        __asm _emit 0xeb
        __asm _emit 0x6b
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4d7919
        __asm _emit 0x75
        __asm _emit 0x14
        push 290h
        push 6720f4h
        ; Exact mapped bytes E8 2C 14 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x14
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7919
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4d78fc
        __asm _emit 0x75
        __asm _emit 0xdd
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 33: jne 0x4d7958
        __asm _emit 0x75
        __asm _emit 0x33
        ; Exact mapped bytes FF 15 90 BE 68 00: call dword ptr [0x68be90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 14h]
        cmp eax, dword ptr [edx + 1ch]
        ; Exact mapped bytes 75 22: jne 0x4d7958
        __asm _emit 0x75
        __asm _emit 0x22
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 4F 51 05 00: call 0x52ca99
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x51
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 28 4E 05 00: call 0x52c779
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x4e
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 B3 EF FF FF: call 0x4d690b
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 14h]
        ; Exact mapped bytes E8 32 EF FF FF: call 0x4d6899
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xef
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 18h], 1
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
