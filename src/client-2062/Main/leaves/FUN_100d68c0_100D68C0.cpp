// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x100D68C0 .. +0x110 bytes.
extern "C" __declspec(naked) void FUN_100d68c0_100D68C0() {
    __asm {
        sub esp, 18h
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        mov ecx, 6
        ; Exact mapped bytes 66 8B 45 24: mov ax, word ptr [ebp + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x24
        lea edi, [esp + 10h]
        and eax, 0e5ffh
        or ah, 5
        ; Exact mapped bytes 66 89 45 24: mov word ptr [ebp + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0x24
        ; Exact mapped bytes 8B 15 C4 58 1C 10: mov edx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        xor eax, eax
        mov esi, dword ptr [edx + 0ch]
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        mov ecx, edx
        xor edi, edi
        ; Exact mapped bytes E8 C8 58 F5 FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0x58
        __asm _emit 0xf5
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 0F 8E 9E 00 00 00: jle 0x100d699e
        __asm _emit 0x0f
        __asm _emit 0x8e
        __asm _emit 0x9e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ebx, dword ptr [esp + 2ch]
        cmp edi, 80h
        ; Exact mapped bytes 0F 8D 8E 00 00 00: jge 0x100d699e
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x8e
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        xor ecx, ecx
        mov cl, byte ptr [esi + 330h]
        cmp ecx, ebx
        ; Exact mapped bytes 8B 0D C4 58 1C 10: mov ecx, dword ptr [0x101c58c4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xc4
        __asm _emit 0x58
        __asm _emit 0x1c
        __asm _emit 0x10
        ; Exact mapped bytes 75 6B: jne 0x100d698d
        __asm _emit 0x75
        __asm _emit 0x6b
        cmp esi, dword ptr [ecx + 4]
        ; Exact mapped bytes 75 10: jne 0x100d6937
        __asm _emit 0x75
        __asm _emit 0x10
        ; Exact mapped bytes 8B 15 F4 56 1C 10: mov edx, dword ptr [0x101c56f4]
        __asm _emit 0x8b
        __asm _emit 0x15
        __asm _emit 0xf4
        __asm _emit 0x56
        __asm _emit 0x1c
        __asm _emit 0x10
        mov eax, dword ptr [edx + 21714h]
        test eax, eax
        ; Exact mapped bytes 75 56: jne 0x100d698d
        __asm _emit 0x75
        __asm _emit 0x56
        mov eax, dword ptr [esi + 0e74h]
        mov al, byte ptr [eax + 2]
        and eax, 1fh
        cmp eax, 6
        ; Exact mapped bytes 74 38: je 0x100d6980
        __asm _emit 0x74
        __asm _emit 0x38
        cmp eax, 7
        ; Exact mapped bytes 74 33: je 0x100d6980
        __asm _emit 0x74
        __asm _emit 0x33
        cmp eax, 8
        ; Exact mapped bytes 75 07: jne 0x100d6959
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 29: jmp 0x100d6982
        __asm _emit 0xeb
        __asm _emit 0x29
        cmp eax, 4
        ; Exact mapped bytes 74 1B: je 0x100d6979
        __asm _emit 0x74
        __asm _emit 0x1b
        cmp eax, 5
        ; Exact mapped bytes 74 16: je 0x100d6979
        __asm _emit 0x74
        __asm _emit 0x16
        cmp eax, 3
        ; Exact mapped bytes 75 02: jne 0x100d696a
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 18: jmp 0x100d6982
        __asm _emit 0xeb
        __asm _emit 0x18
        xor edx, edx
        cmp eax, 2
        setne dl
        add edx, 4
        mov eax, edx
        ; Exact mapped bytes EB 09: jmp 0x100d6982
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, 2
        ; Exact mapped bytes EB 02: jmp 0x100d6982
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov edx, dword ptr [esp + eax*4 + 10h]
        lea eax, [esp + eax*4 + 10h]
        inc edx
        mov dword ptr [eax], edx
        mov esi, dword ptr [esi + 78h]
        inc edi
        ; Exact mapped bytes E8 2A 58 F5 FF: call 0x1002c1c0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x58
        __asm _emit 0xf5
        __asm _emit 0xff
        cmp edi, eax
        ; Exact mapped bytes 0F 8C 66 FF FF FF: jl 0x100d6904
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x66
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        lea esi, [ebp + 6ch]
        lea ebx, [esp + 10h]
        mov ebp, 6
        mov edi, dword ptr [ebx]
        mov ecx, dword ptr [esi - 4]
        push edi
        ; Exact mapped bytes E8 6B 8D 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [esi]
        push edi
        ; Exact mapped bytes E8 63 8D 02 00: call 0x100ff720
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0x8d
        __asm _emit 0x02
        __asm _emit 0x00
        add ebx, 4
        add esi, 8
        dec ebp
        ; Exact mapped bytes 75 E4: jne 0x100d69aa
        __asm _emit 0x75
        __asm _emit 0xe4
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 18h
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
