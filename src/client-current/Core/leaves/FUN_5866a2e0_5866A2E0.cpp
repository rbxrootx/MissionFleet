// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5866A2E0 .. +0x108 bytes.
extern "C" __declspec(naked) void FUN_5866a2e0_5866A2E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 84 EF 00 00 00: je 0x5866a3e2
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 76 43: jbe 0x5866a342
        __asm _emit 0x76
        __asm _emit 0x43
        mov ecx, 60h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + edx]
        test ecx, ecx
        ; Exact mapped bytes 75 0F: jne 0x5866a321
        __asm _emit 0x75
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 82 DA 00 00 00: movsx eax, word ptr [edx + 0xda]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xda
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        ; Exact mapped bytes EB 21: jmp 0x5866a342
        __asm _emit 0xeb
        __asm _emit 0x21
        mov ecx, 60h
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        movzx ecx, byte ptr [eax + edx]
        cmp ecx, 1
        ; Exact mapped bytes 75 0D: jne 0x5866a342
        __asm _emit 0x75
        __asm _emit 0x0d
        mov edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F BF 82 D8 00 00 00: movsx eax, word ptr [edx + 0xd8]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x82
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x5866a354
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 10h]
        ; Exact mapped bytes 0F 83 82 00 00 00: jae 0x5866a3e2
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        imul eax, dword ptr [ebp - 4], 60h
        mov ecx, dword ptr [ebp - 8]
        movzx edx, byte ptr [ecx + eax]
        test edx, edx
        ; Exact mapped bytes 75 30: jne 0x5866a39f
        __asm _emit 0x75
        __asm _emit 0x30
        imul eax, dword ptr [ebp - 4], 60h
        mov ecx, dword ptr [ebp - 8]
        lea edx, [ecx + eax + 1]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 7D E4 FF FF: call 0x58668800
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xe4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 11: je 0x5866a39d
        __asm _emit 0x74
        __asm _emit 0x11
        imul eax, dword ptr [ebp - 4], 60h
        add eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 E4 A7 E5 FF: call 0x584c4b80
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xa7
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 3E: jmp 0x5866a3dd
        __asm _emit 0xeb
        __asm _emit 0x3e
        imul ecx, dword ptr [ebp - 4], 60h
        mov edx, dword ptr [ebp - 8]
        movzx eax, byte ptr [edx + ecx]
        cmp eax, 1
        ; Exact mapped bytes 75 2E: jne 0x5866a3dd
        __asm _emit 0x75
        __asm _emit 0x2e
        imul ecx, dword ptr [ebp - 4], 60h
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx + 1]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 DD E3 FF FF: call 0x586687a0
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xe3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 11: je 0x5866a3dd
        __asm _emit 0x74
        __asm _emit 0x11
        imul ecx, dword ptr [ebp - 4], 60h
        add ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 A4 A7 E5 FF: call 0x584c4b80
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xa7
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 69 FF FF FF: jmp 0x5866a34b
        __asm _emit 0xe9
        __asm _emit 0x69
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
