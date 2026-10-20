// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044C6CB .. +0x24E bytes.
extern "C" __declspec(naked) void FUN_0044c6cb_0044C6CB() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58dcb9h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 9ch
        mov dword ptr [ebp - 0a0h], ecx
        mov dword ptr [ebp - 9ch], 0
        mov dword ptr [ebp - 3ch], 0
        mov dword ptr [ebp - 38h], 0
        mov dword ptr [ebp - 98h], 0
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 5A 69 0E 00: call 0x533073
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x69
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x44c72f
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 45: jne 0x44c774
        __asm _emit 0x75
        __asm _emit 0x45
        push 11h
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 36 65 0E 00: call 0x532c6f
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x65
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0E: jne 0x44c74b
        __asm _emit 0x75
        __asm _emit 0x0e
        push 0dh
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 28 65 0E 00: call 0x532c6f
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x65
        __asm _emit 0x0e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x44c753
        __asm _emit 0x74
        __asm _emit 0x08
        lea ecx, [ebp - 34h]
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes EB 21: jmp 0x44c774
        __asm _emit 0xeb
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [edx + 44h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 23 69 0E 00: call 0x533092
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x69
        __asm _emit 0x0e
        __asm _emit 0x00
        ; Exact mapped bytes E9 8F 01 00 00: jmp 0x44c903
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 94h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CD 69 0E 00: call 0x533150
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x69
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], 20h
        lea ecx, [ebp - 78h]
        mov dword ptr [ebp - 98h], ecx
        cmp dword ptr [ebp - 98h], 0
        ; Exact mapped bytes 75 0C: jne 0x44c7a8
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 0a4h], 0
        ; Exact mapped bytes EB 4E: jmp 0x44c7f6
        __asm _emit 0xeb
        __asm _emit 0x4e
        mov edx, dword ptr [ebp - 98h]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        add eax, 1
        mov dword ptr [ebp - 9ch], eax
        mov eax, dword ptr [ebp - 9ch]
        shl eax, 1
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 D0 97 01 00: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x97
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 0a8h], esp
        mov eax, dword ptr [ebp - 9ch]
        push eax
        mov ecx, dword ptr [ebp - 98h]
        push ecx
        mov edx, dword ptr [ebp - 0a8h]
        push edx
        ; Exact mapped bytes E8 00 0E 00 00: call 0x44d5f0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0a4h], eax
        mov eax, dword ptr [ebp - 0a4h]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes 66 8B 8D 7C FF FF FF: mov cx, word ptr [ebp - 0x84]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x8d
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 66 89 4D E4: mov word ptr [ebp - 0x1c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 66 0F B6 55 83: movzx dx, byte ptr [ebp - 0x7d]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0xb6
        __asm _emit 0x55
        __asm _emit 0x83
        ; Exact mapped bytes 66 89 55 E6: mov word ptr [ebp - 0x1a], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xe6
        mov eax, dword ptr [ebp - 80h]
        and eax, 0ffh
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 7fh]
        and ecx, 0ffh
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 7eh]
        and edx, 0ffh
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 94h]
        mov dword ptr [ebp - 58h], eax
        cmp dword ptr [ebp - 58h], 0
        ; Exact mapped bytes 7D 08: jge 0x44c84d
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 58h]
        neg ecx
        mov dword ptr [ebp - 58h], ecx
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 1ch]
        push eax
        lea ecx, [ebp - 54h]
        ; Exact mapped bytes E8 FA BE 09 00: call 0x4e8759
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        mov byte ptr [ebp - 4], 1
        push 5ah
        lea ecx, [ebp - 54h]
        ; Exact mapped bytes E8 07 76 0E 00: call 0x533e74
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x76
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        mov eax, dword ptr [ebp - 58h]
        imul eax, eax, 0afc80h
        cdq
        idiv dword ptr [ebp - 40h]
        mov dword ptr [ebp - 24h], eax
        mov dword ptr [ebp - 20h], 0
        mov ecx, dword ptr [ebp - 0a0h]
        cmp dword ptr [ecx + 44h], 0
        ; Exact mapped bytes 74 25: je 0x44c8b8
        __asm _emit 0x74
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 0a0h]
        mov eax, dword ptr [edx + 44h]
        mov ecx, dword ptr [ebp - 0a0h]
        mov edx, dword ptr [ecx + 44h]
        mov ecx, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 51 08: call dword ptr [ecx + 8]
        __asm _emit 0xff
        __asm _emit 0x51
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 0a0h]
        mov dword ptr [edx + 44h], 0
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 C9: jne 0x44c887
        __asm _emit 0x75
        __asm _emit 0xc9
        mov ecx, dword ptr [ebp - 0a0h]
        add ecx, 44h
        push ecx
        push 63fc80h
        lea edx, [ebp - 2ch]
        push edx
        ; Exact mapped bytes FF 15 BC BB 68 00: call dword ptr [0x68bbbc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0D: jge 0x44c8e8
        __asm _emit 0x7d
        __asm _emit 0x0d
        mov eax, dword ptr [ebp - 0a0h]
        mov dword ptr [eax + 44h], 0
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 54h]
        ; Exact mapped bytes E8 17 BF 09 00: call 0x4e880b
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 34h]
        ; Exact mapped bytes E8 8F 67 0E 00: call 0x533092
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x67
        __asm _emit 0x0e
        __asm _emit 0x00
        lea esp, [ebp - 0a8h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
