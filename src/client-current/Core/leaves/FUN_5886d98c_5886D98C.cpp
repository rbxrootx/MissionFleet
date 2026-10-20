// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5886D98C .. +0x180 bytes.
extern "C" __declspec(naked) void FUN_5886d98c_5886D98C() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov edi, dword ptr [ebp + 0ch]
        test edi, edi
        ; Exact mapped bytes 75 24: jne 0x5886d9c1
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp + 30h]
        push 16h
        pop esi
        push ecx
        mov byte ptr [ecx + 1ch], 1
        mov dword ptr [ecx + 18h], esi
        xor ebx, ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        ; Exact mapped bytes E8 77 35 FE FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x35
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 18h
        mov eax, esi
        ; Exact mapped bytes E9 46 01 00 00: jmp 0x5886db07
        __asm _emit 0xe9
        __asm _emit 0x46
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 77 10: ja 0x5886d9d7
        __asm _emit 0x77
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 30h]
        push 16h
        pop esi
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], esi
        ; Exact mapped bytes EB D4: jmp 0x5886d9ab
        __asm _emit 0xeb
        __asm _emit 0xd4
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 74 EA: je 0x5886d9c7
        __asm _emit 0x74
        __asm _emit 0xea
        xor ebx, ebx
        cmp dword ptr [ebp + 18h], ebx
        ; Exact mapped bytes 77 10: ja 0x5886d9f4
        __asm _emit 0x77
        __asm _emit 0x10
        mov eax, dword ptr [ebp + 30h]
        push 16h
        pop esi
        push eax
        mov byte ptr [eax + 1ch], 1
        mov dword ptr [eax + 18h], esi
        ; Exact mapped bytes EB B9: jmp 0x5886d9ad
        __asm _emit 0xeb
        __asm _emit 0xb9
        mov esi, dword ptr [ebp + 1ch]
        cmp esi, 41h
        ; Exact mapped bytes 74 12: je 0x5886da0e
        __asm _emit 0x74
        __asm _emit 0x12
        cmp esi, 45h
        ; Exact mapped bytes 74 0D: je 0x5886da0e
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp esi, 46h
        ; Exact mapped bytes 74 08: je 0x5886da0e
        __asm _emit 0x74
        __asm _emit 0x08
        mov byte ptr [ebp - 4], bl
        cmp esi, 47h
        ; Exact mapped bytes 75 04: jne 0x5886da12
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp + 24h]
        mov eax, ecx
        and eax, 8
        or eax, ebx
        ; Exact mapped bytes 75 41: jne 0x5886da5f
        __asm _emit 0x75
        __asm _emit 0x41
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B7 F5 FF FF: call 0x5886cfdd
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        mov ecx, eax
        test ecx, ecx
        ; Exact mapped bytes 74 2F: je 0x5886da5c
        __asm _emit 0x74
        __asm _emit 0x2f
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 4], ebx
        ; Exact mapped bytes 7F 0C: jg 0x5886da41
        __asm _emit 0x7f
        __asm _emit 0x0c
        ; Exact mapped bytes 7C 04: jl 0x5886da3b
        __asm _emit 0x7c
        __asm _emit 0x04
        cmp dword ptr [eax], ebx
        ; Exact mapped bytes 73 06: jae 0x5886da41
        __asm _emit 0x73
        __asm _emit 0x06
        mov byte ptr [ebp - 8], 1
        ; Exact mapped bytes EB 03: jmp 0x5886da44
        __asm _emit 0xeb
        __asm _emit 0x03
        mov byte ptr [ebp - 8], bl
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 DC FD FF FF: call 0x5886d830
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        ; Exact mapped bytes E9 AB 00 00 00: jmp 0x5886db07
        __asm _emit 0xe9
        __asm _emit 0xab
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 24h]
        mov eax, ecx
        and eax, 10h
        or eax, ebx
        ; Exact mapped bytes 74 04: je 0x5886da6c
        __asm _emit 0x74
        __asm _emit 0x04
        push 3
        ; Exact mapped bytes EB 02: jmp 0x5886da6e
        __asm _emit 0xeb
        __asm _emit 0x02
        push 2
        and ecx, 20h
        or ecx, ebx
        pop eax
        cmovne ebx, dword ptr [ebp + 2ch]
        cmp esi, 61h
        ; Exact mapped bytes 7F 2B: jg 0x5886daa8
        __asm _emit 0x7f
        __asm _emit 0x2b
        ; Exact mapped bytes 74 0A: je 0x5886da89
        __asm _emit 0x74
        __asm _emit 0x0a
        sub esi, 41h
        ; Exact mapped bytes 74 05: je 0x5886da89
        __asm _emit 0x74
        __asm _emit 0x05
        sub esi, 4
        ; Exact mapped bytes EB 22: jmp 0x5886daab
        __asm _emit 0xeb
        __asm _emit 0x22
        push dword ptr [ebp + 30h]
        push ebx
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 4B F6 FF FF: call 0x5886d0f1
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 5C: jmp 0x5886db04
        __asm _emit 0xeb
        __asm _emit 0x5c
        sub esi, 65h
        push dword ptr [ebp + 30h]
        push ebx
        ; Exact mapped bytes 74 3A: je 0x5886daeb
        __asm _emit 0x74
        __asm _emit 0x3a
        sub esi, 1
        ; Exact mapped bytes 74 1B: je 0x5886dad1
        __asm _emit 0x74
        __asm _emit 0x1b
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 9A FC FF FF: call 0x5886d769
        __asm _emit 0xe8
        __asm _emit 0x9a
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 33: jmp 0x5886db04
        __asm _emit 0xeb
        __asm _emit 0x33
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1A FB FF FF: call 0x5886d600
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 20h
        ; Exact mapped bytes EB 1C: jmp 0x5886db07
        __asm _emit 0xeb
        __asm _emit 0x1c
        push eax
        push dword ptr [ebp - 4]
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 18h]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push edi
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 F9 FF FF: call 0x5886d42d
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 28h
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
