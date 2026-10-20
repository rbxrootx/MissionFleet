// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58555210 .. +0xF3 bytes.
extern "C" __declspec(naked) void FUN_58555210_58555210() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883297h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 28h
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
        mov dword ptr [ebp - 30h], ecx
        ; Exact mapped bytes E8 2F BA 2F 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xba
        __asm _emit 0x2f
        __asm _emit 0x00
        cdq
        idiv dword ptr [ebp + 14h]
        add edx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 1ch], edx
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x58555259
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 0F 8D 8D 00 00 00: jge 0x585552f2
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 84h
        ; Exact mapped bytes E8 95 BD 2D 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xbd
        __asm _emit 0x2d
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 51: je 0x585552d3
        __asm _emit 0x74
        __asm _emit 0x51
        ; Exact mapped bytes E8 E5 B9 2F 00: call 0x58850c6c
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xb9
        __asm _emit 0x2f
        __asm _emit 0x00
        cdq
        idiv dword ptr [ebp + 1ch]
        add edx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 20h], edx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes 8B 0D F0 06 96 58: mov ecx, dword ptr [0x589606f0]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf0
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 30 F8 F2 FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf8
        __asm _emit 0xf2
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 32 17 F3 FF: call 0x584869e0
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x17
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 12 E3 F8 FF: call 0x584e35e0
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0xe3
        __asm _emit 0xf8
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x585552da
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], edx
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 2ch]
        mov dword ptr [ebp - 34h], eax
        ; Exact mapped bytes E9 5E FF FF FF: jmp 0x58555250
        __asm _emit 0xe9
        __asm _emit 0x5e
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
