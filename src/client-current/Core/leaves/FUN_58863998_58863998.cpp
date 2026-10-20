// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58863998 .. +0x104 bytes.
extern "C" __declspec(naked) void FUN_58863998_58863998() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push esi
        mov esi, dword ptr [ebp + 0ch]
        lea eax, [ebp + 10h]
        push edi
        mov edi, dword ptr [ebp + 8]
        xor edx, edx
        mov dword ptr [ebp - 10h], esi
        mov dword ptr [ebp - 0ch], edi
        mov dword ptr [ebp - 8], eax
        mov al, byte ptr [edi]
        cmp al, byte ptr [edx + 588c4208h]
        ; Exact mapped bytes 74 08: je 0x588639c8
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, byte ptr [edx + 588c420ch]
        ; Exact mapped bytes 75 47: jne 0x58863a0f
        __asm _emit 0x75
        __asm _emit 0x47
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax]
        inc eax
        inc edx
        mov dword ptr [esi], eax
        mov byte ptr [ebp - 4], cl
        mov byte ptr [edi], cl
        cmp edx, 3
        ; Exact mapped bytes 75 DC: jne 0x588639b6
        __asm _emit 0x75
        __asm _emit 0xdc
        push dword ptr [ebp - 4]
        mov ecx, esi
        ; Exact mapped bytes E8 5C 24 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov dword ptr [ebp + 10h], eax
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        mov byte ptr [edi], cl
        cmp cl, 28h
        ; Exact mapped bytes 74 26: je 0x58863a1b
        __asm _emit 0x74
        __asm _emit 0x26
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 17 01 00 00: call 0x58863b14
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 7
        pop ecx
        push 4
        test al, al
        pop edx
        cmovne ecx, edx
        mov eax, ecx
        ; Exact mapped bytes E9 89 00 00 00: jmp 0x58863a98
        __asm _emit 0xe9
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 FD 00 00 00: call 0x58863b14
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 7
        ; Exact mapped bytes EB 7C: jmp 0x58863a97
        __asm _emit 0xeb
        __asm _emit 0x7c
        mov eax, dword ptr [esi]
        push esi
        push edi
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        mov byte ptr [edi], cl
        ; Exact mapped bytes E8 AD 00 00 00: call 0x58863ad8
        __asm _emit 0xe8
        __asm _emit 0xad
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 0F: je 0x58863a40
        __asm _emit 0x74
        __asm _emit 0x0f
        movzx eax, byte ptr [edi]
        mov ecx, esi
        push eax
        ; Exact mapped bytes E8 04 24 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x24
        __asm _emit 0xff
        __asm _emit 0xff
        push 5
        ; Exact mapped bytes EB 57: jmp 0x58863a97
        __asm _emit 0xeb
        __asm _emit 0x57
        push esi
        push edi
        ; Exact mapped bytes E8 55 00 00 00: call 0x58863a9c
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dl, byte ptr [edi]
        pop ecx
        pop ecx
        test al, al
        ; Exact mapped bytes 74 0C: je 0x58863a5b
        __asm _emit 0x74
        __asm _emit 0x0c
        push edx
        mov ecx, esi
        ; Exact mapped bytes E8 E9 23 FF FF: call 0x58855e40
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        push 6
        ; Exact mapped bytes EB 3C: jmp 0x58863a97
        __asm _emit 0xeb
        __asm _emit 0x3c
        cmp dl, 29h
        ; Exact mapped bytes 74 35: je 0x58863a95
        __asm _emit 0x74
        __asm _emit 0x35
        test dl, dl
        ; Exact mapped bytes 74 91: je 0x588639f5
        __asm _emit 0x74
        __asm _emit 0x91
        mov al, dl
        sub al, 30h
        cmp al, 9
        ; Exact mapped bytes 76 19: jbe 0x58863a85
        __asm _emit 0x76
        __asm _emit 0x19
        mov al, dl
        sub al, 61h
        cmp al, 19h
        ; Exact mapped bytes 76 11: jbe 0x58863a85
        __asm _emit 0x76
        __asm _emit 0x11
        mov al, dl
        sub al, 41h
        cmp al, 19h
        ; Exact mapped bytes 76 09: jbe 0x58863a85
        __asm _emit 0x76
        __asm _emit 0x09
        cmp dl, 5fh
        ; Exact mapped bytes 0F 85 70 FF FF FF: jne 0x588639f5
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [esi]
        mov cl, byte ptr [eax]
        inc eax
        mov dword ptr [esi], eax
        mov dl, cl
        mov byte ptr [edi], cl
        cmp cl, 29h
        ; Exact mapped bytes 75 CB: jne 0x58863a60
        __asm _emit 0x75
        __asm _emit 0xcb
        push 4
        pop eax
        pop edi
        pop esi
        leave
        ret
    }
}
