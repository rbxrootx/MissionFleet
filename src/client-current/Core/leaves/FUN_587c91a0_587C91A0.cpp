// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C91A0 .. +0x25C bytes.
extern "C" __declspec(naked) void FUN_587c91a0_587C91A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 18h], 0
        mov dword ptr [ebp - 28h], 0
        push 0
        lea eax, [ebp - 2ch]
        push eax
        lea ecx, [ebp - 18h]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 44h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 7D 0B: jge 0x587c9201
        __asm _emit 0x7d
        __asm _emit 0x0b
        push 1
        ; Exact mapped bytes FF 15 40 42 89 58: call dword ptr [0x58894240]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x40
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB BD: jmp 0x587c91be
        __asm _emit 0xeb
        __asm _emit 0xbd
        cmp dword ptr [ebp - 18h], 0
        ; Exact mapped bytes 74 07: je 0x587c920e
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 EA 01 00 00: jmp 0x587c93f8
        __asm _emit 0xe9
        __asm _emit 0xea
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 50h], 0
        ; Exact mapped bytes 75 65: jne 0x587c927c
        __asm _emit 0x75
        __asm _emit 0x65
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 34h]
        sub edx, dword ptr [ecx + 38h]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 76 08: jbe 0x587c9230
        __asm _emit 0x76
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes EB 0F: jmp 0x587c923f
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        sub eax, dword ptr [edx + 38h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 8], ecx
        push 0
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        push eax
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x587c926b
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8D 01 00 00: jmp 0x587c93f8
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 38h]
        add edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 38h], edx
        ; Exact mapped bytes EB 18: jmp 0x587c9294
        __asm _emit 0xeb
        __asm _emit 0x18
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        push edx
        ; Exact mapped bytes E8 85 3B 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x3b
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 83 D6 00 00 00: jae 0x587c9376
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xd6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C8 07 DC FF: call 0x58589a70
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x07
        __asm _emit 0xdc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 84 A4 00 00 00: je 0x587c9354
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 83 96 00 00 00: jae 0x587c9352
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        sub eax, dword ptr [ebp - 8]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        sub eax, dword ptr [edx + 30h]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 76 08: jbe 0x587c92de
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 24h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x587c92ed
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 34h]
        sub ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 24h], ecx
        mov edx, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 14h], edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        push eax
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 0
        lea ecx, [ebp - 28h]
        push ecx
        mov edx, dword ptr [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp - 10h]
        add eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 3ch]
        push edx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x587c9335
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 C3 00 00 00: jmp 0x587c93f8
        __asm _emit 0xe9
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        add ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 38h], ecx
        mov eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes E9 5E FF FF FF: jmp 0x587c92b0
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 22: jmp 0x587c9376
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 A7 3A 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x3a
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 50h], 1
        push 0
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 4ch]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 50h], 0
        ; Exact mapped bytes 74 30: je 0x587c93d0
        __asm _emit 0x74
        __asm _emit 0x30
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 38h]
        cmp eax, dword ptr [edx + 34h]
        ; Exact mapped bytes 72 22: jb 0x587c93d0
        __asm _emit 0x72
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 48h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        ; Exact mapped bytes FF 15 50 41 89 58: call dword ptr [0x58894150]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        add ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 54h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 54h]
        xor edx, edx
        div dword ptr [ecx + 14h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 54h], edx
        mov eax, 1
        mov esp, ebp
        pop ebp
        ret
    }
}
