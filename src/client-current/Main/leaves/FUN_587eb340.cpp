// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587EB340 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_587eb340() {
    __asm {
        mov eax, dword ptr [esp + 4]
        cmp dword ptr [eax + 438h], 0
        ; Exact mapped bytes 75 17: jne 0x587eb364
        __asm _emit 0x75
        __asm _emit 0x17
        mov dword ptr [esp + 4], eax
        movzx eax, byte ptr [eax + 354h]
        mov ecx, dword ptr [ecx + eax*4 + 218f0h]
        ; Exact mapped bytes E9 CC 90 0C 00: jmp 0x588b4430
        __asm _emit 0xe9
        __asm _emit 0xcc
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x00
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
