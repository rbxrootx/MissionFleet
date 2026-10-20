// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00586D90 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00586d90_00586D90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 11: jne 0x586db4
        __asm _emit 0x75
        __asm _emit 0x11
        push 55h
        push 67d938h
        ; Exact mapped bytes E8 91 1F FA FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x1f
        __asm _emit 0xfa
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x586db4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x586d9a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, 1
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
