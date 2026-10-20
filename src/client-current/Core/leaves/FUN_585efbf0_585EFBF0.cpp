// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585EFBF0 .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_585efbf0_585EFBF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 70h], 0
        ; Exact mapped bytes 75 65: jne 0x585efc67
        __asm _emit 0x75
        __asm _emit 0x65
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 75 5D: jne 0x585efc67
        __asm _emit 0x75
        __asm _emit 0x5d
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 AB 6D E9 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x6d
        __asm _emit 0xe9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D4 26 00 00: call 0x585f22f0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 47: jne 0x585efc67
        __asm _emit 0x75
        __asm _emit 0x47
        ; Exact mapped bytes 8B 0D 80 75 94 58: mov ecx, dword ptr [0x58947580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 55 6F 16 00: call 0x58756b80
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x6f
        __asm _emit 0x16
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 38: je 0x585efc67
        __asm _emit 0x74
        __asm _emit 0x38
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B6 5D EA FF: call 0x584959f0
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x5d
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 2C 06 96 58: mov ecx, dword ptr [0x5896062c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x2c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 5D EA FF: call 0x584959d0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x5d
        __asm _emit 0xea
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 B2 EC F8 FF: call 0x5857e910
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xec
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
