// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053E1FF .. +0x10A bytes.
extern "C" __declspec(naked) void FUN_0053e1ff_0053E1FF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 6722e8h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x53e228
        __asm _emit 0x75
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 10h], 3
        ; Exact mapped bytes E9 DB 00 00 00: jmp 0x53e303
        __asm _emit 0xe9
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 6722ech
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x53e24a
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 2
        ; Exact mapped bytes E9 B9 00 00 00: jmp 0x53e303
        __asm _emit 0xe9
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 6722f0h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 13: je 0x53e270
        __asm _emit 0x74
        __asm _emit 0x13
        push 6722fch
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x53e27f
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 5
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x53e303
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 672308h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 E0 B7 68 00: call dword ptr [0x68b7e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x53e2a5
        __asm _emit 0x75
        __asm _emit 0x13
        push 0
        ; Exact mapped bytes E8 D6 C8 FD FF: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 4
        ; Exact mapped bytes EB 5E: jmp 0x53e303
        __asm _emit 0xeb
        __asm _emit 0x5e
        push 67230ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1D: jne 0x53e2d5
        __asm _emit 0x75
        __asm _emit 0x1d
        push 0
        ; Exact mapped bytes E8 B0 C8 FD FF: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        ; Exact mapped bytes EB 2E: jmp 0x53e303
        __asm _emit 0xeb
        __asm _emit 0x2e
        push 672318h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 E4 B7 68 00: call dword ptr [0x68b7e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 1B: jne 0x53e303
        __asm _emit 0x75
        __asm _emit 0x1b
        push 0
        ; Exact mapped bytes E8 80 C8 FD FF: call 0x51ab6f
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], 0
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
