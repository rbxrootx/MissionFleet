// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00471C80 .. +0x8D bytes.
extern "C" __declspec(naked) void FUN_00471c80_00471C80() {
    __asm {
        push ebp
        mov ebp, esp
        push 0
        push 1000h
        xor eax, eax
        cmp dword ptr [ebp + 8], 0
        sete al
        push eax
        ; Exact mapped bytes FF 15 6C B8 68 00: call dword ptr [0x68b86c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes A3 88 89 68 00: mov dword ptr [0x688988], eax
        __asm _emit 0xa3
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 88 89 68 00 00: cmp dword ptr [0x688988], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x471cac
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5F: jmp 0x471d0b
        __asm _emit 0xeb
        __asm _emit 0x5f
        ; Exact mapped bytes E8 9F FD FF FF: call 0x471a50
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A3 98 89 68 00: mov dword ptr [0x688998], eax
        __asm _emit 0xa3
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 98 89 68 00 03: cmp dword ptr [0x688998], 3
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x03
        ; Exact mapped bytes 75 24: jne 0x471ce3
        __asm _emit 0x75
        __asm _emit 0x24
        push 3f8h
        ; Exact mapped bytes E8 D7 10 00 00: call 0x472da0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x10
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x471ce1
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 0D 88 89 68 00: mov ecx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 70 B8 68 00: call dword ptr [0x68b870]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 2A: jmp 0x471d0b
        __asm _emit 0xeb
        __asm _emit 0x2a
        ; Exact mapped bytes EB 23: jmp 0x471d06
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes 83 3D 98 89 68 00 02: cmp dword ptr [0x688998], 2
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x98
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x02
        ; Exact mapped bytes 75 1A: jne 0x471d06
        __asm _emit 0x75
        __asm _emit 0x1a
        ; Exact mapped bytes E8 7F 2D 00 00: call 0x474a70
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x2d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x471d06
        __asm _emit 0x75
        __asm _emit 0x11
        ; Exact mapped bytes 8B 15 88 89 68 00: mov edx, dword ptr [0x688988]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x89
        __asm _emit 0x68
        __asm _emit 0x00
        push edx
        ; Exact mapped bytes FF 15 70 B8 68 00: call dword ptr [0x68b870]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x471d0b
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop ebp
        ret
    }
}
