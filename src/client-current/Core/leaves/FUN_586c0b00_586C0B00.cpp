// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C0B00 .. +0x147 bytes.
extern "C" __declspec(naked) void FUN_586c0b00_586C0B00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 0ch], ecx
        push 588b1154h
        mov eax, dword ptr [ebp + 8]
        add eax, 444h
        push eax
        ; Exact mapped bytes E8 C4 00 19 00: call 0x58850be0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x586c0b2c
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 0ch]
        cmp dword ptr [ecx + 6ch], 4
        ; Exact mapped bytes 74 07: je 0x586c0b33
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 0E 01 00 00: jmp 0x586c0c41
        __asm _emit 0xe9
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        add edx, 98h
        mov dword ptr [ebp - 14h], edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 35 75 DC FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x75
        __asm _emit 0xdc
        __asm _emit 0xff
        xor ecx, ecx
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        xor edx, edx
        ; Exact mapped bytes 66 89 55 F8: mov word ptr [ebp - 8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xf8
        ; Exact mapped bytes EB 0E: jmp 0x586c0b67
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1
        lea eax, [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 DC 7A FF FF: call 0x586b8640
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x7a
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 98h
        mov dword ptr [ebp - 18h], ecx
        lea edx, [ebp - 2ch]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 11 76 DC FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x76
        __asm _emit 0xdc
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 48 6E DC FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x6e
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 32: je 0x586c0bc1
        __asm _emit 0x74
        __asm _emit 0x32
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 99 6E DC FF: call 0x58487a30
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x6e
        __asm _emit 0xdc
        __asm _emit 0xff
        movzx ecx, word ptr [eax + 2]
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 2]
        cmp ecx, eax
        ; Exact mapped bytes 75 19: jne 0x586c0bbf
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, 1
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        mov edx, dword ptr [ebp + 8]
        movzx eax, word ptr [edx + 6]
        sub eax, 1
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes EB 02: jmp 0x586c0bc1
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB 98: jmp 0x586c0b59
        __asm _emit 0xeb
        __asm _emit 0x98
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x586c0bcd
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 74: jmp 0x586c0c41
        __asm _emit 0xeb
        __asm _emit 0x74
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + eax + 1b0h]
        mov dword ptr [ebp - 20h], edx
        push 588b1158h
        ; Exact mapped bytes E8 04 14 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x14
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 A2 54 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x54
        __asm _emit 0xdc
        __asm _emit 0xff
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + ecx + 1b0h]
        mov dword ptr [ebp - 28h], eax
        push 588b1178h
        ; Exact mapped bytes E8 D4 13 E6 FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0x13
        __asm _emit 0xe6
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 24h]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 72 54 DC FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x54
        __asm _emit 0xdc
        __asm _emit 0xff
        push 0
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 34 40 00 00: call 0x586c4c70
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
