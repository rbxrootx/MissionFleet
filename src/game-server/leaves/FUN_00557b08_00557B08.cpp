// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00557B08 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_00557b08_00557B08() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 8]
        sub eax, 6ch
        mov dword ptr [ebp - 4], eax
        push 8a1h
        push 5cfa08h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 38 36 FA FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x36
        __asm _emit 0xfa
        __asm _emit 0xff
        push 0
        push 2
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 50 74: call dword ptr [eax + 0x74]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x74
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
