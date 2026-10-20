// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00575C31 .. +0x33 bytes.
extern "C" __declspec(naked) void _IsDirty_XPersistStorage_COleServerDoc__UAGJXZ_00575C31() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 8]
        sub eax, 0d4h
        mov dword ptr [ebp - 8], eax
        push 641128h
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 55 4E FD FF: call 0x54aaa4
        __asm _emit 0xe8
        __asm _emit 0x55
        __asm _emit 0x4e
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
