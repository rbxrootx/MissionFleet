// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58877623 .. +0x6D bytes.
extern "C" __declspec(naked) void FUN_58877623_58877623() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        xor edx, edx
        push edi
        inc edx
        xor edi, edi
        test esi, esi
        ; Exact mapped bytes 78 4E: js 0x58877685
        __asm _emit 0x78
        __asm _emit 0x4e
        push ebx
        test edx, edx
        ; Exact mapped bytes 74 48: je 0x58877684
        __asm _emit 0x74
        __asm _emit 0x48
        lea eax, [edi + esi]
        cdq
        sub eax, edx
        mov ebx, eax
        mov eax, dword ptr [ebp + 8]
        sar ebx, 1
        imul ecx, ebx, 0ch
        mov dword ptr [ebp - 4], ecx
        push dword ptr [ecx + eax]
        mov eax, dword ptr [ebp + 10h]
        push dword ptr [eax]
        ; Exact mapped bytes E8 54 C6 FF FF: call 0x58873cb0
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, eax
        pop ecx
        pop ecx
        test edx, edx
        ; Exact mapped bytes 75 12: jne 0x58877676
        __asm _emit 0x75
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        add eax, 4
        add ecx, eax
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [eax], ecx
        ; Exact mapped bytes EB 0A: jmp 0x58877680
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes 79 05: jns 0x5887767d
        __asm _emit 0x79
        __asm _emit 0x05
        lea esi, [ebx - 1]
        ; Exact mapped bytes EB 03: jmp 0x58877680
        __asm _emit 0xeb
        __asm _emit 0x03
        lea edi, [ebx + 1]
        cmp edi, esi
        ; Exact mapped bytes 7E B4: jle 0x58877638
        __asm _emit 0x7e
        __asm _emit 0xb4
        pop ebx
        xor eax, eax
        test edx, edx
        pop edi
        sete al
        pop esi
        leave
        ret
    }
}
