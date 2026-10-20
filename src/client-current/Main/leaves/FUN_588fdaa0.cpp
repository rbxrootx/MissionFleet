// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FDAA0 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_588fdaa0() {
    __asm {
        mov eax, dword ptr [esp + 0ch]
        push ebx
        mov ebx, dword ptr [esp + 8]
        push esi
        push edi
        mov edi, dword ptr [esp + 14h]
        push eax
        push edi
        push ebx
        mov esi, ecx
        ; Exact mapped bytes E8 E7 BD EC FF: call 0x587c98a0
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xbd
        __asm _emit 0xec
        __asm _emit 0xff
        mov eax, edi
        sub eax, 2
        ; Exact mapped bytes 75 2F: jne 0x588fdaef
        __asm _emit 0x75
        __asm _emit 0x2f
        cmp ebx, dword ptr [esi + 104h]
        ; Exact mapped bytes 75 27: jne 0x588fdaef
        __asm _emit 0x75
        __asm _emit 0x27
        mov ecx, dword ptr [esi + 100h]
        mov edx, dword ptr [esi]
        xor ecx, 0c20ae06bh
        cmp ecx, dword ptr [esi + 60h]
        mov ecx, esi
        ; Exact mapped bytes 75 0D: jne 0x588fdaea
        __asm _emit 0x75
        __asm _emit 0x0d
        mov eax, dword ptr [edx + 38h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        mov eax, dword ptr [edx + 30h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
