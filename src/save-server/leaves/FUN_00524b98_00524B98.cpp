// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524B98 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_00524b98_00524B98() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 61h
        push 6345e8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 AE 56 FB FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0x56
        __asm _emit 0xfb
        __asm _emit 0xff
        push -1
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 85 E8 F7 FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x85
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x524bd2
        __asm _emit 0x75
        __asm _emit 0x11
        push 62h
        push 6345e8h
        ; Exact mapped bytes E8 73 41 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x73
        __asm _emit 0x41
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524bd2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DA: jne 0x524bb2
        __asm _emit 0x75
        __asm _emit 0xda
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 0ch
        ; Exact mapped bytes E8 B6 7F FA FF: call 0x4ccb9d
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x7f
        __asm _emit 0xfa
        __asm _emit 0xff
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
