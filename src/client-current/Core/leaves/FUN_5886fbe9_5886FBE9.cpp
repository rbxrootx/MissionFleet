// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886FBE9 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_5886fbe9_5886FBE9() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        mov edx, dword ptr [ebp + 8]
        push ebx
        push esi
        push edi
        cmp edx, 0fde8h
        ; Exact mapped bytes 74 0C: je 0x5886fc09
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp edx, 0fde9h
        ; Exact mapped bytes 74 04: je 0x5886fc09
        __asm _emit 0x74
        __asm _emit 0x04
        xor bl, bl
        ; Exact mapped bytes EB 02: jmp 0x5886fc0b
        __asm _emit 0xeb
        __asm _emit 0x02
        mov bl, 1
        push dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes E8 45 FF FF FF: call 0x5886fb59
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor edi, edi
        test bl, bl
        pop ecx
        pop ecx
        mov ecx, dword ptr [ebp + 24h]
        mov esi, ecx
        cmovne esi, edi
        and dword ptr [ebp - 4], 0
        mov edi, dword ptr [ebp + 20h]
        test bl, bl
        cmovne edi, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 07: je 0x5886fc38
        __asm _emit 0x74
        __asm _emit 0x07
        test ecx, ecx
        ; Exact mapped bytes 74 03: je 0x5886fc38
        __asm _emit 0x74
        __asm _emit 0x03
        and dword ptr [ecx], 0
        push esi
        push edi
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push eax
        push edx
        ; Exact mapped bytes FF 15 90 43 89 58: call dword ptr [0x58894390]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
