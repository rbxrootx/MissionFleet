// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053C5F0 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_0053c5f0_0053C5F0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53c61f
        __asm _emit 0x75
        __asm _emit 0x14
        push 82h
        push 582398h
        ; Exact mapped bytes E8 E6 83 FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x83
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53c61f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x53c5fa
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F9 A0 FF FF: call 0x53672a
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes FF 15 50 27 5E 00: call dword ptr [0x5e2750]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x50
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
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
