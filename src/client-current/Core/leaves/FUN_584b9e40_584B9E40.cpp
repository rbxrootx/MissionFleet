// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584B9E40 .. +0x12E bytes.
extern "C" __declspec(naked) void FUN_584b9e40_584B9E40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 30h], ecx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 0F 84 07 01 00 00: je 0x584b9f64
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x07
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 30h]
        mov ecx, dword ptr [eax + 78h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 0B: jmp 0x584b9e73
        __asm _emit 0xeb
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C0 B8 FD FF: call 0x58495730
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xb8
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 1D: je 0x584b9e96
        __asm _emit 0x74
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 5B F6 FF FF: call 0x584b94e0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 55 6D 39 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6d
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x584b9e94
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x584b9e96
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB D2: jmp 0x584b9e68
        __asm _emit 0xeb
        __asm _emit 0xd2
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x584b9f64
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], 0
        mov dword ptr [ebp - 28h], 0
        ; Exact mapped bytes EB 09: jmp 0x584b9eb9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 1000h
        ; Exact mapped bytes 0F 8D 9E 00 00 00: jge 0x584b9f64
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 18h
        push 0
        lea ecx, [ebp - 1ch]
        push ecx
        ; Exact mapped bytes E8 3D 2F 39 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x2f
        __asm _emit 0x39
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 2ch], 0
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 42: je 0x584b9f28
        __asm _emit 0x74
        __asm _emit 0x42
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 3bh
        ; Exact mapped bytes 75 04: jne 0x584b9ef8
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 32: jmp 0x584b9f28
        __asm _emit 0xeb
        __asm _emit 0x32
        ; Exact mapped bytes EB 0D: jmp 0x584b9f05
        __asm _emit 0xeb
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        cmp dword ptr [ebp - 20h], edx
        ; Exact mapped bytes 75 02: jne 0x584b9f05
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 23: jmp 0x584b9f28
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 20h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dl, byte ptr [eax]
        mov byte ptr [ebp + ecx - 1ch], dl
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 1
        mov dword ptr [ebp - 2ch], ecx
        ; Exact mapped bytes EB B5: jmp 0x584b9edd
        __asm _emit 0xeb
        __asm _emit 0xb5
        lea edx, [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 EC EA FF FF: call 0x584b8a20
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        cmp dword ptr [ebp - 20h], eax
        ; Exact mapped bytes 75 04: jne 0x584b9f44
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 22: jmp 0x584b9f64
        __asm _emit 0xeb
        __asm _emit 0x22
        ; Exact mapped bytes EB 1B: jmp 0x584b9f5f
        __asm _emit 0xeb
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 30h]
        mov edx, dword ptr [ecx + 88h]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 75 04: jne 0x584b9f56
        __asm _emit 0x75
        __asm _emit 0x04
        ; Exact mapped bytes EB 10: jmp 0x584b9f64
        __asm _emit 0xeb
        __asm _emit 0x10
        ; Exact mapped bytes EB 09: jmp 0x584b9f5f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 20h]
        add eax, 1
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E9 4C FF FF FF: jmp 0x584b9eb0
        __asm _emit 0xe9
        __asm _emit 0x4c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 E2 70 37 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x70
        __asm _emit 0x37
        __asm _emit 0x00
    }
}
