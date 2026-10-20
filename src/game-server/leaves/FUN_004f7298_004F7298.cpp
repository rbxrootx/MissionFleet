// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F7298 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_004f7298_004F7298() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, 1
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x4f72bf
        __asm _emit 0x74
        __asm _emit 0x14
        push 0dcfh
        push 5c5574h
        ; Exact mapped bytes E8 46 D7 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x46
        __asm _emit 0xd7
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f72bf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4f72a2
        __asm _emit 0x75
        __asm _emit 0xdd
        xor eax, eax
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
