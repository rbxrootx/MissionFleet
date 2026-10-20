// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042E0FB .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_0042e0fb_0042E0FB() {
    __asm {
        mov eax, dword ptr [ecx + 34h]
        test eax, eax
        ; Exact mapped bytes 75 15: jne 0x42e117
        __asm _emit 0x75
        __asm _emit 0x15
        push dword ptr [esp + 4]
        push dword ptr [ecx + 1ch]
        ; Exact mapped bytes FF 15 04 C5 43 00: call dword ptr [0x43c504]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0xc5
        __asm _emit 0x43
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [ecx], eax
        ; Exact mapped bytes EB 0F: jmp 0x42e126
        __asm _emit 0xeb
        __asm _emit 0x0f
        push dword ptr [esp + 8]
        mov edx, dword ptr [eax]
        mov ecx, eax
        push dword ptr [esp + 8]
        ; Exact mapped bytes FF 52 6C: call dword ptr [edx + 0x6c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x6c
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
