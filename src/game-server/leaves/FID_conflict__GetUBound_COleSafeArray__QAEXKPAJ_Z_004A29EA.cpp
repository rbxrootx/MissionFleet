// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A29EA .. +0x28 bytes.
extern "C" __declspec(naked) void FID_conflict__GetUBound_COleSafeArray__QAEXKPAJ_Z_004A29EA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 C8 24 5E 00: call dword ptr [0x5e24c8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0x24
        __asm _emit 0x5e
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 54 9E FF FF: call 0x49c860
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x9e
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
