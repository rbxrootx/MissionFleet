// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5860A3B0 .. +0xAD bytes.
extern "C" __declspec(naked) void FUN_5860a3b0_5860A3B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov dword ptr [ebp - 4], ecx
        movzx eax, word ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 0F 8C 92 00 00 00: jl 0x5860a457
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx ecx, word ptr [ebp + 8]
        cmp ecx, 8
        ; Exact mapped bytes 0F 8D 85 00 00 00: jge 0x5860a457
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x85
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        movzx edx, word ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + edx*4 + 68h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B4 BC E7 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xbc
        __asm _emit 0xe7
        __asm _emit 0xff
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + eax*4 + 68h]
        ; Exact mapped bytes E8 C4 A5 E7 FF: call 0x584849c0
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xa5
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        ; Exact mapped bytes FF 15 3C 43 89 58: call dword ptr [0x5889433c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x3c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 10h], eax
        lea eax, [ebp - 20h]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 55 EC: call dword ptr [ebp - 0x14]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xec
        movzx eax, word ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + eax*4 + 68h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 109h
        mov eax, dword ptr [ebp - 20h]
        cdq
        sub eax, edx
        sar eax, 1
        sub ecx, eax
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 5A B2 1A 00: call 0x587b56b0
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0xb2
        __asm _emit 0x1a
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
