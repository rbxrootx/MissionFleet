// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004AF2A1 .. +0x6E bytes.
extern "C" __declspec(naked) void FUN_004af2a1_004AF2A1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4af2d0
        __asm _emit 0x75
        __asm _emit 0x14
        push 14fh
        push 635af0h
        ; Exact mapped bytes E8 75 9A 07 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0x9a
        __asm _emit 0x07
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4af2d0
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4af2ab
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        mov eax, dword ptr [ebp + 8]
        and eax, 0ffh
        mov ecx, dword ptr [ebp + 0ch]
        and ecx, 0ffh
        shl ecx, 8
        or eax, ecx
        and eax, 0ffffh
        push eax
        push 401h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
