// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586146B0 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_586146b0_586146B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, 4
        imul ecx, eax, 0
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + ecx + 74h]
        ; Exact mapped bytes E8 F3 C4 1A 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xf3
        __asm _emit 0xc4
        __asm _emit 0x1a
        __asm _emit 0x00
        cmp eax, -1
        ; Exact mapped bytes 74 5A: je 0x5861472c
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 30h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, 4
        shl edx, 1
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 74h]
        ; Exact mapped bytes E8 62 1A F3 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + edx + 74h]
        ; Exact mapped bytes E8 4B 1A F3 FF: call 0x58546150
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x1a
        __asm _emit 0xf3
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes 66 8B 91 A8 00 00 00: mov dx, word ptr [ecx + 0xa8]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 FE: mov word ptr [ebp - 2], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfe
        mov eax, dword ptr [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp - 10h]
        push ecx
        movzx edx, word ptr [ebp - 2]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 05 E9 FF FF: call 0x58613030
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
