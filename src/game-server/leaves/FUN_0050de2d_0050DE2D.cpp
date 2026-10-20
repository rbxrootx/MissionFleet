// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050DE2D .. +0x51 bytes.
extern "C" __declspec(naked) void FUN_0050de2d_0050DE2D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 84h], 0
        ; Exact mapped bytes 75 11: jne 0x50de54
        __asm _emit 0x75
        __asm _emit 0x11
        push 5bh
        push 5c60a8h
        ; Exact mapped bytes E8 B1 6B 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x6b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50de54
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x50de37
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 84h]
        mov edx, dword ptr [eax]
        ; Exact mapped bytes FF 52 24: call dword ptr [edx + 0x24]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x24
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
