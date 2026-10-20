// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053578B .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_0053578b_0053578B() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 4]
        add ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx]
        add eax, dword ptr [ebp + 0ch]
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 91 FE FF FF: call 0x535640
        __asm _emit 0xe8
        __asm _emit 0x91
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
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
