// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832639 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_58832639_58832639() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 324h
        push esi
        push 17h
        ; Exact mapped bytes FF 15 B8 43 89 58: call dword ptr [0x588943b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x58832654
        __asm _emit 0x74
        __asm _emit 0x05
        mov ecx, dword ptr [ebp + 8]
        int 29h
        push 3
        ; Exact mapped bytes E8 F3 00 00 00: call 0x5883274e
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp], 2cch
        lea eax, [ebp - 324h]
        push 0
        push eax
        ; Exact mapped bytes E8 A0 A7 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 274h], eax
        mov dword ptr [ebp - 278h], ecx
        mov dword ptr [ebp - 27ch], edx
        mov dword ptr [ebp - 280h], ebx
        mov dword ptr [ebp - 284h], esi
        mov dword ptr [ebp - 288h], edi
        ; Exact mapped bytes 66 8C 95 A4 FD FF FF: mov word ptr [ebp - 0x25c], ss
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x95
        __asm _emit 0xa4
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8C 8D 98 FD FF FF: mov word ptr [ebp - 0x268], cs
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x8d
        __asm _emit 0x98
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8C 9D 74 FD FF FF: mov word ptr [ebp - 0x28c], ds
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x9d
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8C 85 70 FD FF FF: mov word ptr [ebp - 0x290], es
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8C A5 6C FD FF FF: mov word ptr [ebp - 0x294], fs
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0xa5
        __asm _emit 0x6c
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 8C AD 68 FD FF FF: mov word ptr [ebp - 0x298], gs
        __asm _emit 0x66
        __asm _emit 0x8c
        __asm _emit 0xad
        __asm _emit 0x68
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        pushfd
        pop dword ptr [ebp - 264h]
        mov eax, dword ptr [ebp + 4]
        mov dword ptr [ebp - 26ch], eax
        lea eax, [ebp + 4]
        mov dword ptr [ebp - 260h], eax
        mov dword ptr [ebp - 324h], 10001h
        mov eax, dword ptr [eax - 4]
        push 50h
        mov dword ptr [ebp - 270h], eax
        lea eax, [ebp - 58h]
        push 0
        push eax
        ; Exact mapped bytes E8 16 A7 01 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa7
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 4]
        add esp, 0ch
        mov dword ptr [ebp - 58h], 40000015h
        mov dword ptr [ebp - 54h], 1
        mov dword ptr [ebp - 4ch], eax
        ; Exact mapped bytes FF 15 94 43 89 58: call dword ptr [0x58894394]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov esi, eax
        lea eax, [ebp - 58h]
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 324h]
        push 0
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 74 42 89 58: call dword ptr [0x58894274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        lea eax, [ebp - 8]
        push eax
        ; Exact mapped bytes FF 15 B0 43 89 58: call dword ptr [0x588943b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x5883274b
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp esi, 1
        ; Exact mapped bytes 74 08: je 0x5883274b
        __asm _emit 0x74
        __asm _emit 0x08
        push 3
        ; Exact mapped bytes E8 04 00 00 00: call 0x5883274e
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop esi
        leave
        ret
    }
}
