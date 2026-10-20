// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00524A06 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_00524a06_00524A06() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 F9 27 FD FF: call 0x4f7213
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x27
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 04: jne 0x524a22
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 42: jmp 0x524a64
        __asm _emit 0xeb
        __asm _emit 0x42
        mov eax, dword ptr [ebp - 8]
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
        ; Exact mapped bytes 75 14: jne 0x524a47
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f9h
        push 5c8174h
        ; Exact mapped bytes E8 BE FF 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbe
        __asm _emit 0xff
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x524a47
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x524a22
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        push 0
        push 476h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7B 71 01 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x71
        __asm _emit 0x01
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
