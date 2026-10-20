// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584FF400 .. +0x1CC bytes.
extern "C" __declspec(naked) void FUN_584ff400_584FF400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 38h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        sub ecx, 190h
        mov dword ptr [ebp - 38h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        neg eax
        add eax, 12ch
        mov dword ptr [ebp - 34h], eax
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1d4h], 0
        ; Exact mapped bytes 74 36: je 0x584ff46a
        __asm _emit 0x74
        __asm _emit 0x36
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 25ch], 1
        ; Exact mapped bytes 74 2A: je 0x584ff46a
        __asm _emit 0x74
        __asm _emit 0x2a
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 24: jne 0x584ff46a
        __asm _emit 0x75
        __asm _emit 0x24
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1d4h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes 8B 15 94 20 96 58: mov edx, dword ptr [0x58962094]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0x20
        __asm _emit 0x96
        __asm _emit 0x58
        push edx
        mov eax, dword ptr [ebp - 34h]
        push eax
        mov ecx, dword ptr [ebp - 38h]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 57 E7 06 00: call 0x5856dbc0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe7
        __asm _emit 0x06
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 25ch], 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 220h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 03 6B F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x6b
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 238h]
        mov dword ptr [ebp - 10h], eax
        push 0
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 ED 6A F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1dch]
        mov dword ptr [ebp - 14h], edx
        push 0
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 27 6A F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 208h]
        mov dword ptr [ebp - 18h], ecx
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 11 6A F8 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 210h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 41h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 2ch
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 29 61 2B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x61
        __asm _emit 0x2b
        __asm _emit 0x00
        nop
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0b4h]
        and eax, 10000000h
        ; Exact mapped bytes 74 29: je 0x584ff531
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 66 8B 51 5E: mov dx, word ptr [ecx + 0x5e]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x5e
        ; Exact mapped bytes 66 83 E2 0F: and dx, 0xf
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xe2
        __asm _emit 0x0f
        movzx eax, dx
        test eax, eax
        ; Exact mapped bytes 74 17: je 0x584ff531
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 210h]
        mov dword ptr [ebp - 20h], edx
        push 0fh
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 60 6A F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 214h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        add eax, 41h
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 18h
        push edx
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 C7 60 2B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x60
        __asm _emit 0x2b
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 214h]
        mov dword ptr [ebp - 28h], ecx
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 21 6A F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x6a
        __asm _emit 0xf8
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 2ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        add edx, 41h
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 89 60 2B 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x60
        __asm _emit 0x2b
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 20ch]
        mov dword ptr [ebp - 30h], eax
        push 0fh
        mov ecx, dword ptr [ebp - 30h]
        ; Exact mapped bytes E8 E3 69 F8 FF: call 0x58485f90
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x69
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 29 68 F8 FF: call 0x58485de0
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x68
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 260h]
        ; Exact mapped bytes E8 DB 50 FC FF: call 0x584c46a0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x50
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
