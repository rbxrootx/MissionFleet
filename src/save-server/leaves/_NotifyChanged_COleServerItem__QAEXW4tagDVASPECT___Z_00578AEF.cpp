// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578AEF .. +0x2E bytes.
extern "C" __declspec(naked) void _NotifyChanged_COleServerItem__QAEXW4tagDVASPECT___Z_00578AEF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 18bh
        push 67cd20h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 57 17 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0x17
        __asm _emit 0xf6
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 06 00 00: call 0x57916a
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
