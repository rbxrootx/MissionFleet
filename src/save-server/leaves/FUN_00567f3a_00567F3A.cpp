// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00567F3A .. +0x1A7 bytes.
extern "C" __declspec(naked) void FUN_00567f3a_00567F3A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 10h], 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 8F 5B FD FF: call 0x53dafa
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x5b
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        push 67af24h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 CC 08 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 9E 0B FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x0b
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        push 67af38h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B1 08 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C2 0A FC FF: call 0x528a63
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov al, byte ptr [edx + 42h]
        push eax
        push 67af4ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 96 08 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 CD 09 FC FF: call 0x528989
        __asm _emit 0xe8
        __asm _emit 0xcd
        __asm _emit 0x09
        __asm _emit 0xfc
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], 0
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        add edx, 24h
        push edx
        ; Exact mapped bytes FF 15 E0 C2 68 00: call dword ptr [0x68c2e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 6C: jne 0x568044
        __asm _emit 0x75
        __asm _emit 0x6c
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 09: jne 0x567fed
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 0
        ; Exact mapped bytes EB 35: jmp 0x568022
        __asm _emit 0xeb
        __asm _emit 0x35
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 95 DF EF FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xdf
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 20h], esp
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        ; Exact mapped bytes E8 B1 0D EF FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x0d
        __asm _emit 0xef
        __asm _emit 0xff
        mov dword ptr [ebp - 1ch], eax
        mov eax, dword ptr [ebp - 1ch]
        push eax
        push 67af60h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 18 08 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x18
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 11 08 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 34h]
        push eax
        push 67af6ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F3 07 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 C5 0A FC FF: call 0x528b24
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 38h]
        push edx
        push 67af80h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D8 07 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 1D 0A FC FF: call 0x528a97
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0xfc
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        push 67af98h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 BD 07 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 B6 07 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 18h]
        mov al, byte ptr [edx + 40h]
        push eax
        push 67afach
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A2 07 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 D9 08 FC FF: call 0x528989
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov dl, byte ptr [ecx + 41h]
        push edx
        push 67afc4h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 07 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 BE 08 FC FF: call 0x528989
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x08
        __asm _emit 0xfc
        __asm _emit 0xff
        push 67afd8h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 73 07 FC FF: call 0x52884b
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x07
        __asm _emit 0xfc
        __asm _emit 0xff
        lea esp, [ebp - 20h]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
