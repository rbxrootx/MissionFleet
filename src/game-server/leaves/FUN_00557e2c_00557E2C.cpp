// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557E2C .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_00557e2c_00557E2C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 130h
        push 5cfa14h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 17 33 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x557e66
        __asm _emit 0x75
        __asm _emit 0x14
        push 131h
        push 5cfa14h
        ; Exact mapped bytes E8 9F CB FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0xcb
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x557e66
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x557e49
        __asm _emit 0x75
        __asm _emit 0xdd
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20h]
        push ecx
        ; Exact mapped bytes FF 15 D0 29 5E 00: call dword ptr [0x5e29d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x29
        __asm _emit 0x5e
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
