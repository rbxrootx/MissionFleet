// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883C274 .. +0x2C bytes.
extern "C" __declspec(naked) void FUN_5883c274_5883C274() {
    __asm {
        push ebp
        mov ebp, esp
        push eax
        push ebx
        push ecx
        mov eax, 544d574ch
        mov ebx, 11h
        mov ecx, 544d574ch
        add ebx, eax
        add ecx, eax
        pop ecx
        pop ebx
        pop eax
        push eax
        push ebx
        mov eax, dword ptr [ebp + 8]
        mov ebx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ebx
        pop ebx
        pop eax
        leave
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
