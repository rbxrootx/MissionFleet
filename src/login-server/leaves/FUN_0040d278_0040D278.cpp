// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040D278 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_0040d278_0040D278() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 89 70 FF FF: call 0x404310
        __asm _emit 0xe8
        __asm _emit 0x89
        __asm _emit 0x70
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        imul ecx, ecx, 0b0h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0cc8h]
        lea ecx, [eax + ecx + 84h]
        push ecx
        ; Exact mapped bytes FF 15 5C C2 43 00: call dword ptr [0x43c25c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x5c
        __asm _emit 0xc2
        __asm _emit 0x43
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
