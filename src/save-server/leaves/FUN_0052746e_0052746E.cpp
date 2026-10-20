// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052746E .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_0052746e_0052746E() {
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
        ; Exact mapped bytes E8 D9 BF F7 FF: call 0x4a3466
        __asm _emit 0xe8
        __asm _emit 0xd9
        __asm _emit 0xbf
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5274a5
        __asm _emit 0x75
        __asm _emit 0x14
        push 1aah
        push 6345f0h
        ; Exact mapped bytes E8 A0 18 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x18
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5274a5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x527480
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 8
        ; Exact mapped bytes E8 2C 56 FA FF: call 0x4ccae6
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0x56
        __asm _emit 0xfa
        __asm _emit 0xff
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
