// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58799770 .. +0xC4 bytes.
extern "C" __declspec(naked) void FUN_58799770_58799770() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58891828h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        sub esp, 0b4h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 10h], eax
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 8]
        and eax, 0ffh
        cmp eax, 5
        ; Exact mapped bytes 77 4B: ja 0x587997f3
        __asm _emit 0x77
        __asm _emit 0x4b
        ; Exact mapped bytes FF 24 85 34 98 79 58: jmp dword ptr [eax*4 + 0x58799834]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0x34
        __asm _emit 0x98
        __asm _emit 0x79
        __asm _emit 0x58
        mov al, byte ptr [ecx]
        ; Exact mapped bytes EB 0D: jmp 0x587997c0
        __asm _emit 0xeb
        __asm _emit 0x0d
        xor al, al
        ; Exact mapped bytes EB 09: jmp 0x587997c0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ecx]
        or eax, dword ptr [ecx + 4]
        ; Exact mapped bytes 74 F5: je 0x587997b3
        __asm _emit 0x74
        __asm _emit 0xf5
        mov al, 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov ecx, dword ptr [ebp - 10h]
        xor ecx, ebp
        ; Exact mapped bytes E8 7B 78 09 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        sub esp, 8
        ; Exact mapped bytes DD 1C 24: fstp qword ptr [esp]
        __asm _emit 0xdd
        __asm _emit 0x1c
        __asm _emit 0x24
        ; Exact mapped bytes E8 BA 89 0C 00: call 0x588621a0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x89
        __asm _emit 0x0c
        __asm _emit 0x00
        cwde
        add esp, 8
        test eax, eax
        ; Exact mapped bytes 74 C5: je 0x587997b3
        __asm _emit 0x74
        __asm _emit 0xc5
        cmp eax, 2
        ; Exact mapped bytes EB C9: jmp 0x587997bc
        __asm _emit 0xeb
        __asm _emit 0xc9
        push 1
        lea ecx, [ebp - 0c0h]
        ; Exact mapped bytes E8 00 3C D8 FF: call 0x5851d400
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x3c
        __asm _emit 0xd8
        __asm _emit 0xff
        lea eax, [ebp - 0c0h]
        mov dword ptr [ebp - 4], 0
        push 588b6f74h
        push eax
        ; Exact mapped bytes E8 D8 AD D6 FF: call 0x585045f0
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xad
        __asm _emit 0xd6
        __asm _emit 0xff
        add esp, 8
        lea eax, [ebp - 28h]
        lea ecx, [ebp - 0c0h]
        push eax
        ; Exact mapped bytes E8 D6 49 D8 FF: call 0x5851e200
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x49
        __asm _emit 0xd8
        __asm _emit 0xff
        push eax
        mov byte ptr [ebp - 4], 1
        ; Exact mapped bytes E8 FC 14 00 00: call 0x5879ad30
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x14
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
