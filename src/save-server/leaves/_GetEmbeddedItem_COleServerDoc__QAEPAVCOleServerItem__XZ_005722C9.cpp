// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005722C9 .. +0x5B bytes.
extern "C" __declspec(naked) void _GetEmbeddedItem_COleServerDoc__QAEPAVCOleServerItem__XZ_005722C9() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0bch], 0
        ; Exact mapped bytes 75 25: jne 0x572301
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
        ; Exact mapped bytes E8 D6 86 FD FF: call 0x54a9d7
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x86
        __asm _emit 0xfd
        __asm _emit 0xff
        push 6bh
        push 67cd14h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        push ecx
        ; Exact mapped bytes E8 49 7F F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0x7f
        __asm _emit 0xf6
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0bch]
        mov esp, ebp
        pop ebp
        ret
    }
}
