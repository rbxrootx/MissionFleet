// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00515BB6 .. +0x5D bytes.
extern "C" __declspec(naked) void FUN_00515bb6_00515BB6() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        shr eax, 10h
        and eax, 0ffffh
        and eax, 0ffffh
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x515bf4
        __asm _emit 0x74
        __asm _emit 0x20
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 63 D8 F8 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xd8
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x515bf4
        __asm _emit 0x75
        __asm _emit 0x11
        push 5bh
        push 674cach
        ; Exact mapped bytes E8 51 31 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x31
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x515bf4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C6: jne 0x515bc0
        __asm _emit 0x75
        __asm _emit 0xc6
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 73 00 00 00: call 0x515c7d
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x00
        __asm _emit 0x00
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
