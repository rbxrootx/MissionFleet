// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00570267 .. +0x2A bytes.
extern "C" __declspec(naked) void FID_conflict__NotifySaved_COleServerDoc__QAEXXZ_00570267() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 19ch
        push 5d0548h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 DF AE F8 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xae
        __asm _emit 0xf8
        __asm _emit 0xff
        push 1
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B9 98 FF FF: call 0x569b46
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
