// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005110C2 .. +0x6A bytes.
extern "C" __declspec(naked) void FUN_005110c2_005110C2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5110f1
        __asm _emit 0x75
        __asm _emit 0x14
        push 98h
        push 6729d4h
        ; Exact mapped bytes E8 54 7C 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x7c
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5110f1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5110cc
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A1 D7 01 00: call 0x52e8a4
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 3B C1 FB FF: call 0x4cd247
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0xc1
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 D7 01 00: call 0x52e84c
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xd7
        __asm _emit 0x01
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 B0 C0 FB FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0xc0
        __asm _emit 0xfb
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
