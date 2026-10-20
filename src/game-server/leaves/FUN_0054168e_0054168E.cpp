// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054168E .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_0054168e_0054168E() {
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
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5416bd
        __asm _emit 0x75
        __asm _emit 0x14
        push 39dh
        push 582398h
        ; Exact mapped bytes E8 48 33 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x33
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5416bd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x541698
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 C1 99 FF FF: call 0x53b08c
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B8 99 FF FF: call 0x53b08c
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0x99
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 230h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 69 9F FB FF: call 0x4fb659
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0x9f
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
