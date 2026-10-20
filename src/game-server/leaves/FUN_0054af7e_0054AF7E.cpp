// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054AF7E .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_0054af7e_0054AF7E() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x54af91
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x54b044
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x54afa8
        __asm _emit 0x75
        __asm _emit 0x11
        push 5ch
        push 5ccafch
        ; Exact mapped bytes E8 5D 9A FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54afa8
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x54af91
        __asm _emit 0x75
        __asm _emit 0xe3
        push 20h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 3F 37 FA FF: call 0x4ee6fc
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        push 26h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 40h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 20h
        push ecx
        ; Exact mapped bytes E8 4E E0 F5 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        push 20h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 66h
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 46h
        push eax
        ; Exact mapped bytes E8 12 37 FA FF: call 0x4ee6fc
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        push 2eh
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 0a6h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 66h
        push edx
        ; Exact mapped bytes E8 1E E0 F5 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0xe0
        __asm _emit 0xf5
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
        ; Exact mapped bytes 74 26: je 0x54b038
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
        ; Exact mapped bytes E8 EB DF F5 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xdf
        __asm _emit 0xf5
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
