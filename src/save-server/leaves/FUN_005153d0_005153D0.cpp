// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005153D0 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_005153d0_005153D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 24h], ecx
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 E3 CD 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 DB CD 01 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xcd
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 1
        ; Exact mapped bytes 74 11: je 0x515409
        __asm _emit 0x74
        __asm _emit 0x11
        cmp dword ptr [ebp - 28h], 2
        ; Exact mapped bytes 74 4E: je 0x51544c
        __asm _emit 0x74
        __asm _emit 0x4e
        cmp dword ptr [ebp - 28h], 3
        ; Exact mapped bytes 74 52: je 0x515456
        __asm _emit 0x74
        __asm _emit 0x52
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x5154b5
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x515423
        __asm _emit 0x75
        __asm _emit 0x14
        push 7d2h
        push 673dc0h
        ; Exact mapped bytes E8 22 39 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x39
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x515423
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x515409
        __asm _emit 0x75
        __asm _emit 0xe0
        push 1
        push 0
        mov edx, dword ptr [ebp + 0ch]
        push edx
        push 1
        push 0e900h
        push 0ffffh
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 A1 DF FB FF: call 0x4d33e8
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xdf
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 8C 00 00 00: jmp 0x5154d8
        __asm _emit 0xe9
        __asm _emit 0x8c
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes E9 87 00 00 00: jmp 0x5154dd
        __asm _emit 0xe9
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 25: jne 0x515481
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 58h
        ; Exact mapped bytes E8 8C CF 01 00: call 0x5323f3
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x51547d
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 58h
        ; Exact mapped bytes E8 2D D0 01 00: call 0x5324a3
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 60: jmp 0x5154dd
        __asm _emit 0xeb
        __asm _emit 0x60
        xor eax, eax
        ; Exact mapped bytes EB 5C: jmp 0x5154dd
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 58h
        ; Exact mapped bytes E8 32 CF 01 00: call 0x5323c2
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 A0 BE 68 00: call dword ptr [0x68bea0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa0
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x5154b1
        __asm _emit 0x75
        __asm _emit 0x16
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        add ecx, 58h
        ; Exact mapped bytes E8 0E D0 01 00: call 0x5324b8
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 2C: jmp 0x5154dd
        __asm _emit 0xeb
        __asm _emit 0x2c
        xor eax, eax
        ; Exact mapped bytes EB 28: jmp 0x5154dd
        __asm _emit 0xeb
        __asm _emit 0x28
        mov edx, 1
        test edx, edx
        ; Exact mapped bytes 74 14: je 0x5154d2
        __asm _emit 0x74
        __asm _emit 0x14
        push 7efh
        push 673dc0h
        ; Exact mapped bytes E8 73 38 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x38
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5154d2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x5154b5
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
