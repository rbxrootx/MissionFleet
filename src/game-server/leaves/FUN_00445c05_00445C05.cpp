// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445C05 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_00445c05_00445C05() {
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
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x445d46
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 94h], 0
        sete al
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 94h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 154h
        push edx
        push 445h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 2E D5 0A 00: call 0x4f318f
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd5
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
        add ecx, 154h
        ; Exact mapped bytes E8 81 83 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x83
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
        add ecx, 1d8h
        ; Exact mapped bytes E8 D9 A2 0F 00: call 0x53ff64
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xa2
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
        ; Exact mapped bytes 75 33: jne 0x445ccb
        __asm _emit 0x75
        __asm _emit 0x33
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 154h
        ; Exact mapped bytes E8 50 83 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1d8h
        ; Exact mapped bytes E8 FE 9E 0F 00: call 0x53fbb7
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x9e
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1d8h
        ; Exact mapped bytes E8 91 9A 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x9a
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x445cde
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1d8h
        ; Exact mapped bytes E8 7C 9A 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0x9a
        __asm _emit 0x0f
        __asm _emit 0x00
        push 22b8h
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 154h
        ; Exact mapped bytes E8 05 83 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x83
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 85 9C FF FF: call 0x43f987
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 154h
        ; Exact mapped bytes E8 9A B2 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xb2
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 445h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CB 8E 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        push 445h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B4 8B 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x8b
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 D5 96 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x96
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6880h
        push 444h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 A3 8E 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 90 2A 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x2a
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
