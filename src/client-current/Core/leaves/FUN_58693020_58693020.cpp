// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58693020 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58693020_58693020() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0a8h]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0a8h]
        ; Exact mapped bytes E8 4D 40 E4 FF: call 0x584d7090
        __asm _emit 0xe8
        __asm _emit 0x4d
        __asm _emit 0x40
        __asm _emit 0xe4
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 0E 44 EF FF: call 0x58587460
        __asm _emit 0xe8
        __asm _emit 0x0e
        __asm _emit 0x44
        __asm _emit 0xef
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
