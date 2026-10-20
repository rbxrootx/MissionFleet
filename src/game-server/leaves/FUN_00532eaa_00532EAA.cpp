// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00532EAA .. +0x4F bytes.
extern "C" __declspec(naked) void FUN_00532eaa_00532EAA() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        push 1
        push 0ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 8D CF F9 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xcf
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x532ee1
        __asm _emit 0x75
        __asm _emit 0x14
        push 133h
        push 5820dch
        ; Exact mapped bytes E8 24 1B 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0x1b
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x532ee1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x532ebc
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax + 8], ecx
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
