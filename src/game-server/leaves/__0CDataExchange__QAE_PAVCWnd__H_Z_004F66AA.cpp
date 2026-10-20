// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F66AA .. +0x3E bytes.
extern "C" __declspec(naked) void __0CDataExchange__QAE_PAVCWnd__H_Z_004F66AA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 0c3ch
        push 5c5574h
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 9C 4A 00 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x4a
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
