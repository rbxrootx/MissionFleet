// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883E61B .. +0x15F bytes.
extern "C" __declspec(naked) void FUN_5883e61b_5883E61B() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 1018h
        ; Exact mapped bytes E8 C8 34 FF FF: call 0x58831af0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        push edi
        mov edi, ecx
        or dword ptr [esi], 0ffffffffh
        test eax, eax
        ; Exact mapped bytes 0F 84 13 01 00 00: je 0x5883e75b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x13
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp byte ptr [eax], 0
        ; Exact mapped bytes 0F 84 0A 01 00 00: je 0x5883e75b
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        push 80h
        push 3
        push 0
        push 3
        push 80000000h
        push eax
        ; Exact mapped bytes FF 15 00 42 89 58: call dword ptr [0x58894200]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        mov ebx, eax
        mov dword ptr [ebp - 1018h], ebx
        cmp ebx, -1
        ; Exact mapped bytes 75 0F: jne 0x5883e686
        __asm _emit 0x75
        __asm _emit 0x0f
        mov dword ptr [edi + 400h], 2
        ; Exact mapped bytes E9 DF 00 00 00: jmp 0x5883e765
        __asm _emit 0xe9
        __asm _emit 0xdf
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        lea eax, [ebp - 100ch]
        push eax
        push 1000h
        lea eax, [ebp - 1004h]
        push eax
        push ebx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x5883e744
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 100ch]
        test ecx, ecx
        ; Exact mapped bytes 0F 84 88 00 00 00: je 0x5883e740
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x88
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        and dword ptr [ebp - 1008h], 0
        lea eax, [ebp - 1004h]
        mov dword ptr [ebp - 1014h], eax
        add eax, ecx
        lea ecx, [ebp - 1004h]
        mov edx, eax
        sub edx, ecx
        mov dword ptr [ebp - 1010h], ecx
        xor ecx, ecx
        cmp dword ptr [ebp - 1010h], eax
        cmova edx, ecx
        test edx, edx
        ; Exact mapped bytes 74 30: je 0x5883e71c
        __asm _emit 0x74
        __asm _emit 0x30
        mov ebx, dword ptr [ebp - 1014h]
        movzx eax, byte ptr [ebx]
        movzx ecx, byte ptr [esi]
        xor ecx, eax
        mov eax, dword ptr [esi]
        shr eax, 8
        xor eax, dword ptr [edi + ecx*4]
        inc ebx
        mov dword ptr [esi], eax
        mov eax, dword ptr [ebp - 1008h]
        inc eax
        mov dword ptr [ebp - 1008h], eax
        cmp eax, edx
        ; Exact mapped bytes 72 DC: jb 0x5883e6f2
        __asm _emit 0x72
        __asm _emit 0xdc
        mov ebx, dword ptr [ebp - 1018h]
        push 0
        lea eax, [ebp - 100ch]
        push eax
        push 1000h
        lea eax, [ebp - 1004h]
        push eax
        push ebx
        ; Exact mapped bytes FF 15 FC 42 89 58: call dword ptr [0x588942fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 0F 85 6A FF FF FF: jne 0x5883e6aa
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x6a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 0A: jne 0x5883e74e
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [edi + 400h], 3
        push ebx
        ; Exact mapped bytes FF 15 F8 42 89 58: call dword ptr [0x588942f8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        not dword ptr [esi]
        mov al, 1
        ; Exact mapped bytes EB 0C: jmp 0x5883e767
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov dword ptr [edi + 400h], 1
        xor al, al
        mov ecx, dword ptr [ebp - 4]
        pop edi
        pop esi
        xor ecx, ebp
        pop ebx
        ; Exact mapped bytes E8 DC 28 FF FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
