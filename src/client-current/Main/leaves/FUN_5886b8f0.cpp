// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886B8F0 .. +0xB5 bytes.
extern "C" __declspec(naked) void FUN_5886b8f0() {
    __asm {
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 0e1ffh
        ; Exact mapped bytes 66 23 C2: and ax, dx
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xc2
        mov edx, 100h
        ; Exact mapped bytes 66 0B C2: or ax, dx
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xc2
        ; Exact mapped bytes 66 89 41 24: mov word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 83 49 24 05: or word ptr [ecx + 0x24], 5
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x49
        __asm _emit 0x24
        __asm _emit 0x05
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [ecx + 84h]
        test eax, eax
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x5886b9a4
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ecx + 324h]
        ; Exact mapped bytes 66 85 D2: test dx, dx
        __asm _emit 0x66
        __asm _emit 0x85
        __asm _emit 0xd2
        ; Exact mapped bytes 75 46: jne 0x5886b976
        __asm _emit 0x75
        __asm _emit 0x46
        cmp dword ptr [eax + 0b8h], -1
        ; Exact mapped bytes 75 1B: jne 0x5886b954
        __asm _emit 0x75
        __asm _emit 0x1b
        mov eax, dword ptr [eax + 4]
        cmp eax, 338h
        ; Exact mapped bytes 7E 05: jle 0x5886b948
        __asm _emit 0x7e
        __asm _emit 0x05
        mov eax, 338h
        push 0e9h
        push eax
        ; Exact mapped bytes E8 3D 79 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        ret
        xor edx, edx
        cmp dword ptr [eax + 4], 338h
        push 3ch
        setle dl
        dec edx
        and edx, 0ffffff38h
        add edx, 338h
        push edx
        ; Exact mapped bytes E8 1B 79 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x79
        __asm _emit 0x09
        __asm _emit 0x00
        ret
        ; Exact mapped bytes 66 83 FA 01: cmp dx, 1
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x01
        ; Exact mapped bytes 74 1C: je 0x5886b998
        __asm _emit 0x74
        __asm _emit 0x1c
        ; Exact mapped bytes 66 83 FA 02: cmp dx, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x02
        ; Exact mapped bytes 74 16: je 0x5886b998
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes 66 83 FA 03: cmp dx, 3
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x03
        ; Exact mapped bytes 75 1C: jne 0x5886b9a4
        __asm _emit 0x75
        __asm _emit 0x1c
        push 0f0h
        push 344h
        ; Exact mapped bytes E8 F9 78 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        ret
        push 1eh
        push 338h
        ; Exact mapped bytes E8 EC 78 09 00: call 0x58903290
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x78
        __asm _emit 0x09
        __asm _emit 0x00
        ret
    }
}
