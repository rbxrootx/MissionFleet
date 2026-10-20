// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042C2F0 .. +0xCB bytes.
extern "C" __declspec(naked) void FUN_0042c2f0_0042C2F0() {
    __asm {
        sub esp, 4
        cmp dword ptr [esp + 0ch], 1
        push esi
        ; Exact mapped bytes 0F 85 B2 00 00 00: jne 0x42c3b1
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 44da18h
        ; Exact mapped bytes FF 15 04 C2 43 00: call dword ptr [0x43c204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        push 44d9fch
        push eax
        ; Exact mapped bytes FF 15 FC C1 43 00: call dword ptr [0x43c1fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov esi, dword ptr [esp + 0ch]
        mov dword ptr [esp + 4], eax
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x42c327
        __asm _emit 0x74
        __asm _emit 0x05
        push esi
        ; Exact mapped bytes FF 54 24 08: call dword ptr [esp + 8]
        __asm _emit 0xff
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x08
        push 4513e0h
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 1C 14 45 00: mov dword ptr [0x45141c], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x1c
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 89 35 18 14 45 00: mov dword ptr [0x451418], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x18
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 E8 C1 43 00: call dword ptr [0x43c1e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x43
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
        ; Exact mapped bytes 66 89 0D 20 14 45 00: mov word ptr [0x451420], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x20
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes 74 10: je 0x42c371
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes 66 C7 05 22 14 45 00 10 00: mov word ptr [0x451422], 0x10
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x22
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x10
        __asm _emit 0x00
        ; Exact mapped bytes 66 81 F9 5F 03: cmp cx, 0x35f
        __asm _emit 0x66
        __asm _emit 0x81
        __asm _emit 0xf9
        __asm _emit 0x5f
        __asm _emit 0x03
        ; Exact mapped bytes 72 09: jb 0x42c37a
        __asm _emit 0x72
        __asm _emit 0x09
        ; Exact mapped bytes 66 C7 05 22 14 45 00 20 00: mov word ptr [0x451422], 0x20
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x05
        __asm _emit 0x22
        __asm _emit 0x14
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x20
        __asm _emit 0x00
        push 7
        ; Exact mapped bytes 8B 35 44 C5 43 00: mov esi, dword ptr [0x43c544]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x44
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        dec eax
        push 8
        ; Exact mapped bytes A3 F4 1E 45 00: mov dword ptr [0x451ef4], eax
        __asm _emit 0xa3
        __asm _emit 0xf4
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        dec eax
        push 4
        ; Exact mapped bytes A3 F8 1E 45 00: mov dword ptr [0x451ef8], eax
        __asm _emit 0xa3
        __asm _emit 0xf8
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 1eh
        ; Exact mapped bytes A3 FC 1E 45 00: mov dword ptr [0x451efc], eax
        __asm _emit 0xa3
        __asm _emit 0xfc
        __asm _emit 0x1e
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        push 4513e0h
        ; Exact mapped bytes A3 00 1F 45 00: mov dword ptr [0x451f00], eax
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x00
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        mov eax, 1
        pop esi
        add esp, 4
        ret
    }
}
