// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B9B80 .. +0x16C bytes.
extern "C" __declspec(naked) void FUN_584b9b80_584B9B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 100h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0f8h], ecx
        mov eax, dword ptr [ebp - 0f8h]
        cmp dword ptr [eax + 78h], 0
        ; Exact mapped bytes 0F 84 35 01 00 00: je 0x584b9cde
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x35
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0fch], 0
        push 0f0h
        push 0
        lea ecx, [ebp - 0f4h]
        push ecx
        ; Exact mapped bytes E8 4A 32 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x32
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 100h], 0
        ; Exact mapped bytes EB 0F: jmp 0x584b9be4
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 100h]
        add edx, 1
        mov dword ptr [ebp - 100h], edx
        cmp dword ptr [ebp - 100h], 0ah
        ; Exact mapped bytes 0F 8D C8 00 00 00: jge 0x584b9cb9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [ebp - 100h]
        cmp ecx, dword ptr [eax + 88h]
        ; Exact mapped bytes 0F 8D B0 00 00 00: jge 0x584b9cb9
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0f8h]
        cmp dword ptr [edx + 80h], 0
        ; Exact mapped bytes 75 15: jne 0x584b9c2d
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [ebp - 0f8h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [eax + 80h], edx
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes E8 A2 F8 FF FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 588958fch
        imul ecx, dword ptr [ebp - 0fch], 18h
        lea edx, [ebp + ecx - 0f4h]
        push edx
        ; Exact mapped bytes FF 15 64 44 89 58: call dword ptr [0x58894464]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        add esp, 0ch
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [eax + 80h]
        ; Exact mapped bytes E8 C3 BA FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x584b9c90
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [ecx + 80h]
        ; Exact mapped bytes E8 AE BA FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xba
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 0f8h]
        mov dword ptr [edx + 80h], eax
        ; Exact mapped bytes EB 15: jmp 0x584b9ca5
        __asm _emit 0xeb
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 0f8h]
        mov ecx, dword ptr [ebp - 0f8h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [eax + 80h], edx
        mov eax, dword ptr [ebp - 0fch]
        add eax, 1
        mov dword ptr [ebp - 0fch], eax
        ; Exact mapped bytes E9 1C FF FF FF: jmp 0x584b9bd5
        __asm _emit 0xe9
        __asm _emit 0x1c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 0fch], 0
        ; Exact mapped bytes 7E 1C: jle 0x584b9cde
        __asm _emit 0x7e
        __asm _emit 0x1c
        push -1
        mov ecx, dword ptr [ebp - 0fch]
        push ecx
        lea edx, [ebp - 0f4h]
        push edx
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 F3 37 0C 00: call 0x5857d4d0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x37
        __asm _emit 0x0c
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 68 73 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x73
        __asm _emit 0x37
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
