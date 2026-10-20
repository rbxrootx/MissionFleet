// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00525CD3 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_00525cd3_00525CD3() {
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
        ; Exact mapped bytes 74 23: je 0x525d14
        __asm _emit 0x74
        __asm _emit 0x23
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 36 A1 FA FF: call 0x4cfe32
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0xa1
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x525d14
        __asm _emit 0x75
        __asm _emit 0x14
        push 520h
        push 5c8174h
        ; Exact mapped bytes E8 F1 EC 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xec
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x525d14
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 C3: jne 0x525cdd
        __asm _emit 0x75
        __asm _emit 0xc3
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 89 00 00 00: call 0x525dbb
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
