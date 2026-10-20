// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00538915 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_00538915_00538915() {
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
        ; Exact mapped bytes 75 14: jne 0x53893c
        __asm _emit 0x75
        __asm _emit 0x14
        push 29dh
        push 581fc0h
        ; Exact mapped bytes E8 C9 C0 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53893c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53891f
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 E0 DD FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 6C 28 5E 00: call dword ptr [0x5e286c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
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
