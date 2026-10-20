// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4AA0 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_584e4aa0_584E4AA0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f67ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 14h
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
        mov dword ptr [ebp - 10h], ecx
        movzx eax, word ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 FE 2C 00: call 0x587b4990
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xfe
        __asm _emit 0x2c
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a1ab8h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [edx + 58h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [edx + 5ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 9ch], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 0a0h], 14h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 6ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 70h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 78h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 80h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 88h], 22h
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 8ch], 55h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 94h], 0
        push 0eh
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 DA FE F9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], eax
        push 20h
        ; Exact mapped bytes E8 51 C4 34 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xc4
        __asm _emit 0x34
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 21: je 0x584e4be4
        __asm _emit 0x74
        __asm _emit 0x21
        push 12h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 B0 FE F9 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfe
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov edx, dword ptr [ebp - 1ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 B1 68 2D 00: call 0x587bb490
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x68
        __asm _emit 0x2d
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584e4beb
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 20h], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 20h]
        mov dword ptr [ecx + 54h], edx
        push 5
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 58 11 FA FF: call 0x58485d60
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0x11
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 7E 13 FA FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x13
        __asm _emit 0xfa
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 4], 0ffffffffh
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
