// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E9976 .. +0xDF bytes.
extern "C" __declspec(naked) void FUN_004e9976_004E9976() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 5B C1 03 00: call 0x525ae3
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        and ecx, 0ffffh
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        lea eax, [ebp - 50h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 C1 03 00: call 0x525ae3
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xc1
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        and ecx, 0ffffh
        cmp ecx, 40h
        ; Exact mapped bytes 73 23: jae 0x4e99d3
        __asm _emit 0x73
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 50h]
        and edx, 0ffffh
        push edx
        lea eax, [ebp - 4ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A 05 00 00: call 0x4e9f40
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 50h]
        and ecx, 0ffffh
        cmp eax, ecx
        ; Exact mapped bytes 74 04: je 0x4e99d7
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 78: jmp 0x4e9a4f
        __asm _emit 0xeb
        __asm _emit 0x78
        mov edx, dword ptr [ebp - 50h]
        and edx, 0ffffh
        mov byte ptr [ebp + edx - 4ch], 0
        ; Exact mapped bytes E8 79 6C 05 00: call 0x540663
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x6c
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        ; Exact mapped bytes E8 86 93 05 00: call 0x542d7a
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x93
        __asm _emit 0x05
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 71 0C FF FF: call 0x4da670
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x0c
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        ; Exact mapped bytes EB 09: jmp 0x4e9a0d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 14h]
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 22: je 0x4e9a35
        __asm _emit 0x74
        __asm _emit 0x22
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        push eax
        lea ecx, [ebp - 4ch]
        push ecx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0C: jne 0x4e9a33
        __asm _emit 0x75
        __asm _emit 0x0c
        push 0
        ; Exact mapped bytes E8 7E 94 05 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes EB 1C: jmp 0x4e9a4f
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes EB CF: jmp 0x4e9a04
        __asm _emit 0xeb
        __asm _emit 0xcf
        push 0
        ; Exact mapped bytes E8 70 94 05 00: call 0x542eac
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x94
        __asm _emit 0x05
        __asm _emit 0x00
        lea edx, [ebp - 4ch]
        push edx
        push 67418ch
        ; Exact mapped bytes E8 CB 6B FB FF: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x6b
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
