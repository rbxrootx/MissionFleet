// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445AB6 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_00445ab6_00445AB6() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 9ch]
        cmp dword ptr [ecx + 40ce0h], 0
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x445bf7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 84h], 0
        sete al
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 84h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 14ch
        push edx
        push 412h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7D D6 0A 00: call 0x4f318f
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xd6
        __asm _emit 0x0a
        __asm _emit 0x00
        ; Exact mapped bytes 66 C7 45 FC FF FF: mov word ptr [ebp - 4], 0xffff
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x45
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14ch
        ; Exact mapped bytes E8 D0 84 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 0F BF 45 FC: movsx eax, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x45
        __asm _emit 0xfc
        push eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 28ch
        ; Exact mapped bytes E8 28 A4 0F 00: call 0x53ff64
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xa4
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 FC: mov word ptr [ebp - 4], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 0F BF 4D FC: movsx ecx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0xfc
        cmp ecx, -1
        ; Exact mapped bytes 75 33: jne 0x445b7c
        __asm _emit 0x75
        __asm _emit 0x33
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14ch
        ; Exact mapped bytes E8 9F 84 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 28ch
        ; Exact mapped bytes E8 4D A0 0F 00: call 0x53fbb7
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xa0
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 28ch
        ; Exact mapped bytes E8 E0 9B 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x9b
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x445b8f
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 28ch
        ; Exact mapped bytes E8 CB 9B 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x9b
        __asm _emit 0x0f
        __asm _emit 0x00
        push 1f47h
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14ch
        ; Exact mapped bytes E8 54 84 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x84
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 0E 9E FF FF: call 0x43f9c1
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 14ch
        ; Exact mapped bytes E8 E9 B3 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0xb3
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 412h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 1A 90 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x90
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        push 412h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 03 8D 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 24 98 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x98
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6878h
        push 411h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F2 8F 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x8f
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 DF 2B 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x2b
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
