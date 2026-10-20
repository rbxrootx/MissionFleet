// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E4F70 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_584e4f70_584E4F70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        push esi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c0h]
        ; Exact mapped bytes E8 38 1A FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0b4h]
        ; Exact mapped bytes E8 28 1A FA FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x1a
        __asm _emit 0xfa
        __asm _emit 0xff
        sub esi, eax
        mov dword ptr [ebp - 8], esi
        mov edx, dword ptr [ebp + 8]
        sub edx, dword ptr [ebp - 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 58h], edx
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 58h]
        imul eax, dword ptr [edx + 78h]
        cdq
        mov ecx, 64h
        idiv ecx
        mov edx, dword ptr [ebp - 4]
        add eax, dword ptr [edx + 80h]
        mov ecx, 258h
        sub ecx, eax
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 5ch], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D7 6D 2D 00: call 0x587bbdc0
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x6d
        __asm _emit 0x2d
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 50h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 50h]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 14h], edx
        push 1
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        nop
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
