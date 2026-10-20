// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544C3D .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_00544c3d_00544C3D() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 40: jne 0x544c89
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        mov edx, dword ptr [ebp + 8]
        push edx
        push 80000000h
        ; Exact mapped bytes FF 15 B4 B2 68 00: call dword ptr [0x68b2b4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb4
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 15: je 0x544c82
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 8]
        push eax
        push 67803ch
        ; Exact mapped bytes E8 9A B9 F5 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb9
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 73: jmp 0x544cf5
        __asm _emit 0xeb
        __asm _emit 0x73
        mov eax, 1
        ; Exact mapped bytes EB 6C: jmp 0x544cf5
        __asm _emit 0xeb
        __asm _emit 0x6c
        lea ecx, [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 80000000h
        ; Exact mapped bytes FF 15 B0 B2 68 00: call dword ptr [0x68b2b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 42: jne 0x544ce2
        __asm _emit 0x75
        __asm _emit 0x42
        mov eax, dword ptr [ebp + 0ch]
        push eax
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 1
        push 0
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 A0 B2 68 00: call dword ptr [0x68b2a0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x544ce2
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 07: jne 0x544ce2
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 13: jmp 0x544cf5
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edx, dword ptr [ebp + 8]
        push edx
        push 678078h
        ; Exact mapped bytes E8 25 B9 F5 FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xb9
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
