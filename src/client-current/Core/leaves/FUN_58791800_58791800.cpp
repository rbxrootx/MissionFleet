// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58791800 .. +0x217 bytes.
extern "C" __declspec(naked) void FUN_58791800_58791800() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 50h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5879181b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0ah
        ; Exact mapped bytes 0F 8D B2 00 00 00: jge 0x587918d7
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0xb2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 64h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 E2 40 CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0x40
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 74 21: je 0x58791864
        __asm _emit 0x74
        __asm _emit 0x21
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 8ch]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 C1 40 CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x40
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 38: jne 0x5879189c
        __asm _emit 0x75
        __asm _emit 0x38
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 14h], edx
        push -1
        push -1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 F3 02 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 18h], edx
        push -1
        push -1
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 D7 02 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 3B: jmp 0x587918d7
        __asm _emit 0xeb
        __asm _emit 0x3b
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 64h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 BB 02 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 8ch]
        mov dword ptr [ebp - 20h], edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 9F 02 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 3B FF FF FF: jmp 0x58791812
        __asm _emit 0xe9
        __asm _emit 0x3b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 81 02 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b8h]
        mov dword ptr [ebp - 28h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 69 02 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 00 40 CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x40
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x5879193e
        __asm _emit 0x75
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0b4h]
        mov dword ptr [ebp - 30h], edx
        push -1
        push -1
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 33 02 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 34h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 CA 3F CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x3f
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x58791974
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b8h]
        mov dword ptr [ebp - 38h], ecx
        push -1
        push -1
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 FD 01 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov dword ptr [ebp - 3ch], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 E4 01 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0c0h]
        mov dword ptr [ebp - 40h], edx
        push 0
        push 0
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 CC 01 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 63 3F CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x3f
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x587919db
        __asm _emit 0x75
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        mov dword ptr [ebp - 48h], ecx
        push -1
        push -1
        mov ecx, dword ptr [ebp - 48h]
        ; Exact mapped bytes E8 96 01 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 4ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4ch]
        ; Exact mapped bytes E8 2D 3F CF FF: call 0x58485920
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x3f
        __asm _emit 0xcf
        __asm _emit 0xff
        cmp eax, 1
        ; Exact mapped bytes 75 19: jne 0x58791a11
        __asm _emit 0x75
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0c0h]
        mov dword ptr [ebp - 50h], eax
        push -1
        push -1
        mov ecx, dword ptr [ebp - 50h]
        ; Exact mapped bytes E8 60 01 00 00: call 0x58791b70
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
