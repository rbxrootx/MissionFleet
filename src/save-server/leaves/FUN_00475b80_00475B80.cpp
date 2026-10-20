// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00475B80 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_00475b80_00475B80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push 1
        ; Exact mapped bytes E8 23 AD FF FF: call 0x4708b0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 18: jne 0x475bae
        __asm _emit 0x75
        __asm _emit 0x18
        mov dword ptr [ebp - 8], 687440h
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 4], 2
        ; Exact mapped bytes EB 16: jmp 0x475bc4
        __asm _emit 0xeb
        __asm _emit 0x16
        mov dword ptr [ebp - 8], 687444h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 4], 15h
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 0E: jne 0x475bd8
        __asm _emit 0x75
        __asm _emit 0x0e
        push 1
        ; Exact mapped bytes E8 7F AD FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        xor eax, eax
        ; Exact mapped bytes EB 34: jmp 0x475c0c
        __asm _emit 0xeb
        __asm _emit 0x34
        cmp dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes 74 1F: je 0x475bfd
        __asm _emit 0x74
        __asm _emit 0x1f
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx], 0
        push 1
        ; Exact mapped bytes E8 62 AD FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 55 F4: call dword ptr [ebp - 0xc]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf4
        add esp, 4
        ; Exact mapped bytes EB 0A: jmp 0x475c07
        __asm _emit 0xeb
        __asm _emit 0x0a
        push 1
        ; Exact mapped bytes E8 4C AD FF FF: call 0x470950
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xad
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
