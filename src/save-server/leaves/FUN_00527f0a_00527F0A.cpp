// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00527F0A .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_00527f0a_00527F0A() {
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
        ; Exact mapped bytes 75 11: jne 0x527f2e
        __asm _emit 0x75
        __asm _emit 0x11
        push 23h
        push 634608h
        ; Exact mapped bytes E8 17 0E 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x527f2e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x527f14
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 24 CE FF FF: call 0x524d60
        __asm _emit 0xe8
        __asm _emit 0x24
        __asm _emit 0xce
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 65 CE FF FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xce
        __asm _emit 0xff
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
