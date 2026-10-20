// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057020F .. +0x34 bytes.
extern "C" __declspec(naked) void _IsLinkedItem_COleServerItem__QBEHXZ_0057020F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 196h
        push 5d0548h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 37 AF F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xaf
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 EA FE FF FF: call 0x57011b
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax + 0bch]
        xor eax, eax
        cmp ecx, dword ptr [ebp - 4]
        setne al
        mov esp, ebp
        pop ebp
        ret
    }
}
