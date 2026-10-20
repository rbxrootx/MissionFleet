// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00474CD0 .. +0x157 bytes.
extern "C" __declspec(naked) void FUN_00474cd0_00474CD0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes A1 2C E2 67 00: mov eax, dword ptr [0x67e22c]
        __asm _emit 0xa1
        __asm _emit 0x2c
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 10h], -1
        ; Exact mapped bytes 0F 84 23 01 00 00: je 0x474e0e
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], 3ffh
        mov dword ptr [ebp - 10h], 0
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 14h]
        lea ecx, [eax + edx*8 + 18h]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 12: jmp 0x474d1a
        __asm _emit 0xeb
        __asm _emit 0x12
        mov edx, dword ptr [ebp - 0ch]
        sub edx, 1
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        sub eax, 8
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 0F 8C 80 00 00 00: jl 0x474da4
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx], 0f0h
        ; Exact mapped bytes 75 70: jne 0x474d9f
        __asm _emit 0x75
        __asm _emit 0x70
        push 4000h
        push 1000h
        mov edx, dword ptr [ebp - 0ch]
        shl edx, 0ch
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 10h]
        add ecx, edx
        push ecx
        ; Exact mapped bytes FF 15 64 B8 68 00: call dword ptr [0x68b864]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 4D: je 0x474d9f
        __asm _emit 0x74
        __asm _emit 0x4d
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx], 0ffffffffh
        ; Exact mapped bytes A1 3C 74 68 00: mov eax, dword ptr [0x68743c]
        __asm _emit 0xa1
        __asm _emit 0x3c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        sub eax, 1
        ; Exact mapped bytes A3 3C 74 68 00: mov dword ptr [0x68743c], eax
        __asm _emit 0xa3
        __asm _emit 0x3c
        __asm _emit 0x74
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        cmp dword ptr [ecx + 0ch], 0
        ; Exact mapped bytes 74 0B: je 0x474d7c
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 14h]
        mov eax, dword ptr [edx + 0ch]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 76 09: jbe 0x474d85
        __asm _emit 0x76
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 10h]
        add eax, 1
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        sub ecx, 1
        mov dword ptr [ebp + 8], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 02: jne 0x474d9f
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 05: jmp 0x474da4
        __asm _emit 0xeb
        __asm _emit 0x05
        ; Exact mapped bytes E9 64 FF FF FF: jmp 0x474d08
        __asm _emit 0xe9
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 55: je 0x474e0e
        __asm _emit 0x74
        __asm _emit 0x55
        mov edx, dword ptr [ebp - 8]
        cmp dword ptr [edx + 18h], -1
        ; Exact mapped bytes 75 4C: jne 0x474e0e
        __asm _emit 0x75
        __asm _emit 0x4c
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp - 8]
        add eax, 20h
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 12: jmp 0x474de6
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 0ch]
        add ecx, 1
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 8
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 0ch], 400h
        ; Exact mapped bytes 7D 0A: jge 0x474df9
        __asm _emit 0x7d
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax], -1
        ; Exact mapped bytes 75 02: jne 0x474df9
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB DB: jmp 0x474dd4
        __asm _emit 0xeb
        __asm _emit 0xdb
        cmp dword ptr [ebp - 0ch], 400h
        ; Exact mapped bytes 75 0C: jne 0x474e0e
        __asm _emit 0x75
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 45 FE FF FF: call 0x474c50
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 3B 15 2C E2 67 00: cmp edx, dword ptr [0x67e22c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x2c
        __asm _emit 0xe2
        __asm _emit 0x67
        __asm _emit 0x00
        ; Exact mapped bytes 74 0A: je 0x474e23
        __asm _emit 0x74
        __asm _emit 0x0a
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 0F 8F BB FE FF FF: jg 0x474cde
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xbb
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
