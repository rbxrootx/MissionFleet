// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58866574 .. +0x109 bytes.
extern "C" __declspec(naked) void FUN_58866574_58866574() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 0F 84 E3 00 00 00: je 0x5886666c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xe3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, dword ptr [ebp + 0ch]
        test esi, esi
        ; Exact mapped bytes 74 10: je 0x588665a0
        __asm _emit 0x74
        __asm _emit 0x10
        push esi
        push edi
        ; Exact mapped bytes E8 99 2B FF FF: call 0x58859130
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ecx
        cmp eax, esi
        ; Exact mapped bytes 72 18: jb 0x588665b5
        __asm _emit 0x72
        __asm _emit 0x18
        mov byte ptr [edi], 0
        ; Exact mapped bytes E8 CA BE FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xca
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 FC A9 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xa9
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esi
        pop edi
        pop esi
        leave
        ret
        push ebx
        push dword ptr [ebp + 10h]
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 16 17 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x17
        __asm _emit 0xff
        __asm _emit 0xff
        mov al, byte ptr [edi]
        mov ebx, edi
        mov esi, edi
        test al, al
        ; Exact mapped bytes 74 6C: je 0x58866637
        __asm _emit 0x74
        __asm _emit 0x6c
        mov ecx, dword ptr [ebp - 10h]
        movzx edx, al
        mov dword ptr [ebp - 8], edx
        mov dl, byte ptr [edx + ecx + 19h]
        test dl, 4
        ; Exact mapped bytes 74 41: je 0x5886661e
        __asm _emit 0x74
        __asm _emit 0x41
        push 1
        push dword ptr [ecx + 4]
        lea eax, [ebp - 4]
        push 2
        push eax
        push 2
        push ebx
        push 100h
        push dword ptr [ecx + 21ch]
        lea eax, [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 DD BD 00 00: call 0x588723dc
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0xbd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 24h
        test eax, eax
        ; Exact mapped bytes 74 4F: je 0x58866655
        __asm _emit 0x74
        __asm _emit 0x4f
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [esi], cl
        inc esi
        inc ebx
        cmp eax, 1
        ; Exact mapped bytes 7E 07: jle 0x58866619
        __asm _emit 0x7e
        __asm _emit 0x07
        mov byte ptr [esi], ch
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 16: jmp 0x5886662f
        __asm _emit 0xeb
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes EB 12: jmp 0x58866630
        __asm _emit 0xeb
        __asm _emit 0x12
        test dl, 10h
        ; Exact mapped bytes 74 0A: je 0x5886662d
        __asm _emit 0x74
        __asm _emit 0x0a
        mov eax, dword ptr [ebp - 8]
        mov al, byte ptr [eax + ecx + 119h]
        mov byte ptr [esi], al
        inc esi
        inc ebx
        mov al, byte ptr [ebx]
        test al, al
        ; Exact mapped bytes 75 97: jne 0x588665ce
        __asm _emit 0x75
        __asm _emit 0x97
        xor eax, eax
        mov byte ptr [esi], al
        cmp byte ptr [ebp - 0ch], 0
        pop ebx
        ; Exact mapped bytes 0F 84 6B FF FF FF: je 0x588665b1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x6b
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        and dword ptr [ecx + 350h], 0fffffffdh
        ; Exact mapped bytes E9 5C FF FF FF: jmp 0x588665b1
        __asm _emit 0xe9
        __asm _emit 0x5c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes E8 15 BE FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 2ah
        mov byte ptr [edi], 0
        ; Exact mapped bytes E8 07 BE FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        ; Exact mapped bytes EB CF: jmp 0x5886663b
        __asm _emit 0xeb
        __asm _emit 0xcf
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 0F 85 2A FF FF FF: jne 0x588665a0
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        ; Exact mapped bytes E9 34 FF FF FF: jmp 0x588665b1
        __asm _emit 0xe9
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
