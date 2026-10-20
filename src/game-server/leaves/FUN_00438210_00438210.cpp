// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438210 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_00438210_00438210() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax], 5812f4h
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
