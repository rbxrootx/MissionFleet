// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587C97E0 .. +0xB3 bytes.
extern "C" __declspec(naked) void FUN_587c97e0() {
    __asm {
        push esi
        mov esi, ecx
        ; Exact mapped bytes 66 8B 46 24: mov ax, word ptr [esi + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x46
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 E8 08: shr ax, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xe8
        __asm _emit 0x08
        and al, 1fh
        cmp al, 1
        ; Exact mapped bytes 74 16: je 0x587c9807
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [esi + 0ech]
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        ; Exact mapped bytes 66 C1 EA 08: shr dx, 8
        __asm _emit 0x66
        __asm _emit 0xc1
        __asm _emit 0xea
        __asm _emit 0x08
        and dl, 1fh
        cmp dl, 2
        ; Exact mapped bytes 75 0D: jne 0x587c9814
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [esi + 0ech]
        mov eax, dword ptr [ecx]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        mov ecx, dword ptr [esi + 0e8h]
        push 0
        ; Exact mapped bytes E8 3F DB 13 00: call 0x58907360
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xdb
        __asm _emit 0x13
        __asm _emit 0x00
        mov eax, dword ptr [esi]
        mov edx, dword ptr [eax + 28h]
        push 0
        mov ecx, esi
        mov dword ptr [esi + 60h], 0
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        test al, al
        ; Exact mapped bytes A1 A4 46 A2 58: mov eax, dword ptr [0x58a246a4]
        __asm _emit 0xa1
        __asm _emit 0xa4
        __asm _emit 0x46
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 75 1F: jne 0x587c985b
        __asm _emit 0x75
        __asm _emit 0x1f
        cmp dword ptr [eax + 160h], 2ch
        ; Exact mapped bytes 7E 35: jle 0x587c987a
        __asm _emit 0x7e
        __asm _emit 0x35
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 2C: je 0x587c987a
        __asm _emit 0x74
        __asm _emit 0x2c
        mov eax, dword ptr [eax + 190h]
        add eax, 0b00h
        ; Exact mapped bytes EB 21: jmp 0x587c987c
        __asm _emit 0xeb
        __asm _emit 0x21
        cmp dword ptr [eax + 160h], 2dh
        ; Exact mapped bytes 7E 16: jle 0x587c987a
        __asm _emit 0x7e
        __asm _emit 0x16
        cmp dword ptr [eax + 190h], 0
        ; Exact mapped bytes 74 0D: je 0x587c987a
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [eax + 190h]
        add eax, 0b40h
        ; Exact mapped bytes EB 02: jmp 0x587c987c
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov ecx, dword ptr [esi + 0e8h]
        mov edx, 0fff0h
        mov dword ptr [ecx + 0f8h], eax
        ; Exact mapped bytes 66 21 56 24: and word ptr [esi + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x56
        __asm _emit 0x24
        pop esi
        ret
    }
}
