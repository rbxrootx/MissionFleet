// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004879D0 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_004879d0_004879D0() {
    __asm {
        sub esp, 4
        cmp dword ptr [esp + 0ch], 1
        push esi
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x487a91
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 6813d0h
        ; Exact mapped bytes FF 15 FC B7 68 00: call dword ptr [0x68b7fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push 6813b4h
        push eax
        ; Exact mapped bytes FF 15 14 B8 68 00: call dword ptr [0x68b814]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x14
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        mov esi, dword ptr [esp + 0ch]
        mov dword ptr [esp + 4], eax
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x487a07
        __asm _emit 0x74
        __asm _emit 0x05
        push esi
        ; Exact mapped bytes FF 54 24 08: call dword ptr [esp + 8]
        __asm _emit 0xff
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        push 688de0h
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 5C 90 68 00: mov dword ptr [0x68905c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x5c
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 58 90 68 00: mov dword ptr [0x689058], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x58
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 DC B9 68 00: call dword ptr [0x68b9dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 66 0F B6 C8: movzx cx, al
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xc8
        ; Exact mapped bytes 66 C1 E1 08: shl cx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe1
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F B6 D4: movzx dx, ah
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0xd4
        ; Exact mapped bytes 66 0B CA: or cx, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xca
        test eax, 80000000h
        ; Exact mapped bytes 66 89 0D 60 90 68 00: mov word ptr [0x689060], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x487a51
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 C7 05 62 90 68 00 10 00: mov word ptr [0x689062], 0x10
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x62
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 5F 03: cmp cx, 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 72 09: jb 0x487a5a
        __asm _emit 0x72
        __asm _emit 0x09
        ; Exact mapped bytes 66 C7 05 62 90 68 00 20 00: mov word ptr [0x689062], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x62
        __asm _emit 0x90
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        push 7
        ; Exact mapped bytes 8B 35 C4 BF 68 00: mov esi, dword ptr [0x68bfc4]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xc4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        dec eax
        push 8
        ; Exact mapped bytes A3 34 9B 68 00: mov dword ptr [0x689b34], eax
        __asm _emit 0xa3
        __asm _emit 0x34
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        dec eax
        push 4
        ; Exact mapped bytes A3 38 9B 68 00: mov dword ptr [0x689b38], eax
        __asm _emit 0xa3
        __asm _emit 0x38
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 1eh
        ; Exact mapped bytes A3 3C 9B 68 00: mov dword ptr [0x689b3c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 688de0h
        ; Exact mapped bytes A3 40 9B 68 00: mov dword ptr [0x689b40], eax
        __asm _emit 0xa3
        __asm _emit 0x40
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 4
        ret
    }
}
