// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00537491 .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_00537491_00537491() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x5374b5
        __asm _emit 0x75
        __asm _emit 0x14
        push 1dfh
        push 581fc0h
        ; Exact mapped bytes E8 50 D5 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0xd5
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5374b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x53749b
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 30 21 5E 00: call dword ptr [0x5e2130]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x30
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 39 C8 FC FF: call 0x503d0a
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xc8
        __asm _emit 0xfc
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
