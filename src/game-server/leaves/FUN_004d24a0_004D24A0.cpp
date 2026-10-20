// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D24A0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004d24a0_004D24A0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 5bh
        push 5cb220h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A6 8C 02 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x8c
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 75 11: jne 0x4d24d4
        __asm _emit 0x75
        __asm _emit 0x11
        push 5ch
        push 5cb220h
        ; Exact mapped bytes E8 31 25 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x25
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d24d4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x4d24ba
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp + 8]
        push eax
        push 0
        ; Exact mapped bytes 8B 0D F4 E7 5D 00: mov ecx, dword ptr [0x5de7f4]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xf4
        __asm _emit 0xe7
        __asm _emit 0x5d
        __asm _emit 0x00
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA 96 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x96
        __asm _emit 0x06
        __asm _emit 0x00
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
