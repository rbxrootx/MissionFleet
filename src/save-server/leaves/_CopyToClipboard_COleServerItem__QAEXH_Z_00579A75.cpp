// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00579A75 .. +0x40 bytes.
extern "C" __declspec(naked) void _CopyToClipboard_COleServerItem__QAEXH_Z_00579A75() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 1a8h
        push 67d108h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 CF 07 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x07
        __asm _emit 0xf6
        __asm _emit 0xff
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 50 78: call dword ptr [eax + 0x78]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x78
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 75 E8 FE FF: call 0x568324
        __asm _emit 0xe8
        __asm _emit 0x75
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
