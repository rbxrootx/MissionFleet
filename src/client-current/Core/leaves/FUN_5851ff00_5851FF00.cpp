// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851FF00 .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_5851ff00_5851FF00() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58881710h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0f0h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 48h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 40h]
        push ecx
        ; Exact mapped bytes E8 05 12 00 00: call 0x58521140
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x12
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov dword ptr [ebp - 4], 0
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 93 4A F6 FF: call 0x584849e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x4a
        __asm _emit 0xf6
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 76 7D: jbe 0x5851ffce
        __asm _emit 0x76
        __asm _emit 0x7d
        push 1
        push 3
        lea edx, [ebp - 40h]
        push edx
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 BC F7 FF FF: call 0x5851f720
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xf7
        __asm _emit 0xff
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 70 73 FA FF: call 0x584c72e0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x73
        __asm _emit 0xfa
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        push 0ah
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 0fch]
        push ecx
        ; Exact mapped bytes E8 2A F4 FF FF: call 0x5851f3b0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 44h], eax
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 44h]
        add ecx, dword ptr [eax + 4]
        ; Exact mapped bytes E8 C4 FB FF FF: call 0x5851fb60
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        movzx ecx, al
        test ecx, ecx
        ; Exact mapped bytes 74 0F: je 0x5851ffb2
        __asm _emit 0x74
        __asm _emit 0x0f
        lea edx, [ebp - 28h]
        push edx
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 61 0F 00 00: call 0x58520f10
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0f
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB C2: jmp 0x5851ff74
        __asm _emit 0xeb
        __asm _emit 0xc2
        mov byte ptr [ebp - 4], 1
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 72 9D F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x9d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 0fch]
        ; Exact mapped bytes E8 E3 79 FE FF: call 0x585079b0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x79
        __asm _emit 0xfe
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4ch], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 4C 9D F8 FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0x9d
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4ch]
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
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 54 10 31 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x10
        __asm _emit 0x31
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
