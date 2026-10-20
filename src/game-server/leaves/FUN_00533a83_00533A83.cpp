// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533A83 .. +0x34 bytes.
extern "C" __declspec(naked) void FUN_00533a83_00533A83() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 68h]
        add ecx, 1ch
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 33 9E FB FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x9e
        __asm _emit 0xfb
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 4]
        or edx, 1
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
