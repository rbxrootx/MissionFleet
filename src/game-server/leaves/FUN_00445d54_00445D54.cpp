// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445D54 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_00445d54_00445D54() {
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
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x445e95
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 88h], 0
        sete al
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 88h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 158h
        push edx
        push 44ah
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DF D3 0A 00: call 0x4f318f
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xd3
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
        add ecx, 158h
        ; Exact mapped bytes E8 32 82 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x82
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
        add ecx, 214h
        ; Exact mapped bytes E8 8A A1 0F 00: call 0x53ff64
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0xa1
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
        ; Exact mapped bytes 75 33: jne 0x445e1a
        __asm _emit 0x75
        __asm _emit 0x33
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 158h
        ; Exact mapped bytes E8 01 82 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x82
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 214h
        ; Exact mapped bytes E8 AF 9D 0F 00: call 0x53fbb7
        __asm _emit 0xe8
        __asm _emit 0xaf
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 214h
        ; Exact mapped bytes E8 42 99 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x99
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x445e2d
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 214h
        ; Exact mapped bytes E8 2D 99 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0x99
        __asm _emit 0x0f
        __asm _emit 0x00
        push 1f72h
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 158h
        ; Exact mapped bytes E8 B6 81 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x81
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 E4 9B FF FF: call 0x43fa35
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0x9b
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 158h
        ; Exact mapped bytes E8 4B B1 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xb1
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 44ah
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7C 8D 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        push 44ah
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 65 8A 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x8a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 86 95 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x95
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6888h
        push 448h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 54 8D 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x8d
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 41 29 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x29
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
