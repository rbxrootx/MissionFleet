// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858A0A0 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_5858a0a0_5858A0A0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883f6ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 10h
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
        movzx eax, word ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 53 E6 F3 FF: call 0x584c8740
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xe6
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588aacdch
        push 58h
        ; Exact mapped bytes E8 00 6F 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x6f
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 20: je 0x5858a134
        __asm _emit 0x74
        __asm _emit 0x20
        movzx edx, word ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E1 C6 EF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858a13b
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ecx + 70h], edx
        mov eax, dword ptr [ebp - 10h]
        mov byte ptr [eax + 74h], 1
        mov ecx, dword ptr [ebp - 10h]
        mov byte ptr [ecx + 75h], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 78h], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 7ch], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 80h], eax
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 CB 53 F1 FF: call 0x5849f550
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x53
        __asm _emit 0xf1
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 11 BC EF FF: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xbc
        __asm _emit 0xef
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 A7 BC EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xbc
        __asm _emit 0xef
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
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
