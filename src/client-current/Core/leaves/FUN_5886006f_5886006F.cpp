// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886006F .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_5886006f_5886006F() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 57 C0: xorps xmm0, xmm0
        __asm _emit 0x0f
        __asm _emit 0x57
        __asm _emit 0xc0
        push ebx
        push esi
        push edi
        cmp byte ptr [eax + 4], 0
        push 17h
        pop ecx
        push 34h
        pop edx
        cmovne ecx, edx
        ; Exact mapped bytes 66 0F 13 45 F0: movlpd qword ptr [ebp - 0x10], xmm0
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x13
        __asm _emit 0x45
        __asm _emit 0xf0
        mov edx, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp - 0ch]
        mov edi, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        lea esi, [edx + 8]
        add ecx, dword ptr [edx]
        add eax, 8
        add eax, edx
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp - 8], eax
        cmp esi, eax
        ; Exact mapped bytes 74 38: je 0x588600ea
        __asm _emit 0x74
        __asm _emit 0x38
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E1 06 00 00: call 0x5886079b
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        cmp ebx, edx
        ; Exact mapped bytes 77 26: ja 0x588600e4
        __asm _emit 0x77
        __asm _emit 0x26
        ; Exact mapped bytes 72 04: jb 0x588600c4
        __asm _emit 0x72
        __asm _emit 0x04
        cmp edi, eax
        ; Exact mapped bytes 77 20: ja 0x588600e4
        __asm _emit 0x77
        __asm _emit 0x20
        movzx eax, byte ptr [esi]
        inc esi
        mov ecx, dword ptr [ebp - 4]
        shld ebx, edi, 4
        cdq
        shl edi, 4
        add edi, eax
        adc ebx, edx
        sub ecx, 4
        mov dword ptr [ebp - 4], ecx
        cmp esi, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 D0: jne 0x588600b2
        __asm _emit 0x75
        __asm _emit 0xd0
        ; Exact mapped bytes EB 03: jmp 0x588600e7
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov al, 1
        ; Exact mapped bytes EB 0C: jmp 0x588600fa
        __asm _emit 0xeb
        __asm _emit 0x0c
        test al, al
        ; Exact mapped bytes 74 10: je 0x58860102
        __asm _emit 0x74
        __asm _emit 0x10
        mov al, byte ptr [esi]
        inc esi
        test al, al
        sete al
        mov byte ptr [ebp - 4], al
        cmp esi, dword ptr [ebp - 8]
        ; Exact mapped bytes 75 EC: jne 0x588600ee
        __asm _emit 0x75
        __asm _emit 0xec
        push dword ptr [ebp + 0ch]
        movzx eax, byte ptr [edx + 308h]
        push dword ptr [ebp - 4]
        push eax
        push ecx
        push ebx
        push edi
        ; Exact mapped bytes E8 ED DC FF FF: call 0x5885de05
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xdc
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
