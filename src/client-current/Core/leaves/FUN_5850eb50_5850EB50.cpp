// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5850EB50 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_5850eb50_5850EB50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 904h]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 904h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 904h]
        cmp edx, dword ptr [ecx + 900h]
        ; Exact mapped bytes 76 12: jbe 0x5850eb92
        __asm _emit 0x76
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 900h]
        mov dword ptr [eax + 904h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
