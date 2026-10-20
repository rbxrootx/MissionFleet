// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867D0A .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_58867d0a_58867D0A() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov al, byte ptr [ebp + 10h]
        cmp al, 1
        ; Exact mapped bytes 74 2C: je 0x58867d44
        __asm _emit 0x74
        __asm _emit 0x2c
        cmp al, 2
        ; Exact mapped bytes 74 28: je 0x58867d44
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 F8: movlpd qword ptr [ebp - 8], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 0E: je 0x58867d40
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp byte ptr [eax], 0ah
        ; Exact mapped bytes 75 06: jne 0x58867d3d
        __asm _emit 0x75
        __asm _emit 0x06
        add ecx, 1
        adc edx, 0
        inc eax
        ; Exact mapped bytes EB ED: jmp 0x58867d2d
        __asm _emit 0xeb
        __asm _emit 0xed
        mov eax, ecx
        leave
        ret
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        ; Exact mapped bytes 66 0F 13 45 F8: movlpd qword ptr [ebp - 8], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf8
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 11: je 0x58867d6b
        __asm _emit 0x74
        __asm _emit 0x11
        ; Exact mapped bytes 66 83 39 0A: cmp word ptr [ecx], 0xa
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x39
        __asm _emit 0x0a
        ; Exact mapped bytes 75 06: jne 0x58867d66
        __asm _emit 0x75
        __asm _emit 0x06
        add eax, 1
        adc edx, 0
        add ecx, 2
        ; Exact mapped bytes EB EA: jmp 0x58867d55
        __asm _emit 0xeb
        __asm _emit 0xea
        shld edx, eax, 1
        add eax, eax
        leave
        ret
    }
}
