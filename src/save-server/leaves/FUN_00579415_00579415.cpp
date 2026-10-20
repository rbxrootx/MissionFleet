// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579415 .. +0x66 bytes.
extern "C" __declspec(naked) void FUN_00579415_00579415() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 0ddh
        push 67d108h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2E 0E F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0x0e
        __asm _emit 0xf6
        __asm _emit 0xff
        push 1
        push 8
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        ; Exact mapped bytes E8 27 A0 F2 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0xa0
        __asm _emit 0xf2
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x579457
        __asm _emit 0x75
        __asm _emit 0x14
        push 0deh
        push 67d108h
        ; Exact mapped bytes E8 EE F8 FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xf8
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x579457
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x579432
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [eax], 0
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 4], 0
        xor eax, eax
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
