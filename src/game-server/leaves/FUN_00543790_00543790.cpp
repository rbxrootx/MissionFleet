// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00543790 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00543790_00543790() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 5437e0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 13 52 00 00: call 0x5489bc
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x52
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5437c6
        __asm _emit 0x75
        __asm _emit 0x14
        push 0aeh
        push 5c5af0h
        ; Exact mapped bytes E8 3F 12 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0x12
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5437c6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5437ac
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
