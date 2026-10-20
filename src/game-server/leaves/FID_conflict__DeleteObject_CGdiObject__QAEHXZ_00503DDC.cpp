// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00503DDC .. +0x27 bytes.
extern "C" __declspec(naked) void FID_conflict__DeleteObject_CGdiObject__QAEHXZ_00503DDC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 04: jne 0x503df0
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 0F: jmp 0x503dff
        __asm _emit 0xeb
        __asm _emit 0x0f
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 9C FF FF FF: call 0x503d94
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        ; Exact mapped bytes FF 15 E4 20 5E 00: call dword ptr [0x5e20e4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe4
        __asm _emit 0x20
        __asm _emit 0x5e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
