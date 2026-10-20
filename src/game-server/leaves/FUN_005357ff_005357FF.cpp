// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005357FF .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_005357ff_005357FF() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        neg ecx
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        neg eax
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 1F FE FF FF: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
