// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CCF90 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_004ccf90_004CCF90() {
    __asm {
        sub esp, 4
        cmp dword ptr [esp + 0ch], 1
        push esi
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x4cd051
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5d2e8ch
        ; Exact mapped bytes FF 15 3C 24 5E 00: call dword ptr [0x5e243c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push 5d2e70h
        push eax
        ; Exact mapped bytes FF 15 2C 24 5E 00: call dword ptr [0x5e242c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esi, dword ptr [esp + 0ch]
        mov dword ptr [esp + 4], eax
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x4ccfc7
        __asm _emit 0x74
        __asm _emit 0x05
        push esi
        ; Exact mapped bytes FF 54 24 08: call dword ptr [esp + 8]
        __asm _emit 0xff
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        push 5e04c0h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 FC 04 5E 00: mov dword ptr [0x5e04fc], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xfc
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 F8 04 5E 00: mov dword ptr [0x5e04f8], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 8C 23 5E 00: call dword ptr [0x5e238c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x23
        __asm _emit 0x5e
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
        ; Exact mapped bytes 66 89 0D 00 05 5E 00: mov word ptr [0x5e0500], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x4cd011
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 C7 05 02 05 5E 00 10 00: mov word ptr [0x5e0502], 0x10
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 5F 03: cmp cx, 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 72 09: jb 0x4cd01a
        __asm _emit 0x72
        __asm _emit 0x09
        ; Exact mapped bytes 66 C7 05 02 05 5E 00 20 00: mov word ptr [0x5e0502], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        push 7
        ; Exact mapped bytes 8B 35 B8 28 5E 00: mov esi, dword ptr [0x5e28b8]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb8
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        dec eax
        push 8
        ; Exact mapped bytes A3 D4 0F 5E 00: mov dword ptr [0x5e0fd4], eax
        __asm _emit 0xa3
        __asm _emit 0xd4
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        dec eax
        push 4
        ; Exact mapped bytes A3 D8 0F 5E 00: mov dword ptr [0x5e0fd8], eax
        __asm _emit 0xa3
        __asm _emit 0xd8
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 1eh
        ; Exact mapped bytes A3 DC 0F 5E 00: mov dword ptr [0x5e0fdc], eax
        __asm _emit 0xa3
        __asm _emit 0xdc
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 5e04c0h
        ; Exact mapped bytes A3 E0 0F 5E 00: mov dword ptr [0x5e0fe0], eax
        __asm _emit 0xa3
        __asm _emit 0xe0
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 4
        ret
    }
}
