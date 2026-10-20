// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58856513 .. +0xBF bytes.
extern "C" __declspec(naked) void FUN_58856513_58856513() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, dword ptr [ebp + 10h]
        xor ecx, ecx
        mov edx, dword ptr [ebp + 0ch]
        push ebx
        mov ebx, dword ptr [ebp + 8]
        push esi
        mov esi, eax
        mov dword ptr [ebp - 8], eax
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp byte ptr [ebp + 1ch], cl
        ; Exact mapped bytes 74 14: je 0x5885654a
        __asm _emit 0x74
        __asm _emit 0x14
        inc ecx
        mov byte ptr [eax], 2dh
        neg ebx
        mov dword ptr [ebp - 4], ecx
        lea esi, [eax + 1]
        adc edx, 0
        mov dword ptr [ebp - 8], esi
        neg edx
        mov dword ptr [ebp - 10h], esi
        mov esi, dword ptr [ebp - 8]
        push ebx
        push 0
        push dword ptr [ebp + 18h]
        mov edi, esi
        push edx
        push ebx
        ; Exact mapped bytes E8 C1 6A 02 00: call 0x5887d020
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x6a
        __asm _emit 0x02
        __asm _emit 0x00
        mov dword ptr [ebp - 8], ebx
        pop ebx
        nop
        mov ebx, eax
        lea eax, [esi + 1]
        mov dword ptr [ebp - 8], eax
        push 9
        pop eax
        cmp eax, ecx
        sbb al, al
        and al, 27h
        add al, 30h
        add al, cl
        mov byte ptr [esi], al
        mov eax, dword ptr [ebp - 4]
        inc eax
        mov dword ptr [ebp - 4], eax
        test edx, edx
        ; Exact mapped bytes 75 04: jne 0x5885658a
        __asm _emit 0x75
        __asm _emit 0x04
        test ebx, ebx
        ; Exact mapped bytes 74 0C: je 0x58856596
        __asm _emit 0x74
        __asm _emit 0x0c
        mov ecx, dword ptr [ebp - 8]
        mov esi, ecx
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 72 BC: jb 0x58856550
        __asm _emit 0x72
        __asm _emit 0xbc
        ; Exact mapped bytes EB 03: jmp 0x58856599
        __asm _emit 0xeb
        __asm _emit 0x03
        mov ecx, dword ptr [ebp - 8]
        mov esi, dword ptr [ebp - 10h]
        cmp eax, dword ptr [ebp + 14h]
        ; Exact mapped bytes 72 19: jb 0x588565ba
        __asm _emit 0x72
        __asm _emit 0x19
        mov eax, dword ptr [ebp + 10h]
        mov byte ptr [eax], 0
        ; Exact mapped bytes E8 C3 BE 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xbe
        __asm _emit 0x00
        __asm _emit 0x00
        push 22h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 F5 A9 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0xa9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes EB 13: jmp 0x588565cd
        __asm _emit 0xeb
        __asm _emit 0x13
        mov byte ptr [ecx], 0
        mov al, byte ptr [esi]
        mov cl, byte ptr [edi]
        mov byte ptr [edi], al
        dec edi
        mov byte ptr [esi], cl
        inc esi
        cmp esi, edi
        ; Exact mapped bytes 72 F2: jb 0x588565bd
        __asm _emit 0x72
        __asm _emit 0xf2
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
