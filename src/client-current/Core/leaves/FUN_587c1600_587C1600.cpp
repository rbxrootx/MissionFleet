// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C1600 .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_587c1600_587C1600() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 7ch]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 14: jmp 0x587c1628
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F4 65 CC FF: call 0x58487c10
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x65
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 0ch]
        sub edx, 1
        mov dword ptr [ebp + 0ch], edx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7E 08: jle 0x587c1636
        __asm _emit 0x7e
        __asm _emit 0x08
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 02: je 0x587c1636
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x587c1614
        __asm _emit 0xeb
        __asm _emit 0xde
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 BC 00 00 00: je 0x587c16fc
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 78 53 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x53
        __asm _emit 0xcc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x587c1663
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6C 53 CC FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x53
        __asm _emit 0xcc
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 EB F9 06 00: call 0x5883104b
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        lea ecx, [ebp - 8]
        push ecx
        push 7fffffffh
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 AD 01 00 00: call 0x587c1830
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 5A: jne 0x587c16e6
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        push eax
        ; Exact mapped bytes E8 AA F9 06 00: call 0x58831042
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xf9
        __asm _emit 0x06
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        push edx
        push 0
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 5A B7 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb7
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 B3 2A FF FF: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 75 0D: jne 0x587c16e6
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 4B DE CD FF: call 0x5849f530
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xde
        __asm _emit 0xcd
        __asm _emit 0xff
        nop
        cmp dword ptr [ebp + 10h], 0ff000000h
        ; Exact mapped bytes 74 0D: je 0x587c16fc
        __asm _emit 0x74
        __asm _emit 0x0d
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 95 2D D6 FF: call 0x58524490
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x2d
        __asm _emit 0xd6
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
