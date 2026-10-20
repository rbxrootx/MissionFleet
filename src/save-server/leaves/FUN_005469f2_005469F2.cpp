// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005469F2 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_005469f2_005469F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 7ah
        push 67aea0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 52 38 F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x38
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        xor edx, edx
        mov dl, byte ptr [ecx + 42h]
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x546a2b
        __asm _emit 0x74
        __asm _emit 0x11
        push 7bh
        push 67aea0h
        ; Exact mapped bytes E8 1A 23 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546a2b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x546a0e
        __asm _emit 0x75
        __asm _emit 0xdd
        push 640d20h
        mov ecx, dword ptr [ebp - 8]
        add ecx, 24h
        push ecx
        ; Exact mapped bytes E8 6E 23 F1 FF: call 0x458db0
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0x23
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x546a5a
        __asm _emit 0x75
        __asm _emit 0x11
        push 7ch
        push 67aea0h
        ; Exact mapped bytes E8 EB 22 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546a5a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x546a31
        __asm _emit 0x75
        __asm _emit 0xd1
        ; Exact mapped bytes E8 FE 9B FF FF: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        xor ecx, ecx
        mov cl, byte ptr [eax + 14h]
        test ecx, ecx
        ; Exact mapped bytes 75 71: jne 0x546adf
        __asm _emit 0x75
        __asm _emit 0x71
        mov edx, dword ptr [ebp - 8]
        add edx, 20h
        push edx
        mov eax, dword ptr [ebp - 8]
        xor ecx, ecx
        cmp dword ptr [eax + 38h], 0
        sete cl
        push ecx
        push 4
        mov edx, dword ptr [ebp - 8]
        add edx, 44h
        push edx
        mov eax, dword ptr [ebp - 8]
        add eax, 24h
        push eax
        ; Exact mapped bytes FF 15 A8 C2 68 00: call dword ptr [0x68c2a8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa8
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1B: je 0x546abc
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 B8 53 00 00: call 0x54be62
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x53
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 67aec0h
        ; Exact mapped bytes E8 60 9B F5 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x9b
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 37: jmp 0x546af3
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x546ad9
        __asm _emit 0x75
        __asm _emit 0x14
        push 90h
        push 67aea0h
        ; Exact mapped bytes E8 6C 22 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x22
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x546ad9
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x546abc
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 8]
        mov dl, byte ptr [ecx + 42h]
        add dl, 1
        mov eax, dword ptr [ebp - 8]
        mov byte ptr [eax + 42h], dl
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
