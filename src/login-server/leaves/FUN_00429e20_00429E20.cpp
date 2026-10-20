// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00429E20 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_00429e20_00429E20() {
    __asm {
        sub esp, 0ch
        ; Exact mapped bytes 80 3D 05 1F 45 00 00: cmp byte ptr [0x451f05], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x429eb9
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 4513e0h
        ; Exact mapped bytes FF 15 7C C1 43 00: call dword ptr [0x43c17c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x7c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        lea eax, [esp + 8]
        push 9
        push eax
        ; Exact mapped bytes 8B 35 6C C2 43 00: mov esi, dword ptr [0x43c26c]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0x6c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 04 1F 45 00 1E: mov byte ptr [0x451f04], 0x1e
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x1e
        push 44d994h
        push 44d9a8h
        push 44d9b4h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [esp + 8]
        push 44d984h
        push ecx
        ; Exact mapped bytes 8B 3D 64 C2 43 00: mov edi, dword ptr [0x43c264]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0x64
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x429e7f
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes C6 05 04 1F 45 00 1F: mov byte ptr [0x451f04], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x1f
        lea eax, [esp + 8]
        push 9
        push eax
        push 44d98ch
        push 44d99ch
        push 44d9b4h
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea eax, [esp + 8]
        push 44d97ch
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x429eae
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes C6 05 04 1F 45 00 1F: mov byte ptr [0x451f04], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x04
        __asm _emit 0x1f
        __asm _emit 0x45
        __asm _emit 0x00
        __asm _emit 0x1f
        push 4513e0h
        ; Exact mapped bytes FF 15 B0 C1 43 00: call dword ptr [0x43c1b0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 0ch
        ret
    }
}
