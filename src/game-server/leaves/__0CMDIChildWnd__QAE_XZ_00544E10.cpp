// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00544E10 .. +0x39 bytes.
extern "C" __declspec(naked) void __0CMDIChildWnd__QAE_XZ_00544E10() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 D9 FF FF: call 0x542720
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58486ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0d4h], 0ffffffffh
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 104h], 0ffffffffh
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
