// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587BA5D0 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_587ba5d0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [esp + 4]
        mov eax, dword ptr [eax + 8]
        cmp eax, 10000h
        ; Exact mapped bytes 77 4E: ja 0x587ba635
        __asm _emit 0x77
        __asm _emit 0x4e
        ; Exact mapped bytes 74 3C: je 0x587ba625
        __asm _emit 0x74
        __asm _emit 0x3c
        sub eax, 0
        ; Exact mapped bytes 74 25: je 0x587ba613
        __asm _emit 0x74
        __asm _emit 0x25
        sub eax, 1
        ; Exact mapped bytes 75 6C: jne 0x587ba65f
        __asm _emit 0x75
        __asm _emit 0x6c
        push eax
        push eax
        ; Exact mapped bytes A3 68 45 A2 58: mov dword ptr [0x58a24568], eax
        __asm _emit 0xa3
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes E8 EA F3 01 00: call 0x587d99f0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 94 3E 9C 58 02 00 00 00: mov dword ptr [0x589c3e94], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x3e
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 0
        push 0
        ; Exact mapped bytes C7 05 68 45 A2 58 03 00 00 00: mov dword ptr [0x58a24568], 3
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 3
        ; Exact mapped bytes EB D6: jmp 0x587ba5fb
        __asm _emit 0xeb
        __asm _emit 0xd6
        push edx
        push ecx
        ; Exact mapped bytes C7 05 68 45 A2 58 01 00 00 00: mov dword ptr [0x58a24568], 1
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        ; Exact mapped bytes EB C6: jmp 0x587ba5fb
        __asm _emit 0xeb
        __asm _emit 0xc6
        cmp eax, 1000000h
        ; Exact mapped bytes 75 23: jne 0x587ba65f
        __asm _emit 0x75
        __asm _emit 0x23
        push edx
        push ecx
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 2
        ; Exact mapped bytes C7 05 68 45 A2 58 02 00 00 00: mov dword ptr [0x58a24568], 2
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x68
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 9B F3 01 00: call 0x587d99f0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xf3
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes C7 05 94 3E 9C 58 03 00 00 00: mov dword ptr [0x589c3e94], 3
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x94
        __asm _emit 0x3e
        __asm _emit 0x9c
        __asm _emit 0x58
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
