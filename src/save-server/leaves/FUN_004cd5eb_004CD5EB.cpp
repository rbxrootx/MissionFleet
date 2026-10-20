// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CD5EB .. +0x25 bytes.
extern "C" __declspec(naked) void FUN_004cd5eb_004CD5EB() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 FD F1 FF FF: call 0x4cc7f7
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xf1
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax]
        push ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        push eax
        ; Exact mapped bytes FF 15 90 BF 68 00: call dword ptr [0x68bf90]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
