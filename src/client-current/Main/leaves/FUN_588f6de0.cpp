// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588F6DE0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_588f6de0() {
    __asm {
        push ebx
        mov ebx, dword ptr [esp + 0ch]
        push esi
        mov esi, ecx
        mov ecx, dword ptr [esi + 74h]
        mov eax, dword ptr [ecx + 68h]
        push edi
        mov edi, dword ptr [esp + 10h]
        cmp eax, edi
        ; Exact mapped bytes 75 0C: jne 0x588f6e03
        __asm _emit 0x75
        __asm _emit 0x0c
        mov edx, dword ptr [ecx + 6ch]
        cmp edx, ebx
        ; Exact mapped bytes 75 05: jne 0x588f6e03
        __asm _emit 0x75
        __asm _emit 0x05
        ; Exact mapped bytes E8 1D 00 00 00: call 0x588f6e20
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 78h]
        push ebx
        push edi
        ; Exact mapped bytes E8 A3 F5 FF FF: call 0x588f63b0
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
