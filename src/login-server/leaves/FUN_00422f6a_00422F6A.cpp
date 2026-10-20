// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422F6A .. +0x148 bytes.
extern "C" __declspec(naked) void FUN_00422f6a_00422F6A() {
    __asm {
        push ebp
        mov ebp, esp
        mov eax, 122ch
        ; Exact mapped bytes E8 89 BF FF FF: call 0x41ef00
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0xbf
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [ebp - 98h]
        push ebx
        push eax
        mov dword ptr [ebp - 98h], 94h
        ; Exact mapped bytes FF 15 70 C1 43 00: call dword ptr [0x43c170]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x70
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 1A: je 0x422fad
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp dword ptr [ebp - 88h], 2
        ; Exact mapped bytes 75 11: jne 0x422fad
        __asm _emit 0x75
        __asm _emit 0x11
        cmp dword ptr [ebp - 94h], 5
        ; Exact mapped bytes 72 08: jb 0x422fad
        __asm _emit 0x72
        __asm _emit 0x08
        push 1
        pop eax
        ; Exact mapped bytes E9 02 01 00 00: jmp 0x4230af
        __asm _emit 0xe9
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 122ch]
        push 1090h
        push eax
        push 43fc80h
        ; Exact mapped bytes FF 15 6C C1 43 00: call dword ptr [0x43c16c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0xc1
        __asm _emit 0x43
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 84 D0 00 00 00: je 0x42309c
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xd0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ebx, ebx
        lea ecx, [ebp - 122ch]
        cmp byte ptr [ebp - 122ch], bl
        ; Exact mapped bytes 74 13: je 0x422fef
        __asm _emit 0x74
        __asm _emit 0x13
        mov al, byte ptr [ecx]
        cmp al, 61h
        ; Exact mapped bytes 7C 08: jl 0x422fea
        __asm _emit 0x7c
        __asm _emit 0x08
        cmp al, 7ah
        ; Exact mapped bytes 7F 04: jg 0x422fea
        __asm _emit 0x7f
        __asm _emit 0x04
        sub al, 20h
        mov byte ptr [ecx], al
        inc ecx
        cmp byte ptr [ecx], bl
        ; Exact mapped bytes 75 ED: jne 0x422fdc
        __asm _emit 0x75
        __asm _emit 0xed
        lea eax, [ebp - 122ch]
        push 16h
        push eax
        push 43fc68h
        ; Exact mapped bytes E8 CE 24 00 00: call 0x4254d0
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x24
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 75 08: jne 0x423011
        __asm _emit 0x75
        __asm _emit 0x08
        lea eax, [ebp - 122ch]
        ; Exact mapped bytes EB 49: jmp 0x42305a
        __asm _emit 0xeb
        __asm _emit 0x49
        lea eax, [ebp - 19ch]
        push 104h
        push eax
        push ebx
        ; Exact mapped bytes FF 15 74 C2 43 00: call dword ptr [0x43c274]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        cmp byte ptr [ebp - 19ch], bl
        lea ecx, [ebp - 19ch]
        ; Exact mapped bytes 74 13: je 0x423045
        __asm _emit 0x74
        __asm _emit 0x13
        mov al, byte ptr [ecx]
        cmp al, 61h
        ; Exact mapped bytes 7C 08: jl 0x423040
        __asm _emit 0x7c
        __asm _emit 0x08
        cmp al, 7ah
        ; Exact mapped bytes 7F 04: jg 0x423040
        __asm _emit 0x7f
        __asm _emit 0x04
        sub al, 20h
        mov byte ptr [ecx], al
        inc ecx
        cmp byte ptr [ecx], bl
        ; Exact mapped bytes 75 ED: jne 0x423032
        __asm _emit 0x75
        __asm _emit 0xed
        lea eax, [ebp - 19ch]
        push eax
        lea eax, [ebp - 122ch]
        push eax
        ; Exact mapped bytes E8 C8 16 00 00: call 0x424720
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x16
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        cmp eax, ebx
        ; Exact mapped bytes 74 3E: je 0x42309c
        __asm _emit 0x74
        __asm _emit 0x3e
        push 2ch
        push eax
        ; Exact mapped bytes E8 4A 17 00 00: call 0x4247b0
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x17
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        cmp eax, ebx
        pop ecx
        ; Exact mapped bytes 74 30: je 0x42309c
        __asm _emit 0x74
        __asm _emit 0x30
        inc eax
        mov ecx, eax
        cmp byte ptr [eax], bl
        ; Exact mapped bytes 74 0E: je 0x423081
        __asm _emit 0x74
        __asm _emit 0x0e
        cmp byte ptr [ecx], 3bh
        ; Exact mapped bytes 75 04: jne 0x42307c
        __asm _emit 0x75
        __asm _emit 0x04
        mov byte ptr [ecx], bl
        ; Exact mapped bytes EB 01: jmp 0x42307d
        __asm _emit 0xeb
        __asm _emit 0x01
        inc ecx
        cmp byte ptr [ecx], bl
        ; Exact mapped bytes 75 F2: jne 0x423073
        __asm _emit 0x75
        __asm _emit 0xf2
        push 0ah
        push ebx
        push eax
        ; Exact mapped bytes E8 FD E1 FF FF: call 0x421287
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xe1
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        cmp eax, 2
        ; Exact mapped bytes 74 1D: je 0x4230af
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp eax, 3
        ; Exact mapped bytes 74 18: je 0x4230af
        __asm _emit 0x74
        __asm _emit 0x18
        cmp eax, 1
        ; Exact mapped bytes 74 13: je 0x4230af
        __asm _emit 0x74
        __asm _emit 0x13
        lea eax, [ebp - 4]
        push eax
        ; Exact mapped bytes E8 98 FE FF FF: call 0x422f3d
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp byte ptr [ebp - 4], 6
        pop ecx
        sbb eax, eax
        add eax, 3
        pop ebx
        leave
        ret
    }
}
