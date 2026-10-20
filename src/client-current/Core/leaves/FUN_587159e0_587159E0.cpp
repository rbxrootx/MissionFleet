// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587159E0 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_587159e0_587159E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 E5 64 D7 FF: call 0x5848bee0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x64
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58715a10
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 8B 0D 74 75 94 58: mov ecx, dword ptr [0x58947574]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x74
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 95 66 D7 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x66
        __asm _emit 0xd7
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 7D 78: jge 0x58715a98
        __asm _emit 0x7d
        __asm _emit 0x78
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 88 75 D7 FF: call 0x5848cfb0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x75
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ecx + 0d0h]
        ; Exact mapped bytes 75 55: jne 0x58715a88
        __asm _emit 0x75
        __asm _emit 0x55
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 05 6A D7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x6a
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9E EF D6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xef
        __asm _emit 0xd6
        __asm _emit 0xff
        ; Exact mapped bytes 66 8B 50 04: mov dx, word ptr [eax + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x50
        __asm _emit 0x04
        ; Exact mapped bytes 66 83 E2 1F: and dx, 0x1f
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x1f
        movzx eax, dx
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 4A FD FF FF: call 0x587157a0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 2D: jne 0x58715a88
        __asm _emit 0x75
        __asm _emit 0x2d
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED BB DB FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xbb
        __asm _emit 0xdb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 21: je 0x58715a88
        __asm _emit 0x74
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 69 D7 FF: call 0x5848c440
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x69
        __asm _emit 0xd7
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 EA EF D6 FF: call 0x58484a60
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xef
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp dword ptr [eax + 0a4h], 0
        ; Exact mapped bytes 75 09: jne 0x58715a88
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 66 D7 FF: call 0x5848c130
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x66
        __asm _emit 0xd7
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E9 6F FF FF FF: jmp 0x58715a07
        __asm _emit 0xe9
        __asm _emit 0x6f
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
