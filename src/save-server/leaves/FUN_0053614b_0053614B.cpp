// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053614B .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0053614b_0053614B() {
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
        ; Exact mapped bytes 75 14: jne 0x536172
        __asm _emit 0x75
        __asm _emit 0x14
        push 34eh
        push 636640h
        ; Exact mapped bytes E8 D3 2B FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x536172
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x536155
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        mov edx, dword ptr [ebp + 18h]
        push edx
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 E6 C9 FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc9
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes FF 15 D0 BC 68 00: call dword ptr [0x68bcd0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 20 00: ret 0x20
        __asm _emit 0xc2
        __asm _emit 0x20
        __asm _emit 0x00
    }
}
