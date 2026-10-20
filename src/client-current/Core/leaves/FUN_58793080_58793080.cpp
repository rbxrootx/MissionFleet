// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58793080 .. +0x57 bytes.
extern "C" __declspec(naked) void FUN_58793080_58793080() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp + 0ch], eax
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 6
        idiv ecx
        imul edx, edx, 47h
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp + 0ch]
        cdq
        mov ecx, 6
        idiv ecx
        imul edx, eax, 53h
        mov eax, dword ptr [ebp - 4]
        add edx, dword ptr [eax + 8]
        mov dword ptr [ebp - 8], edx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [ecx], edx
        mov dword ptr [ecx + 4], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
