// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00535A98 .. +0x5B bytes.
extern "C" __declspec(naked) void FUN_00535a98_00535A98() {
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
        ; Exact mapped bytes 75 14: jne 0x535abf
        __asm _emit 0x75
        __asm _emit 0x14
        push 301h
        push 636640h
        ; Exact mapped bytes E8 86 32 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x32
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x535abf
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x535aa2
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 93 F2 FE FF: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x93
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 D4 F2 FE FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0xd4
        __asm _emit 0xf2
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 64: call dword ptr [edx + 0x64]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x64
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
