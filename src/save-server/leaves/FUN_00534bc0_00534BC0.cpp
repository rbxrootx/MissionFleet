// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00534BC0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00534bc0_00534BC0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x534be7
        __asm _emit 0x75
        __asm _emit 0x14
        push 293h
        push 636640h
        ; Exact mapped bytes E8 5E 41 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x41
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x534be7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x534bca
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A 29 FB FF: call 0x4e7577
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0x29
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
