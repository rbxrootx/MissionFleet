// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040FDF1 .. +0x12A bytes.
extern "C" __declspec(naked) void FUN_0040fdf1_0040FDF1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 F2 56 12 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x56
        __asm _emit 0x12
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov esi, esp
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 7C: call dword ptr [edx + 0x7c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x7c
        cmp esi, esp
        ; Exact mapped bytes E8 BB 89 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x89
        __asm _emit 0x09
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 9ch]
        mov dword ptr [ecx + 10h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 14h], ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 18h]
        ; Exact mapped bytes E8 A8 67 07 00: call 0x4865f1
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x67
        __asm _emit 0x07
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 10h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 1ch]
        ; Exact mapped bytes E8 06 18 06 00: call 0x471665
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x18
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0fch], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 118h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 100h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 104h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 108h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10ch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 110h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 114h], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 11ch], 0
        push 60h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 20h
        push eax
        ; Exact mapped bytes E8 7F 94 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        push 70h
        push 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 80h
        push ecx
        ; Exact mapped bytes E8 69 94 09 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x94
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 0ch
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 CB 88 09 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x88
        __asm _emit 0x09
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
