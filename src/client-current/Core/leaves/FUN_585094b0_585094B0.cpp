// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585094B0 .. +0x18E bytes.
extern "C" __declspec(naked) void FUN_585094b0_585094B0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5888090dh
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 40h
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
        mov dword ptr [ebp - 40h], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DD FC FF FF: call 0x585091c0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 44h], eax
        lea eax, [ebp - 3ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0E FC FF FF: call 0x58509100
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 8], 0
        mov edx, dword ptr [ebp - 40h]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [eax + 14h], 0
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ebp - 4ch], ecx
        mov dword ptr [ebp - 4], 0
        movzx edx, byte ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x5850952e
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 48h], 58895250h
        ; Exact mapped bytes EB 09: jmp 0x58509537
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 48h], ecx
        lea edx, [ebp - 3ch]
        push edx
        push 0
        mov eax, dword ptr [ebp - 48h]
        push eax
        ; Exact mapped bytes E8 4A BF FF FF: call 0x58505490
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 8], eax
        lea edx, [ebp - 3ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 53 FC FF FF: call 0x585091b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 2D BF FF FF: call 0x58505490
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 10h], eax
        lea edx, [ebp - 3ch]
        push edx
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 FC FF FF: call 0x58509230
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes E8 10 BF FF FF: call 0x58505490
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40h]
        mov dword ptr [ecx + 14h], eax
        mov dword ptr [ebp - 4ch], 0
        movzx edx, byte ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 2E: je 0x585095c6
        __asm _emit 0x74
        __asm _emit 0x2e
        lea eax, [ebp - 3ch]
        push eax
        push 0
        push 2eh
        ; Exact mapped bytes E8 DB BE FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40h]
        mov byte ptr [ecx + 0ch], al
        lea edx, [ebp - 3ch]
        push edx
        push 0
        push 2ch
        ; Exact mapped bytes E8 C5 BE FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40h]
        mov byte ptr [ecx + 0dh], al
        ; Exact mapped bytes EB 4D: jmp 0x58509613
        __asm _emit 0xeb
        __asm _emit 0x4d
        lea edx, [ebp - 3ch]
        push edx
        push 0
        mov eax, 1
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 44h]
        mov eax, dword ptr [edx]
        movzx ecx, byte ptr [eax + ecx]
        push ecx
        ; Exact mapped bytes E8 9D BE FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp - 40h]
        mov byte ptr [edx + 0ch], al
        lea eax, [ebp - 3ch]
        push eax
        push 0
        mov ecx, 1
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 44h]
        mov ecx, dword ptr [eax + 4]
        movzx edx, byte ptr [ecx + edx]
        push edx
        ; Exact mapped bytes E8 76 BE FF FF: call 0x58505480
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp - 40h]
        mov byte ptr [ecx + 0dh], al
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 4ch]
        ; Exact mapped bytes E8 BE D7 FF FF: call 0x58506de0
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        nop
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
        ; Exact mapped bytes E8 18 7A 32 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x7a
        __asm _emit 0x32
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
