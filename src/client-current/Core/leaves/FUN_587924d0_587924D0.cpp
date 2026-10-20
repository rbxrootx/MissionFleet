// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587924D0 .. +0x231 bytes.
extern "C" __declspec(naked) void FUN_587924d0_587924D0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891237h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 34h
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
        ; Exact mapped bytes E8 57 FD CE FF: call 0x58482270
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xfd
        __asm _emit 0xce
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588b6b4ch
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 60h], 0
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 64h
        ; Exact mapped bytes E8 92 4F CF FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x4f
        __asm _emit 0xcf
        __asm _emit 0xff
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 70h], 0
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 74h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 78h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 7ch], 1
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax + 80h], 0
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [ecx + 84h], 0
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 88h], 0
        push 1ch
        ; Exact mapped bytes E8 6C EA 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 14h], eax
        mov byte ptr [ebp - 4], 2
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 26: je 0x587925ce
        __asm _emit 0x74
        __asm _emit 0x26
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
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 C7 58 FF FF: call 0x58787e90
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x58
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 07: jmp 0x587925d5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 18h], 0
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 34h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ecx + 60h], edx
        push 68h
        ; Exact mapped bytes E8 15 EA 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xea
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov byte ptr [ebp - 4], 3
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 74 2B: je 0x5879262a
        __asm _emit 0x74
        __asm _emit 0x2b
        ; Exact mapped bytes 0F BF 45 1C: movsx eax, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0x1c
        add eax, 258h
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 3B A9 FF FF: call 0x5878cf60
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes EB 07: jmp 0x58792631
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 20h], 0
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 38h], eax
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 70h], edx
        push 0cch
        ; Exact mapped bytes E8 B6 E9 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov byte ptr [ebp - 4], 4
        cmp dword ptr [ebp - 24h], 0
        ; Exact mapped bytes 74 30: je 0x5879268e
        __asm _emit 0x74
        __asm _emit 0x30
        mov eax, dword ptr [ebp + 20h]
        push eax
        ; Exact mapped bytes 0F BF 4D 1C: movsx ecx, word ptr [ebp + 0x1c]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x1c
        add ecx, 258h
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F7 76 FF FF: call 0x58789d80
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x76
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes EB 07: jmp 0x58792695
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 28h], 0
        mov ecx, dword ptr [ebp - 28h]
        mov dword ptr [ebp - 3ch], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 3ch]
        mov dword ptr [edx + 74h], eax
        push 18h
        ; Exact mapped bytes E8 55 E9 09 00: call 0x58831004
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        mov dword ptr [ebp - 2ch], eax
        mov byte ptr [ebp - 4], 5
        cmp dword ptr [ebp - 2ch], 0
        ; Exact mapped bytes 74 0D: je 0x587926cc
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 19 97 FF FF: call 0x5878bde0
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 30h], eax
        ; Exact mapped bytes EB 07: jmp 0x587926d3
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 30h], 0
        mov ecx, dword ptr [ebp - 30h]
        mov dword ptr [ebp - 40h], ecx
        mov byte ptr [ebp - 4], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 40h]
        mov dword ptr [edx + 78h], eax
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
