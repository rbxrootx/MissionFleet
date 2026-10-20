// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005314CB .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_005314cb_005314CB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x5314ef
        __asm _emit 0x75
        __asm _emit 0x14
        push 3bch
        push 634f78h
        ; Exact mapped bytes E8 56 78 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x78
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5314ef
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x5314d5
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        add eax, 20h
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
