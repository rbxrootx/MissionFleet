// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58855F7F .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_58855f7f_58855F7F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov ecx, dword ptr [ebp + 8]
        push esi
        mov eax, dword ptr [ecx + 0ch]
        nop
        shr eax, 0ch
        test al, 1
        ; Exact mapped bytes 75 6E: jne 0x58856001
        __asm _emit 0x75
        __asm _emit 0x6e
        push edi
        push ecx
        ; Exact mapped bytes E8 BC 6C 01 00: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        pop ecx
        mov ecx, 58907530h
        cmp eax, -1
        ; Exact mapped bytes 74 1B: je 0x58855fc0
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp eax, -2
        ; Exact mapped bytes 74 16: je 0x58855fc0
        __asm _emit 0x74
        __asm _emit 0x16
        mov esi, eax
        mov edx, eax
        and esi, 3fh
        sar edx, 6
        imul edi, esi, 38h
        add edi, dword ptr [edx*4 + 589699b0h]
        ; Exact mapped bytes EB 0C: jmp 0x58855fcc
        __asm _emit 0xeb
        __asm _emit 0x0c
        mov edx, eax
        mov esi, eax
        sar edx, 6
        mov edi, ecx
        and esi, 3fh
        cmp byte ptr [edi + 29h], 0
        pop edi
        ; Exact mapped bytes 75 1A: jne 0x58855fed
        __asm _emit 0x75
        __asm _emit 0x1a
        cmp eax, -1
        ; Exact mapped bytes 74 0F: je 0x58855fe7
        __asm _emit 0x74
        __asm _emit 0x0f
        cmp eax, -2
        ; Exact mapped bytes 74 0A: je 0x58855fe7
        __asm _emit 0x74
        __asm _emit 0x0a
        imul ecx, esi, 38h
        add ecx, dword ptr [edx*4 + 589699b0h]
        test byte ptr [ecx + 2dh], 1
        ; Exact mapped bytes 74 14: je 0x58856001
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes E8 7D C4 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0xc4
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 AE AF FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xaf
        __asm _emit 0xff
        __asm _emit 0xff
        xor al, al
        ; Exact mapped bytes EB 02: jmp 0x58856003
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        pop esi
        pop ebp
        ret
    }
}
