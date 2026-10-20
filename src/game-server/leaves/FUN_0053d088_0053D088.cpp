// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053D088 .. +0x5A bytes.
extern "C" __declspec(naked) void FUN_0053d088_0053D088() {
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
        ; Exact mapped bytes 75 14: jne 0x53d0b7
        __asm _emit 0x75
        __asm _emit 0x14
        push 10bh
        push 582398h
        ; Exact mapped bytes E8 4E 79 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x79
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53d0b7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x53d092
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 87 EA FF FF: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0xea
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 D0 26 5E 00: call dword ptr [0x5e26d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 A6 48 FB FF: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x48
        __asm _emit 0xfb
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
