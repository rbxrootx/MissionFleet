// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00445967 .. +0x14F bytes.
extern "C" __declspec(naked) void FUN_00445967_00445967() {
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
        ; Exact mapped bytes 0F 84 14 01 00 00: je 0x445aa8
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x14
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 8]
        xor eax, eax
        cmp dword ptr [edx + 98h], 0
        sete al
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 98h], eax
        mov edx, dword ptr [ebp - 8]
        add edx, 15ch
        push edx
        push 44bh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CC D7 0A 00: call 0x4f318f
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xd7
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
        add ecx, 15ch
        ; Exact mapped bytes E8 1F 86 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x86
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
        add ecx, 19ch
        ; Exact mapped bytes E8 77 A5 0F 00: call 0x53ff64
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa5
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
        ; Exact mapped bytes 75 33: jne 0x445a2d
        __asm _emit 0x75
        __asm _emit 0x33
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 15ch
        ; Exact mapped bytes E8 EE 85 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 19ch
        ; Exact mapped bytes E8 9C A1 0F 00: call 0x53fbb7
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xa1
        __asm _emit 0x0f
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 19ch
        ; Exact mapped bytes E8 2F 9D 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x00
        ; Exact mapped bytes EB 13: jmp 0x445a40
        __asm _emit 0xeb
        __asm _emit 0x13
        ; Exact mapped bytes 0F BF 55 FC: movsx edx, word ptr [ebp - 4]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x55
        __asm _emit 0xfc
        push edx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 19ch
        ; Exact mapped bytes E8 1A 9D 0F 00: call 0x53f75a
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x9d
        __asm _emit 0x0f
        __asm _emit 0x00
        push 218fh
        push 0
        mov ecx, dword ptr [ebp - 8]
        add ecx, 15ch
        ; Exact mapped bytes E8 A3 85 0A 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0x85
        __asm _emit 0x0a
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 9ch]
        ; Exact mapped bytes E8 0B A0 FF FF: call 0x43fa6f
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        add ecx, 15ch
        ; Exact mapped bytes E8 38 B5 0E 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xb5
        __asm _emit 0x0e
        __asm _emit 0x00
        push eax
        push 44bh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 69 91 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        push 0
        push 44bh
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 52 8E 0A 00: call 0x4ee8e1
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x8e
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 73 99 0A 00: call 0x4ef409
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x99
        __asm _emit 0x0a
        __asm _emit 0x00
        push 5b6870h
        push 449h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 91 0A 00: call 0x4eebe9
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x91
        __asm _emit 0x0a
        __asm _emit 0x00
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 2E 2D 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x2d
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
