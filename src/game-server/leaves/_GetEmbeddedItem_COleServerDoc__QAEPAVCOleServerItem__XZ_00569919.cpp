// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00569919 .. +0x5B bytes.
extern "C" __declspec(naked) void _GetEmbeddedItem_COleServerDoc__QAEPAVCOleServerItem__XZ_00569919() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 75 25: jne 0x569951
        __asm _emit 0x75
        __asm _emit 0x25
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 92 F8 00 00 00: call dword ptr [edx + 0xf8]
        __asm _emit 0xff
        __asm _emit 0x92
        __asm _emit 0xf8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0bch], eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0bch]
        ; Exact mapped bytes E8 16 26 FE FF: call 0x54bf67
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0x26
        __asm _emit 0xfe
        __asm _emit 0xff
        push 6bh
        push 5d053ch
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        push ecx
        ; Exact mapped bytes E8 F9 17 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0x17
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov esp, ebp
        pop ebp
        ret
    }
}
