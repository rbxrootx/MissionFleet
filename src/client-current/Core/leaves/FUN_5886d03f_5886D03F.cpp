// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D03F .. +0xB2 bytes.
extern "C" __declspec(naked) void FUN_5886d03f_5886D03F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, dword ptr [ebp + 8]
        push ebx
        ; Exact mapped bytes 0F BF 5D 14: movsx ebx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x5d
        __asm _emit 0x14
        push esi
        mov esi, dword ptr [eax + 4]
        mov ecx, ebx
        push edi
        mov edi, dword ptr [eax]
        mov edx, esi
        and edx, dword ptr [ebp + 10h]
        mov eax, edi
        and eax, dword ptr [ebp + 0ch]
        and edx, 0fffffh
        ; Exact mapped bytes E8 E6 01 01 00: call 0x5887d250
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        push 8
        movzx eax, ax
        pop ecx
        ; Exact mapped bytes 66 3B C1: cmp ax, cx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc1
        ; Exact mapped bytes 77 75: ja 0x5886d0ea
        __asm _emit 0x77
        __asm _emit 0x75
        ; Exact mapped bytes 73 04: jae 0x5886d07b
        __asm _emit 0x73
        __asm _emit 0x04
        xor al, al
        ; Exact mapped bytes EB 71: jmp 0x5886d0ec
        __asm _emit 0xeb
        __asm _emit 0x71
        xor edx, edx
        xor ecx, ecx
        mov eax, ebx
        xor ebx, ebx
        add eax, ebx
        bts edx, eax
        cmp eax, 20h
        cmovae ecx, edx
        xor edx, ecx
        cmp eax, 40h
        cmovae ecx, edx
        add edx, -1
        adc ecx, -1
        and edx, edi
        and ecx, esi
        and ecx, 0fffffh
        or edx, ecx
        ; Exact mapped bytes 75 40: jne 0x5886d0ea
        __asm _emit 0x75
        __asm _emit 0x40
        ; Exact mapped bytes 66 83 7D 14 30: cmp word ptr [ebp + 0x14], 0x30
        __asm _emit 0x66
        __asm _emit 0x83
        __asm _emit 0x7d
        __asm _emit 0x14
        __asm _emit 0x30
        ; Exact mapped bytes 74 24: je 0x5886d0d5
        __asm _emit 0x74
        __asm _emit 0x24
        ; Exact mapped bytes 0F BF 4D 14: movsx ecx, word ptr [ebp + 0x14]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x4d
        __asm _emit 0x14
        shrd edi, esi, 4
        and edi, dword ptr [ebp + 0ch]
        shr esi, 4
        mov eax, edi
        and esi, dword ptr [ebp + 10h]
        and esi, 0ffffh
        mov edx, esi
        ; Exact mapped bytes E8 7F 01 01 00: call 0x5887d250
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        mov bl, al
        ; Exact mapped bytes EB 0E: jmp 0x5886d0e3
        __asm _emit 0xeb
        __asm _emit 0x0e
        and esi, 7ff00000h
        mov eax, ebx
        or eax, esi
        ; Exact mapped bytes 74 02: je 0x5886d0e3
        __asm _emit 0x74
        __asm _emit 0x02
        mov bl, 1
        and bl, 1
        mov al, bl
        ; Exact mapped bytes EB 02: jmp 0x5886d0ec
        __asm _emit 0xeb
        __asm _emit 0x02
        mov al, 1
        pop edi
        pop esi
        pop ebx
        pop ebp
        ret
    }
}
