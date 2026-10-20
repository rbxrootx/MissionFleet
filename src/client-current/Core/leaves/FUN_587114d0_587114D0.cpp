// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587114D0 .. +0x15B bytes.
extern "C" __declspec(naked) void FUN_587114d0_587114D0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 1ch], ecx
        mov eax, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 66 8B 48 24: mov cx, word ptr [eax + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 E1 01: and cx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe1
        __asm _emit 0x01
        movzx edx, cx
        test edx, edx
        ; Exact mapped bytes 0F 84 22 01 00 00: je 0x5871161b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x22
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], edx
        mov ecx, dword ptr [eax + 8]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [eax + 0ch]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 14h], 0e0h
        mov dword ptr [ebp - 10h], 0b1h
        mov dword ptr [ebp - 0ch], 32ch
        mov dword ptr [ebp - 8], 23eh
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 4ch]
        mov dword ptr [ebp - 18h], ecx
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 74: je 0x587115b2
        __asm _emit 0x74
        __asm _emit 0x74
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 CA 41 D8 FF: call 0x58495710
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0x41
        __asm _emit 0xd8
        __asm _emit 0xff
        ; Exact mapped bytes 0F BF 10: movsx edx, word ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x10
        test edx, edx
        ; Exact mapped bytes 7C 02: jl 0x5871154f
        __asm _emit 0x7c
        __asm _emit 0x02
        ; Exact mapped bytes EB 63: jmp 0x587115b2
        __asm _emit 0xeb
        __asm _emit 0x63
        mov eax, dword ptr [ebp - 1ch]
        mov ecx, dword ptr [eax + 60h]
        cmp ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 0B: je 0x58711565
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 64h]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 20: jne 0x58711585
        __asm _emit 0x75
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 E0: call dword ptr [ebp - 0x20]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe0
        nop
        ; Exact mapped bytes EB 1E: jmp 0x587115a3
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 14h]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 DC: call dword ptr [ebp - 0x24]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xdc
        nop
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C5 42 D8 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 86: jmp 0x58711538
        __asm _emit 0xeb
        __asm _emit 0x86
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 63: je 0x5871161b
        __asm _emit 0x74
        __asm _emit 0x63
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [edx + 60h]
        cmp eax, dword ptr [ebp - 18h]
        ; Exact mapped bytes 74 0B: je 0x587115ce
        __asm _emit 0x74
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 64h]
        cmp edx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 75 20: jne 0x587115ee
        __asm _emit 0x75
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 D8: call dword ptr [ebp - 0x28]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd8
        nop
        ; Exact mapped bytes EB 1E: jmp 0x5871160c
        __asm _emit 0xeb
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 14h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 D4: call dword ptr [ebp - 0x2c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xd4
        nop
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5C 42 D8 FF: call 0x58495870
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x42
        __asm _emit 0xd8
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 97: jmp 0x587115b2
        __asm _emit 0xeb
        __asm _emit 0x97
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 2B FA 11 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0xfa
        __asm _emit 0x11
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
