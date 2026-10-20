// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00407B30 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_00407b30_00407B30() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        push 82h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C0 6D 02 00: call 0x42e908
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x6d
        __asm _emit 0x02
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 43c7d8h
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
