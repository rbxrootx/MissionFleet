// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053719D .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_0053719d_0053719D() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x5371c4
        __asm _emit 0x75
        __asm _emit 0x14
        push 3dch
        push 636640h
        ; Exact mapped bytes E8 81 1B FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x1b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5371c4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5371a7
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 94 B5 68 00: call dword ptr [0x68b594]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xb5
        __asm _emit 0x68
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
