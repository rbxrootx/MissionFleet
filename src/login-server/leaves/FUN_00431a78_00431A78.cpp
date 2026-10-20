// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00431A78 .. +0x10F bytes.
extern "C" __declspec(naked) void FUN_00431a78_00431A78() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        push ebx
        push esi
        push edi
        cmp eax, -2
        mov edi, ecx
        ; Exact mapped bytes 75 21: jne 0x431aa9
        __asm _emit 0x75
        __asm _emit 0x21
        ; Exact mapped bytes E8 26 42 00 00: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x42
        __asm _emit 0x00
        __asm _emit 0x00
        push dword ptr [ebp + 14h]
        mov eax, dword ptr [eax + 1038h]
        mov ecx, eax
        push dword ptr [ebp + 10h]
        mov edx, dword ptr [eax]
        push dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        ; Exact mapped bytes E9 D7 00 00 00: jmp 0x431b80
        __asm _emit 0xe9
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, -3
        ; Exact mapped bytes 75 7B: jne 0x431b29
        __asm _emit 0x75
        __asm _emit 0x7b
        mov ebx, dword ptr [ebp + 10h]
        and dword ptr [ebp + 0ch], 0
        mov ecx, edi
        mov eax, dword ptr [ebx + 30h]
        mov dword ptr [ebp + 10h], eax
        mov eax, dword ptr [edi]
        ; Exact mapped bytes FF 50 2C: call dword ptr [eax + 0x2c]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x2c
        mov edi, eax
        test edi, edi
        ; Exact mapped bytes 74 5C: je 0x431b24
        __asm _emit 0x74
        __asm _emit 0x5c
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 56: jne 0x431b24
        __asm _emit 0x75
        __asm _emit 0x56
        mov esi, dword ptr [edi + 4]
        mov eax, dword ptr [esi + 4]
        test eax, eax
        ; Exact mapped bytes 74 48: je 0x431b20
        __asm _emit 0x74
        __asm _emit 0x48
        cmp dword ptr [esi + 8], 0
        ; Exact mapped bytes 74 42: je 0x431b20
        __asm _emit 0x74
        __asm _emit 0x42
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 3C: jne 0x431b20
        __asm _emit 0x75
        __asm _emit 0x3c
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 32: jne 0x431b1b
        __asm _emit 0x75
        __asm _emit 0x32
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 07: jne 0x431af6
        __asm _emit 0x75
        __asm _emit 0x07
        cmp dword ptr [esi], 0
        ; Exact mapped bytes 74 1A: je 0x431b0e
        __asm _emit 0x74
        __asm _emit 0x1a
        ; Exact mapped bytes EB 25: jmp 0x431b1b
        __asm _emit 0xeb
        __asm _emit 0x25
        mov eax, dword ptr [esi]
        test eax, eax
        ; Exact mapped bytes 74 1F: je 0x431b1b
        __asm _emit 0x74
        __asm _emit 0x1f
        push 10h
        push eax
        push dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 89 F5 FE FF: call 0x421090
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xf5
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 0D: jne 0x431b1b
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [esi + 8]
        mov dword ptr [ebp + 0ch], 1
        mov dword ptr [ebx + 4], eax
        add esi, 0ch
        ; Exact mapped bytes EB B1: jmp 0x431ad1
        __asm _emit 0xeb
        __asm _emit 0xb1
        mov edi, dword ptr [edi]
        ; Exact mapped bytes EB A0: jmp 0x431ac4
        __asm _emit 0xeb
        __asm _emit 0xa0
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes EB 57: jmp 0x431b80
        __asm _emit 0xeb
        __asm _emit 0x57
        cmp eax, -1
        ; Exact mapped bytes 74 0D: je 0x431b3b
        __asm _emit 0x74
        __asm _emit 0x0d
        mov ebx, eax
        movzx eax, ax
        shr ebx, 10h
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 75 05: jne 0x431b40
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebx, 111h
        mov eax, dword ptr [edi]
        mov ecx, edi
        ; Exact mapped bytes FF 50 28: call dword ptr [eax + 0x28]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x28
        mov esi, eax
        test esi, esi
        ; Exact mapped bytes 74 31: je 0x431b7e
        __asm _emit 0x74
        __asm _emit 0x31
        push dword ptr [ebp + 8]
        push dword ptr [ebp + 0ch]
        push ebx
        push dword ptr [esi + 4]
        ; Exact mapped bytes E8 3B E5 FF FF: call 0x430097
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x431b64
        __asm _emit 0x75
        __asm _emit 0x04
        mov esi, dword ptr [esi]
        ; Exact mapped bytes EB E5: jmp 0x431b49
        __asm _emit 0xeb
        __asm _emit 0xe5
        push dword ptr [ebp + 14h]
        push dword ptr [eax + 10h]
        push dword ptr [ebp + 10h]
        push dword ptr [eax + 14h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        push edi
        ; Exact mapped bytes E8 F5 FD FF FF: call 0x431971
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x431b80
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
