// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5874AB80 .. +0x92 bytes.
extern "C" __declspec(naked) void FUN_5874ab80() {
    __asm {
        ; Exact mapped bytes A1 F4 47 A2 58: mov eax, dword ptr [0x58a247f4]
        __asm _emit 0xa1
        __asm _emit 0xf4
        __asm _emit 0x47
        __asm _emit 0xa2
        __asm _emit 0x58
        mov eax, dword ptr [eax + 30h]
        mov ecx, dword ptr [eax + 0cc0h]
        mov dl, byte ptr [ecx + 4]
        and dl, 1fh
        cmp dl, 9
        ; Exact mapped bytes 75 03: jne 0x5874ab9c
        __asm _emit 0x75
        __asm _emit 0x03
        mov al, 1
        ret
        push edi
        xor edi, edi
        lea edx, [eax + 0ac0h]
        lea eax, [edi + 1]
        push esi
        ; Exact mapped bytes 8D A4 24 00 00 00 00: lea esp, [esp]
        __asm _emit 0x8d
        __asm _emit 0xa4
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [edx + 80h]
        test ecx, ecx
        ; Exact mapped bytes 74 32: je 0x5874abec
        __asm _emit 0x74
        __asm _emit 0x32
        movzx esi, word ptr [ecx + 20h]
        ; Exact mapped bytes 66 83 FE 02: cmp si, 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x02
        ; Exact mapped bytes 75 06: jne 0x5874abca
        __asm _emit 0x75
        __asm _emit 0x06
        ; Exact mapped bytes 66 39 41 22: cmp word ptr [ecx + 0x22], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x41
        __asm _emit 0x22
        ; Exact mapped bytes 74 22: je 0x5874abec
        __asm _emit 0x74
        __asm _emit 0x22
        ; Exact mapped bytes 66 83 FE 04: cmp si, 4
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0xfe
        __asm _emit 0x04
        ; Exact mapped bytes 75 07: jne 0x5874abd7
        __asm _emit 0x75
        __asm _emit 0x07
        ; Exact mapped bytes 66 83 79 22 02: cmp word ptr [ecx + 0x22], 2
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x79
        __asm _emit 0x22
        __asm _emit 0x02
        ; Exact mapped bytes 74 15: je 0x5874abec
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 0A: xor cx, word ptr [edx]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x0a
        ; Exact mapped bytes 75 0B: jne 0x5874abec
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, 0aah
        ; Exact mapped bytes 66 33 4A 02: xor cx, word ptr [edx + 2]
        __asm _emit 0x66
        __asm _emit 0x33
        __asm _emit 0x4a
        __asm _emit 0x02
        ; Exact mapped bytes 74 0D: je 0x5874abf9
        __asm _emit 0x74
        __asm _emit 0x0d
        add edi, eax
        add edx, 4
        cmp edi, 1ch
        ; Exact mapped bytes 7C BA: jl 0x5874abb0
        __asm _emit 0x7c
        __asm _emit 0xba
        pop esi
        pop edi
        ret
        push 0
        push 0
        push 0
        push 2ah
        ; Exact mapped bytes E8 EA 0E 02 00: call 0x5876baf0
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x0e
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 23 A1 01 00: call 0x58764d30
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xa1
        __asm _emit 0x01
        __asm _emit 0x00
        pop esi
        xor al, al
        pop edi
        ret
    }
}
