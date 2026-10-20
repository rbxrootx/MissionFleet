// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00419C04 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00419c04_00419C04() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 0ch]
        test ah, 40h
        ; Exact mapped bytes 74 07: je 0x419c16
        __asm _emit 0x74
        __asm _emit 0x07
        and eax, 0bfffh
        or al, 40h
        push 8
        pop edx
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 75 03: jne 0x419c21
        __asm _emit 0x75
        __asm _emit 0x03
        push 0eh
        pop eax
        test ah, 80h
        ; Exact mapped bytes 74 07: je 0x419c2d
        __asm _emit 0x74
        __asm _emit 0x07
        and eax, 7fffh
        ; Exact mapped bytes EB 10: jmp 0x419c3d
        __asm _emit 0xeb
        __asm _emit 0x10
        xor edx, edx
        ; Exact mapped bytes 66 3D 09 00: cmp ax, 9
        __asm _emit 0x66
        __asm _emit 0x3d
        __asm _emit 0x09
        __asm _emit 0x00
        setne dl
        dec edx
        and edx, 4
        add edx, 4
        push esi
        push edi
        push dword ptr [ebp + 10h]
        mov esi, dword ptr [ecx]
        mov byte ptr [ebp + 0eh], al
        lea edi, [ebp + 0eh]
        xor eax, eax
        push edi
        push eax
        push eax
        push edx
        mov byte ptr [ebp + 0fh], al
        push dword ptr [ebp + 8]
        ; Exact mapped bytes FF 56 58: call dword ptr [esi + 0x58]
        __asm _emit 0xff
        __asm _emit 0x56
        __asm _emit 0x58
        pop edi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
