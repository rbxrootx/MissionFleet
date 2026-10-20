// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F863A .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_004f863a_004F863A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        push 0
        ; Exact mapped bytes E8 B6 CE 03 00: call 0x535500
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0xce
        __asm _emit 0x03
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 92 98 00 00 00: call dword ptr [edx + 0x98]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0x98
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
