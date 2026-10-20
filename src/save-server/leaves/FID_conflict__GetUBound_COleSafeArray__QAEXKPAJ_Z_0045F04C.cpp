// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0045F04C .. +0x28 bytes.
extern "C" __declspec(naked) void FID_conflict__GetUBound_COleSafeArray__QAEXKPAJ_Z_0045F04C() {
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
        ; Exact mapped bytes FF 15 28 BB 68 00: call dword ptr [0x68bb28]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x28
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 12 9E FF FF: call 0x458e80
        __asm _emit 0xe8
        __asm _emit 0x12
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
