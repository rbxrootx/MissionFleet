// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862CD90 .. +0x35 bytes.
extern "C" __declspec(naked) void FUN_5862cd90_5862CD90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1fch], 0
        ; Exact mapped bytes 7E 1E: jle 0x5862cdc1
        __asm _emit 0x7e
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 1fch]
        sub edx, 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1fch], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A0 FE FF FF: call 0x5862cc60
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
