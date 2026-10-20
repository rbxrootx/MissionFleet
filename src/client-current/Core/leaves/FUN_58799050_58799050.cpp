// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799050 .. +0xE7 bytes.
extern "C" __declspec(naked) void FUN_58799050_58799050() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887f32dh
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
        mov dword ptr [ebp - 10h], eax
        push esi
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov esi, dword ptr [ecx]
        mov ecx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx + 4]
        test esi, esi
        ; Exact mapped bytes 75 21: jne 0x587990a9
        __asm _emit 0x75
        __asm _emit 0x21
        cmp ecx, eax
        sete al
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
        pop esi
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 AD 7F 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x7f
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        shr ecx, 2
        shr eax, 2
        cmp ecx, eax
        ; Exact mapped bytes 74 04: je 0x587990b7
        __asm _emit 0x74
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB D6: jmp 0x5879908d
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov edx, dword ptr [edx]
        test edx, edx
        ; Exact mapped bytes 74 5D: je 0x5879911a
        __asm _emit 0x74
        __asm _emit 0x5d
        sub ecx, 4
        ; Exact mapped bytes 72 11: jb 0x587990d3
        __asm _emit 0x72
        __asm _emit 0x11
        mov eax, dword ptr [esi]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 75 10: jne 0x587990d8
        __asm _emit 0x75
        __asm _emit 0x10
        add esi, 4
        add edx, 4
        sub ecx, 4
        ; Exact mapped bytes 73 EF: jae 0x587990c2
        __asm _emit 0x73
        __asm _emit 0xef
        cmp ecx, -4
        ; Exact mapped bytes 74 39: je 0x58799111
        __asm _emit 0x74
        __asm _emit 0x39
        mov al, byte ptr [esi]
        cmp al, byte ptr [edx]
        ; Exact mapped bytes 75 27: jne 0x58799105
        __asm _emit 0x75
        __asm _emit 0x27
        cmp ecx, -3
        ; Exact mapped bytes 74 2E: je 0x58799111
        __asm _emit 0x74
        __asm _emit 0x2e
        mov al, byte ptr [esi + 1]
        cmp al, byte ptr [edx + 1]
        ; Exact mapped bytes 75 1A: jne 0x58799105
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp ecx, -2
        ; Exact mapped bytes 74 21: je 0x58799111
        __asm _emit 0x74
        __asm _emit 0x21
        mov al, byte ptr [esi + 2]
        cmp al, byte ptr [edx + 2]
        ; Exact mapped bytes 75 0D: jne 0x58799105
        __asm _emit 0x75
        __asm _emit 0x0d
        cmp ecx, -1
        ; Exact mapped bytes 74 14: je 0x58799111
        __asm _emit 0x74
        __asm _emit 0x14
        mov al, byte ptr [esi + 3]
        cmp al, byte ptr [edx + 3]
        ; Exact mapped bytes 74 0C: je 0x58799111
        __asm _emit 0x74
        __asm _emit 0x0c
        sbb eax, eax
        or eax, 1
        test eax, eax
        ; Exact mapped bytes E9 79 FF FF FF: jmp 0x5879908a
        __asm _emit 0xe9
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes E9 70 FF FF FF: jmp 0x5879908a
        __asm _emit 0xe9
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 588b6db0h
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 A9 09 D1 FF: call 0x584a9ad0
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0xd1
        __asm _emit 0xff
        lea eax, [ebp - 28h]
        mov dword ptr [ebp - 4], 0
        push eax
        ; Exact mapped bytes E8 F9 1B 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
