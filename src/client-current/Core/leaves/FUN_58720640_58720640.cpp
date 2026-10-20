// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58720640 .. +0x20D bytes.
extern "C" __declspec(naked) void FUN_58720640_58720640() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x5872065b
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 7F 28: jg 0x58720689
        __asm _emit 0x7f
        __asm _emit 0x28
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + ecx*4 + 0f0h]
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6F AE DA FF: call 0x584cb4f0
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xae
        __asm _emit 0xda
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 02: je 0x58720687
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x58720689
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB C9: jmp 0x58720652
        __asm _emit 0xeb
        __asm _emit 0xc9
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 75 05: jne 0x58720694
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E9 B3 01 00 00: jmp 0x58720847
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 0f0h]
        ; Exact mapped bytes E8 1A 05 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x05
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 24h], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f0h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 07 0E 0A 00: call 0x587c14d0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx*4 + 0f0h]
        ; Exact mapped bytes E8 E5 04 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes EB 09: jmp 0x587206f0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 0ch]
        add eax, 1
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 2
        ; Exact mapped bytes 7F 3C: jg 0x58720732
        __asm _emit 0x7f
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 0ch]
        cmp ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 32: je 0x58720730
        __asm _emit 0x74
        __asm _emit 0x32
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f0h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 0f0h]
        ; Exact mapped bytes E8 A0 04 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 61 0E 0A 00: call 0x587c1590
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x0e
        __asm _emit 0x0a
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB B5: jmp 0x587206e7
        __asm _emit 0xeb
        __asm _emit 0xb5
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 7D 05: jge 0x5872073d
        __asm _emit 0x7d
        __asm _emit 0x05
        ; Exact mapped bytes E9 0A 01 00 00: jmp 0x58720847
        __asm _emit 0xe9
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        cmp edx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 75 1A: jne 0x5872075f
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        ; Exact mapped bytes E8 0D 8B D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x8b
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 0F 84 DF 00 00 00: je 0x5872083e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 0f0h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0f0h]
        ; Exact mapped bytes E8 35 04 0A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        mov dword ptr [ebp - 28h], eax
        mov eax, dword ptr [ebp - 28h]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 C6 03 0A 00: call 0x587c0b60
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x03
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 0F 85 9B 00 00 00: jne 0x5872083e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 170h]
        ; Exact mapped bytes E8 AF 8A D9 FF: call 0x584b9260
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x8a
        __asm _emit 0xd9
        __asm _emit 0xff
        movzx edx, al
        cmp edx, 1
        ; Exact mapped bytes 75 1C: jne 0x587207d5
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 170h]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        ; Exact mapped bytes EB 69: jmp 0x5872083e
        __asm _emit 0xeb
        __asm _emit 0x69
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        mov dword ptr [ebp - 3ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18ch]
        mov dword ptr [ebp - 30h], eax
        mov ecx, 4
        shl ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 0f0h]
        ; Exact mapped bytes E8 4D 59 E2 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x59
        __asm _emit 0xe2
        __asm _emit 0xff
        shl eax, 2
        mov dword ptr [ebp - 34h], eax
        mov eax, dword ptr [ebp - 30h]
        add eax, dword ptr [ebp - 34h]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 38h], ecx
        push 1
        push 0
        mov edx, dword ptr [ebp - 38h]
        push edx
        mov ecx, dword ptr [ebp - 3ch]
        ; Exact mapped bytes E8 7C AC 00 00: call 0x5872b4a0
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 170h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx]
        mov ecx, dword ptr [edx + 170h]
        mov edx, dword ptr [eax + 4]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9A CE FF FF: call 0x5871d6e0
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xce
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
