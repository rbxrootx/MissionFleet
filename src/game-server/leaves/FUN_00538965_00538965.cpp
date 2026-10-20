// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00538965 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_00538965_00538965() {
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
        ; Exact mapped bytes 75 14: jne 0x53898c
        __asm _emit 0x75
        __asm _emit 0x14
        push 29fh
        push 581fc0h
        ; Exact mapped bytes E8 79 C0 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53898c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53896f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 90 DD FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 68 28 5E 00: call dword ptr [0x5e2868]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x68
        __asm _emit 0x28
        __asm _emit 0x5e
        __asm _emit 0x00
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
