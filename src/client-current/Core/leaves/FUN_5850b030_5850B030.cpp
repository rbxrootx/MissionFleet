// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850B030 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_5850b030_5850B030() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ecx + 0ch]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        lea edx, [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 55 F8: call dword ptr [ebp - 8]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf8
        push eax
        ; Exact mapped bytes E8 74 C6 FF FF: call 0x585076d0
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xc6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
