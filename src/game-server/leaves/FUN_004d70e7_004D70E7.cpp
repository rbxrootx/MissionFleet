// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D70E7 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004d70e7_004D70E7() {
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
        ; Exact mapped bytes 75 11: jne 0x4d7113
        __asm _emit 0x75
        __asm _emit 0x11
        push 50h
        push 5835a8h
        ; Exact mapped bytes E8 F2 D8 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d7113
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4d70f1
        __asm _emit 0x75
        __asm _emit 0xd8
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 4A 06 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x4a
        __asm _emit 0x06
        __asm _emit 0x00
        push eax
        push 425h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 BC 27 5E 00: call dword ptr [0x5e27bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
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
