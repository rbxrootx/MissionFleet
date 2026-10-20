// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044B3E0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_0044b3e0_0044B3E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 44b430h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 EB 87 0F 00: call 0x543be4
        __asm _emit 0xe8
        __asm _emit 0xeb
        __asm _emit 0x87
        __asm _emit 0x0f
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x44b416
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ceh
        push 671fe0h
        ; Exact mapped bytes E8 2F D9 0D 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xd9
        __asm _emit 0x0d
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x44b416
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x44b3fc
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
