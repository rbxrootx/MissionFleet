// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536817 .. +0x29 bytes.
extern "C" __declspec(naked) void _CreateStockObject_CGdiObject__QAEHH_Z_00536817() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes FF 15 64 21 5E 00: call dword ptr [0x5e2164]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x64
        __asm _emit 0x21
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], eax
        mov edx, dword ptr [ebp - 4]
        xor eax, eax
        cmp dword ptr [edx + 4], 0
        setne al
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
