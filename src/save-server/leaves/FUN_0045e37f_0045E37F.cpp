// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045E37F .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_0045e37f_0045E37F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 08: mov cx, word ptr [eax]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x08
        and ecx, 2000h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x45e3af
        __asm _emit 0x75
        __asm _emit 0x14
        push 9f1h
        push 678664h
        ; Exact mapped bytes E8 96 A9 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa9
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45e3af
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D4: jne 0x45e389
        __asm _emit 0x75
        __asm _emit 0xd4
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 00 BB 68 00: call dword ptr [0x68bb00]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x00
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 B7 AA FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
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
