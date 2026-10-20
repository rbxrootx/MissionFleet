// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58862210 .. +0xC1 bytes.
extern "C" __declspec(naked) void FUN_58862210_58862210() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 0ch]
        xor edx, edx
        mov eax, esi
        and eax, 7ff00000h
        cmp eax, 7ff00000h
        ; Exact mapped bytes 75 44: jne 0x5886226d
        __asm _emit 0x75
        __asm _emit 0x44
        ; Exact mapped bytes F2 0F 10 45 08: movsd xmm0, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        sub esp, 8
        ; Exact mapped bytes F2 0F 11 04 24: movsd qword ptr [esp], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x04
        __asm _emit 0x24
        ; Exact mapped bytes E8 F5 75 FF FF: call 0x58859830
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x75
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        sub eax, 1
        ; Exact mapped bytes 74 22: je 0x58862265
        __asm _emit 0x74
        __asm _emit 0x22
        sub eax, 1
        ; Exact mapped bytes 74 15: je 0x5886225d
        __asm _emit 0x74
        __asm _emit 0x15
        sub eax, 1
        ; Exact mapped bytes 74 08: je 0x58862255
        __asm _emit 0x74
        __asm _emit 0x08
        mov eax, 1
        pop esi
        pop ebp
        ret
        mov eax, 2
        pop esi
        pop ebp
        ret
        mov eax, 4
        pop esi
        pop ebp
        ret
        mov eax, 200h
        pop esi
        pop ebp
        ret
        movzx ecx, word ptr [ebp + 0eh]
        and ecx, 8000h
        or edx, eax
        ; Exact mapped bytes 75 1F: jne 0x5886229a
        __asm _emit 0x75
        __asm _emit 0x1f
        mov eax, dword ptr [ebp + 8]
        and esi, 0fffffh
        or eax, esi
        ; Exact mapped bytes 74 12: je 0x5886229a
        __asm _emit 0x74
        __asm _emit 0x12
        test ecx, ecx
        mov eax, 80h
        mov edx, 10h
        cmovne eax, edx
        pop esi
        pop ebp
        ret
        ; Exact mapped bytes F2 0F 10 45 08: movsd xmm0, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 66 0F 2E 05 B0 51 89 58: ucomisd xmm0, qword ptr [0x588951b0]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0x05
        __asm _emit 0xb0
        __asm _emit 0x51
        __asm _emit 0x89
        __asm _emit 0x58
        lahf
        test ah, 44h
        ; Exact mapped bytes 7A 12: jp 0x588622bf
        __asm _emit 0x7a
        __asm _emit 0x12
        test ecx, ecx
        mov eax, 40h
        mov edx, 20h
        cmovne eax, edx
        pop esi
        pop ebp
        ret
        test ecx, ecx
        mov eax, 100h
        mov edx, 8
        cmovne eax, edx
        pop esi
        pop ebp
        ret
    }
}
