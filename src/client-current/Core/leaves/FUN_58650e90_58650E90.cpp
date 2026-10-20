// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58650E90 .. +0x176 bytes.
extern "C" __declspec(naked) void FUN_58650e90_58650E90() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 34h
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x58650eab
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 210h]
        ; Exact mapped bytes E8 37 88 ED FF: call 0x585296f0
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x88
        __asm _emit 0xed
        __asm _emit 0xff
        cmp dword ptr [ebp - 8], eax
        ; Exact mapped bytes 0F 8D 3E 01 00 00: jge 0x58651000
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x3e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 32 FD 16 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0xfd
        __asm _emit 0x16
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 0E 01 00 00: jne 0x58650ffb
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x0e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1dch]
        mov dword ptr [ebp - 14h], edx
        mov eax, 4
        shl eax, 0
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax + 1dch]
        ; Exact mapped bytes E8 97 48 E4 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x48
        __asm _emit 0xe4
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 10h], eax
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 65 A2 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa2
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        push 588af538h
        ; Exact mapped bytes E8 BA 10 ED FF: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x10
        __asm _emit 0xed
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 214h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 BC FC 16 00: call 0x587c0c10
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0xfc
        __asm _emit 0x16
        __asm _emit 0x00
        mov dword ptr [ebp - 20h], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        ; Exact mapped bytes FF 15 38 43 89 58: call dword ptr [0x58894338]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x38
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 3F: je 0x58650fa8
        __asm _emit 0x74
        __asm _emit 0x3f
        mov edx, 4
        imul eax, edx, 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax + 1dch]
        mov dword ptr [ebp - 28h], edx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + ecx + 1dch]
        ; Exact mapped bytes E8 1B 48 E4 FF: call 0x584957b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x48
        __asm _emit 0xe4
        __asm _emit 0xff
        sub eax, 1
        mov dword ptr [ebp - 24h], eax
        mov eax, dword ptr [ebp - 24h]
        push eax
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 E9 A1 16 00: call 0x587bb190
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xa1
        __asm _emit 0x16
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 2ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 B0 F9 16 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xf9
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 214h]
        mov dword ptr [ebp - 30h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 98 F9 16 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xf9
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 218h]
        mov dword ptr [ebp - 34h], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 34h]
        ; Exact mapped bytes E8 80 F9 16 00: call 0x587c0970
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xf9
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 F8 00 00 00: call 0x586510f0
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 05: jmp 0x58651000
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 A2 FE FF FF: jmp 0x58650ea2
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
