// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0057B7F7 .. +0x45 bytes.
extern "C" __declspec(naked) void _OnSetData_CItemDataSource_COleServerItem__MAEHPAUtagFORMATETC__PAUtagSTGMEDIUM__H_Z_0057B7F7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 58ah
        push 67d108h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 4D EA F5 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0xea
        __asm _emit 0xf5
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        sub ecx, 3ch
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 A0 00 00 00: call dword ptr [eax + 0xa0]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
