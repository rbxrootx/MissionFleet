// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A62F1 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_004a62f1_004A62F1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov edx, dword ptr [ecx + 14h]
        or dh, 4
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 5ch]
        mov dword ptr [ecx + 14h], edx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        push eax
        ; Exact mapped bytes E8 B7 DC FD FF: call 0x483fd0
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xdc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov esp, ebp
        pop ebp
        ret
    }
}
