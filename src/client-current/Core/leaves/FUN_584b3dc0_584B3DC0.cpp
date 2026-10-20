// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B3DC0 .. +0xAF bytes.
extern "C" __declspec(naked) void FUN_584b3dc0_584B3DC0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        push 2
        push 3
        push 7
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D9 B2 FF FF: call 0x584af0b0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x584b3de2
        __asm _emit 0x75
        __asm _emit 0x07
        xor al, al
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x584b3e6b
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 A3 BE FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 65: je 0x584b3e56
        __asm _emit 0x74
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 16ah]
        cmp ecx, 0ah
        ; Exact mapped bytes 75 56: jne 0x584b3e56
        __asm _emit 0x75
        __asm _emit 0x56
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 85 BE FF FF: call 0x584afc90
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CE 0B FD FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x0b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 42 04: mov ax, word ptr [edx + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E0 1F: and ax, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe0
        __asm _emit 0x1f
        movzx ecx, ax
        cmp ecx, 9
        ; Exact mapped bytes 75 2E: jne 0x584b3e56
        __asm _emit 0x75
        __asm _emit 0x2e
        ; Exact mapped bytes E8 C3 33 02 00: call 0x584d71f0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        push 58895654h
        ; Exact mapped bytes E8 B6 E1 06 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe1
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], eax
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        push 28h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 1E 4F 02 00: call 0x584d8d70
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x4f
        __asm _emit 0x02
        __asm _emit 0x00
        xor al, al
        ; Exact mapped bytes EB 15: jmp 0x584b3e6b
        __asm _emit 0xeb
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 D0 FF FF: call 0x584b0f00
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x584b3e69
        __asm _emit 0x75
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x584b3e6b
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
