// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055FC48 .. +0xCE bytes.
extern "C" __declspec(naked) void FUN_0055fc48_0055FC48() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        push 4cfh
        push 67b3b8h
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 F9 A5 F7 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa5
        __asm _emit 0xf7
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 64h]
        and edx, 6
        test edx, edx
        ; Exact mapped bytes 75 14: jne 0x55fc88
        __asm _emit 0x75
        __asm _emit 0x14
        push 4d0h
        push 67b3b8h
        ; Exact mapped bytes E8 BD 90 FC FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x90
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55fc88
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x55fc67
        __asm _emit 0x75
        __asm _emit 0xd9
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0a0h]
        imul edx, edx, 24h
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 88h]
        xor eax, eax
        ; Exact mapped bytes 66 8B 04 11: mov ax, word ptr [ecx + edx]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x04
        __asm _emit 0x11
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 4
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 64h]
        and edx, 4
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x55fcc9
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 43: jmp 0x55fd0c
        __asm _emit 0xeb
        __asm _emit 0x43
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 05 38 71 68 00: cmp eax, dword ptr [0x687138]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0x38
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 16: je 0x55fcea
        __asm _emit 0x74
        __asm _emit 0x16
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 0D 34 71 68 00: cmp ecx, dword ptr [0x687134]
        __asm _emit 0x3b
        __asm _emit 0x0d
        __asm _emit 0x34
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 74 0B: je 0x55fcea
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 3B 15 3C 71 68 00: cmp edx, dword ptr [0x68713c]
        __asm _emit 0x3b
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x71
        __asm _emit 0x68
        __asm _emit 0x00
        ; Exact mapped bytes 75 09: jne 0x55fcf3
        __asm _emit 0x75
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 2
        ; Exact mapped bytes EB 19: jmp 0x55fd0c
        __asm _emit 0xeb
        __asm _emit 0x19
        cmp dword ptr [ebp - 4], 3
        ; Exact mapped bytes 74 0C: je 0x55fd05
        __asm _emit 0x74
        __asm _emit 0x0c
        cmp dword ptr [ebp - 4], 8
        ; Exact mapped bytes 74 06: je 0x55fd05
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 2
        ; Exact mapped bytes 75 07: jne 0x55fd0c
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 3
        mov eax, dword ptr [ebp - 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
