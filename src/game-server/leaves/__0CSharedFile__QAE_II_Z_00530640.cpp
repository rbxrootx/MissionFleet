// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00530640 .. +0x42 bytes.
extern "C" __declspec(naked) void __0CSharedFile__QAE_II_Z_00530640() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED A5 FE FF: call 0x51ac40
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xa5
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 58a104h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 28h], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 2ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 30h], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
