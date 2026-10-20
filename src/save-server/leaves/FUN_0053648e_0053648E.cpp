// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053648E .. +0x60 bytes.
extern "C" __declspec(naked) void FUN_0053648e_0053648E() {
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
        ; Exact mapped bytes 75 14: jne 0x5364b5
        __asm _emit 0x75
        __asm _emit 0x14
        push 36ch
        push 636640h
        ; Exact mapped bytes E8 90 28 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x28
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5364b5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x536498
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 1ch]
        push edx
        mov ecx, dword ptr [ebp + 18h]
        ; Exact mapped bytes E8 BB C6 FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 14h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        push edx
        ; Exact mapped bytes FF 15 CC BC 68 00: call dword ptr [0x68bccc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbc
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
