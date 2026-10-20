// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58749880 .. +0x12D bytes.
extern "C" __declspec(naked) void FUN_58749880_58749880() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888f657h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 30h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 38h], ecx
        ; Exact mapped bytes E8 BF 73 10 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x73
        __asm _emit 0x10
        __asm _emit 0x00
        cdq
        idiv dword ptr [ebp + 14h]
        add edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x587498c9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D C7 00 00 00: jge 0x5874999c
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 25 77 0E 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x77
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 0F 84 87 00 00 00: je 0x5874997d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x87
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes E8 71 73 10 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x73
        __asm _emit 0x10
        __asm _emit 0x00
        cdq
        mov ecx, 14h
        idiv ecx
        mov eax, 0ah
        sub eax, edx
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, eax
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes E8 55 73 10 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x73
        __asm _emit 0x10
        __asm _emit 0x00
        cdq
        mov ecx, 14h
        idiv ecx
        mov eax, 0ah
        sub eax, edx
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes E8 3B 73 10 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x73
        __asm _emit 0x10
        __asm _emit 0x00
        cdq
        idiv dword ptr [ebp + 1ch]
        add edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 20h], edx
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 86 B1 D3 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xb1
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 D0 D3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xd0
        __asm _emit 0xd3
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        movzx edx, word ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 2ch]
        push edx
        mov eax, dword ptr [ebp - 30h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 68 9C D9 FF: call 0x584e35e0
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0xd9
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x58749984
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 34h], ecx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 3ch], edx
        ; Exact mapped bytes E9 24 FF FF FF: jmp 0x587498c0
        __asm _emit 0xe9
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
