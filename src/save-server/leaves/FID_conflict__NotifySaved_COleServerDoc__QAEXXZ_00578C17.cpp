// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00578C17 .. +0x2A bytes.
extern "C" __declspec(naked) void FID_conflict__NotifySaved_COleServerDoc__QAEXXZ_00578C17() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 19ch
        push 67cd20h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 2F 16 F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x16
        __asm _emit 0xf6
        __asm _emit 0xff
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 98 FF FF: call 0x5724f6
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0x98
        __asm _emit 0xff
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
