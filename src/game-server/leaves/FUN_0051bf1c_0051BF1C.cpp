// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051BF1C .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_0051bf1c_0051BF1C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 5878ech
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 68h], 0
        ; Exact mapped bytes 75 11: jne 0x51bf49
        __asm _emit 0x75
        __asm _emit 0x11
        push 40h
        push 5cb704h
        ; Exact mapped bytes E8 BC 8A 01 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x8a
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51bf49
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 E0: jne 0x51bf2f
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 68h]
        cmp dword ptr [ecx + 70h], 0
        ; Exact mapped bytes 74 19: je 0x51bf74
        __asm _emit 0x74
        __asm _emit 0x19
        push 0
        push -1
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 68h]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 68h]
        mov ecx, dword ptr [edx + 70h]
        ; Exact mapped bytes E8 59 40 00 00: call 0x51ffcd
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x40
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
