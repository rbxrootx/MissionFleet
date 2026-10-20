// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F38C0 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_588f38c0() {
    __asm {
        ; Exact mapped bytes F7 05 0C 45 A2 58 00 00 01 00: test dword ptr [0x58a2450c], 0x10000
        __asm _emit 0xf7
        __asm _emit 0x05
        __asm _emit 0x0c
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes 74 5C: je 0x588f3928
        __asm _emit 0x74
        __asm _emit 0x5c
        ; Exact mapped bytes 66 8B 41 24: mov ax, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x41
        __asm _emit 0x24
        test al, 1
        ; Exact mapped bytes 74 54: je 0x588f3928
        __asm _emit 0x74
        __asm _emit 0x54
        push esi
        mov esi, dword ptr [ecx + 4ch]
        test esi, esi
        ; Exact mapped bytes 74 4B: je 0x588f3927
        __asm _emit 0x74
        __asm _emit 0x4b
        push ebx
        mov ebx, dword ptr [esp + 10h]
        push ebp
        mov ebp, dword ptr [esp + 10h]
        push edi
        mov edi, dword ptr [esp + 1ch]
        ; Exact mapped bytes EB 03: jmp 0x588f38f0
        __asm _emit 0xeb
        __asm _emit 0x03
        ; Exact mapped bytes 8D 49 00: lea ecx, [ecx]
        __asm _emit 0x8d
        __asm _emit 0x49
        __asm _emit 0x00
        ; Exact mapped bytes 66 83 7E 26 00: cmp word ptr [esi + 0x26], 0
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7e
        __asm _emit 0x26
        __asm _emit 0x00
        ; Exact mapped bytes 7D 1A: jge 0x588f3911
        __asm _emit 0x7d
        __asm _emit 0x1a
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 14h]
        push edi
        push ebx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 E6: jne 0x588f38f0
        __asm _emit 0x75
        __asm _emit 0xe6
        pop edi
        pop ebp
        pop ebx
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov edx, dword ptr [esi]
        mov eax, dword ptr [edx + 14h]
        push edi
        push ebx
        push ebp
        mov ecx, esi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        mov esi, dword ptr [esi + 48h]
        test esi, esi
        ; Exact mapped bytes 75 ED: jne 0x588f3911
        __asm _emit 0x75
        __asm _emit 0xed
        pop edi
        pop ebp
        pop ebx
        pop esi
    }
}
