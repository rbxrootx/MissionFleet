// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D585B .. +0x67 bytes.
extern "C" __declspec(naked) void FUN_004d585b_004D585B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 200h
        ; Exact mapped bytes E8 8A 1B 02 00: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x8a
        __asm _emit 0x1b
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d5889
        __asm _emit 0x75
        __asm _emit 0x14
        push 36dh
        push 5c64b4h
        ; Exact mapped bytes E8 7C F1 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf1
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d5889
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D8: jne 0x4d5867
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ebp - 4], ecx
        push 0
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        push 0
        push 5c660ch
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
