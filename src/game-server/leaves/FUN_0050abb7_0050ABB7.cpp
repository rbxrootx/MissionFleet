// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050ABB7 .. +0x1BE bytes.
extern "C" __declspec(naked) void FUN_0050abb7_0050ABB7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 24h], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 77 DF FF FF: call 0x508b43
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ecx + 48h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        push 5cb5b0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2B 9F 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 7A 5F FF FF: call 0x500b70
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 4ch]
        mov edx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        push 5cb5c0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 01 9F 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x9f
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 50 5F FF FF: call 0x500b70
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 54h]
        mov ecx, dword ptr [edx + 58h]
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 18h]
        push eax
        push 5cb5d0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 9E 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 26 5F FF FF: call 0x500b70
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x5f
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [ecx + 60h]
        mov dword ptr [ebp - 20h], edx
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        push ecx
        mov edx, dword ptr [ebp - 20h]
        push edx
        push 5cb5e0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AD 9E 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 FC 5E FF FF: call 0x500b70
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 24h]
        mov ecx, dword ptr [eax + 64h]
        push ecx
        push 5cb5f0h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 93 9E 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D8 A0 02 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 24h]
        mov eax, dword ptr [edx + 68h]
        push eax
        push 5cb600h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 78 9E 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 BD A0 02 00: call 0x534d67
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        push 5cb614h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 9E 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 24h]
        mov edx, dword ptr [ecx + 40h]
        mov dword ptr [ebp - 28h], edx
        mov eax, dword ptr [ebp - 28h]
        add eax, 1
        mov dword ptr [ebp - 28h], eax
        cmp dword ptr [ebp - 28h], 7
        ; Exact mapped bytes 0F 87 82 00 00 00: ja 0x50ad55
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x82
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes FF 24 8D 75 AD 50 00: jmp dword ptr [ecx*4 + 0x50ad75]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x8d
        __asm _emit 0x75
        __asm _emit 0xad
        __asm _emit 0x50
        __asm _emit 0x00
        push 5cb624h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 31 9E 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 76: jmp 0x50ad62
        __asm _emit 0xeb
        __asm _emit 0x76
        push 5cb62ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 22 9E 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 67: jmp 0x50ad62
        __asm _emit 0xeb
        __asm _emit 0x67
        push 5cb63ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 13 9E 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 58: jmp 0x50ad62
        __asm _emit 0xeb
        __asm _emit 0x58
        push 5cb644h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 04 9E 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 49: jmp 0x50ad62
        __asm _emit 0xeb
        __asm _emit 0x49
        push 5cb650h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F5 9D 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 3A: jmp 0x50ad62
        __asm _emit 0xeb
        __asm _emit 0x3a
        push 5cb65ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 9D 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 2B: jmp 0x50ad62
        __asm _emit 0xeb
        __asm _emit 0x2b
        push 5cb66ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 D7 9D 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x50ad62
        __asm _emit 0xeb
        __asm _emit 0x1c
        push 5cb67ch
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C8 9D 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 0D: jmp 0x50ad62
        __asm _emit 0xeb
        __asm _emit 0x0d
        push 5cb688h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B9 9D 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        push 5cb694h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 AC 9D 02 00: call 0x534b1b
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x9d
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
