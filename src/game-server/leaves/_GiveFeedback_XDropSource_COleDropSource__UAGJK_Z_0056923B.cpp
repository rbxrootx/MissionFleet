// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0056923B .. +0x35 bytes.
extern "C" __declspec(naked) void _GiveFeedback_XDropSource_COleDropSource__UAGJK_Z_0056923B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 1ch
        mov dword ptr [ebp - 4], eax
        push 0adh
        push 5cffc8h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 05 1F F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0x1f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
