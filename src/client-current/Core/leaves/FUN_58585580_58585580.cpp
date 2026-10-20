// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58585580 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_58585580_58585580() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        push ecx
        ; Exact mapped bytes E8 1B 1D F0 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x1d
        __asm _emit 0xf0
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 1F 02 00 00: call 0x585857d0
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4]
        add ecx, 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 4], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
