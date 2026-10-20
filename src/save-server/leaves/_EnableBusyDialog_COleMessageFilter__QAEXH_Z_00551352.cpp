// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551352 .. +0x26 bytes.
extern "C" __declspec(naked) void _EnableBusyDialog_COleMessageFilter__QAEXH_Z_00551352() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 24h
        push 67bf9ch
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 F7 8E F8 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0x8e
        __asm _emit 0xf8
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 28h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
