// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00500469 .. +0x193 bytes.
extern "C" __declspec(naked) void FUN_00500469_00500469() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        push 5eh
        push 5cc904h
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 DE AC FF FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xac
        __asm _emit 0xff
        __asm _emit 0xff
        push 118h
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 DE 8E FA FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x8e
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        push 104h
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 0ch
        ; Exact mapped bytes E8 05 0B 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x0b
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        mov edx, dword ptr [ebp + 8]
        add edx, 12h
        push edx
        ; Exact mapped bytes FF 15 68 23 5E 00: call dword ptr [0x5e2368]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 0F 84 31 01 00 00: je 0x5005f1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        lea eax, [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 E0 22 5E 00: call dword ptr [0x5e22e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5004e4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 12 01 00 00: jmp 0x5005f6
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 68 24 5E 00: call dword ptr [0x5e2468]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 0ch], eax
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 0ch], -1
        ; Exact mapped bytes 75 07: jne 0x500509
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 ED 00 00 00: jmp 0x5005f6
        __asm _emit 0xe9
        __asm _emit 0xed
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 0ch
        ; Exact mapped bytes E8 78 0A 03 00: call 0x530f8c
        __asm _emit 0xe8
        __asm _emit 0x78
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x500521
        __asm _emit 0x74
        __asm _emit 0x09
        mov ecx, dword ptr [ebp + 8]
        mov byte ptr [ecx + 10h], 0
        ; Exact mapped bytes EB 49: jmp 0x50056a
        __asm _emit 0xeb
        __asm _emit 0x49
        mov ecx, dword ptr [ebp - 2ch]
        add ecx, 0ch
        ; Exact mapped bytes E8 7E 0A 03 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0x0a
        __asm _emit 0x03
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 EC 22 5E 00: call dword ptr [0x5e22ec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0x22
        __asm _emit 0x5e
        __asm _emit 0x00
        mov dword ptr [ebp - 1ch], eax
        cmp dword ptr [ebp - 1ch], -1
        ; Exact mapped bytes 75 09: jne 0x500545
        __asm _emit 0x75
        __asm _emit 0x09
        mov edx, dword ptr [ebp + 8]
        mov byte ptr [edx + 10h], 0
        ; Exact mapped bytes EB 25: jmp 0x50056a
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [ebp + 8]
        mov cl, byte ptr [ebp - 1ch]
        mov byte ptr [eax + 10h], cl
        mov edx, dword ptr [ebp - 1ch]
        and dl, 0
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x50056a
        __asm _emit 0x74
        __asm _emit 0x12
        push 5cc97ch
        push 5cc9c8h
        ; Exact mapped bytes E8 AE F6 FC FF: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf6
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 8
        push -1
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 B7 ED FC FF: call 0x4cf32f
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 2D 11 03 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        push -1
        lea ecx, [ebp - 10h]
        push ecx
        lea ecx, [ebp - 24h]
        ; Exact mapped bytes E8 A0 ED FC FF: call 0x4cf32f
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 13 11 03 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        push -1
        lea edx, [ebp - 18h]
        push edx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 86 ED FC FF: call 0x4cf32f
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0xed
        __asm _emit 0xfc
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        ; Exact mapped bytes E8 F9 10 03 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 23 11 03 00: call 0x5316e0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 0F: jne 0x5005d0
        __asm _emit 0x75
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        add eax, 4
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 DE 10 03 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 05 11 03 00: call 0x5316e0
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x11
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 12: jne 0x5005f1
        __asm _emit 0x75
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        add ecx, 4
        push ecx
        mov ecx, dword ptr [ebp + 8]
        add ecx, 8
        ; Exact mapped bytes E8 BD 10 03 00: call 0x5316ae
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x10
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
