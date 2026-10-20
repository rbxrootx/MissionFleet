// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050AE70 .. +0x33E bytes.
extern "C" __declspec(naked) void FUN_0050ae70_0050AE70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 33ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 33ch], ecx
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 4
        ; Exact mapped bytes E8 FE 7D 02 00: call 0x532c8e
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 320h], eax
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10ch], 0
        mov dword ptr [ebp - 31ch], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 04 22 5E 00: call dword ptr [0x5e2204]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp eax, 104h
        ; Exact mapped bytes 72 14: jb 0x50aed6
        __asm _emit 0x72
        __asm _emit 0x14
        push 37ah
        push 5cb84ch
        ; Exact mapped bytes E8 2F 9B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50aed6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x50aeb1
        __asm _emit 0x75
        __asm _emit 0xd5
        mov edx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 22h
        ; Exact mapped bytes 75 09: jne 0x50aef0
        __asm _emit 0x75
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        push 104h
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 210h]
        push eax
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        push 22h
        lea ecx, [ebp - 210h]
        push ecx
        ; Exact mapped bytes E8 7C E7 F2 FF: call 0x439690
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xe7
        __asm _emit 0xf2
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 318h], eax
        cmp dword ptr [ebp - 318h], 0
        ; Exact mapped bytes 74 09: je 0x50af2f
        __asm _emit 0x74
        __asm _emit 0x09
        mov edx, dword ptr [ebp - 318h]
        mov byte ptr [edx], 0
        lea eax, [ebp - 210h]
        push eax
        lea ecx, [ebp - 108h]
        push ecx
        ; Exact mapped bytes E8 5D 4A FF FF: call 0x4ff99f
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x4a
        __asm _emit 0xff
        __asm _emit 0xff
        push 104h
        lea edx, [ebp - 314h]
        push edx
        lea eax, [ebp - 108h]
        push eax
        ; Exact mapped bytes E8 A6 A6 02 00: call 0x535600
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xa6
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 9B 48 FF FF: call 0x4ff7fb
        __asm _emit 0xe8
        __asm _emit 0x9b
        __asm _emit 0x48
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x50af78
        __asm _emit 0x74
        __asm _emit 0x14
        lea ecx, [ebp - 314h]
        push ecx
        lea edx, [ebp - 108h]
        push edx
        ; Exact mapped bytes FF 15 E8 21 5E 00: call dword ptr [0x5e21e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        cmp dword ptr [ebp - 320h], 0
        ; Exact mapped bytes 0F 84 C3 00 00 00: je 0x50b048
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 320h]
        push eax
        mov ecx, dword ptr [ebp - 33ch]
        add ecx, 4
        ; Exact mapped bytes E8 16 7D 02 00: call 0x532cb0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x7d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 324h], ecx
        push 586a28h
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes E8 DE 00 FF FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50afca
        __asm _emit 0x75
        __asm _emit 0x14
        push 38ah
        push 5cb84ch
        ; Exact mapped bytes E8 3B 9A 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50afca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x50afa2
        __asm _emit 0x75
        __asm _emit 0xd2
        cmp dword ptr [ebp - 31ch], 0
        ; Exact mapped bytes 74 14: je 0x50afed
        __asm _emit 0x74
        __asm _emit 0x14
        push 38dh
        push 5cb84ch
        ; Exact mapped bytes E8 18 9A 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50afed
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DD: jne 0x50afd0
        __asm _emit 0x75
        __asm _emit 0xdd
        lea ecx, [ebp - 31ch]
        push ecx
        lea edx, [ebp - 108h]
        push edx
        mov eax, dword ptr [ebp - 324h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 324h]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 328h], eax
        mov eax, dword ptr [ebp - 328h]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 7E 15: jle 0x50b038
        __asm _emit 0x7e
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 328h]
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 324h]
        mov dword ptr [ebp - 10ch], edx
        cmp dword ptr [ebp - 328h], 5
        ; Exact mapped bytes 75 02: jne 0x50b043
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x50b048
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 30 FF FF FF: jmp 0x50af78
        __asm _emit 0xe9
        __asm _emit 0x30
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 31ch], 0
        ; Exact mapped bytes 0F 84 18 01 00 00: je 0x50b16d
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 31ch]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes FF 52 68: call dword ptr [edx + 0x68]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x68
        mov dword ptr [ebp - 32ch], eax
        cmp dword ptr [ebp - 32ch], 0
        ; Exact mapped bytes 0F 84 DA 00 00 00: je 0x50b153
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 32ch]
        push eax
        mov ecx, dword ptr [ebp - 31ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 31ch]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        mov dword ptr [ebp - 330h], eax
        push 39eh
        push 5cb84ch
        mov eax, dword ptr [ebp - 330h]
        push eax
        ; Exact mapped bytes E8 B3 00 FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 330h]
        ; Exact mapped bytes E8 8A 9A FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 334h], eax
        cmp dword ptr [ebp - 334h], 0
        ; Exact mapped bytes 74 18: je 0x50b0df
        __asm _emit 0x74
        __asm _emit 0x18
        push -1
        mov ecx, dword ptr [ebp - 334h]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 334h]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x50b0f1
        __asm _emit 0xeb
        __asm _emit 0x12
        push 5cb9a8h
        push 5cb9e0h
        ; Exact mapped bytes E8 27 4B FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x4b
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes E8 0A A4 02 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0xa4
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 338h], eax
        mov ecx, dword ptr [ebp - 334h]
        cmp ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes 74 44: je 0x50b151
        __asm _emit 0x74
        __asm _emit 0x44
        push 585e80h
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes E8 73 FF FE FF: call 0x4fb090
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0xff
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x50b135
        __asm _emit 0x75
        __asm _emit 0x14
        push 3a7h
        push 5cb84ch
        ; Exact mapped bytes E8 D0 98 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x98
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50b135
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D2: jne 0x50b10d
        __asm _emit 0x75
        __asm _emit 0xd2
        push -1
        mov eax, dword ptr [ebp - 338h]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 338h]
        ; Exact mapped bytes FF 92 D4 00 00 00: call dword ptr [edx + 0xd4]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xd4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x50b165
        __asm _emit 0xeb
        __asm _emit 0x12
        push 5cb9e4h
        push 5cba1ch
        ; Exact mapped bytes E8 B3 4A FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x4a
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 31ch]
        ; Exact mapped bytes EB 38: jmp 0x50b1a5
        __asm _emit 0xeb
        __asm _emit 0x38
        cmp dword ptr [ebp - 10ch], 0
        ; Exact mapped bytes 75 12: jne 0x50b188
        __asm _emit 0x75
        __asm _emit 0x12
        push -1
        push 0
        push 0f101h
        ; Exact mapped bytes E8 45 27 00 00: call 0x50d8c9
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x27
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 1D: jmp 0x50b1a5
        __asm _emit 0xeb
        __asm _emit 0x1d
        push 1
        lea eax, [ebp - 108h]
        push eax
        mov ecx, dword ptr [ebp - 10ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 10ch]
        ; Exact mapped bytes FF 92 88 00 00 00: call dword ptr [edx + 0x88]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
