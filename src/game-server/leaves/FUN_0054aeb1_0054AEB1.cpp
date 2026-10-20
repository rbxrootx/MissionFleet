// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054AEB1 .. +0xCD bytes.
extern "C" __declspec(naked) void FUN_0054aeb1_0054AEB1() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 07: jne 0x54aec4
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 B3 00 00 00: jmp 0x54af77
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 11: jne 0x54aedb
        __asm _emit 0x75
        __asm _emit 0x11
        push 4bh
        push 5ccafch
        ; Exact mapped bytes E8 2A 9B FE FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54aedb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E3: jne 0x54aec4
        __asm _emit 0x75
        __asm _emit 0xe3
        push 40h
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes E8 94 37 FA FF: call 0x4ee684
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        push 26h
        mov eax, dword ptr [ebp + 0ch]
        add eax, 20h
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 40h
        push ecx
        ; Exact mapped bytes E8 1B E1 F5 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xe1
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        push 40h
        mov edx, dword ptr [ebp + 0ch]
        add edx, 46h
        push edx
        mov eax, dword ptr [ebp + 8]
        add eax, 66h
        push eax
        ; Exact mapped bytes E8 67 37 FA FF: call 0x4ee684
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0x37
        __asm _emit 0xfa
        __asm _emit 0xff
        push 2eh
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 66h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 0a6h
        push edx
        ; Exact mapped bytes E8 EB E0 F5 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 0ch]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 26: mov cx, word ptr [eax + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x26
        test ecx, ecx
        ; Exact mapped bytes 74 26: je 0x54af6b
        __asm _emit 0x74
        __asm _emit 0x26
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        ; Exact mapped bytes 66 8B 42 26: mov ax, word ptr [edx + 0x26]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x42
        __asm _emit 0x26
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 94h
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 0d4h
        push edx
        ; Exact mapped bytes E8 B8 E0 F5 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xe0
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 0ch
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 66 C7 40 44 D4 00: mov word ptr [eax + 0x44], 0xd4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x40
        __asm _emit 0x44
        __asm _emit 0xd4
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
