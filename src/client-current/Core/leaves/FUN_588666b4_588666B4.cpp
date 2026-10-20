// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588666B4 .. +0xD2 bytes.
extern "C" __declspec(naked) void FUN_588666b4_588666B4() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push esi
        mov esi, dword ptr [ebp + 8]
        lea ecx, [ebp - 1ch]
        push edi
        push dword ptr [ebp + 14h]
        mov edi, esi
        mov dword ptr [ebp - 0ch], edi
        ; Exact mapped bytes E8 06 16 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 75 04: jne 0x588666dc
        __asm _emit 0x75
        __asm _emit 0x04
        test ecx, ecx
        ; Exact mapped bytes 75 0B: jne 0x588666e7
        __asm _emit 0x75
        __asm _emit 0x0b
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 75 18: jne 0x588666fb
        __asm _emit 0x75
        __asm _emit 0x18
        test ecx, ecx
        ; Exact mapped bytes 74 14: je 0x588666fb
        __asm _emit 0x74
        __asm _emit 0x14
        ; Exact mapped bytes E8 83 BD FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x83
        __asm _emit 0xbd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 B4 A8 FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xa8
        __asm _emit 0xfe
        __asm _emit 0xff
        xor edi, edi
        ; Exact mapped bytes EB 66: jmp 0x58866761
        __asm _emit 0xeb
        __asm _emit 0x66
        mov eax, dword ptr [ebp - 14h]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 0F: jne 0x58866713
        __asm _emit 0x75
        __asm _emit 0x0f
        push ecx
        push edx
        push esi
        ; Exact mapped bytes E8 04 0A 00 00: call 0x58867110
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edi, eax
        ; Exact mapped bytes EB 4E: jmp 0x58866761
        __asm _emit 0xeb
        __asm _emit 0x4e
        test ecx, ecx
        ; Exact mapped bytes 74 4A: je 0x58866761
        __asm _emit 0x74
        __asm _emit 0x4a
        push ebx
        mov al, byte ptr [edx]
        lea edi, [esi + 1]
        mov dword ptr [ebp - 8], edi
        lea ebx, [esi]
        mov edi, dword ptr [ebp - 14h]
        dec ecx
        mov byte ptr [ebp - 1], al
        inc edx
        movzx eax, al
        test byte ptr [eax + edi + 19h], 4
        mov al, byte ptr [ebp - 1]
        mov edi, dword ptr [ebp - 0ch]
        mov byte ptr [esi], al
        mov esi, dword ptr [ebp - 8]
        ; Exact mapped bytes 74 38: je 0x58866777
        __asm _emit 0x74
        __asm _emit 0x38
        test ecx, ecx
        ; Exact mapped bytes 74 3E: je 0x58866781
        __asm _emit 0x74
        __asm _emit 0x3e
        mov al, byte ptr [edx]
        dec ecx
        inc edx
        mov byte ptr [esi], al
        inc esi
        test al, al
        ; Exact mapped bytes 75 2D: jne 0x5886677b
        __asm _emit 0x75
        __asm _emit 0x2d
        mov byte ptr [ebx], al
        test ecx, ecx
        ; Exact mapped bytes 74 0C: je 0x58866760
        __asm _emit 0x74
        __asm _emit 0x0c
        push ecx
        push 0
        push esi
        ; Exact mapped bytes E8 B3 66 FE FF: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x66
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        pop ebx
        cmp byte ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 0A: je 0x58866771
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 1ch]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov eax, edi
        pop edi
        pop esi
        leave
        ret
        test al, al
        ; Exact mapped bytes 74 D5: je 0x58866750
        __asm _emit 0x74
        __asm _emit 0xd5
        test ecx, ecx
        ; Exact mapped bytes 75 99: jne 0x58866718
        __asm _emit 0x75
        __asm _emit 0x99
        ; Exact mapped bytes EB DF: jmp 0x58866760
        __asm _emit 0xeb
        __asm _emit 0xdf
        mov byte ptr [ebx], 0
        ; Exact mapped bytes EB DA: jmp 0x58866760
        __asm _emit 0xeb
        __asm _emit 0xda
    }
}
