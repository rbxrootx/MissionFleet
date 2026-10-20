// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58756950 .. +0x1E6 bytes.
extern "C" __declspec(naked) void FUN_58756950_58756950() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 8]
        add edx, 1
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + eax*4 + 8], edx
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + edx*4 + 808h], 0
        ; Exact mapped bytes 74 14: je 0x58756994
        __asm _emit 0x74
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + ecx*4 + 1008h], 0
        ; Exact mapped bytes 0F 85 78 01 00 00: jne 0x58756b0c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x78
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 1
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1808h
        ; Exact mapped bytes E8 97 18 D3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x18
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x58756a17
        __asm _emit 0x74
        __asm _emit 0x6a
        mov eax, dword ptr [ebp - 4]
        add eax, 1808h
        mov dword ptr [ebp - 14h], eax
        lea ecx, [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 BC 16 D3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x587569d6
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea edx, [ebp - 2ch]
        push edx
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 AB 10 D3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 1808h
        mov dword ptr [ebp - 18h], eax
        lea ecx, [ebp - 30h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 A3 17 D3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x17
        __asm _emit 0xd3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 DA 0F D3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0x0f
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 1A: je 0x58756a17
        __asm _emit 0x74
        __asm _emit 0x1a
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 3B 10 D3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x10
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 09: jne 0x58756a15
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 02: jmp 0x58756a17
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB B0: jmp 0x587569c7
        __asm _emit 0xeb
        __asm _emit 0xb0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 19: je 0x58756a36
        __asm _emit 0x74
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1808h
        mov dword ptr [ebp - 1ch], ecx
        lea edx, [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 EB 17 D3 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x17
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        mov dword ptr [ebp - 8], 1
        imul eax, dword ptr [ebp + 0ch], 0ch
        mov ecx, dword ptr [ebp - 4]
        lea ecx, [ecx + eax + 1814h]
        ; Exact mapped bytes E8 F0 17 D3 FF: call 0x58488240
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x17
        __asm _emit 0xd3
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 76: je 0x58756aca
        __asm _emit 0x74
        __asm _emit 0x76
        imul edx, dword ptr [ebp + 0ch], 0ch
        mov eax, dword ptr [ebp - 4]
        lea ecx, [eax + edx + 1814h]
        mov dword ptr [ebp - 20h], ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 0F 16 D3 FF: call 0x58488080
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 0F: jmp 0x58756a83
        __asm _emit 0xeb
        __asm _emit 0x0f
        push 0
        lea eax, [ebp - 34h]
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FE 0F D3 FF: call 0x58487a80
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x0f
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        imul ecx, dword ptr [ebp + 0ch], 0ch
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 1814h]
        mov dword ptr [ebp - 24h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 F0 16 D3 FF: call 0x58488190
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 27 0F D3 FF: call 0x584879d0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x0f
        __asm _emit 0xd3
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 74 1A: je 0x58756aca
        __asm _emit 0x74
        __asm _emit 0x1a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 88 0F D3 FF: call 0x58487a40
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x0f
        __asm _emit 0xd3
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 09: jne 0x58756ac8
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 02: jmp 0x58756aca
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB AA: jmp 0x58756a74
        __asm _emit 0xeb
        __asm _emit 0xaa
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 1E: je 0x58756aee
        __asm _emit 0x74
        __asm _emit 0x1e
        imul ecx, dword ptr [ebp + 0ch], 0ch
        mov edx, dword ptr [ebp - 4]
        lea eax, [edx + ecx + 1814h]
        mov dword ptr [ebp - 28h], eax
        lea ecx, [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 33 17 D3 FF: call 0x58488220
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x17
        __asm _emit 0xd3
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3024h]
        mov dword ptr [edx], ecx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3028h]
        mov dword ptr [edx], ecx
        ; Exact mapped bytes EB 24: jmp 0x58756b30
        __asm _emit 0xeb
        __asm _emit 0x24
        mov edx, dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + eax*4 + 808h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 14h]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + edx*4 + 1008h]
        mov dword ptr [ecx], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
