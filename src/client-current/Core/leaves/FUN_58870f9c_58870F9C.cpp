// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58870F9C .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_58870f9c_58870F9C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push esi
        push edi
        push dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 AB BC FF FF: call 0x5886cc56
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xbc
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, dword ptr [ebp + 0ch]
        mov edx, eax
        mov ecx, dword ptr [ecx + 0ch]
        nop
        test cl, 0c0h
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x58871051
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        xor edi, edi
        mov eax, dword ptr [ecx + 4]
        mov esi, dword ptr [ecx]
        sub esi, eax
        inc eax
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax + 18h]
        dec ecx
        mov dword ptr [eax + 8], ecx
        test esi, esi
        ; Exact mapped bytes 7E 27: jle 0x58871002
        __asm _emit 0x7e
        __asm _emit 0x27
        push dword ptr [ebp + 10h]
        mov eax, dword ptr [ebp + 0ch]
        push esi
        push dword ptr [eax + 4]
        push edx
        ; Exact mapped bytes E8 8E FB FF FF: call 0x58870b79
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        mov edi, eax
        mov ecx, dword ptr [ebp + 0ch]
        cmp edi, esi
        mov al, byte ptr [ebp + 8]
        mov ecx, dword ptr [ecx + 4]
        mov byte ptr [ecx], al
        sete al
        ; Exact mapped bytes EB 68: jmp 0x5887106a
        __asm _emit 0xeb
        __asm _emit 0x68
        cmp edx, -1
        ; Exact mapped bytes 74 1B: je 0x58871022
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp edx, -2
        ; Exact mapped bytes 74 16: je 0x58871022
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, edx
        mov ecx, edx
        and eax, 3fh
        sar ecx, 6
        imul eax, eax, 38h
        add eax, dword ptr [ecx*4 + 589699b0h]
        ; Exact mapped bytes EB 05: jmp 0x58871027
        __asm _emit 0xeb
        __asm _emit 0x05
        mov eax, 58907530h
        test byte ptr [eax + 28h], 20h
        ; Exact mapped bytes 74 C3: je 0x58870ff0
        __asm _emit 0x74
        __asm _emit 0xc3
        push 2
        push edi
        push edi
        push edx
        ; Exact mapped bytes E8 79 02 00 00: call 0x588712b0
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        and eax, edx
        add esp, 10h
        cmp eax, -1
        ; Exact mapped bytes 75 AF: jne 0x58870ff0
        __asm _emit 0x75
        __asm _emit 0xaf
        mov eax, dword ptr [ebp + 0ch]
        push 10h
        pop ecx
        add eax, 0ch
        ; Exact mapped bytes F0 09 08: lock or dword ptr [eax], ecx
        __asm _emit 0xf0
        __asm _emit 0x09
        __asm _emit 0x08
        mov al, 1
        ; Exact mapped bytes EB 19: jmp 0x5887106a
        __asm _emit 0xeb
        __asm _emit 0x19
        push dword ptr [ebp + 10h]
        lea eax, [ebp + 8]
        push 1
        push eax
        push edx
        ; Exact mapped bytes E8 19 FB FF FF: call 0x58870b79
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 10h
        dec eax
        neg eax
        sbb al, al
        inc al
        pop edi
        pop esi
        pop ebp
        ret
    }
}
