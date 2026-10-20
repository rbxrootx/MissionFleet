// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100E77D0 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_100e77d0_100E77D0() {
    __asm {
        mov eax, dword ptr [esp + 8]
        ; Exact mapped bytes 66 8B 54 24 04: mov dx, word ptr [esp + 4]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x54
        __asm _emit 0x24
        __asm _emit 0x04
        ; Exact mapped bytes 66 89 91 B8 01 00 00: mov word ptr [ecx + 0x1b8], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x91
        __asm _emit 0xb8
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [eax + eax*4]
        lea eax, [eax + eax*4]
        shl eax, 4
        ; Exact mapped bytes 66 83 FA 0D: cmp dx, 0xd
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfa
        __asm _emit 0x0d
        mov dword ptr [ecx + 90h], eax
        ; Exact mapped bytes 75 6C: jne 0x100e7861
        __asm _emit 0x75
        __asm _emit 0x6c
        mov edx, dword ptr [ecx + 1c0h]
        push esi
        xor edx, 0aah
        cmp edx, 3e8h
        ; Exact mapped bytes 7E 25: jle 0x100e782f
        __asm _emit 0x7e
        __asm _emit 0x25
        mov esi, dword ptr [ecx + 1c8h]
        cmp esi, 7d0h
        ; Exact mapped bytes 7E 10: jle 0x100e7828
        __asm _emit 0x7e
        __asm _emit 0x10
        xor eax, eax
        cmp esi, 0bb8h
        setg al
        add eax, 2
        ; Exact mapped bytes EB 09: jmp 0x100e7831
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x100e7831
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test edx, edx
        mov dword ptr [ecx + 204h], eax
        mov dword ptr [ecx + 214h], eax
        mov dword ptr [ecx + 21ch], 9
        pop esi
        ; Exact mapped bytes 74 0C: je 0x100e7858
        __asm _emit 0x74
        __asm _emit 0x0c
        add eax, 0ch
        mov dword ptr [ecx + 218h], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        add eax, 14h
        mov dword ptr [ecx + 218h], eax
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
