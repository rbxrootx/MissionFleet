// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00462EFA .. +0x9D bytes.
extern "C" __declspec(naked) void FUN_00462efa_00462EFA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push esi
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes E8 E9 25 0D 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xe9
        __asm _emit 0x25
        __asm _emit 0x0d
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
        ; Exact mapped bytes E8 B2 58 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 9ch]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 8], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 10h]
        ; Exact mapped bytes E8 22 54 00 00: call 0x468370
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x54
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 77 75 FA FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0x75
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 14h], 0
        push 1b0h
        push 0
        mov edx, dword ptr [ebp - 4]
        add edx, 18h
        push edx
        ; Exact mapped bytes E8 FA 63 04 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0xfa
        __asm _emit 0x63
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1c8h], 0
        pop esi
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 4F 58 04 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x58
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
