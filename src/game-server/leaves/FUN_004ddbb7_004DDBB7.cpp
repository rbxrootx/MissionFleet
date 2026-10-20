// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DDBB7 .. +0x5E bytes.
extern "C" __declspec(naked) void FUN_004ddbb7_004DDBB7() {
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
        ; Exact mapped bytes 75 11: jne 0x4ddbe3
        __asm _emit 0x75
        __asm _emit 0x11
        push 38h
        push 5841b8h
        ; Exact mapped bytes E8 22 6E 05 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x6e
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ddbe3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4ddbc1
        __asm _emit 0x75
        __asm _emit 0xd8
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 7A D0 FF FF: call 0x4dac6b
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xd0
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        push 0
        push 436h
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
        push eax
        ; Exact mapped bytes E8 EE 85 FF FF: call 0x4d61fa
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x85
        __asm _emit 0xff
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
