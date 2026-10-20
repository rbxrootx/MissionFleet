// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58839B10 .. +0x113 bytes.
extern "C" __declspec(naked) void FUN_58839b10_58839B10() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1a8h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        mov ebx, dword ptr [ebp + 8]
        lea eax, [ebp - 1a4h]
        push eax
        push 202h
        mov dword ptr [ebp - 1a8h], ecx
        ; Exact mapped bytes FF 15 64 45 89 58: call dword ptr [0x58894564]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58839b4a
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C8 00 00 00: jmp 0x58839c12
        __asm _emit 0xe9
        __asm _emit 0xc8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        xor edi, edi
        push edi
        push 2
        pop eax
        push eax
        push eax
        ; Exact mapped bytes FF 15 74 45 89 58: call dword ptr [0x58894574]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        cmp esi, -1
        ; Exact mapped bytes 0F 84 96 00 00 00: je 0x58839bfb
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 80 3D 54 6B 96 58 00: cmp byte ptr [0x58966b54], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x54
        __asm _emit 0x6b
        __asm _emit 0x96
        __asm _emit 0x58
        __asm _emit 0x00
        push 2
        pop eax
        ; Exact mapped bytes 66 89 45 EC: mov word ptr [ebp - 0x14], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes 74 0E: je 0x58839b83
        __asm _emit 0x74
        __asm _emit 0x0e
        push 58966b54h
        ; Exact mapped bytes E8 19 E1 01 00: call 0x58857c98
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xe1
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        push eax
        ; Exact mapped bytes EB 05: jmp 0x58839b88
        __asm _emit 0xeb
        __asm _emit 0x05
        push 3a98h
        ; Exact mapped bytes FF 15 7C 45 89 58: call dword ptr [0x5889457c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        push ebx
        ; Exact mapped bytes 66 89 45 EE: mov word ptr [ebp - 0x12], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xee
        ; Exact mapped bytes FF 15 4C 45 89 58: call dword ptr [0x5889454c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        cmp eax, -1
        ; Exact mapped bytes 75 23: jne 0x58839bc4
        __asm _emit 0x75
        __asm _emit 0x23
        push ebx
        ; Exact mapped bytes FF 15 78 45 89 58: call dword ptr [0x58894578]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x78
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 46: je 0x58839bf4
        __asm _emit 0x74
        __asm _emit 0x46
        ; Exact mapped bytes 0F BF 41 0A: movsx eax, word ptr [ecx + 0xa]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x41
        __asm _emit 0x0a
        push eax
        mov eax, dword ptr [ecx + 0ch]
        push dword ptr [eax]
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 CF 2C 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x2c
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 1a8h]
        add ecx, 22c4h
        ; Exact mapped bytes E8 4F 36 00 00: call 0x5883d224
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 19: je 0x58839bf4
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ecx]
        lea edx, [ebp - 14h]
        push 10h
        push edx
        push edi
        add eax, 4
        push eax
        push ecx
        push esi
        ; Exact mapped bytes FF 15 5C 45 89 58: call dword ptr [0x5889455c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0B: jne 0x58839bff
        __asm _emit 0x75
        __asm _emit 0x0b
        push esi
        ; Exact mapped bytes FF 15 58 45 89 58: call dword ptr [0x58894558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        xor eax, eax
        ; Exact mapped bytes EB 11: jmp 0x58839c10
        __asm _emit 0xeb
        __asm _emit 0x11
        cmp eax, -1
        ; Exact mapped bytes 74 03: je 0x58839c07
        __asm _emit 0x74
        __asm _emit 0x03
        xor edi, edi
        inc edi
        push esi
        ; Exact mapped bytes FF 15 58 45 89 58: call dword ptr [0x58894558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov eax, edi
        pop edi
        pop esi
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 33 74 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
