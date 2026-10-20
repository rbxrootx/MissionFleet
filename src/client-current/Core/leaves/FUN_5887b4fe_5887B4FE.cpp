// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887B4FE .. +0xD4 bytes.
extern "C" __declspec(naked) void FUN_5887b4fe_5887B4FE() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        mov eax, 0ffffh
        sub esp, 14h
        ; Exact mapped bytes 66 39 45 08: cmp word ptr [ebp + 8], ax
        __asm _emit 0x66
        __asm _emit 0x39
        __asm _emit 0x45
        __asm _emit 0x08
        ; Exact mapped bytes 0F 84 BB 00 00 00: je 0x5887b5d0
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        push dword ptr [ebp + 0ch]
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 B6 C7 FD FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xc7
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 10h]
        mov esi, 100h
        ; Exact mapped bytes 66 8B 45 08: mov ax, word ptr [ebp + 8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0x08
        cmp dword ptr [ecx + 8], 0fde9h
        ; Exact mapped bytes 75 29: jne 0x5887b55f
        __asm _emit 0x75
        __asm _emit 0x29
        lea edx, [esi - 80h]
        ; Exact mapped bytes 66 3B C2: cmp ax, dx
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc2
        ; Exact mapped bytes 73 55: jae 0x5887b593
        __asm _emit 0x73
        __asm _emit 0x55
        movzx edx, al
        test byte ptr [edx*2 + 588c482ah], 1
        ; Exact mapped bytes 74 0C: je 0x5887b557
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx + 94h]
        movzx eax, byte ptr [eax + edx]
        ; Exact mapped bytes EB 03: jmp 0x5887b55a
        __asm _emit 0xeb
        __asm _emit 0x03
        movzx eax, al
        movzx eax, ax
        ; Exact mapped bytes EB 2C: jmp 0x5887b58b
        __asm _emit 0xeb
        __asm _emit 0x2c
        ; Exact mapped bytes 66 3B C6: cmp ax, si
        __asm _emit 0x66
        __asm _emit 0x3b
        __asm _emit 0xc6
        ; Exact mapped bytes 73 1E: jae 0x5887b582
        __asm _emit 0x73
        __asm _emit 0x1e
        movzx edx, al
        test byte ptr [edx*2 + 588c482ah], 1
        ; Exact mapped bytes 74 0C: je 0x5887b57d
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ecx + 94h]
        movzx eax, byte ptr [eax + edx]
        ; Exact mapped bytes EB 0E: jmp 0x5887b58b
        __asm _emit 0xeb
        __asm _emit 0x0e
        movzx eax, al
        ; Exact mapped bytes EB 09: jmp 0x5887b58b
        __asm _emit 0xeb
        __asm _emit 0x09
        cmp dword ptr [ecx + 0a8h], 0
        ; Exact mapped bytes 75 08: jne 0x5887b593
        __asm _emit 0x75
        __asm _emit 0x08
        movzx eax, ax
        movzx eax, ax
        ; Exact mapped bytes EB 23: jmp 0x5887b5b6
        __asm _emit 0xeb
        __asm _emit 0x23
        push 1
        lea eax, [ebp - 4]
        push eax
        push 1
        lea eax, [ebp + 8]
        push eax
        push esi
        push dword ptr [ecx + 0a8h]
        ; Exact mapped bytes E8 A7 A5 FF FF: call 0x58875b52
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0xa5
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x5887b5bb
        __asm _emit 0x75
        __asm _emit 0x09
        movzx eax, word ptr [ebp + 8]
        movzx eax, ax
        ; Exact mapped bytes EB 04: jmp 0x5887b5bf
        __asm _emit 0xeb
        __asm _emit 0x04
        movzx eax, word ptr [ebp - 4]
        cmp byte ptr [ebp - 8], 0
        pop esi
        ; Exact mapped bytes 74 0A: je 0x5887b5d0
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 14h]
        and dword ptr [ecx + 350h], 0fffffffdh
        leave
        ret
    }
}
