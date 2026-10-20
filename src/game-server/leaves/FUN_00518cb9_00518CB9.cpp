// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518CB9 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_00518cb9_00518CB9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        push 40dh
        push 5c8c2ch
        mov eax, dword ptr [ebp - 18h]
        push eax
        ; Exact mapped bytes E8 88 24 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x24
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x518cfd
        __asm _emit 0x75
        __asm _emit 0x14
        push 40eh
        push 5c8c2ch
        ; Exact mapped bytes E8 08 BD 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xbd
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518cfd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x518cd8
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 AC E9 FF FF: call 0x5176bf
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 0bh]
        and edx, 0ffh
        mov eax, dword ptr [ebp - 0ch]
        and eax, 0ffh
        shl eax, 10h
        or edx, eax
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [ecx], edx
        mov edx, dword ptr [ebp + 14h]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
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
