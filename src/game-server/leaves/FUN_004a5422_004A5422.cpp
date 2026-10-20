// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A5422 .. +0x65 bytes.
extern "C" __declspec(naked) void FUN_004a5422_004A5422() {
    __asm {
        push ebp
        mov ebp, esp
        push ebx
        push esi
        push edi
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 75 11: jne 0x4a5442
        __asm _emit 0x75
        __asm _emit 0x11
        push 67h
        push 5d0270h
        ; Exact mapped bytes E8 C3 F5 08 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xf5
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a5442
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4a5428
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp + 8]
        cmp dword ptr [edx + 20h], 0
        ; Exact mapped bytes 75 07: jne 0x4a5458
        __asm _emit 0x75
        __asm _emit 0x07
        mov eax, 80004001h
        ; Exact mapped bytes EB 28: jmp 0x4a5480
        __asm _emit 0xeb
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 20h]
        mov eax, dword ptr [ebp + 8]
        mov edx, dword ptr [eax + 20h]
        mov eax, dword ptr [edx]
        ; Exact mapped bytes FF 90 04 01 00 00: call dword ptr [eax + 0x104]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        pop ebp
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
