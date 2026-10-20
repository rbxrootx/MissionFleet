// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057143E .. +0x118 bytes.
extern "C" __declspec(naked) void FUN_0057143e_0057143E() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        push 200h
        push 5d0930h
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 03 9D F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x9d
        __asm _emit 0xf8
        __asm _emit 0xff
        push 201h
        push 5d0930h
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 F0 9C F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x9c
        __asm _emit 0xf8
        __asm _emit 0xff
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 25: je 0x57149b
        __asm _emit 0x74
        __asm _emit 0x25
        push 0
        push 8
        mov edx, dword ptr [ebp + 10h]
        push edx
        ; Exact mapped bytes E8 D3 E9 F5 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0xe9
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x57149b
        __asm _emit 0x75
        __asm _emit 0x14
        push 203h
        push 5d0930h
        ; Exact mapped bytes E8 6A 35 FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x57149b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x571470
        __asm _emit 0x75
        __asm _emit 0xcf
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A9 00 00 00: call 0x571556
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 66 A1 18 EC 5D 00: mov ax, word ptr [0x5dec18]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x18
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D5 12 FF FF: call 0x562797
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 07 06 00 00: call 0x571add
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 15 20 EC 5D 00: mov dx, word ptr [0x5dec20]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AB 12 FF FF: call 0x562797
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B4 02 00 00: call 0x5717ac
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 4F: je 0x57154d
        __asm _emit 0x74
        __asm _emit 0x4f
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 FB 03 00 00: call 0x571905
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x57154d
        __asm _emit 0x74
        __asm _emit 0x3f
        push 0
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes 66 A1 1C EC 5D 00: mov ax, word ptr [0x5dec1c]
        __asm _emit 0x66
        __asm _emit 0xa1
        __asm _emit 0x1c
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 74 12 FF FF: call 0x562797
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A6 05 00 00: call 0x571add
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x05
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes 66 8B 15 24 EC 5D 00: mov dx, word ptr [0x5dec24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0xec
        __asm _emit 0x5d
        __asm _emit 0x00
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4A 12 FF FF: call 0x562797
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
