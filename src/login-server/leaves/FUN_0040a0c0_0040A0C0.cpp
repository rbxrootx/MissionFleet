// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040A0C0 .. +0x87 bytes.
extern "C" __declspec(naked) void FUN_0040a0c0_0040A0C0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 1
        ; Exact mapped bytes 75 64: jne 0x40a133
        __asm _emit 0x75
        __asm _emit 0x64
        push 1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 94 11 00 00: call 0x40b270
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 3e9h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 71 40 02 00: call 0x42e15b
        __asm _emit 0xe8
        __asm _emit 0x71
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 78h]
        ; Exact mapped bytes E8 99 11 00 00: call 0x40b290
        __asm _emit 0xe8
        __asm _emit 0x99
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 3ebh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 56 40 02 00: call 0x42e15b
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        push 1
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 78h]
        ; Exact mapped bytes E8 5E 11 00 00: call 0x40b270
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        mov esi, eax
        mov edi, edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 78h]
        ; Exact mapped bytes E8 6F 11 00 00: call 0x40b290
        __asm _emit 0xe8
        __asm _emit 0x6f
        __asm _emit 0x11
        __asm _emit 0x00
        __asm _emit 0x00
        sub esi, eax
        sbb edi, edx
        push esi
        push 3ech
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 28 40 02 00: call 0x42e15b
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x40
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C1 0E 00 00: call 0x40b000
        __asm _emit 0xe8
        __asm _emit 0xc1
        __asm _emit 0x0e
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
