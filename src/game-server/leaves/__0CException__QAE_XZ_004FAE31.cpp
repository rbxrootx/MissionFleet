// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FAE31 .. +0x33 bytes.
extern "C" __declspec(naked) void __0CException__QAE_XZ_004FAE31() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 50 5B 03 00: call 0x530990
        __asm _emit 0xe8
        __asm _emit 0x50
        __asm _emit 0x5b
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 58211ch
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 1
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
