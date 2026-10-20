// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00532D08 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_00532d08_00532D08() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov dword ptr [ebp - 4], ecx
        push 1
        push 0ch
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 2D D1 F9 FF: call 0x4cfe56
        __asm _emit 0xe8
        __asm _emit 0x2d
        __asm _emit 0xd1
        __asm _emit 0xf9
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x532d41
        __asm _emit 0x75
        __asm _emit 0x14
        push 11ch
        push 5820dch
        ; Exact mapped bytes E8 C4 1C 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x532d41
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x532d1c
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 8]
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
