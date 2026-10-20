// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042DC6B .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_0042dc6b_0042DC6B() {
    __asm {
        ; Exact mapped bytes A1 0C 9B 44 00: mov eax, dword ptr [0x449b0c]
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x9b
        __asm _emit 0x44
        __asm _emit 0x00
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        mov esi, ecx
        test ebx, ebx
        mov dword ptr [esi], eax
        ; Exact mapped bytes 74 09: je 0x42dc87
        __asm _emit 0x74
        __asm _emit 0x09
        push ebx
        ; Exact mapped bytes E8 61 1D FF FF: call 0x41f9e5
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x1d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        ; Exact mapped bytes EB 02: jmp 0x42dc89
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 74 23: je 0x42dcb0
        __asm _emit 0x74
        __asm _emit 0x23
        push edi
        lea edi, [eax + eax]
        push edi
        mov ecx, esi
        ; Exact mapped bytes E8 7F FD FF FF: call 0x42da18
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        inc edi
        push edi
        push ebx
        push dword ptr [esi]
        ; Exact mapped bytes E8 E1 03 00 00: call 0x42e084
        __asm _emit 0xe8
        __asm _emit 0xe1
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, esi
        push -1
        ; Exact mapped bytes E8 15 03 00 00: call 0x42dfc4
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
