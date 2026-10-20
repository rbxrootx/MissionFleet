// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00543A60 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00543a60_00543A60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        push 543ab0h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 43 4F 00 00: call 0x5489bc
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x543a96
        __asm _emit 0x75
        __asm _emit 0x14
        push 0aeh
        push 5c5af0h
        ; Exact mapped bytes E8 6F 0F FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x0f
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x543a96
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x543a7c
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
