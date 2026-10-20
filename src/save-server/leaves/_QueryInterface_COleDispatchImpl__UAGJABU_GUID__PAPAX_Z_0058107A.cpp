// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0058107A .. +0x23 bytes.
extern "C" __declspec(naked) void _QueryInterface_COleDispatchImpl__UAGJABU_GUID__PAPAX_Z_0058107A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 10h
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 9D FC FF: call 0x54adaa
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x9d
        __asm _emit 0xfc
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
