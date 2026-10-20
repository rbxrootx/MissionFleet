// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00437508 .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_00437508_00437508() {
    __asm {
        mov eax, 43b229h
        ; Exact mapped bytes E8 F6 80 FE FF: call 0x41f608
        __asm _emit 0xe8
        __asm _emit 0xf6
        __asm _emit 0x80
        __asm _emit 0xfe
        __asm _emit 0xff
        push ecx
        push ebx
        push esi
        ; Exact mapped bytes E8 6C E5 FF FF: call 0x435a86
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        ; Exact mapped bytes E8 92 E7 FF FF: call 0x435cb3
        __asm _emit 0xe8
        __asm _emit 0x92
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        xor ebx, ebx
        cmp byte ptr [eax + 14h], bl
        ; Exact mapped bytes 74 09: je 0x437531
        __asm _emit 0x74
        __asm _emit 0x09
        or dword ptr [esi + 114h], 0ffffffffh
        ; Exact mapped bytes EB 63: jmp 0x437594
        __asm _emit 0xeb
        __asm _emit 0x63
        push ebx
        ; Exact mapped bytes FF 15 1C C6 43 00: call dword ptr [0x43c61c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x1c
        __asm _emit 0xc6
        __asm _emit 0x43
        __asm _emit 0x00
        cmp eax, ebx
        ; Exact mapped bytes 7D 0A: jge 0x437546
        __asm _emit 0x7d
        __asm _emit 0x0a
        push ebx
        ; Exact mapped bytes E8 63 00 00 00: call 0x4375a5
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 51: jmp 0x437597
        __asm _emit 0xeb
        __asm _emit 0x51
        mov dword ptr [esi + 114h], 1
        ; Exact mapped bytes E8 76 AA FF FF: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov esi, eax
        cmp dword ptr [esi + 58h], ebx
        mov dword ptr [esi + 54h], 437600h
        ; Exact mapped bytes 75 31: jne 0x437594
        __asm _emit 0x75
        __asm _emit 0x31
        push 40h
        ; Exact mapped bytes E8 82 63 FF FF: call 0x42d8ec
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x63
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, eax
        mov dword ptr [ebp - 10h], ecx
        cmp ecx, ebx
        mov dword ptr [ebp - 4], ebx
        ; Exact mapped bytes 74 07: je 0x43757e
        __asm _emit 0x74
        __asm _emit 0x07
        ; Exact mapped bytes E8 6B 01 00 00: call 0x4376e7
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 02: jmp 0x437580
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        or dword ptr [ebp - 4], 0ffffffffh
        mov dword ptr [esi + 58h], eax
        ; Exact mapped bytes E8 3F AA FF FF: call 0x431fcb
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 58h]
        ; Exact mapped bytes E8 B1 01 00 00: call 0x437745
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        pop eax
        mov ecx, dword ptr [ebp - 0ch]
        pop esi
        pop ebx
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        leave
        ret
    }
}
