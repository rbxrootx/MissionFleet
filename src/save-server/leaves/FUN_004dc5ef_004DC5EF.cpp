// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004DC5EF .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_004dc5ef_004DC5EF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 69 DD FF FF: call 0x4da36a
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 74 22: je 0x4dc62c
        __asm _emit 0x74
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 C0 BC 68 00: call dword ptr [0x68bcc0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4dc62c
        __asm _emit 0x75
        __asm _emit 0x11
        push 54h
        push 676930h
        ; Exact mapped bytes E8 19 C7 04 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4dc62c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 CF: jne 0x4dc601
        __asm _emit 0x75
        __asm _emit 0xcf
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
