// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58875CC5 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_58875cc5_58875CC5() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 75 15: jne 0x58875cea
        __asm _emit 0x75
        __asm _emit 0x15
        ; Exact mapped bytes E8 95 C7 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 C6 B2 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 73: jmp 0x58875d5d
        __asm _emit 0xeb
        __asm _emit 0x73
        push ebx
        push esi
        push dword ptr [ebp + 10h]
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E0 1F FE FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        xor esi, esi
        cmp dword ptr [eax + 8], esi
        ; Exact mapped bytes 74 46: je 0x58875d47
        __asm _emit 0x74
        __asm _emit 0x46
        mov ebx, dword ptr [ebp + 0ch]
        or esi, 0ffffffffh
        mov edx, esi
        test ebx, ebx
        ; Exact mapped bytes 75 08: jne 0x58875d15
        __asm _emit 0x75
        __asm _emit 0x08
        cmp byte ptr [edi], bl
        ; Exact mapped bytes 74 36: je 0x58875d47
        __asm _emit 0x74
        __asm _emit 0x36
        mov cl, byte ptr [edi]
        ; Exact mapped bytes EB 08: jmp 0x58875d1d
        __asm _emit 0xeb
        __asm _emit 0x08
        mov al, byte ptr [edi]
        mov cl, al
        test al, al
        ; Exact mapped bytes 74 1A: je 0x58875d37
        __asm _emit 0x74
        __asm _emit 0x1a
        lea eax, [ebp - 0ch]
        inc edi
        push eax
        push edx
        push ecx
        ; Exact mapped bytes E8 74 5F 00 00: call 0x5887bc9d
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x5f
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov edx, eax
        mov eax, ebx
        dec ebx
        test eax, eax
        ; Exact mapped bytes 75 D4: jne 0x58875d09
        __asm _emit 0x75
        __asm _emit 0xd4
        ; Exact mapped bytes EB 12: jmp 0x58875d49
        __asm _emit 0xeb
        __asm _emit 0x12
        ; Exact mapped bytes E8 33 C7 FE FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 64 B2 FD FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xb2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, esi
        cmp byte ptr [ebp - 4], 0
        pop esi
        pop ebx
        ; Exact mapped bytes 74 0A: je 0x58875d5b
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov eax, edx
        pop edi
        leave
        ret
    }
}
