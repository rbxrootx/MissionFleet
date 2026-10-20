// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862CD50 .. +0x40 bytes.
extern "C" __declspec(naked) void FUN_5862cd50_5862CD50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1f8h]
        sub ecx, 8
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 1fch], ecx
        ; Exact mapped bytes 7D 1E: jge 0x5862cd8c
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1fch]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 1fch], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 FE FF FF: call 0x5862cc60
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
