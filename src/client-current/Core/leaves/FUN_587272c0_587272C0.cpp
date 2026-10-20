// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587272C0 .. +0x1CD bytes.
extern "C" __declspec(naked) void FUN_587272c0_587272C0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 3d4h]
        ; Exact mapped bytes E8 0E 24 E0 FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x24
        __asm _emit 0xe0
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 2C: jne 0x58727312
        __asm _emit 0x75
        __asm _emit 0x2c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 9F E5 D6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xe5
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 14: jne 0x5872730d
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 0ch], eax
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D4 EB D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xeb
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes E9 75 01 00 00: jmp 0x58727487
        __asm _emit 0xe9
        __asm _emit 0x75
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        ; Exact mapped bytes E8 47 99 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        ; Exact mapped bytes E8 7E 98 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8F 16 01 00 00: jg 0x58727460
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0x16
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        ; Exact mapped bytes E8 0F 99 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x99
        __asm _emit 0x09
        __asm _emit 0x00
        mov esi, eax
        add esi, 7
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx + 3d4h]
        ; Exact mapped bytes E8 43 98 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8E DB 00 00 00: jle 0x58727460
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 EE D6 D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xd6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 8B 0D 90 20 96 58: mov ecx, dword ptr [0x58962090]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x90
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 16 4A 09 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x4a
        __asm _emit 0x09
        __asm _emit 0x00
        push 24h
        ; Exact mapped bytes 8B 0D EC 06 96 58: mov ecx, dword ptr [0x589606ec]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xec
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 C9 D6 D5 FF: call 0x58484a80
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xd6
        __asm _emit 0xd5
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 18h], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 E8: call dword ptr [ebp - 0x18]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        mov dword ptr [ebp - 20h], ecx
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 C3 4C D6 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x4c
        __asm _emit 0xd6
        __asm _emit 0xff
        mov esi, eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 BA 97 09 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x97
        __asm _emit 0x09
        __asm _emit 0x00
        mov edi, eax
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 3d4h]
        ; Exact mapped bytes E8 51 98 09 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x98
        __asm _emit 0x09
        __asm _emit 0x00
        sub edi, eax
        imul edx, edi, 0dh
        lea eax, [esi + edx - 2]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 F9 E2 08 00: call 0x587b5730
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xe2
        __asm _emit 0x08
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 74h]
        ; Exact mapped bytes E8 4D E4 D6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xe4
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5872745e
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 74h]
        mov dword ptr [ebp - 24h], edx
        push 1
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 83 EA D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xea
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 27: jmp 0x58727487
        __asm _emit 0xeb
        __asm _emit 0x27
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 25 E4 D6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xe4
        __asm _emit 0xd6
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 14: jne 0x58727487
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 74h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 5A EA D5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xea
        __asm _emit 0xd5
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
