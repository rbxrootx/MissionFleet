// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58769880 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_58769880_58769880() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 9E C0 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 4
        ; Exact mapped bytes 74 60: je 0x587698f7
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E C0 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 5
        ; Exact mapped bytes 74 50: je 0x587698f7
        __asm _emit 0x74
        __asm _emit 0x50
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 7E C0 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 6
        ; Exact mapped bytes 74 40: je 0x587698f7
        __asm _emit 0x74
        __asm _emit 0x40
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 6E C0 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x6e
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 0ah
        ; Exact mapped bytes 74 30: je 0x587698f7
        __asm _emit 0x74
        __asm _emit 0x30
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 5E C0 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 0bh
        ; Exact mapped bytes 74 20: je 0x587698f7
        __asm _emit 0x74
        __asm _emit 0x20
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 4E C0 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 0eh
        ; Exact mapped bytes 74 10: je 0x587698f7
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 3E C0 D2 FF: call 0x58495930
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xc0
        __asm _emit 0xd2
        __asm _emit 0xff
        cmp eax, 0fh
        ; Exact mapped bytes 75 15: jne 0x5876990c
        __asm _emit 0x75
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 110ch]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 110ch], ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
