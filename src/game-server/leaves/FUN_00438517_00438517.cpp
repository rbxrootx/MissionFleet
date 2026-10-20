// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438517 .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_00438517_00438517() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [eax + 0ch]
        cmp edx, dword ptr [ecx + 10h]
        ; Exact mapped bytes 7E 56: jle 0x438599
        __asm _emit 0x7e
        __asm _emit 0x56
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 0B: jne 0x438557
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        ; Exact mapped bytes EB 31: jmp 0x438588
        __asm _emit 0xeb
        __asm _emit 0x31
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 5A 01 00 00: call 0x4386c0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 6B 01 00 00: call 0x4386e0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 41 01 00 00: call 0x4386c0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 10h]
        add ecx, 1
        mov edx, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 10h], ecx
        ; Exact mapped bytes EB 33: jmp 0x4385cc
        __asm _emit 0xeb
        __asm _emit 0x33
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 1A: je 0x4385c5
        __asm _emit 0x74
        __asm _emit 0x1a
        mov esi, esp
        push 1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        cmp esi, esp
        ; Exact mapped bytes E8 20 02 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x02
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 07: jmp 0x4385cc
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 10h], 0
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 10h]
        push edx
        ; Exact mapped bytes E8 28 CF 0F 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0xcf
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 F1 01 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 8A 00 00 00: call 0x438680
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop esi
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 DF 01 07 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x01
        __asm _emit 0x07
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
