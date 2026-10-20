// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541BCA .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_00541bca_00541BCA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 75 14: jne 0x541bf1
        __asm _emit 0x75
        __asm _emit 0x14
        push 3cah
        push 582398h
        ; Exact mapped bytes E8 14 2E FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x2e
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541bf1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x541bd4
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 28h]
        push eax
        ; Exact mapped bytes FF 15 D0 23 5E 00: call dword ptr [0x5e23d0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0x23
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
