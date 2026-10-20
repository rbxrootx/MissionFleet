// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58805590 .. +0xFF bytes.
extern "C" __declspec(naked) void FUN_58805590() {
    __asm {
        push ebp
        mov ebp, esp
        and esp, 0fffffff8h
        sub esp, 14ch
        ; Exact mapped bytes A1 D4 FB 9C 58: mov eax, dword ptr [0x589cfbd4]
        __asm _emit 0xa1
        __asm _emit 0xd4
        __asm _emit 0xfb
        __asm _emit 0x9c
        __asm _emit 0x58
        xor eax, esp
        mov dword ptr [esp + 148h], eax
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 10h]
        push ebx
        push esi
        mov esi, dword ptr [ebp + 0ch]
        mov ebx, ecx
        push edi
        mov ecx, 45h
        lea edi, [esp + 14h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        ; Exact mapped bytes 66 8B 4D 18: mov cx, word ptr [ebp + 0x18]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x18
        ; Exact mapped bytes 66 89 8C 24 42 01 00 00: mov word ptr [esp + 0x142], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x42
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 8B 4D 1C: mov cx, word ptr [ebp + 0x1c]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0x1c
        mov dword ptr [esp + 0ch], edx
        mov dword ptr [esp + 10h], eax
        ; Exact mapped bytes 66 89 8C 24 44 01 00 00: mov word ptr [esp + 0x144], cx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x8c
        __asm _emit 0x24
        __asm _emit 0x44
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [esp + 148h], 0
        cmp eax, 4000008h
        ; Exact mapped bytes 74 07: je 0x588055fc
        __asm _emit 0x74
        __asm _emit 0x07
        cmp eax, 4000009h
        ; Exact mapped bytes 75 39: jne 0x58805635
        __asm _emit 0x75
        __asm _emit 0x39
        movzx esi, byte ptr [esp + 114h]
        movzx eax, word ptr [esp + 11eh]
        shl esi, 5
        add esi, eax
        test edx, edx
        ; Exact mapped bytes 74 20: je 0x58805635
        __asm _emit 0x74
        __asm _emit 0x20
        test esi, esi
        ; Exact mapped bytes 74 1C: je 0x58805635
        __asm _emit 0x74
        __asm _emit 0x1c
        push esi
        ; Exact mapped bytes E8 0F BF 16 00: call 0x5897152e
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x16
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 10h]
        push esi
        push ecx
        push eax
        mov dword ptr [esp + 158h], eax
        ; Exact mapped bytes E8 1A 77 17 00: call 0x5897cd4c
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0x77
        __asm _emit 0x17
        __asm _emit 0x00
        add esp, 10h
        mov edx, dword ptr [ebx + 250h]
        mov edi, dword ptr [ebx + 258h]
        dec edx
        cmp edi, edx
        ; Exact mapped bytes 75 04: jne 0x5880564a
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 03: jmp 0x5880564d
        __asm _emit 0xeb
        __asm _emit 0x03
        lea eax, [edi + 1]
        mov dword ptr [ebx + 258h], eax
        cmp eax, dword ptr [ebx + 25ch]
        ; Exact mapped bytes 74 1D: je 0x58805678
        __asm _emit 0x74
        __asm _emit 0x1d
        imul edi, edi, 13ch
        add edi, dword ptr [ebx + 260h]
        mov ecx, 4fh
        lea esi, [esp + 10h]
        ; Exact mapped bytes F3 A5: rep movsd dword ptr es:[edi], dword ptr [esi]
        __asm _emit 0xf3
        __asm _emit 0xa5
        inc dword ptr [ebx + 254h]
        mov ecx, dword ptr [esp + 154h]
        pop edi
        pop esi
        pop ebx
        xor ecx, esp
        ; Exact mapped bytes E8 51 75 17 00: call 0x5897cbda
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x75
        __asm _emit 0x17
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
