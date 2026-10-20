// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1F76 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_004d1f76_004D1F76() {
    __asm {
        push ebp
        mov ebp, esp
        ; Exact mapped bytes 83 3D 8C E8 5D 00 00: cmp dword ptr [0x5de88c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x8c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 74 20: je 0x4d1fa2
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 8C E8 5D 00: call dword ptr [0x5de88c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4d1fa2
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 2F: jmp 0x4d1fd1
        __asm _emit 0xeb
        __asm _emit 0x2f
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 09: je 0x4d1fb1
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 83 3D 84 E8 5D 00 00: cmp dword ptr [0x5de884], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x84
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x4d1fb5
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 1C: jmp 0x4d1fd1
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, 5de880h
        ; Exact mapped bytes E8 4F 2B 06 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        mov eax, 1
        pop ebp
        ret
    }
}
