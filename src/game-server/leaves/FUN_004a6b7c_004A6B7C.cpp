// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A6B7C .. +0x3C bytes.
extern "C" __declspec(naked) void FUN_004a6b7c_004A6B7C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 14: jne 0x4a6ba3
        __asm _emit 0x75
        __asm _emit 0x14
        push 366h
        push 5d0270h
        ; Exact mapped bytes E8 62 DE 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0xde
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a6ba3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4a6b86
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 3D BE 09 00: call 0x5429ee
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0xbe
        __asm _emit 0x09
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
