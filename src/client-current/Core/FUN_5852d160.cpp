// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5852D160 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_5852d160() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 12154h], 1eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e0ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov ecx, 100h
        ; Exact mapped bytes 66 0B D1: or dx, cx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 89 50 24: mov word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x50
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], 0
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 12148h]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 08: je 0x5852d1c2
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 0ch], 4
        ; Exact mapped bytes 74 21: je 0x5852d1e1
        __asm _emit 0x74
        __asm _emit 0x21
        ; Exact mapped bytes EB 40: jmp 0x5852d202
        __asm _emit 0xeb
        __asm _emit 0x40
        push 27h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B1 78 F5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 8ch], eax
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 21: jmp 0x5852d202
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 12154h], 64h
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8ch], 0
        mov dword ptr [ebp - 8], 3
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 8ch], 0
        ; Exact mapped bytes 74 41: je 0x5852d24f
        __asm _emit 0x74
        __asm _emit 0x41
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 97 EB 28 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xeb
        __asm _emit 0x28
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b0h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 1ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 60 78 F5 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x78
        __asm _emit 0xf5
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 E1 99 F5 FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x99
        __asm _emit 0xf5
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0b0h]
        ; Exact mapped bytes E8 A3 7A 00 00: call 0x58534d30
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x7a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b0h]
        mov dword ptr [ebp - 28h], ecx
        push 1
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 DD 7B 00 00: call 0x58534e80
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x7b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], 100h
        mov esp, ebp
        pop ebp
        ret
    }
}
