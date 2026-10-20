// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58731A70 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_58731a70() {
    __asm {
        mov eax, ecx
        movzx ecx, word ptr [eax + 12ah]
        cmp ecx, 6
        ; Exact mapped bytes 77 35: ja 0x58731ab3
        __asm _emit 0x77
        __asm _emit 0x35
        ; Exact mapped bytes FF 24 8D 40 1B 73 58: jmp dword ptr [ecx*4 + 0x58731b40]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x40
        __asm _emit 0x1b
        __asm _emit 0x73
        __asm _emit 0x58
        ; Exact mapped bytes A1 98 45 A2 58: mov eax, dword ptr [0x58a24598]
        __asm _emit 0xa1
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 0d78h]
        mov ecx, dword ptr [eax + 0cc0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [eax + 48h]
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push -1
        push edx
        push 0
        push 0
        shr eax, 0ah
        push eax
        ; Exact mapped bytes E8 FD 7D 08 00: call 0x587b98b0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ret
        mov ecx, dword ptr [eax + 0ech]
        mov edx, dword ptr [ecx]
        push 0
        push 0fh
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ret
        ; Exact mapped bytes 8B 0D 98 45 A2 58: mov ecx, dword ptr [0x58a24598]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [ecx + 0d78h]
        mov edx, dword ptr [eax + 0cc0h]
        mov ecx, dword ptr [edx]
        mov edx, dword ptr [eax + 48h]
        push 0
        push -1
        push ecx
        ; Exact mapped bytes 8B 0D 88 45 A2 58: mov ecx, dword ptr [0x58a24588]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push 0
        push 0
        shr edx, 0ah
        push edx
        ; Exact mapped bytes E8 BA 7D 08 00: call 0x587b98b0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        ret
        ; Exact mapped bytes A1 80 45 A2 58: mov eax, dword ptr [0x58a24580]
        __asm _emit 0xa1
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 05 98 45 A2 58: cmp eax, dword ptr [0x58a24598]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 AF: jne 0x58731ab3
        __asm _emit 0x75
        __asm _emit 0xaf
        ; Exact mapped bytes 8B 0D E4 45 A2 58: mov ecx, dword ptr [0x58a245e4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xe4
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 0D 80 45 A2 58: mov ecx, dword ptr [0x58a24580]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x80
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 3B 0D 98 45 A2 58: cmp ecx, dword ptr [0x58a24598]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 94: jne 0x58731ab3
        __asm _emit 0x75
        __asm _emit 0x94
        ; Exact mapped bytes 8B 0D F0 45 A2 58: mov ecx, dword ptr [0x58a245f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF E0: jmp eax
        __asm _emit 0xff
        __asm _emit 0xe0
        ; Exact mapped bytes 8B 0D C0 45 A2 58: mov ecx, dword ptr [0x58a245c0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [ecx + 4f4h]
        ; Exact mapped bytes E9 73 46 18 00: jmp 0x588b61b0
        __asm _emit 0xe9
        __asm _emit 0x73
        __asm _emit 0x46
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
