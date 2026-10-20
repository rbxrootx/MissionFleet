// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578C41 .. +0x2A bytes.
extern "C" __declspec(naked) void FID_conflict__NotifySaved_COleServerDoc__QAEXXZ_00578C41() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 19eh
        push 67cd20h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 05 16 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0xff
        push 0
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8F 98 FF FF: call 0x5724f6
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
