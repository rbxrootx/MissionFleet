// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054629E .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_0054629e_0054629E() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x5462b1
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x546364
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x5462c8
        __asm _emit 0x75
        __asm _emit 0x11
        push 5ch
        push 6792d4h
        ; Exact mapped bytes E8 7D 2A FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x2a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5462c8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x5462b1
        __asm _emit 0x75
        __asm _emit 0xe3
        push 20h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 BF 74 F8 FF: call 0x4cd79c
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        push 26h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes E8 0E F0 F1 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0xf0
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 0ch
        push 20h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 66h
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 46h
        push eax
        ; Exact mapped bytes E8 92 74 F8 FF: call 0x4cd79c
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0x74
        __asm _emit 0xf8
        __asm _emit 0xff
        push 2eh
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0a6h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 66h
        push edx
        ; Exact mapped bytes E8 DE EF F1 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0xef
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 46: mov cx, word ptr [eax + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x46
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x546358
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 46: mov ax, word ptr [edx + 0x46]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x46
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0d4h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 94h
        push edx
        ; Exact mapped bytes E8 AB EF F1 FF: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xef
        __asm _emit 0xf1
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 40 24 94 00: mov word ptr [eax + 0x24], 0x94
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x24
        __asm _emit 0x94
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
