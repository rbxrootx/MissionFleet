// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00478A30 .. +0x15D bytes.
extern "C" __declspec(naked) void FUN_00478a30_00478A30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push 88h
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 7A CE FE FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x478a5a
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 2F 01 00 00: jmp 0x478b89
        __asm _emit 0xe9
        __asm _emit 0x2f
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 2eh
        ; Exact mapped bytes 75 2B: jne 0x478a90
        __asm _emit 0x75
        __asm _emit 0x2b
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 42 01: movsx eax, byte ptr [edx + 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0x01
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x478a90
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp + 0ch]
        add ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 80h
        push edx
        ; Exact mapped bytes E8 EA CE FE FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xce
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 8
        xor eax, eax
        ; Exact mapped bytes E9 F9 00 00 00: jmp 0x478b89
        __asm _emit 0xe9
        __asm _emit 0xf9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x478aa2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        push 63f38ch
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 B0 DE FF FF: call 0x476960
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xde
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 08: jne 0x478ac4
        __asm _emit 0x75
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 C5 00 00 00: jmp 0x478b89
        __asm _emit 0xe9
        __asm _emit 0xc5
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 0ch]
        mov al, byte ptr [edx]
        mov byte ptr [ebp - 8], al
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 25: jne 0x478afa
        __asm _emit 0x75
        __asm _emit 0x25
        cmp dword ptr [ebp - 0ch], 40h
        ; Exact mapped bytes 7D 1F: jge 0x478afa
        __asm _emit 0x7d
        __asm _emit 0x1f
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmp ecx, 2eh
        ; Exact mapped bytes 74 16: je 0x478afa
        __asm _emit 0x74
        __asm _emit 0x16
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 4B CB FE FF: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 66: jmp 0x478b60
        __asm _emit 0xeb
        __asm _emit 0x66
        cmp dword ptr [ebp - 4], 1
        ; Exact mapped bytes 75 28: jne 0x478b28
        __asm _emit 0x75
        __asm _emit 0x28
        cmp dword ptr [ebp - 0ch], 40h
        ; Exact mapped bytes 7D 22: jge 0x478b28
        __asm _emit 0x7d
        __asm _emit 0x22
        ; Exact mapped bytes 0F BE 55 F8: movsx edx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xf8
        cmp edx, 5fh
        ; Exact mapped bytes 74 19: je 0x478b28
        __asm _emit 0x74
        __asm _emit 0x19
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        add edx, 40h
        push edx
        ; Exact mapped bytes E8 1D CB FE FF: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0xcb
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 38: jmp 0x478b60
        __asm _emit 0xeb
        __asm _emit 0x38
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 2D: jne 0x478b5b
        __asm _emit 0x75
        __asm _emit 0x2d
        ; Exact mapped bytes 0F BE 45 F8: movsx eax, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xf8
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x478b3f
        __asm _emit 0x74
        __asm _emit 0x09
        ; Exact mapped bytes 0F BE 4D F8: movsx ecx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x4d
        __asm _emit 0xf8
        cmp ecx, 2ch
        ; Exact mapped bytes 75 1C: jne 0x478b5b
        __asm _emit 0x75
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, 80h
        push ecx
        ; Exact mapped bytes E8 EA CA FE FF: call 0x465640
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xca
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        ; Exact mapped bytes EB 05: jmp 0x478b60
        __asm _emit 0xeb
        __asm _emit 0x05
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 29: jmp 0x478b89
        __asm _emit 0xeb
        __asm _emit 0x29
        ; Exact mapped bytes 0F BE 55 F8: movsx edx, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0xf8
        cmp edx, 2ch
        ; Exact mapped bytes 75 02: jne 0x478b6b
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 1C: jmp 0x478b87
        __asm _emit 0xeb
        __asm _emit 0x1c
        ; Exact mapped bytes 0F BE 45 F8: movsx eax, byte ptr [ebp - 8]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0xf8
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x478b75
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 12: jmp 0x478b87
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [edx + ecx + 1]
        mov dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes E9 12 FF FF FF: jmp 0x478a99
        __asm _emit 0xe9
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
