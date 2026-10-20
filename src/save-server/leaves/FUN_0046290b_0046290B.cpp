// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046290B .. +0xEB bytes.
extern "C" __declspec(naked) void FUN_0046290b_0046290B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        sub eax, 34h
        mov dword ptr [ebp - 8], eax
        push 247h
        push 67ca48h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 30 79 07 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0x79
        __asm _emit 0x07
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 18h]
        mov dword ptr [edx], 0
        mov dword ptr [ebp - 4], 80004005h
        cmp dword ptr [ebp + 14h], 0
        ; Exact mapped bytes 0F 85 A0 00 00 00: jne 0x4629ea
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 0F 84 93 00 00 00: je 0x4629ea
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 2ch], 0
        ; Exact mapped bytes 75 78: jne 0x4629d8
        __asm _emit 0x75
        __asm _emit 0x78
        push 641488h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 37 81 0E 00: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x81
        __asm _emit 0x0e
        __asm _emit 0x00
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x46298a
        __asm _emit 0x75
        __asm _emit 0x14
        push 255h
        push 67ca48h
        ; Exact mapped bytes E8 BB 63 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x63
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x46298a
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x462970
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4629bd
        __asm _emit 0x75
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 04: call dword ptr [edx + 4]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x04
        mov ecx, dword ptr [ebp + 18h]
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [ecx], edx
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 74 13: je 0x4629d6
        __asm _emit 0x74
        __asm _emit 0x13
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 38: call dword ptr [edx + 0x38]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x38
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 12: jmp 0x4629ea
        __asm _emit 0xeb
        __asm _emit 0x12
        push 67cac4h
        push 67cb08h
        ; Exact mapped bytes E8 2E DC 03 00: call 0x4a0615
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xdc
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 14 00: ret 0x14
        __asm _emit 0xc2
        __asm _emit 0x14
        __asm _emit 0x00
    }
}
