// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58859720 .. +0x10E bytes.
extern "C" __declspec(naked) void FUN_58859720() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        ; Exact mapped bytes F2 0F 10 4D 08: movsd xmm1, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x4d
        __asm _emit 0x08
        sub esp, 10h
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 2E C8: ucomisd xmm1, xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2e
        __asm _emit 0xc8
        lahf
        test ah, 44h
        ; Exact mapped bytes 7A 15: jp 0x5885974f
        __asm _emit 0x7a
        __asm _emit 0x15
        mov eax, dword ptr [ebp + 10h]
        ; Exact mapped bytes F2 0F 11 45 F8: movsd qword ptr [ebp - 8], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf8
        fld qword ptr [ebp - 8]
        mov dword ptr [eax], 0
        mov esp, ebp
        pop ebp
        ret
        mov edx, dword ptr [ebp + 0ch]
        xor eax, eax
        mov ecx, edx
        and ecx, 7ff00000h
        or eax, ecx
        ; Exact mapped bytes 0F 85 92 00 00 00: jne 0x588597f6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov eax, edx
        and eax, 0fffffh
        or ecx, eax
        ; Exact mapped bytes 0F 84 80 00 00 00: je 0x588597f6
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        xor ebx, ebx
        ; Exact mapped bytes F2 0F 11 4D F0: movsd qword ptr [ebp - 0x10], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4d
        __asm _emit 0xf0
        ; Exact mapped bytes 66 0F 2F C1: comisd xmm0, xmm1
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x2f
        __asm _emit 0xc1
        mov edx, dword ptr [ebp - 10h]
        push esi
        push edi
        mov edi, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], 0
        seta bl
        and edi, 0fffffh
        bsr esi, edi
        setne al
        test al, al
        ; Exact mapped bytes 74 05: je 0x588597a9
        __asm _emit 0x74
        __asm _emit 0x05
        add esi, 20h
        ; Exact mapped bytes EB 03: jmp 0x588597ac
        __asm _emit 0xeb
        __asm _emit 0x03
        bsr esi, edx
        mov ecx, 34h
        mov eax, edx
        sub ecx, esi
        mov edx, edi
        ; Exact mapped bytes E8 04 39 02 00: call 0x5887d0c0
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x39
        __asm _emit 0x02
        __asm _emit 0x00
        and edx, 0ffefffffh
        test ebx, ebx
        ; Exact mapped bytes 74 06: je 0x588597cc
        __asm _emit 0x74
        __asm _emit 0x06
        or edx, 80000000h
        mov dword ptr [ebp + 0ch], edx
        lea edx, [esi - 431h]
        mov dword ptr [ebp + 8], eax
        ; Exact mapped bytes F2 0F 10 45 08: movsd xmm0, qword ptr [ebp + 8]
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x10
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes F2 0F 11 45 F0: movsd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x45
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 0ch]
        pop edi
        and ecx, 0bfefffffh
        pop esi
        or ecx, 3fe00000h
        pop ebx
        ; Exact mapped bytes EB 23: jmp 0x58859819
        __asm _emit 0xeb
        __asm _emit 0x23
        ; Exact mapped bytes F2 0F 11 4D F0: movsd qword ptr [ebp - 0x10], xmm1
        __asm _emit 0xf2
        __asm _emit 0x0f
        __asm _emit 0x11
        __asm _emit 0x4d
        __asm _emit 0xf0
        mov ecx, dword ptr [ebp - 0ch]
        shr edx, 14h
        and ecx, 0bfefffffh
        and edx, 7ffh
        or ecx, 3fe00000h
        sub edx, 3feh
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 4], ecx
        fld qword ptr [ebp - 8]
        mov dword ptr [eax], edx
        mov esp, ebp
        pop ebp
        ret
    }
}
