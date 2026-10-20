// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A4E20 .. +0xE0 bytes.
extern "C" __declspec(naked) void FUN_004a4e20_004A4E20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 3ch
        ; Exact mapped bytes E8 5C 3F 04 00: call 0x4e8d90
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 44h
        ; Exact mapped bytes E8 51 3F 04 00: call 0x4e8d90
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4ch
        ; Exact mapped bytes E8 46 3F 04 00: call 0x4e8d90
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        add ecx, 54h
        ; Exact mapped bytes E8 3B 3F 04 00: call 0x4e8d90
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x3f
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 3ch
        ; Exact mapped bytes E8 3C E4 08 00: call 0x5332a0
        __asm _emit 0xe8
        __asm _emit 0x3c
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x4a4e7e
        __asm _emit 0x75
        __asm _emit 0x16
        push 6759b8h
        push 6759e4h
        ; Exact mapped bytes E8 9E B7 FF FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes EB 7C: jmp 0x4a4efa
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov dword ptr [ebp - 4], 1
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 2C: je 0x4a4eb7
        __asm _emit 0x74
        __asm _emit 0x2c
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 44h
        ; Exact mapped bytes E8 06 E4 08 00: call 0x5332a0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xe4
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 19: jne 0x4a4eb7
        __asm _emit 0x75
        __asm _emit 0x19
        push 6759e8h
        push 675a14h
        ; Exact mapped bytes E8 68 B7 FF FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 1A: je 0x4a4ed7
        __asm _emit 0x74
        __asm _emit 0x1a
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4ch
        ; Exact mapped bytes E8 D4 E3 08 00: call 0x5332a0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4a4ed7
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 1A: je 0x4a4ef7
        __asm _emit 0x74
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 54h
        ; Exact mapped bytes E8 B4 E3 08 00: call 0x5332a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xe3
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4a4ef7
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
