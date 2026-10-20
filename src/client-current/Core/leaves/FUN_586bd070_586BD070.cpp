// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586BD070 .. +0x1DC bytes.
extern "C" __declspec(naked) void FUN_586bd070_586BD070() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 14h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 30 8C 94 58: mov ecx, dword ptr [0x58948c30]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x8c
        __asm _emit 0x94
        __asm _emit 0x58
        ; Exact mapped bytes E8 98 41 0C 00: call 0x58781220
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x41
        __asm _emit 0x0c
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        cmp dword ptr [ebp - 20h], 0
        ; Exact mapped bytes 0F 84 A3 01 00 00: je 0x586bd238
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 D3 62 E0 FF: call 0x584c3370
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x62
        __asm _emit 0xe0
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes 0F 84 7E 01 00 00: je 0x586bd228
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x7e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 2
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, word ptr [eax + edx + 8]
        xor ecx, 55h
        ; Exact mapped bytes 66 89 4D F0: mov word ptr [ebp - 0x10], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf0
        mov edx, 2
        shl edx, 0
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, word ptr [eax + edx + 8]
        xor ecx, 55h
        ; Exact mapped bytes 66 89 4D F4: mov word ptr [ebp - 0xc], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf4
        mov edx, 2
        shl edx, 1
        mov eax, dword ptr [ebp - 1ch]
        movzx ecx, word ptr [eax + edx + 8]
        xor ecx, 55h
        ; Exact mapped bytes 66 89 4D F8: mov word ptr [ebp - 8], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        xor edx, edx
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 24h], eax
        cmp dword ptr [ebp - 24h], 29h
        ; Exact mapped bytes 74 08: je 0x586bd108
        __asm _emit 0x74
        __asm _emit 0x08
        cmp dword ptr [ebp - 24h], 2ah
        ; Exact mapped bytes 74 0D: je 0x586bd113
        __asm _emit 0x74
        __asm _emit 0x0d
        ; Exact mapped bytes EB 14: jmp 0x586bd11c
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, 0ah
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes EB 09: jmp 0x586bd11c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov edx, 1
        ; Exact mapped bytes 66 89 55 FC: mov word ptr [ebp - 4], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfc
        movzx eax, word ptr [ebp - 4]
        test eax, eax
        ; Exact mapped bytes 75 13: jne 0x586bd137
        __asm _emit 0x75
        __asm _emit 0x13
        push 1135h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8F B7 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xb7
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes E9 0F 01 00 00: jmp 0x586bd246
        __asm _emit 0xe9
        __asm _emit 0x0f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp - 8]
        movzx edx, word ptr [ebp - 4]
        cmp ecx, edx
        ; Exact mapped bytes 0F 8C D1 00 00 00: jl 0x586bd218
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xd1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx eax, word ptr [ebp - 8]
        movzx ecx, word ptr [ebp - 4]
        sub eax, ecx
        push eax
        movzx edx, word ptr [ebp - 0ch]
        push edx
        movzx eax, word ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 8C 1F E4 FF: call 0x584ff0f0
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0x1f
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 80h]
        mov dword ptr [ecx + 84h], eax
        push 1
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 90 59 00 00: call 0x586c2b10
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x59
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ecx + 24ch]
        ; Exact mapped bytes E8 21 86 DD FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x86
        __asm _emit 0xdd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 7E 75: jle 0x586bd208
        __asm _emit 0x7e
        __asm _emit 0x75
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 61 18 00 00: call 0x586bea00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd1b2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 18h]
        cmp edx, dword ptr [ecx + 84h]
        ; Exact mapped bytes 7D 0B: jge 0x586bd1cb
        __asm _emit 0x7d
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 18 63 00 00: call 0x586c34e0
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB DE: jmp 0x586bd1a9
        __asm _emit 0xeb
        __asm _emit 0xde
        mov dword ptr [ebp - 18h], 0
        ; Exact mapped bytes EB 09: jmp 0x586bd1dd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        cmp dword ptr [ebp - 18h], 5
        ; Exact mapped bytes 7D 25: jge 0x586bd208
        __asm _emit 0x7d
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + ecx*4 + 22ch]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ecx + 88h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 8B 43 10 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x43
        __asm _emit 0x10
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB CC: jmp 0x586bd1d4
        __asm _emit 0xeb
        __asm _emit 0xcc
        push 1145h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 AB B6 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd226
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1146h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9B B6 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd236
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 8B B6 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 0E: jmp 0x586bd246
        __asm _emit 0xeb
        __asm _emit 0x0e
        push 1135h
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 7B B6 00 00: call 0x586c88c0
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xb6
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
