// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004854B0 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_004854b0_004854B0() {
    __asm {
        sub esp, 0ch
        ; Exact mapped bytes 80 3D 45 9B 68 00 00: cmp byte ptr [0x689b45], 0
        __asm _emit 0x80
        __asm _emit 0x3d
        __asm _emit 0x45
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push edi
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x485549
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 688de0h
        ; Exact mapped bytes FF 15 68 B9 68 00: call dword ptr [0x68b968]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        lea eax, [esp + 8]
        push 9
        push eax
        ; Exact mapped bytes 8B 35 B0 B7 68 00: mov esi, dword ptr [0x68b7b0]
        __asm _emit 0x8b
        __asm _emit 0x35
        __asm _emit 0xb0
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes C6 05 44 9B 68 00 1E: mov byte ptr [0x689b44], 0x1e
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x1e
        push 68134ch
        push 681360h
        push 68136ch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea ecx, [esp + 8]
        push 68133ch
        push ecx
        ; Exact mapped bytes 8B 3D E4 B7 68 00: mov edi, dword ptr [0x68b7e4]
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xe4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x48550f
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes C6 05 44 9B 68 00 1F: mov byte ptr [0x689b44], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x1f
        lea eax, [esp + 8]
        push 9
        push eax
        push 681344h
        push 681354h
        push 68136ch
        ; Exact mapped bytes FF D6: call esi
        __asm _emit 0xff
        __asm _emit 0xd6
        lea eax, [esp + 8]
        push 681334h
        push eax
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x48553e
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes C6 05 44 9B 68 00 1F: mov byte ptr [0x689b44], 0x1f
        __asm _emit 0xc6
        __asm _emit 0x05
        __asm _emit 0x44
        __asm _emit 0x9b
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x1f
        push 688de0h
        ; Exact mapped bytes FF 15 6C B9 68 00: call dword ptr [0x68b96c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xb9
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        add esp, 0ch
        ret
    }
}
