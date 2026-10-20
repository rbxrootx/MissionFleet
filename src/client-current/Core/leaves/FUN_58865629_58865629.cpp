// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865629 .. +0xE4 bytes.
extern "C" __declspec(naked) void FUN_58865629_58865629() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        mov ebx, dword ptr [ebp + 8]
        xor ecx, ecx
        push esi
        push edi
        mov esi, ebx
        mov dl, byte ptr [ebx]
        ; Exact mapped bytes EB 1B: jmp 0x58865659
        __asm _emit 0xeb
        __asm _emit 0x1b
        cmp dl, 3dh
        mov edx, esi
        cmove eax, ecx
        mov ecx, eax
        lea edi, [edx + 1]
        mov al, byte ptr [edx]
        inc edx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x5886564b
        __asm _emit 0x75
        __asm _emit 0xf9
        sub edx, edi
        inc esi
        add esi, edx
        mov dl, byte ptr [esi]
        lea eax, [ecx + 1]
        test dl, dl
        ; Exact mapped bytes 75 DE: jne 0x5886563e
        __asm _emit 0x75
        __asm _emit 0xde
        push 4
        push eax
        ; Exact mapped bytes E8 A8 9B 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        pop ecx
        pop ecx
        test esi, esi
        ; Exact mapped bytes 75 0A: jne 0x5886567a
        __asm _emit 0x75
        __asm _emit 0x0a
        push eax
        ; Exact mapped bytes E8 9A 75 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        xor eax, eax
        ; Exact mapped bytes EB 66: jmp 0x588656e0
        __asm _emit 0xeb
        __asm _emit 0x66
        mov dword ptr [ebp - 4], esi
        ; Exact mapped bytes EB 52: jmp 0x588656d1
        __asm _emit 0xeb
        __asm _emit 0x52
        mov ecx, ebx
        lea edi, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x58865684
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edi
        lea eax, [ecx + 1]
        mov dword ptr [ebp - 8], eax
        cmp dl, 3dh
        ; Exact mapped bytes 74 37: je 0x588656cf
        __asm _emit 0x74
        __asm _emit 0x37
        push 1
        push eax
        ; Exact mapped bytes E8 70 9B 00 00: call 0x5886f210
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x9b
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        pop ecx
        pop ecx
        test edi, edi
        ; Exact mapped bytes 74 3E: je 0x588656e6
        __asm _emit 0x74
        __asm _emit 0x3e
        push ebx
        push dword ptr [ebp - 8]
        push edi
        ; Exact mapped bytes E8 DE 20 FF FF: call 0x58857790
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x20
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 48: jne 0x58865701
        __asm _emit 0x75
        __asm _emit 0x48
        mov eax, dword ptr [ebp - 4]
        push 0
        mov dword ptr [eax], edi
        add eax, 4
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes E8 45 75 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        pop ecx
        add ebx, eax
        mov dl, byte ptr [ebx]
        test dl, dl
        ; Exact mapped bytes 75 A8: jne 0x5886567f
        __asm _emit 0x75
        __asm _emit 0xa8
        push 0
        ; Exact mapped bytes E8 32 75 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x32
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        pop ecx
        pop edi
        pop esi
        pop ebx
        leave
        ret
        push esi
        ; Exact mapped bytes E8 45 01 00 00: call 0x58865831
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 1D 75 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        ; Exact mapped bytes E8 16 75 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x75
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        xor eax, eax
        ; Exact mapped bytes EB E0: jmp 0x588656e1
        __asm _emit 0xeb
        __asm _emit 0xe0
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push eax
        ; Exact mapped bytes E8 CC B8 FE FF: call 0x58850fd9
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb8
        __asm _emit 0xfe
        __asm _emit 0xff
    }
}
