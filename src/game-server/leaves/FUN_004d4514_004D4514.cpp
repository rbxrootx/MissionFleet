// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D4514 .. +0xAA bytes.
extern "C" __declspec(naked) void FUN_004d4514_004D4514() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d4545
        __asm _emit 0x75
        __asm _emit 0x14
        push 194h
        push 5c64b4h
        ; Exact mapped bytes E8 C0 04 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4545
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d4520
        __asm _emit 0x75
        __asm _emit 0xd5
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 20: je 0x4d4571
        __asm _emit 0x74
        __asm _emit 0x20
        cmp dword ptr [ebp + 10h], 1
        ; Exact mapped bytes 74 1A: je 0x4d4571
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp + 10h], 2
        ; Exact mapped bytes 74 14: je 0x4d4571
        __asm _emit 0x74
        __asm _emit 0x14
        push 195h
        push 5c64b4h
        ; Exact mapped bytes E8 94 04 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x04
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d4571
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x4d454b
        __asm _emit 0x75
        __asm _emit 0xd4
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 1038h
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x4d45b2
        __asm _emit 0x74
        __asm _emit 0x0c
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 14h]
        ; Exact mapped bytes E8 03 1C 06 00: call 0x5361b5
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
