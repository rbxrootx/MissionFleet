// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58720410 .. +0x22B bytes.
extern "C" __declspec(naked) void FUN_58720410_58720410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x5872042b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7F 28: jg 0x58720459
        __asm _emit 0x7f
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0e4h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 9F B0 DA FF: call 0x584cb4f0
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xb0
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x58720457
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58720459
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C9: jmp 0x58720422
        __asm _emit 0xeb
        __asm _emit 0xc9
        cmp dword ptr [ebp - 0ch], 3
        ; Exact mapped bytes 75 05: jne 0x58720464
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 D1 01 00 00: jmp 0x58720635
        __asm _emit 0xe9
        __asm _emit 0xd1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + eax*4 + 0e4h]
        ; Exact mapped bytes E8 4A 07 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 37 10 0A 00: call 0x587c14d0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx*4 + 0e4h]
        ; Exact mapped bytes E8 15 07 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x07
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov dword ptr [ebp - 10h], 0
        ; Exact mapped bytes EB 09: jmp 0x587204c0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        cmp dword ptr [ebp - 10h], 2
        ; Exact mapped bytes 7F 3C: jg 0x58720502
        __asm _emit 0x7f
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 32: je 0x58720500
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx*4 + 0e4h]
        ; Exact mapped bytes E8 D0 06 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 91 10 0A 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x10
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B5: jmp 0x587204b7
        __asm _emit 0xeb
        __asm _emit 0xb5
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ebp - 28h]
        ; Exact mapped bytes 75 1A: jne 0x58720524
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 48 8D D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x8d
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 0F 84 08 01 00 00: je 0x5872062c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x08
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + eax + 0e4h]
        mov dword ptr [ebp - 30h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx + 0e4h]
        ; Exact mapped bytes E8 70 06 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 2ch], eax
        mov eax, dword ptr [ebp - 2ch]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 01 06 0A 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x06
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 C4 00 00 00: jne 0x5872062c
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 EA 8C D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x8c
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 1F: jne 0x5872059d
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 170h]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 170h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes E9 8F 00 00 00: jmp 0x5872062c
        __asm _emit 0xe9
        __asm _emit 0x8f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 170h]
        mov dword ptr [ebp - 44h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 164h]
        mov dword ptr [ebp - 3ch], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx + 0e4h]
        mov dword ptr [ebp - 38h], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 0e4h]
        ; Exact mapped bytes E8 E0 05 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 34h]
        push ecx
        mov ecx, dword ptr [ebp - 38h]
        ; Exact mapped bytes E8 71 05 0A 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        mov byte ptr [ebp - 1], al
        movzx edx, byte ptr [ebp - 1]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 A1 6F 00 00: call 0x587275a0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x6f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 40h], eax
        push 0
        push 1
        mov eax, dword ptr [ebp - 40h]
        push eax
        mov ecx, dword ptr [ebp - 44h]
        ; Exact mapped bytes E8 8E AE 00 00: call 0x5872b4a0
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xae
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 170h]
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [edx]
        mov ecx, dword ptr [eax + 170h]
        mov eax, dword ptr [edx + 4]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 AC CD FF FF: call 0x5871d3e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xcd
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
