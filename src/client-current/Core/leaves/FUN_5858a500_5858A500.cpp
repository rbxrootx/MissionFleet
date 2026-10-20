// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5858A500 .. +0x17F bytes.
extern "C" __declspec(naked) void FUN_5858a500_5858A500() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58883fach
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 2ch
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
        ; Exact mapped bytes E8 93 11 00 00: call 0x5858b6e0
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx], 588aacf8h
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 208h]
        mov dword ptr [ebp - 20h], eax
        push 111h
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 57 A5 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xa5
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D8 C6 EF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 28h], eax
        push 112h
        ; Exact mapped bytes 8B 0D 30 07 96 58: mov ecx, dword ptr [0x58960730]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 2C A5 EF FF: call 0x58484ad0
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xa5
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 AD C6 EF FF: call 0x58486c60
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0xc6
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        push 58h
        ; Exact mapped bytes E8 49 6A 2A 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x6a
        __asm _emit 0x2a
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 1D: je 0x5858a5e8
        __asm _emit 0x74
        __asm _emit 0x1d
        push 40h
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 2D C2 EF FF: call 0x58486810
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xc2
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x5858a5ef
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 2ch], edx
        mov byte ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [eax + 2b8h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 2b8h]
        mov dword ptr [ebp - 30h], eax
        push 102h
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 92 AF 22 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xaf
        __asm _emit 0x22
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 2b8h]
        mov dword ptr [ebp - 34h], edx
        push 0
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 0C B8 EF FF: call 0x58485e40
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xb8
        __asm _emit 0xef
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 2b8h]
        mov dword ptr [ebp - 38h], ecx
        push 0
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 46 B9 EF FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xb9
        __asm _emit 0xef
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 214h], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 2bch], 4
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
