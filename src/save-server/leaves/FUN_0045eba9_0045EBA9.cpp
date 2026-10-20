// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045EBA9 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0045eba9_0045EBA9() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 43 D1 0E 00: call 0x54bd00
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0xd1
        __asm _emit 0x0e
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 14: je 0x45ebd6
        __asm _emit 0x74
        __asm _emit 0x14
        push 0af9h
        push 678664h
        ; Exact mapped bytes E8 6F A1 0C 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0xa1
        __asm _emit 0x0c
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x45ebd6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D9: jne 0x45ebb5
        __asm _emit 0x75
        __asm _emit 0xd9
        lea ecx, [ebp - 8]
        push ecx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 EA 03 00 00: call 0x45efd4
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 B4 03 00 00: call 0x45efac
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        sub eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
