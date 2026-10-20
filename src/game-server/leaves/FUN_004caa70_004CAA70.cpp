// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CAA70 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004caa70_004CAA70() {
    __asm {
        sub esp, 0ch
        ; Exact mapped bytes 80 3D E5 0F 5E 00 00: cmp byte ptr [0x5e0fe5], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0xe5
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x4cab09
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 5e04c0h
        ; Exact mapped bytes FF 15 20 24 5E 00: call dword ptr [0x5e2420]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x20
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        lea eax, [esp + 8]
        push 9
        push eax
        ; Exact mapped bytes 8B 35 E0 21 5E 00: mov esi, dword ptr [0x5e21e0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xe0
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 E4 0F 5E 00 1E: mov byte ptr [0x5e0fe4], 0x1e
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x1e
        push 5d2e08h
        push 5d2e1ch
        push 5d2e28h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [esp + 8]
        push 5d2df8h
        push ecx
        ; Exact mapped bytes 8B 3D 08 22 5E 00: mov edi, dword ptr [0x5e2208]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x08
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4caacf
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes C6 05 E4 0F 5E 00 1F: mov byte ptr [0x5e0fe4], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x1f
        lea eax, [esp + 8]
        push 9
        push eax
        push 5d2e00h
        push 5d2e10h
        push 5d2e28h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea eax, [esp + 8]
        push 5d2df0h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x4caafe
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes C6 05 E4 0F 5E 00 1F: mov byte ptr [0x5e0fe4], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0xe4
        __asm _emit 0x0f
        __asm _emit 0x5e
        __asm _emit 0x00
        __asm _emit 0x1f
        push 5e04c0h
        ; Exact mapped bytes FF 15 24 24 5E 00: call dword ptr [0x5e2424]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x24
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 0ch
        ret
    }
}
