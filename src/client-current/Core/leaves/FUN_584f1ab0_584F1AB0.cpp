// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F1AB0 .. +0x189 bytes.
extern "C" __declspec(naked) void FUN_584f1ab0_584F1AB0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887fb71h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 1ch
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
        ; Exact mapped bytes E8 D7 07 F9 FF: call 0x584822d0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x07
        __asm _emit 0xf9
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588a2798h
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 58h
        ; Exact mapped bytes E8 BC 59 F9 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        ; Exact mapped bytes E8 AD 59 F9 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x59
        __asm _emit 0xf9
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 2
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 50h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 0a0h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 54h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 70h], 2710h
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 74h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 78h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 7ch], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 80h], 0
        push 10h
        push 0
        mov eax, dword ptr [ebp - 10h]
        add eax, 84h
        push eax
        ; Exact mapped bytes E8 81 B2 35 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xb2
        __asm _emit 0x35
        __asm _emit 0x00
        add esp, 0ch
        push 2ch
        ; Exact mapped bytes E8 6B F4 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0xf4
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 0D: je 0x584f1bb6
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 CF 64 06 00: call 0x58558080
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x64
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x584f1bbd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 24h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 24h]
        mov dword ptr [edx + 94h], eax
        push 10h
        ; Exact mapped bytes E8 2A F4 33 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf4
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 0D: je 0x584f1bf7
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5E AA 06 00: call 0x5855c650
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xaa
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x584f1bfe
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 28h], ecx
        mov byte ptr [ebp - 4], 2
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 28h]
        mov dword ptr [edx + 98h], eax
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 9ch], 0
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
