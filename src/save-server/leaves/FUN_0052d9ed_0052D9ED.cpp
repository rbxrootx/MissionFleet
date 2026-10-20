// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0052D9ED .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_0052d9ed_0052D9ED() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        add eax, 0ach
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 0C EB F9 FF: call 0x4cc51a
        __asm _emit 0xe8
        __asm _emit 0x0c
        __asm _emit 0xeb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        or ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
