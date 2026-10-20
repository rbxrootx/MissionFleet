// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00536752 .. +0x29 bytes.
extern "C" __declspec(naked) void __0CGdiObject__QAE_XZ_00536752() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 2F A2 FF FF: call 0x530990
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0xa2
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 582010h
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
