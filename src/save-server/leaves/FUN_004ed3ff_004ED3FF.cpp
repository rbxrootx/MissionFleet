// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004ED3FF .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_004ed3ff_004ED3FF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 75 14: jne 0x4ed425
        __asm _emit 0x75
        __asm _emit 0x14
        push 0c2h
        push 677b4ch
        ; Exact mapped bytes E8 20 B9 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xb9
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ed425
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DE: jne 0x4ed409
        __asm _emit 0x75
        __asm _emit 0xde
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A EB 03 00: call 0x52bfaf
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xeb
        __asm _emit 0x03
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
