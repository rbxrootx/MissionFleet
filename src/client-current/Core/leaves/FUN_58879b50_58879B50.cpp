// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58879B50 .. +0xF9 bytes.
extern "C" __declspec(naked) void FUN_58879b50_58879B50() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        xor ecx, ecx
        test edi, edi
        ; Exact mapped bytes 75 22: jne 0x58879b83
        __asm _emit 0x75
        __asm _emit 0x22
        mov eax, dword ptr [ebp + 20h]
        push 16h
        pop esi
        push eax
        push ecx
        push ecx
        push ecx
        push ecx
        push ecx
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], esi
        ; Exact mapped bytes E8 B5 73 FD FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 18h
        mov eax, esi
        ; Exact mapped bytes E9 C2 00 00 00: jmp 0x58879c45
        __asm _emit 0xe9
        __asm _emit 0xc2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        cmp dword ptr [ebp + 0ch], ecx
        ; Exact mapped bytes 76 1D: jbe 0x58879ba6
        __asm _emit 0x76
        __asm _emit 0x1d
        mov edx, dword ptr [ebp + 10h]
        xor eax, eax
        test edx, edx
        mov byte ptr [edi], cl
        cmovg eax, edx
        inc eax
        cmp dword ptr [ebp + 0ch], eax
        ; Exact mapped bytes 77 04: ja 0x58879b9f
        __asm _emit 0x77
        __asm _emit 0x04
        push 22h
        ; Exact mapped bytes EB 09: jmp 0x58879ba8
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ebx, dword ptr [ebp + 14h]
        test ebx, ebx
        ; Exact mapped bytes 75 1F: jne 0x58879bc5
        __asm _emit 0x75
        __asm _emit 0x1f
        push 16h
        mov eax, dword ptr [ebp + 20h]
        pop esi
        push eax
        push ecx
        push ecx
        push ecx
        push ecx
        mov dword ptr [eax + 18h], esi
        push ecx
        mov byte ptr [eax + 1ch], 1
        ; Exact mapped bytes E8 70 73 FD FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x73
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 18h
        mov eax, esi
        ; Exact mapped bytes EB 7F: jmp 0x58879c44
        __asm _emit 0xeb
        __asm _emit 0x7f
        mov eax, dword ptr [ebx + 8]
        lea esi, [edi + 1]
        mov dword ptr [ebp - 4], eax
        mov byte ptr [edi], 30h
        test edx, edx
        ; Exact mapped bytes 7E 16: jle 0x58879beb
        __asm _emit 0x7e
        __asm _emit 0x16
        mov bl, byte ptr [eax]
        test bl, bl
        ; Exact mapped bytes 74 03: je 0x58879bde
        __asm _emit 0x74
        __asm _emit 0x03
        inc eax
        ; Exact mapped bytes EB 02: jmp 0x58879be0
        __asm _emit 0xeb
        __asm _emit 0x02
        mov bl, 30h
        mov byte ptr [esi], bl
        inc esi
        dec edx
        test edx, edx
        ; Exact mapped bytes 7F ED: jg 0x58879bd5
        __asm _emit 0x7f
        __asm _emit 0xed
        mov ebx, dword ptr [ebp + 14h]
        mov byte ptr [esi], cl
        test edx, edx
        ; Exact mapped bytes 78 28: js 0x58879c19
        __asm _emit 0x78
        __asm _emit 0x28
        push dword ptr [ebp + 1ch]
        push dword ptr [ebp + 18h]
        push dword ptr [ebx]
        push eax
        push dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 FE FF FF: call 0x58879ac2
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        test al, al
        ; Exact mapped bytes 74 10: je 0x58879c19
        __asm _emit 0x74
        __asm _emit 0x10
        ; Exact mapped bytes EB 03: jmp 0x58879c0e
        __asm _emit 0xeb
        __asm _emit 0x03
        mov byte ptr [esi], 30h
        dec esi
        mov al, byte ptr [esi]
        cmp al, 39h
        ; Exact mapped bytes 74 F6: je 0x58879c0b
        __asm _emit 0x74
        __asm _emit 0xf6
        inc al
        mov byte ptr [esi], al
        cmp byte ptr [edi], 31h
        ; Exact mapped bytes 75 05: jne 0x58879c23
        __asm _emit 0x75
        __asm _emit 0x05
        inc dword ptr [ebx + 4]
        ; Exact mapped bytes EB 1F: jmp 0x58879c42
        __asm _emit 0xeb
        __asm _emit 0x1f
        lea esi, [edi + 1]
        mov ecx, esi
        lea edx, [ecx + 1]
        mov al, byte ptr [ecx]
        inc ecx
        test al, al
        ; Exact mapped bytes 75 F9: jne 0x58879c2b
        __asm _emit 0x75
        __asm _emit 0xf9
        sub ecx, edx
        lea eax, [ecx + 1]
        push eax
        push esi
        push edi
        ; Exact mapped bytes E8 51 2C FD FF: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x2c
        __asm _emit 0xfd
        __asm _emit 0xff
        add esp, 0ch
        xor eax, eax
        pop ebx
        pop edi
        pop esi
        leave
        ret
    }
}
