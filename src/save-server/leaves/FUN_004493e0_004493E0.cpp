// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004493E0 .. +0x16E bytes.
extern "C" __declspec(naked) void FUN_004493e0_004493E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        sub eax, dword ptr [ebp + 8]
        sar eax, 2
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4493fd
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        sub ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 8E B1 00 00 00: jle 0x4494b8
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0xb1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F BE 55 10: movsx edx, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x449429
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 21 01 00 00: jmp 0x44954a
        __asm _emit 0xe9
        __asm _emit 0x21
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F BE 55 10: movsx edx, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x449454
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 F6 00 00 00: jmp 0x44954a
        __asm _emit 0xe9
        __asm _emit 0xf6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F BE 55 10: movsx edx, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x44947f
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 CB 00 00 00: jmp 0x44954a
        __asm _emit 0xe9
        __asm _emit 0xcb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes 0F BE 55 10: movsx edx, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x55
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        xor eax, eax
        cmp ecx, edx
        sete al
        and eax, 0ffh
        test eax, eax
        ; Exact mapped bytes 74 08: je 0x4494aa
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x44954a
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        add ecx, 1
        mov dword ptr [ebp + 8], ecx
        ; Exact mapped bytes E9 3C FF FF FF: jmp 0x4493f4
        __asm _emit 0xe9
        __asm _emit 0x3c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        sub edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 74 60: je 0x449527
        __asm _emit 0x74
        __asm _emit 0x60
        cmp dword ptr [ebp - 8], 2
        ; Exact mapped bytes 74 31: je 0x4494fe
        __asm _emit 0x74
        __asm _emit 0x31
        cmp dword ptr [ebp - 8], 3
        ; Exact mapped bytes 74 02: je 0x4494d5
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 72: jmp 0x449547
        __asm _emit 0xeb
        __asm _emit 0x72
        ; Exact mapped bytes 0F BE 45 10: movsx eax, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x4494f5
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 55: jmp 0x44954a
        __asm _emit 0xeb
        __asm _emit 0x55
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes 0F BE 45 10: movsx eax, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x44951e
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 2C: jmp 0x44954a
        __asm _emit 0xeb
        __asm _emit 0x2c
        mov edx, dword ptr [ebp + 8]
        add edx, 1
        mov dword ptr [ebp + 8], edx
        ; Exact mapped bytes 0F BE 45 10: movsx eax, byte ptr [ebp + 0x10]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x45
        __asm _emit 0x10
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 05: je 0x449547
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 03: jmp 0x44954a
        __asm _emit 0xeb
        __asm _emit 0x03
        mov eax, dword ptr [ebp + 0ch]
        mov esp, ebp
        pop ebp
        ret
    }
}
