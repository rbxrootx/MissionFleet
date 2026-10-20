// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FA6A .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_0040fa6a_0040FA6A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 60 A9 FF FF: call 0x40a3f0
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 0F 84 9A 00 00 00: je 0x40fb37
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x9a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2B 45 FF FF: call 0x403fd0
        __asm _emit 0xe8
        __asm _emit 0x2b
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 501h
        ; Exact mapped bytes 74 14: je 0x40fac5
        __asm _emit 0x74
        __asm _emit 0x14
        cmp dword ptr [ebp - 0ch], 502h
        ; Exact mapped bytes 74 5F: je 0x40fb19
        __asm _emit 0x74
        __asm _emit 0x5f
        cmp dword ptr [ebp - 0ch], 503h
        ; Exact mapped bytes 74 60: je 0x40fb23
        __asm _emit 0x74
        __asm _emit 0x60
        ; Exact mapped bytes EB 68: jmp 0x40fb2d
        __asm _emit 0xeb
        __asm _emit 0x68
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 2
        ; Exact mapped bytes 75 0A: jne 0x40fae1
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 C7 02 07 00: mov word ptr [edx], 7
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 36: jmp 0x40fb17
        __asm _emit 0xeb
        __asm _emit 0x36
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 4
        ; Exact mapped bytes 75 0A: jne 0x40fafd
        __asm _emit 0x75
        __asm _emit 0x0a
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 C7 02 05 00: mov word ptr [edx], 5
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x05
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x40fb17
        __asm _emit 0xeb
        __asm _emit 0x1a
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d78h]
        cmp dword ptr [ecx + 0fch], 8
        ; Exact mapped bytes 75 08: jne 0x40fb17
        __asm _emit 0x75
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 C7 02 06 00: mov word ptr [edx], 6
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x06
        __asm _emit 0x00
        ; Exact mapped bytes EB 1C: jmp 0x40fb35
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 C7 00 04 00: mov word ptr [eax], 4
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x40fb35
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 C7 01 02 00: mov word ptr [ecx], 2
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x01
        __asm _emit 0x02
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x40fb35
        __asm _emit 0xeb
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 C7 02 01 00: mov word ptr [edx], 1
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 08: jmp 0x40fb3f
        __asm _emit 0xeb
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 66 C7 00 00 00: mov word ptr [eax], 0
        __asm _emit 0x66
        __asm _emit 0xc7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 97 8C 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0x8c
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
