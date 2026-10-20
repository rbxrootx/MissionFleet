// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586CE1B0 .. +0x116 bytes.
extern "C" __declspec(naked) void FUN_586ce1b0_586CE1B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 24h
        mov dword ptr [ebp - 4], ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 7C DB FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x7c
        __asm _emit 0xdb
        __asm _emit 0xff
        push 2fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 68 DB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x68
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes A1 90 20 96 58: mov eax, dword ptr [0x58962090]
        __asm _emit 0xa1
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 D9 DB 0E 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xdb
        __asm _emit 0x0e
        __asm _emit 0x00
        push 2fh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8C 68 DB FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x68
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 20h], ecx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        nop
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 82 D0 00 00 00: mov word ptr [edx + 0xd0], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x82
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0d0h]
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0d2h]
        cmp edx, ecx
        ; Exact mapped bytes 0F 84 8B 00 00 00: je 0x586ce2c0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        movzx eax, word ptr [edx + 0d0h]
        cmp eax, 0bh
        ; Exact mapped bytes 75 09: jne 0x586ce24d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 43: jmp 0x586ce290
        __asm _emit 0xeb
        __asm _emit 0x43
        mov ecx, dword ptr [ebp - 4]
        movzx edx, word ptr [ecx + 0d0h]
        cmp edx, 0ah
        ; Exact mapped bytes 75 09: jne 0x586ce265
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 10h], 2
        ; Exact mapped bytes EB 25: jmp 0x586ce28a
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp - 4]
        movzx ecx, word ptr [eax + 0d0h]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 09: jne 0x586ce27d
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes EB 07: jmp 0x586ce284
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 34 9B DB FF: call 0x58487dd0
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x9b
        __asm _emit 0xdb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0cch], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ech]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 D1 7C DB FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x7c
        __asm _emit 0xdb
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
