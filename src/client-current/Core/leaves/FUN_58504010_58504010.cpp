// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58504010 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_58504010_58504010() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 B2 FF FF FF: call 0x58503fe0
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 70h]
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 6D 00 00 00: call 0x585040b0
        __asm _emit 0xe8
        __asm _emit 0x6d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 7D 08: jge 0x58504053
        __asm _emit 0x7d
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB 06: jmp 0x58504059
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax + 54h], ecx
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 54h], 1
        ; Exact mapped bytes 7D 09: jge 0x58504074
        __asm _emit 0x7d
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 09: jmp 0x5850407d
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 54h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [edx + 54h], eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 70h]
        ; Exact mapped bytes E8 FF 30 FD FF: call 0x584d7190
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        imul eax, dword ptr [edx + 68h]
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 54h]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 60h], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
