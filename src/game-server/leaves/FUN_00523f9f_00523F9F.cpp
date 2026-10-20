// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00523F9F .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_00523f9f_00523F9F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D2 EF FC FF: call 0x4f2f87
        __asm _emit 0xe8
        __asm _emit 0xd2
        __asm _emit 0xef
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x523fcd
        __asm _emit 0x74
        __asm _emit 0x14
        push 1dah
        push 5c8174h
        ; Exact mapped bytes E8 38 0A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x0a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x523fcd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D6: jne 0x523fa9
        __asm _emit 0x75
        __asm _emit 0xd6
        xor eax, eax
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
