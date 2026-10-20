// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B4050 .. +0x12F bytes.
extern "C" __declspec(naked) void FUN_587b4050_587B4050() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 588921d5h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 80h
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
        push 588bdc08h
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 48 5A CF FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x5a
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 78h], eax
        mov eax, dword ptr [ebp - 78h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 58 E6 FF FF: call 0x587b26f0
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xe6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov byte ptr [ebp - 71h], al
        lea ecx, [ebp - 40h]
        ; Exact mapped bytes E8 8A 5C CF FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x5c
        __asm _emit 0xcf
        __asm _emit 0xff
        movzx edx, byte ptr [ebp - 71h]
        test edx, edx
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x587b4156
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 588bdc18h
        lea eax, [ebp - 70h]
        push eax
        ; Exact mapped bytes E8 A0 F0 FF FF: call 0x587b3160
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 7ch], eax
        mov ecx, dword ptr [ebp - 7ch]
        mov dword ptr [ebp - 80h], ecx
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 80h]
        push edx
        push 588bdc20h
        lea eax, [ebp - 58h]
        push eax
        ; Exact mapped bytes E8 9B D0 D4 FF: call 0x58501180
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xd0
        __asm _emit 0xd4
        __asm _emit 0xff
        add esp, 0ch
        mov dword ptr [ebp - 84h], eax
        mov ecx, dword ptr [ebp - 84h]
        mov dword ptr [ebp - 88h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 88h]
        push edx
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes E8 52 AA D1 FF: call 0x584ceb60
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0xaa
        __asm _emit 0xd1
        __asm _emit 0xff
        add esp, 0ch
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 58h]
        ; Exact mapped bytes E8 13 5C CF FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x5c
        __asm _emit 0xcf
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 70h]
        ; Exact mapped bytes E8 04 5C CF FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x5c
        __asm _emit 0xcf
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 07 1C D1 FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x1c
        __asm _emit 0xd1
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 84 43 89 58: call dword ptr [0x58894384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8ch], eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 E2 5B CF FF: call 0x584a9d30
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x5b
        __asm _emit 0xcf
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8ch]
        ; Exact mapped bytes EB 0E: jmp 0x587b4164
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 84 43 89 58: call dword ptr [0x58894384]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
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
        ; Exact mapped bytes E8 D7 CE 07 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0xce
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
