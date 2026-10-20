// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58558080 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58558080_58558080() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 588a93f8h
        mov ecx, dword ptr [ebp - 4]
        add ecx, 10h
        ; Exact mapped bytes E8 35 F4 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0xf4
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1ch
        ; Exact mapped bytes E8 2A F4 F2 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xf4
        __asm _emit 0xf2
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 28h], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
