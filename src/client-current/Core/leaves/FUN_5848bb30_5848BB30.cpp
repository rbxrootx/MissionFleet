// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5848BB30 .. +0x173 bytes.
extern "C" __declspec(naked) void FUN_5848bb30_5848BB30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ebp - 8], ecx
        cmp dword ptr [ebp - 4], 64h
        ; Exact mapped bytes 7D 09: jge 0x5848bb54
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 4], 64h
        ; Exact mapped bytes EB 10: jmp 0x5848bb64
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp dword ptr [ebp - 4], 319ch
        ; Exact mapped bytes 7E 07: jle 0x5848bb64
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 319ch
        cmp dword ptr [ebp - 8], 64h
        ; Exact mapped bytes 7D 09: jge 0x5848bb73
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 64h
        ; Exact mapped bytes EB 10: jmp 0x5848bb83
        __asm _emit 0xeb
        __asm _emit 0x10
        cmp dword ptr [ebp - 8], 189ch
        ; Exact mapped bytes 7E 07: jle 0x5848bb83
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 189ch
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 1ch], edx
        cmp dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes 74 05: je 0x5848bb94
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 09 01 00 00: jmp 0x5848bc9d
        __asm _emit 0xe9
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 10h]
        cmp dword ptr [ecx + 11ch], 3
        ; Exact mapped bytes 75 11: jne 0x5848bbb4
        __asm _emit 0x75
        __asm _emit 0x11
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + 29ch], 0
        ; Exact mapped bytes 74 05: je 0x5848bbb4
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 E9 00 00 00: jmp 0x5848bc9d
        __asm _emit 0xe9
        __asm _emit 0xe9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 250h], 0f4240h
        ; Exact mapped bytes 0F 85 84 00 00 00: jne 0x5848bc4b
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x84
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 8B 0D 10 06 96 58: mov ecx, dword ptr [0x58960610]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 8E 03 00 00: call 0x5848bf60
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 57 04 00 00: call 0x5848c030
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 7D 09: jge 0x5848bbf6
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 12: jmp 0x5848bc08
        __asm _emit 0xeb
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 4]
        cmp ecx, dword ptr [eax + 8]
        ; Exact mapped bytes 7E 07: jle 0x5848bc08
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [ebp - 8]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 7D 09: jge 0x5848bc1c
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 1
        ; Exact mapped bytes EB 12: jmp 0x5848bc2e
        __asm _emit 0xeb
        __asm _emit 0x12
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ebp - 8]
        cmp edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 7E 07: jle 0x5848bc2e
        __asm _emit 0x7e
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 1
        cmp dword ptr [ebp - 14h], 0
        ; Exact mapped bytes 74 17: je 0x5848bc4b
        __asm _emit 0x74
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 10h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 10h]
        and eax, 0fffffffch
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 4]
        and ecx, 7fffh
        shl ecx, 2
        mov edx, dword ptr [ebp - 10h]
        and edx, 0fffe0003h
        or edx, ecx
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp - 8]
        and eax, 7fffh
        shl eax, 11h
        mov ecx, dword ptr [ebp - 10h]
        and ecx, 1ffffh
        or ecx, eax
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 0ch]
        mov dword ptr [ebp - 20h], eax
        lea ecx, [ebp - 10h]
        push ecx
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 94 DF 2D 00: call 0x58769c30
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0xdf
        __asm _emit 0x2d
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
