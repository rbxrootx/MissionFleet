// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534AF9 .. +0x7A bytes.
extern "C" __declspec(naked) void FUN_00534af9_00534AF9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x534b22
        __asm _emit 0x75
        __asm _emit 0x14
        push 28ah
        push 636640h
        ; Exact mapped bytes E8 23 42 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x42
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534b22
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x534b05
        __asm _emit 0x75
        __asm _emit 0xdd
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 8]
        push ecx
        ; Exact mapped bytes FF 15 9C B4 68 00: call dword ptr [0x68b49c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x534b51
        __asm _emit 0x75
        __asm _emit 0x14
        push 28ch
        push 636640h
        ; Exact mapped bytes E8 F4 41 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534b51
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D1: jne 0x534b28
        __asm _emit 0x75
        __asm _emit 0xd1
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 16 D3 FF FF: call 0x531e7d
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd3
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
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
