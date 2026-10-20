// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850BE0 .. +0x85 bytes.
extern "C" __declspec(naked) void FUN_58850be0_58850BE0() {
    __asm {
        mov edx, dword ptr [esp + 4]
        mov ecx, dword ptr [esp + 8]
        test edx, 3
        ; Exact mapped bytes 75 40: jne 0x58850c30
        __asm _emit 0x75
        __asm _emit 0x40
        mov eax, dword ptr [edx]
        cmp al, byte ptr [ecx]
        ; Exact mapped bytes 75 32: jne 0x58850c28
        __asm _emit 0x75
        __asm _emit 0x32
        test al, al
        ; Exact mapped bytes 74 26: je 0x58850c20
        __asm _emit 0x74
        __asm _emit 0x26
        cmp ah, byte ptr [ecx + 1]
        ; Exact mapped bytes 75 29: jne 0x58850c28
        __asm _emit 0x75
        __asm _emit 0x29
        test ah, ah
        ; Exact mapped bytes 74 1D: je 0x58850c20
        __asm _emit 0x74
        __asm _emit 0x1d
        shr eax, 10h
        cmp al, byte ptr [ecx + 2]
        ; Exact mapped bytes 75 1D: jne 0x58850c28
        __asm _emit 0x75
        __asm _emit 0x1d
        test al, al
        ; Exact mapped bytes 74 11: je 0x58850c20
        __asm _emit 0x74
        __asm _emit 0x11
        cmp ah, byte ptr [ecx + 3]
        ; Exact mapped bytes 75 14: jne 0x58850c28
        __asm _emit 0x75
        __asm _emit 0x14
        add ecx, 4
        add edx, 4
        test ah, ah
        ; Exact mapped bytes 75 D2: jne 0x58850bf0
        __asm _emit 0x75
        __asm _emit 0xd2
        mov edi, edi
        xor eax, eax
        ret
        ; Exact mapped bytes EB 03: jmp 0x58850c28
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        sbb eax, eax
        or eax, 1
        ret
        mov edi, edi
        test edx, 1
        ; Exact mapped bytes 74 18: je 0x58850c50
        __asm _emit 0x74
        __asm _emit 0x18
        mov al, byte ptr [edx]
        add edx, 1
        cmp al, byte ptr [ecx]
        ; Exact mapped bytes 75 E7: jne 0x58850c28
        __asm _emit 0x75
        __asm _emit 0xe7
        add ecx, 1
        test al, al
        ; Exact mapped bytes 74 D8: je 0x58850c20
        __asm _emit 0x74
        __asm _emit 0xd8
        test edx, 2
        ; Exact mapped bytes 74 A0: je 0x58850bf0
        __asm _emit 0x74
        __asm _emit 0xa0
        ; Exact mapped bytes 66 8B 02: mov ax, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x02
        add edx, 2
        cmp al, byte ptr [ecx]
        ; Exact mapped bytes 75 CE: jne 0x58850c28
        __asm _emit 0x75
        __asm _emit 0xce
        test al, al
        ; Exact mapped bytes 74 C2: je 0x58850c20
        __asm _emit 0x74
        __asm _emit 0xc2
        cmp ah, byte ptr [ecx + 1]
        ; Exact mapped bytes 75 C5: jne 0x58850c28
        __asm _emit 0x75
        __asm _emit 0xc5
        test ah, ah
    }
}
