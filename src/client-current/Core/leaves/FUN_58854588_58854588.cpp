// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58854588 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_58854588_58854588() {
    __asm {
        mov al, byte ptr [ecx + 2dh]
        cmp al, 46h
        ; Exact mapped bytes 75 17: jne 0x588545a6
        __asm _emit 0x75
        __asm _emit 0x17
        mov eax, dword ptr [ecx]
        and eax, 8
        or eax, 0
        ; Exact mapped bytes 0F 85 41 01 00 00: jne 0x588546de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + 18h], 7
        ; Exact mapped bytes E9 BC 06 00 00: jmp 0x58854c62
        __asm _emit 0xe9
        __asm _emit 0xbc
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        xor edx, edx
        cmp al, 4eh
        ; Exact mapped bytes 75 34: jne 0x588545e0
        __asm _emit 0x75
        __asm _emit 0x34
        mov eax, dword ptr [ecx]
        and eax, 8
        or eax, edx
        ; Exact mapped bytes 0F 85 25 01 00 00: jne 0x588546de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x25
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov byte ptr [ecx + 18h], 8
        mov eax, dword ptr [ecx + 8]
        add eax, 18h
        mov byte ptr [eax + 4], 1
        mov dword ptr [eax], 16h
        push dword ptr [ecx + 8]
        push edx
        push edx
        push edx
        push edx
        push edx
        ; Exact mapped bytes E8 54 C9 FF FF: call 0x58850f2e
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        xor al, al
        ret
        cmp dword ptr [ecx + 28h], edx
        ; Exact mapped bytes 75 D8: jne 0x588545bd
        __asm _emit 0x75
        __asm _emit 0xd8
        cmp al, 6ah
        ; Exact mapped bytes 0F 8F B0 00 00 00: jg 0x5885469d
        __asm _emit 0x0f
        __asm _emit 0x8f
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 0F 84 A1 00 00 00: je 0x58854694
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp al, 49h
        ; Exact mapped bytes 74 43: je 0x5885463a
        __asm _emit 0x74
        __asm _emit 0x43
        cmp al, 4ch
        ; Exact mapped bytes 74 33: je 0x5885462e
        __asm _emit 0x74
        __asm _emit 0x33
        cmp al, 54h
        ; Exact mapped bytes 74 23: je 0x58854622
        __asm _emit 0x74
        __asm _emit 0x23
        cmp al, 68h
        ; Exact mapped bytes 0F 85 D7 00 00 00: jne 0x588546de
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xd7
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ecx + 0ch]
        cmp byte ptr [eax], 68h
        ; Exact mapped bytes 75 0C: jne 0x5885461b
        __asm _emit 0x75
        __asm _emit 0x0c
        inc eax
        mov dword ptr [ecx + 0ch], eax
        xor eax, eax
        inc eax
        ; Exact mapped bytes E9 C0 00 00 00: jmp 0x588546db
        __asm _emit 0xe9
        __asm _emit 0xc0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push 2
        ; Exact mapped bytes E9 B8 00 00 00: jmp 0x588546da
        __asm _emit 0xe9
        __asm _emit 0xb8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 28h], 0dh
        ; Exact mapped bytes E9 B0 00 00 00: jmp 0x588546de
        __asm _emit 0xe9
        __asm _emit 0xb0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ecx + 28h], 8
        ; Exact mapped bytes E9 A4 00 00 00: jmp 0x588546de
        __asm _emit 0xe9
        __asm _emit 0xa4
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push esi
        mov esi, dword ptr [ecx + 0ch]
        mov al, byte ptr [esi]
        cmp al, 33h
        ; Exact mapped bytes 75 15: jne 0x58854659
        __asm _emit 0x75
        __asm _emit 0x15
        cmp byte ptr [esi + 1], 32h
        ; Exact mapped bytes 75 0F: jne 0x58854659
        __asm _emit 0x75
        __asm _emit 0x0f
        lea eax, [esi + 2]
        mov dword ptr [ecx + 28h], 0ah
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 38: jmp 0x58854691
        __asm _emit 0xeb
        __asm _emit 0x38
        cmp al, 36h
        ; Exact mapped bytes 75 15: jne 0x58854672
        __asm _emit 0x75
        __asm _emit 0x15
        cmp byte ptr [esi + 1], 34h
        ; Exact mapped bytes 75 2E: jne 0x58854691
        __asm _emit 0x75
        __asm _emit 0x2e
        lea eax, [esi + 2]
        mov dword ptr [ecx + 28h], 0bh
        mov dword ptr [ecx + 0ch], eax
        ; Exact mapped bytes EB 1F: jmp 0x58854691
        __asm _emit 0xeb
        __asm _emit 0x1f
        cmp al, 64h
        ; Exact mapped bytes 74 14: je 0x5885468a
        __asm _emit 0x74
        __asm _emit 0x14
        cmp al, 69h
        ; Exact mapped bytes 74 10: je 0x5885468a
        __asm _emit 0x74
        __asm _emit 0x10
        cmp al, 6fh
        ; Exact mapped bytes 74 0C: je 0x5885468a
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp al, 75h
        ; Exact mapped bytes 74 08: je 0x5885468a
        __asm _emit 0x74
        __asm _emit 0x08
        cmp al, 78h
        ; Exact mapped bytes 74 04: je 0x5885468a
        __asm _emit 0x74
        __asm _emit 0x04
        cmp al, 58h
        ; Exact mapped bytes 75 07: jne 0x58854691
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ecx + 28h], 9
        pop esi
        ; Exact mapped bytes EB 4A: jmp 0x588546de
        __asm _emit 0xeb
        __asm _emit 0x4a
        mov dword ptr [ecx + 28h], 5
        ; Exact mapped bytes EB 41: jmp 0x588546de
        __asm _emit 0xeb
        __asm _emit 0x41
        cmp al, 6ch
        ; Exact mapped bytes 74 27: je 0x588546c8
        __asm _emit 0x74
        __asm _emit 0x27
        cmp al, 74h
        ; Exact mapped bytes 74 1A: je 0x588546bf
        __asm _emit 0x74
        __asm _emit 0x1a
        cmp al, 77h
        ; Exact mapped bytes 74 0D: je 0x588546b6
        __asm _emit 0x74
        __asm _emit 0x0d
        cmp al, 7ah
        ; Exact mapped bytes 75 31: jne 0x588546de
        __asm _emit 0x75
        __asm _emit 0x31
        mov dword ptr [ecx + 28h], 6
        ; Exact mapped bytes EB 28: jmp 0x588546de
        __asm _emit 0xeb
        __asm _emit 0x28
        mov dword ptr [ecx + 28h], 0ch
        ; Exact mapped bytes EB 1F: jmp 0x588546de
        __asm _emit 0xeb
        __asm _emit 0x1f
        mov dword ptr [ecx + 28h], 7
        ; Exact mapped bytes EB 16: jmp 0x588546de
        __asm _emit 0xeb
        __asm _emit 0x16
        mov eax, dword ptr [ecx + 0ch]
        cmp byte ptr [eax], 6ch
        ; Exact mapped bytes 75 08: jne 0x588546d8
        __asm _emit 0x75
        __asm _emit 0x08
        inc eax
        mov dword ptr [ecx + 0ch], eax
        push 4
        ; Exact mapped bytes EB 02: jmp 0x588546da
        __asm _emit 0xeb
        __asm _emit 0x02
        push 3
        pop eax
        mov dword ptr [ecx + 28h], eax
        mov al, 1
        ret
    }
}
