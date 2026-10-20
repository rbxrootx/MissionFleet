// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588788D0 .. +0x115 bytes.
extern "C" __declspec(naked) void FUN_588788d0_588788D0() {
    __asm {
        mov edi, edi
        push ebx
        mov ebx, esp
        sub esp, 8
        and esp, 0fffffff0h
        add esp, 4
        push ebp
        mov ebp, dword ptr [ebx + 4]
        mov dword ptr [esp + 4], ebp
        mov ebp, esp
        sub esp, 88h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebx + 10h]
        push esi
        mov esi, dword ptr [ebx + 0ch]
        push edi
        movzx ecx, word ptr [eax]
        mov dword ptr [ebp - 84h], ecx
        mov eax, dword ptr [esi]
        dec eax
        cmp eax, 7
        ; Exact mapped bytes 0F 87 85 00 00 00: ja 0x5887899a
        __asm _emit 0x0f
        __asm _emit 0x87
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes FF 24 85 E8 89 87 58: jmp dword ptr [eax*4 + 0x588789e8]
        __asm _emit 0xff
        __asm _emit 0x24
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x87
        __asm _emit 0x58
        mov edi, 8
        ; Exact mapped bytes EB 1A: jmp 0x5887893d
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov edi, 11h
        ; Exact mapped bytes EB 13: jmp 0x5887893d
        __asm _emit 0xeb
        __asm _emit 0x13
        mov edi, 12h
        ; Exact mapped bytes EB 0C: jmp 0x5887893d
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edi, 4
        ; Exact mapped bytes EB 05: jmp 0x5887893d
        __asm _emit 0xeb
        __asm _emit 0x05
        mov edi, 10h
        push ecx
        lea eax, [esi + 18h]
        push eax
        push edi
        ; Exact mapped bytes E8 C8 BF FE FF: call 0x58864910
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xbf
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 4B: jne 0x5887899a
        __asm _emit 0x75
        __asm _emit 0x4b
        mov ecx, dword ptr [ebx + 8]
        cmp ecx, 10h
        ; Exact mapped bytes 74 10: je 0x58878967
        __asm _emit 0x74
        __asm _emit 0x10
        cmp ecx, 16h
        ; Exact mapped bytes 74 0B: je 0x58878967
        __asm _emit 0x74
        __asm _emit 0x0b
        cmp ecx, 1dh
        ; Exact mapped bytes 74 06: je 0x58878967
        __asm _emit 0x74
        __asm _emit 0x06
        and dword ptr [ebp - 40h], 0fffffffeh
        ; Exact mapped bytes EB 16: jmp 0x5887897d
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 40h]
        ; Exact mapped bytes F2 0F 10 46 10: movsd xmm0, qword ptr [esi + 0x10]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x46
        __asm _emit 0x10
        and eax, 0ffffffe3h
        or eax, 3
        ; Exact mapped bytes F2 0F 11 45 B0: movsd qword ptr [ebp - 0x50], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xb0
        mov dword ptr [ebp - 40h], eax
        lea eax, [esi + 18h]
        push eax
        lea eax, [esi + 8]
        push eax
        push ecx
        push edi
        lea eax, [ebp - 84h]
        push eax
        lea eax, [ebp - 80h]
        push eax
        ; Exact mapped bytes E8 A9 C2 FE FF: call 0x58864c40
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xc2
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 18h
        push 0ffffh
        push dword ptr [ebp - 84h]
        ; Exact mapped bytes E8 86 77 FF FF: call 0x58870130
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x77
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        cmp dword ptr [esi], 8
        ; Exact mapped bytes 74 16: je 0x588789c8
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 F9 B4 FF FF: call 0x58873eb0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xb4
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 0D: je 0x588789c8
        __asm _emit 0x74
        __asm _emit 0x0d
        push esi
        ; Exact mapped bytes E8 1F B5 FF FF: call 0x58873ee0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xb5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x588789d2
        __asm _emit 0x75
        __asm _emit 0x0a
        push dword ptr [esi]
        ; Exact mapped bytes E8 D1 C5 FE FF: call 0x58864fa0
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xc5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 4]
        pop edi
        xor ecx, ebp
        pop esi
        ; Exact mapped bytes E8 72 86 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0x86
        __asm _emit 0xfb
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        mov esp, ebx
        pop ebx
        ret
    }
}
