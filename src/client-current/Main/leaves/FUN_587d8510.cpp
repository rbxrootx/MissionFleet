// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587D8510 .. +0xF2 bytes.
extern "C" __declspec(naked) void FUN_587d8510() {
    __asm {
        push ebp
        mov ebp, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 83 FD 04: cmp bp, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x04
        ; Exact mapped bytes 75 1A: jne 0x587d8538
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [esp + 14h]
        mov ecx, dword ptr [esp + 10h]
        push eax
        push ecx
        mov ecx, dword ptr [esi + 0dc8h]
        ; Exact mapped bytes E8 1D D3 03 00: call 0x58815850
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xd3
        __asm _emit 0x03
        __asm _emit 0x00
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 0da8h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov edi, dword ptr [esp + 14h]
        ; Exact mapped bytes 66 85 FF: test di, di
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xff
        ; Exact mapped bytes 74 33: je 0x587d8582
        __asm _emit 0x74
        __asm _emit 0x33
        mov ecx, dword ptr [esi + 0db0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        push ebx
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ebx, dword ptr [esp + 1ch]
        push ebx
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 A6 E6 FF FF: call 0x587d6c10
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, di
        push ebx
        push ecx
        mov ecx, dword ptr [esi + 0db0h]
        push ebp
        ; Exact mapped bytes E8 15 58 FC FF: call 0x5879dd90
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0xfc
        __asm _emit 0xff
        pop ebx
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 4E 24 02: or word ptr [esi + 0x24], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x4e
        __asm _emit 0x24
        __asm _emit 0x02
        mov edx, dword ptr [esi + 0dbch]
        ; Exact mapped bytes 66 8B 42 24: mov ax, word ptr [edx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 2
        ; Exact mapped bytes 74 16: je 0x587d85b1
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 0dbch]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 1
        ; Exact mapped bytes 75 09: jne 0x587d85ba
        __asm _emit 0x75
        __asm _emit 0x09
        push 0fh
        mov ecx, esi
        ; Exact mapped bytes E8 66 F2 FF FF: call 0x587d7820
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0xf2
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        push 0
        ; Exact mapped bytes 66 83 FD 01: cmp bp, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfd
        __asm _emit 0x01
        ; Exact mapped bytes 75 28: jne 0x587d85ee
        __asm _emit 0x75
        __asm _emit 0x28
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 0db0h]
        cmp dword ptr [ecx + 2d0h], 1
        ; Exact mapped bytes 75 14: jne 0x587d85ee
        __asm _emit 0x75
        __asm _emit 0x14
        push 13h
        ; Exact mapped bytes E8 0F 35 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x35
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 48 C7 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        push 0bh
        ; Exact mapped bytes E8 FB 34 F9 FF: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x34
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 34 C7 F8 FF: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0xc7
        __asm _emit 0xf8
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
