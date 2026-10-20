// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587110F0 .. +0x1B4 bytes.
extern "C" __declspec(naked) void FUN_587110f0_587110F0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 48h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 38h], ecx
        mov eax, dword ptr [ebp - 38h]
        cmp dword ptr [eax + 20f4h], 0
        ; Exact mapped bytes 0F 84 83 01 00 00: je 0x58711296
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x83
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 30h]
        push ecx
        mov edx, dword ptr [ebp - 38h]
        movzx eax, word ptr [edx + 20f6h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 56 FF FF FF: call 0x58711080
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 64 01 00 00: je 0x58711296
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x64
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 38h]
        mov edx, dword ptr [ecx + 0bch]
        mov dword ptr [ebp - 44h], edx
        mov eax, dword ptr [ebp - 38h]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 48h], ecx
        mov edx, dword ptr [ebp - 38h]
        mov eax, dword ptr [edx + 20f4h]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + 0bch], eax
        xor edx, edx
        ; Exact mapped bytes 66 89 55 C4: mov word ptr [ebp - 0x3c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc4
        movzx eax, byte ptr [ebp - 44h]
        test eax, eax
        ; Exact mapped bytes 74 0A: je 0x58711174
        __asm _emit 0x74
        __asm _emit 0x0a
        ; Exact mapped bytes 66 8B 4D BE: mov cx, word ptr [ebp - 0x42]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xbe
        ; Exact mapped bytes 66 89 4D C4: mov word ptr [ebp - 0x3c], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xc4
        ; Exact mapped bytes EB 09: jmp 0x5871117d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 270fh
        ; Exact mapped bytes 66 89 55 C4: mov word ptr [ebp - 0x3c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xc4
        mov dword ptr [ebp - 40h], 0ffffffffh
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x58711196
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 20h
        ; Exact mapped bytes 7D 38: jge 0x587111d4
        __asm _emit 0x7d
        __asm _emit 0x38
        cmp dword ptr [ebp - 40h], -1
        ; Exact mapped bytes 75 18: jne 0x587111ba
        __asm _emit 0x75
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp - 38h]
        movzx eax, word ptr [edx + ecx*2 + 16ch]
        test eax, eax
        ; Exact mapped bytes 75 06: jne 0x587111ba
        __asm _emit 0x75
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 40h], ecx
        mov edx, dword ptr [ebp - 34h]
        mov eax, dword ptr [ebp - 38h]
        movzx ecx, word ptr [eax + edx*2 + 16ch]
        movzx edx, word ptr [ebp - 3ch]
        cmp ecx, edx
        ; Exact mapped bytes 75 02: jne 0x587111d2
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x587111d4
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B9: jmp 0x5871118d
        __asm _emit 0xeb
        __asm _emit 0xb9
        cmp dword ptr [ebp - 40h], -1
        ; Exact mapped bytes 0F 84 B8 00 00 00: je 0x58711296
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 34h], 20h
        ; Exact mapped bytes 0F 85 AE 00 00 00: jne 0x58711296
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes 66 8B 55 C4: mov dx, word ptr [ebp - 0x3c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xc4
        ; Exact mapped bytes 66 89 94 41 6C 01 00 00: mov word ptr [ecx + eax*2 + 0x16c], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x94
        __asm _emit 0x41
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], 0
        ; Exact mapped bytes EB 09: jmp 0x5871120c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 34h]
        add eax, 1
        mov dword ptr [ebp - 34h], eax
        cmp dword ptr [ebp - 34h], 8
        ; Exact mapped bytes 7D 16: jge 0x58711228
        __asm _emit 0x7d
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 34h]
        mov edx, dword ptr [ebp + ecx*4 - 30h]
        mov eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [ebp - 38h]
        mov dword ptr [ecx + eax*4 + 118h], edx
        ; Exact mapped bytes EB DB: jmp 0x58711203
        __asm _emit 0xeb
        __asm _emit 0xdb
        push 0ch
        push 0
        lea edx, [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 DB BB 13 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xbb
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 0ch
        push 4
        mov eax, dword ptr [ebp - 38h]
        add eax, 0ach
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 44 B6 13 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xb6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 0ch
        push 4
        lea edx, [ebp - 48h]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 32 B6 13 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xb6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 0ch
        push 4
        mov ecx, dword ptr [ebp - 38h]
        add ecx, 20f4h
        push ecx
        lea edx, [ebp - 8]
        push edx
        ; Exact mapped bytes E8 1A B6 13 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xb6
        __asm _emit 0x13
        __asm _emit 0x00
        add esp, 0ch
        push 0
        push 0ch
        lea eax, [ebp - 10h]
        push eax
        push 0
        push 0ah
        push 80011034h
        ; Exact mapped bytes 8B 0D 94 75 94 58: mov ecx, dword ptr [0x58947594]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x94
        __asm _emit 0x75
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 FB B6 11 00: call 0x5882c990
        __asm _emit 0xe8
        __asm _emit 0xfb
        __asm _emit 0xb6
        __asm _emit 0x11
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 B0 FD 11 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xfd
        __asm _emit 0x11
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
