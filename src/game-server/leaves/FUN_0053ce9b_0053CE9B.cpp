// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053CE9B .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_0053ce9b_0053CE9B() {
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
        ; Exact mapped bytes 75 14: jne 0x53ceca
        __asm _emit 0x75
        __asm _emit 0x14
        push 0ffh
        push 582398h
        ; Exact mapped bytes E8 3B 7B FF FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x7b
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53ceca
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x53cea5
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1ch]
        push edx
        ; Exact mapped bytes E8 E0 02 F5 FF: call 0x48d1c0
        __asm _emit 0xe8
        __asm _emit 0xe0
        __asm _emit 0x02
        __asm _emit 0xf5
        __asm _emit 0xff
        add esp, 8
        push eax
        ; Exact mapped bytes E8 96 4A FB FF: call 0x4f197f
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0x4a
        __asm _emit 0xfb
        __asm _emit 0xff
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
