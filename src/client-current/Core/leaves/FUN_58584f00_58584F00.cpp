// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58584F00 .. +0xCC bytes.
extern "C" __declspec(naked) void FUN_58584f00_58584F00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 110h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10ch], ecx
        push 100h
        push 0
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 E4 7E 2C 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x7e
        __asm _emit 0x2c
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes FF 15 10 43 89 58: call dword ptr [0x58894310]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x10
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        ; Exact mapped bytes 66 89 85 F8 FE FF FF: mov word ptr [ebp - 0x108], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10ch]
        movzx edx, word ptr [ecx + 20ah]
        movzx eax, word ptr [ebp - 108h]
        cmp edx, eax
        ; Exact mapped bytes 75 04: jne 0x58584f58
        __asm _emit 0x75
        __asm _emit 0x04
        mov al, 1
        ; Exact mapped bytes EB 66: jmp 0x58584fbe
        __asm _emit 0xeb
        __asm _emit 0x66
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 110h], edx
        cmp dword ptr [ebp - 110h], 1
        ; Exact mapped bytes 74 02: je 0x58584f72
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 1B: jmp 0x58584f8d
        __asm _emit 0xeb
        __asm _emit 0x1b
        push 588aaad8h
        push 100h
        lea eax, [ebp - 104h]
        push eax
        ; Exact mapped bytes E8 F8 F1 22 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xf1
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 19: jmp 0x58584fa6
        __asm _emit 0xeb
        __asm _emit 0x19
        push 588aab24h
        push 100h
        lea ecx, [ebp - 104h]
        push ecx
        ; Exact mapped bytes E8 DD F1 22 00: call 0x587b4180
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xf1
        __asm _emit 0x22
        __asm _emit 0x00
        add esp, 0ch
        push 10h
        push 588aab48h
        lea edx, [ebp - 104h]
        push edx
        push 0
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        xor al, al
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 88 C0 2A 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xc0
        __asm _emit 0x2a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
