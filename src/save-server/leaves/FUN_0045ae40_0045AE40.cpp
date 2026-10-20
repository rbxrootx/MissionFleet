// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045AE40 .. +0xAB bytes.
extern "C" __declspec(naked) void FUN_0045ae40_0045AE40() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x45ae76
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 08 86 04 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x86
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x45ae76
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b0h
        push 678664h
        ; Exact mapped bytes E8 CF DE 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0xde
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45ae76
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x45ae46
        __asm _emit 0x75
        __asm _emit 0xca
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 2A: je 0x45aeac
        __asm _emit 0x74
        __asm _emit 0x2a
        push 1
        mov eax, dword ptr [ebp + 10h]
        shl eax, 4
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 D2 85 04 00: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0x85
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x45aeac
        __asm _emit 0x75
        __asm _emit 0x14
        push 3b2h
        push 678664h
        ; Exact mapped bytes E8 99 DE 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0xde
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45aeac
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 CA: jne 0x45ae7c
        __asm _emit 0x75
        __asm _emit 0xca
        ; Exact mapped bytes EB 12: jmp 0x45aec6
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        add eax, 10h
        mov dword ptr [ebp + 8], eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 10h
        mov dword ptr [ebp + 0ch], ecx
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        mov dword ptr [ebp + 10h], eax
        test edx, edx
        ; Exact mapped bytes 74 0E: je 0x45aee4
        __asm _emit 0x74
        __asm _emit 0x0e
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 88 ED FF FF: call 0x459c6a
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xed
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB D0: jmp 0x45aeb4
        __asm _emit 0xeb
        __asm _emit 0xd0
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
