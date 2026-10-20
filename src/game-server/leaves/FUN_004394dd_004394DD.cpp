// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004394DD .. +0x179 bytes.
extern "C" __declspec(naked) void FUN_004394dd_004394DD() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], 0cccccccch
        mov esi, esp
        push 5b5f84h
        ; Exact mapped bytes FF 15 28 24 5E 00: call dword ptr [0x5e2428]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 E2 F2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 07: jne 0x43950e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 38 01 00 00: jmp 0x439646
        __asm _emit 0xe9
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5b5f94h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 BA F2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A3 50 30 5D 00: mov dword ptr [0x5d3050], eax
        __asm _emit 0xa3
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 50 30 5D 00 00: cmp dword ptr [0x5d3050], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x43953b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0B 01 00 00: jmp 0x439646
        __asm _emit 0xe9
        __asm _emit 0x0b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5b5fa4h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 8D F2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A3 54 30 5D 00: mov dword ptr [0x5d3054], eax
        __asm _emit 0xa3
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 54 30 5D 00 00: cmp dword ptr [0x5d3054], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x439568
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 DE 00 00 00: jmp 0x439646
        __asm _emit 0xe9
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5b5fb0h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 60 F2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A3 58 30 5D 00: mov dword ptr [0x5d3058], eax
        __asm _emit 0xa3
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 58 30 5D 00 00: cmp dword ptr [0x5d3058], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x58
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x439595
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B1 00 00 00: jmp 0x439646
        __asm _emit 0xe9
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5b5fbch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 33 F2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A3 5C 30 5D 00: mov dword ptr [0x5d305c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 5C 30 5D 00 00: cmp dword ptr [0x5d305c], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x5c
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 07: jne 0x4395c2
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 84 00 00 00: jmp 0x439646
        __asm _emit 0xe9
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, esp
        push 5b5fd4h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 06 F2 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xf2
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A3 60 30 5D 00: mov dword ptr [0x5d3060], eax
        __asm _emit 0xa3
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 60 30 5D 00 00: cmp dword ptr [0x5d3060], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x60
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x4395ec
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5A: jmp 0x439646
        __asm _emit 0xeb
        __asm _emit 0x5a
        mov esi, esp
        push 5b5fe8h
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 DC F1 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes A3 64 30 5D 00: mov dword ptr [0x5d3064], eax
        __asm _emit 0xa3
        __asm _emit 0x64
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        ; Exact mapped bytes 83 3D 64 30 5D 00 00: cmp dword ptr [0x5d3064], 0
        __asm _emit 0x83
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 75 04: jne 0x439616
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 30: jmp 0x439646
        __asm _emit 0xeb
        __asm _emit 0x30
        mov esi, esp
        push 1
        push 0
        mov edi, esp
        ; Exact mapped bytes FF 15 48 24 5E 00: call dword ptr [0x5e2448]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp edi, esp
        ; Exact mapped bytes E8 B5 F1 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 50 30 5D 00: call dword ptr [0x5d3050]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x30
        __asm _emit 0x5d
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 A7 F1 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x439641
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x439646
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        pop edi
        pop esi
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 8E F1 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xf1
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
