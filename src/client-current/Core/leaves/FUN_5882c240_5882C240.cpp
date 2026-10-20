// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882C240 .. +0xF5 bytes.
extern "C" __declspec(naked) void FUN_5882c240_5882C240() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 09: je 0x5882c258
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 30h], 0
        ; Exact mapped bytes 74 07: je 0x5882c25f
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 D0 00 00 00: jmp 0x5882c32f
        __asm _emit 0xe9
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 2ch], edx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], -1
        ; Exact mapped bytes 75 18: jne 0x5882c289
        __asm _emit 0x75
        __asm _emit 0x18
        push 3dh
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C3 00 00 00: call 0x5882c340
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 07: je 0x5882c289
        __asm _emit 0x74
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 A6 00 00 00: jmp 0x5882c32f
        __asm _emit 0xe9
        __asm _emit 0xa6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 10h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AD 09 00 00: call 0x5882cc40
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 07: jne 0x5882c29e
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 91 00 00 00: jmp 0x5882c32f
        __asm _emit 0xe9
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 8], 40000h
        push 0ffffh
        push 4
        lea ecx, [ebp - 8]
        push ecx
        push 1002h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 09 00 00: call 0x5882cca0
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 23: jne 0x5882c2e4
        __asm _emit 0x75
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 58 45 89 58: call dword ptr [0x58894558]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x58
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 2ch]
        ; Exact mapped bytes E8 90 13 00 00: call 0x5882d670
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 4B: jmp 0x5882c32f
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 2ch]
        ; Exact mapped bytes E8 06 FC FF FF: call 0x5882bf00
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 54 45 89 58: call dword ptr [0x58894554]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x54
        __asm _emit 0x45
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 75 16: jne 0x5882c32a
        __asm _emit 0x75
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 2ch]
        ; Exact mapped bytes E8 4A 13 00 00: call 0x5882d670
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x13
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 05: jmp 0x5882c32f
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
