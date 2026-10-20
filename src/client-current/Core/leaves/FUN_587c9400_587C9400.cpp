// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C9400 .. +0x2AF bytes.
extern "C" __declspec(naked) void FUN_587c9400_587C9400() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 3ch], -1
        ; Exact mapped bytes 75 07: jne 0x587c9419
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 90 02 00 00: jmp 0x587c96a9
        __asm _emit 0xe9
        __asm _emit 0x90
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 18h], 0
        ; Exact mapped bytes 75 07: jne 0x587c9429
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 80 02 00 00: jmp 0x587c96a9
        __asm _emit 0xe9
        __asm _emit 0x80
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 20h], eax
        lea ecx, [ebp - 24h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [eax]
        push edx
        mov ecx, dword ptr [eax + 24h]
        ; Exact mapped bytes FF D1: call ecx
        __asm _emit 0xff
        __asm _emit 0xd1
        test eax, eax
        ; Exact mapped bytes 7C 1D: jl 0x587c946b
        __asm _emit 0x7c
        __asm _emit 0x1d
        mov edx, dword ptr [ebp - 24h]
        and edx, 1
        ; Exact mapped bytes 74 15: je 0x587c946b
        __asm _emit 0x74
        __asm _emit 0x15
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 18h]
        mov ecx, dword ptr [ecx]
        push eax
        mov edx, dword ptr [ecx + 48h]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        nop
        mov dword ptr [ebp - 10h], 0
        mov dword ptr [ebp - 0ch], 0
        push 0
        push 0
        push 0
        lea eax, [ebp - 0ch]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 14h]
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 2ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        test eax, eax
        ; Exact mapped bytes 7D 07: jge 0x587c94af
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 FA 01 00 00: jmp 0x587c96a9
        __asm _emit 0xe9
        __asm _emit 0xfa
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 34h]
        sub eax, dword ptr [edx + 30h]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 76 08: jbe 0x587c94c8
        __asm _emit 0x76
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 0F: jmp 0x587c94d7
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 34h]
        sub ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 8], edx
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
        mov edx, dword ptr [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 10h]
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
        ; Exact mapped bytes 75 07: jne 0x587c951c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 8D 01 00 00: jmp 0x587c96a9
        __asm _emit 0xe9
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        add ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 38h], ecx
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 83 C5 00 00 00: jae 0x587c95fc
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 1D: jne 0x587c955a
        __asm _emit 0x75
        __asm _emit 0x1d
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 8]
        push ecx
        push 0
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 8]
        push edx
        ; Exact mapped bytes E8 BE 38 08 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0x38
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes E9 A2 00 00 00: jmp 0x587c95fc
        __asm _emit 0xe9
        __asm _emit 0xa2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 0F 83 96 00 00 00: jae 0x587c95fc
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x96
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        sub ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 1ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 34h]
        sub ecx, dword ptr [eax + 30h]
        cmp ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes 76 08: jbe 0x587c9588
        __asm _emit 0x76
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 1ch]
        mov dword ptr [ebp - 20h], edx
        ; Exact mapped bytes EB 0F: jmp 0x587c9597
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 34h]
        sub edx, dword ptr [ecx + 30h]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 20h]
        mov dword ptr [ebp - 14h], eax
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 3ch]
        push ecx
        ; Exact mapped bytes FF 15 44 42 89 58: call dword ptr [0x58894244]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x44
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        push 0
        lea edx, [ebp - 28h]
        push edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 75 07: jne 0x587c95df
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 CA 00 00 00: jmp 0x587c96a9
        __asm _emit 0xe9
        __asm _emit 0xca
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 30h]
        add edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 38h], edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes E9 5E FF FF FF: jmp 0x587c955a
        __asm _emit 0xe9
        __asm _emit 0x5e
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 4ch]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 24h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 34h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        push 1
        push 0
        push 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 18h]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        mov edx, dword ptr [edx]
        push ecx
        mov eax, dword ptr [edx + 30h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 28h], 0
        ; Exact mapped bytes 74 1D: je 0x587c9680
        __asm _emit 0x74
        __asm _emit 0x1d
        push -1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 28 41 89 58: call dword ptr [0x58894128]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 28h]
        push edx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov eax, dword ptr [ebp - 4]
        add eax, 24h
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 587c96b0h
        push 0
        push 0
        ; Exact mapped bytes E8 D4 E8 08 00: call 0x58857f6f
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 18h
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], eax
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
