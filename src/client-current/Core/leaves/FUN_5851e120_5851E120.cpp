// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5851E120 .. +0x94 bytes.
extern "C" __declspec(naked) void FUN_5851e120_5851E120() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        ; Exact mapped bytes E8 45 19 FB FF: call 0x584cfa70
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 74 6A: je 0x5851e19c
        __asm _emit 0x74
        __asm _emit 0x6a
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 14h], 0
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 76 46: jbe 0x5851e197
        __asm _emit 0x76
        __asm _emit 0x46
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 66 8B 11: mov dx, word ptr [ecx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x11
        ; Exact mapped bytes 66 89 55 FE: mov word ptr [ebp - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfe
        mov eax, dword ptr [ebp - 10h]
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        ; Exact mapped bytes 66 89 4D FC: mov word ptr [ebp - 4], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 66 8B 55 FE: mov dx, word ptr [ebp - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x55
        __asm _emit 0xfe
        ; Exact mapped bytes 66 3B 55 FC: cmp dx, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x55
        __asm _emit 0xfc
        ; Exact mapped bytes 75 0E: jne 0x5851e17d
        __asm _emit 0x75
        __asm _emit 0x0e
        sub dword ptr [ebp - 8], 1
        add dword ptr [ebp - 0ch], 2
        add dword ptr [ebp - 10h], 2
        ; Exact mapped bytes EB CE: jmp 0x5851e14b
        __asm _emit 0xeb
        __asm _emit 0xce
        ; Exact mapped bytes 66 8B 45 FE: mov ax, word ptr [ebp - 2]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xfe
        ; Exact mapped bytes 66 3B 45 FC: cmp ax, word ptr [ebp - 4]
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0x45
        __asm _emit 0xfc
        ; Exact mapped bytes 73 09: jae 0x5851e190
        __asm _emit 0x73
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0ffffffffh
        ; Exact mapped bytes EB 07: jmp 0x5851e197
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes EB 14: jmp 0x5851e1b0
        __asm _emit 0xeb
        __asm _emit 0x14
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 93 00 00 00: call 0x5851e240
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
