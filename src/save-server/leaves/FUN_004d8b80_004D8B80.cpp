// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D8B80 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_004d8b80_004D8B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 D5 7A 06 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x7a
        __asm _emit 0x06
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 76: jne 0x4d8c0d
        __asm _emit 0x75
        __asm _emit 0x76
        ; Exact mapped bytes E8 D9 75 06 00: call 0x540175
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x75
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 30h], 0
        ; Exact mapped bytes 74 14: je 0x4d8bbc
        __asm _emit 0x74
        __asm _emit 0x14
        push 105h
        push 6725f0h
        ; Exact mapped bytes E8 89 01 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x01
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d8bbc
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x4d8b9f
        __asm _emit 0x75
        __asm _emit 0xdd
        ; Exact mapped bytes FF 15 E4 B9 68 00: call dword ptr [0x68b9e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        push 0
        push 4d95c5h
        push -1
        ; Exact mapped bytes FF 15 10 BF 68 00: call dword ptr [0x68bf10]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], eax
        mov ecx, 686da8h
        ; Exact mapped bytes E8 C8 4A 06 00: call 0x53d6b0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 14h], 0
        ; Exact mapped bytes 74 0C: je 0x4d8c00
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 84 8E 05 00: call 0x531a7d
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x8e
        __asm _emit 0x05
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 14: call dword ptr [eax + 0x14]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x14
        mov ecx, 686da4h
        ; Exact mapped bytes E8 66 5F 06 00: call 0x53eb70
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x5f
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
