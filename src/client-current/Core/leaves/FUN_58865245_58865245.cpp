// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58865245 .. +0x13D bytes.
extern "C" __declspec(naked) void FUN_58865245_58865245() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 75 07: jne 0x5886525c
        __asm _emit 0x75
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 23 01 00 00: jmp 0x5886537f
        __asm _emit 0xe9
        __asm _emit 0x23
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        cmp edi, 2
        ; Exact mapped bytes 74 1B: je 0x5886527d
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp edi, 1
        ; Exact mapped bytes 74 16: je 0x5886527d
        __asm _emit 0x74
        __asm _emit 0x16
        ; Exact mapped bytes E8 03 D2 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xd2
        __asm _emit 0xff
        __asm _emit 0xff
        push 16h
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes E8 35 BD FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xbd
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, esi
        ; Exact mapped bytes E9 01 01 00 00: jmp 0x5886537e
        __asm _emit 0xe9
        __asm _emit 0x01
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push ebx
        ; Exact mapped bytes E8 5C FE 00 00: call 0x588750df
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfe
        __asm _emit 0x00
        __asm _emit 0x00
        push 104h
        mov ebx, 58969790h
        xor esi, esi
        push ebx
        push esi
        ; Exact mapped bytes E8 2C F8 00 00: call 0x58874ac2
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 89 1D 58 9C 96 58: mov dword ptr [0x58969c58], ebx
        __asm _emit 0x89
        __asm _emit 0x1d
        __asm _emit 0x58
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        add esp, 0ch
        ; Exact mapped bytes 8B 1D 68 9C 96 58: mov ebx, dword ptr [0x58969c68]
        __asm _emit 0x8b
        __asm _emit 0x1d
        __asm _emit 0x68
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        test ebx, ebx
        ; Exact mapped bytes 74 05: je 0x588652ae
        __asm _emit 0x74
        __asm _emit 0x05
        cmp byte ptr [ebx], 0
        ; Exact mapped bytes 75 05: jne 0x588652b3
        __asm _emit 0x75
        __asm _emit 0x05
        mov ebx, 58969790h
        lea eax, [ebp - 0ch]
        mov dword ptr [ebp - 4], esi
        push eax
        lea eax, [ebp - 4]
        mov dword ptr [ebp - 0ch], esi
        push eax
        push esi
        push esi
        push ebx
        ; Exact mapped bytes E8 B9 00 00 00: call 0x58865382
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 1
        push dword ptr [ebp - 0ch]
        push dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1E 02 00 00: call 0x588654f4
        __asm _emit 0xe8
        __asm _emit 0x1e
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        add esp, 20h
        test esi, esi
        ; Exact mapped bytes 75 0C: jne 0x588652eb
        __asm _emit 0x75
        __asm _emit 0x0c
        ; Exact mapped bytes E8 8B D1 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        push 0ch
        pop esi
        mov dword ptr [eax], esi
        ; Exact mapped bytes EB 2F: jmp 0x5886531a
        __asm _emit 0xeb
        __asm _emit 0x2f
        lea eax, [ebp - 0ch]
        push eax
        lea eax, [ebp - 4]
        push eax
        mov eax, dword ptr [ebp - 4]
        lea eax, [esi + eax*4]
        push eax
        push esi
        push ebx
        ; Exact mapped bytes E8 81 00 00 00: call 0x58865382
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 14h
        cmp edi, 1
        ; Exact mapped bytes 75 1C: jne 0x58865325
        __asm _emit 0x75
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 4]
        dec eax
        ; Exact mapped bytes 89 35 60 9C 96 58: mov dword ptr [0x58969c60], esi
        __asm _emit 0x89
        __asm _emit 0x35
        __asm _emit 0x60
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes A3 5C 9C 96 58: mov dword ptr [0x58969c5c], eax
        __asm _emit 0xa3
        __asm _emit 0x5c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        xor esi, esi
        push 0
        ; Exact mapped bytes E8 EF 78 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, esi
        ; Exact mapped bytes EB 57: jmp 0x5886537c
        __asm _emit 0xeb
        __asm _emit 0x57
        lea eax, [ebp - 8]
        xor ebx, ebx
        push eax
        push esi
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes E8 83 F7 00 00: call 0x58874ab7
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xf7
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, eax
        pop ecx
        pop ecx
        test edi, edi
        ; Exact mapped bytes 74 0A: je 0x58865346
        __asm _emit 0x74
        __asm _emit 0x0a
        push dword ptr [ebp - 8]
        ; Exact mapped bytes E8 CC 78 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 2A: jmp 0x58865370
        __asm _emit 0xeb
        __asm _emit 0x2a
        mov edx, dword ptr [ebp - 8]
        mov ecx, ebx
        mov eax, edx
        cmp dword ptr [edx], ebx
        ; Exact mapped bytes 74 08: je 0x58865359
        __asm _emit 0x74
        __asm _emit 0x08
        lea eax, [eax + 4]
        inc ecx
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 75 F8: jne 0x58865351
        __asm _emit 0x75
        __asm _emit 0xf8
        push ebx
        ; Exact mapped bytes 89 0D 5C 9C 96 58: mov dword ptr [0x58969c5c], ecx
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x5c
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes 89 15 60 9C 96 58: mov dword ptr [0x58969c60], edx
        __asm _emit 0x89
        __asm _emit 0x15
        __asm _emit 0x60
        __asm _emit 0x9c
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 A2 78 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, ebx
        pop ecx
        push esi
        mov dword ptr [ebp - 8], ebx
        ; Exact mapped bytes E8 96 78 00 00: call 0x5886cc10
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x78
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, edi
        pop ecx
        pop ebx
        pop esi
        pop edi
        leave
        ret
    }
}
