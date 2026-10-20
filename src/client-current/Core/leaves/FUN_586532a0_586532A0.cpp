// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586532A0 .. +0xD6 bytes.
extern "C" __declspec(naked) void FUN_586532a0_586532A0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 0ch], 2
        ; Exact mapped bytes 0F 85 BB 00 00 00: jne 0x5865336e
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xbb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        cmp ecx, dword ptr [eax + 68h]
        ; Exact mapped bytes 0F 85 93 00 00 00: jne 0x58653355
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 70h], 0
        ; Exact mapped bytes 74 52: je 0x5865331d
        __asm _emit 0x74
        __asm _emit 0x52
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 70h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 64h]
        ; Exact mapped bytes E8 63 E3 E7 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xe3
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 70h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        push 0f230h
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 8]
        ; Exact mapped bytes FF D2: call edx
        __asm _emit 0xff
        __asm _emit 0xd2
        xor eax, eax
        ; Exact mapped bytes EB 53: jmp 0x58653370
        __asm _emit 0xeb
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 18h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 30h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 18h]
        mov dword ptr [ebp - 1ch], edx
        push 0
        push 0f230h
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes FF 55 E4: call dword ptr [ebp - 0x1c]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xe4
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        ; Exact mapped bytes EB 19: jmp 0x5865336e
        __asm _emit 0xeb
        __asm _emit 0x19
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        cmp edx, dword ptr [ecx + 6ch]
        ; Exact mapped bytes 75 0E: jne 0x5865336e
        __asm _emit 0x75
        __asm _emit 0x0e
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
