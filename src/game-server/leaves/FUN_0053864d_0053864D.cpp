// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053864D .. +0x49 bytes.
extern "C" __declspec(naked) void FUN_0053864d_0053864D() {
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
        ; Exact mapped bytes 75 14: jne 0x538674
        __asm _emit 0x75
        __asm _emit 0x14
        push 285h
        push 581fc0h
        ; Exact mapped bytes E8 91 C3 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x538674
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x538657
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
