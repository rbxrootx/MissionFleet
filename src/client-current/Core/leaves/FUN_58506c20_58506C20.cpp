// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58506C20 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58506c20_58506C20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 11 F1 FB FF: call 0x584c5d40
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xf1
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 FD FF FF: call 0x58506a10
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a3b68h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
