// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570C7C .. +0x4E bytes.
extern "C" __declspec(naked) void _OnHide_COleServerItem__MAEXXZ_00570C7C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 132h
        push 5d0930h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 C8 A4 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc8
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 7B F4 FF FF: call 0x57011b
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf4
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 136h
        push 5d0930h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 AA A4 F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xa4
        __asm _emit 0xf8
        __asm _emit 0xff
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 0C 01 00 00: call dword ptr [eax + 0x10c]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0x0c
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
