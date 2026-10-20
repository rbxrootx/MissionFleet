// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58850922 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_58850922_58850922() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        mov eax, dword ptr [ebp + 8]
        push edi
        lea eax, [eax*4 + 589695ech]
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [eax]
        nop
        or edi, 0ffffffffh
        cmp eax, edi
        ; Exact mapped bytes 75 04: jne 0x58850943
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 56: jmp 0x58850999
        __asm _emit 0xeb
        __asm _emit 0x56
        test eax, eax
        ; Exact mapped bytes 75 52: jne 0x58850999
        __asm _emit 0x75
        __asm _emit 0x52
        push ebx
        mov ebx, dword ptr [ebp + 10h]
        push esi
        ; Exact mapped bytes EB 3D: jmp 0x5885098b
        __asm _emit 0xeb
        __asm _emit 0x3d
        mov ecx, dword ptr [ebx]
        mov dword ptr [ebp - 4], ecx
        lea eax, [ecx*4 + 589695e0h]
        mov esi, dword ptr [eax]
        nop
        test esi, esi
        ; Exact mapped bytes 74 06: je 0x58850967
        __asm _emit 0x74
        __asm _emit 0x06
        cmp esi, edi
        ; Exact mapped bytes 75 46: jne 0x588509ab
        __asm _emit 0x75
        __asm _emit 0x46
        ; Exact mapped bytes EB 21: jmp 0x58850988
        __asm _emit 0xeb
        __asm _emit 0x21
        push dword ptr [ecx*4 + 588c2fach]
        ; Exact mapped bytes E8 4F 00 00 00: call 0x588509c2
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov esi, eax
        pop ecx
        lea ecx, [edx*4 + 589695e0h]
        test esi, esi
        ; Exact mapped bytes 75 18: jne 0x5885099c
        __asm _emit 0x75
        __asm _emit 0x18
        mov eax, edi
        xchg dword ptr [ecx], eax
        add ebx, 4
        cmp ebx, dword ptr [ebp + 14h]
        ; Exact mapped bytes 75 BE: jne 0x5885094e
        __asm _emit 0x75
        __asm _emit 0xbe
        mov edx, dword ptr [ebp - 8]
        xchg dword ptr [edx], edi
        xor eax, eax
        pop esi
        pop ebx
        pop edi
        leave
        ret
        mov eax, esi
        xchg dword ptr [ecx], eax
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x588509ab
        __asm _emit 0x74
        __asm _emit 0x07
        push esi
        ; Exact mapped bytes FF 15 E8 42 89 58: call dword ptr [0x588942e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        push dword ptr [ebp + 0ch]
        push esi
        ; Exact mapped bytes FF 15 DC 42 89 58: call dword ptr [0x588942dc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xdc
        __asm _emit 0x42
        __asm _emit 0x89
        __asm _emit 0x58
        test eax, eax
        ; Exact mapped bytes 74 D7: je 0x58850990
        __asm _emit 0x74
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 8]
        mov ecx, eax
        xchg dword ptr [edx], ecx
        ; Exact mapped bytes EB D5: jmp 0x58850997
        __asm _emit 0xeb
        __asm _emit 0xd5
    }
}
