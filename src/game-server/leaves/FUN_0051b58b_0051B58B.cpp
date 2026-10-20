// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0051B58B .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_0051b58b_0051B58B() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 10fh
        push 5cb0ach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BB FB FD FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 54: call dword ptr [edx + 0x54]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x54
        mov esp, ebp
        pop ebp
        ret
    }
}
