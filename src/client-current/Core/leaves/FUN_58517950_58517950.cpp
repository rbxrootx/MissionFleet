// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58517950 .. +0x48 bytes.
extern "C" __declspec(naked) void FUN_58517950_58517950() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 908h]
        add ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 908h], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 908h]
        cmp edx, dword ptr [ecx + 900h]
        ; Exact mapped bytes 76 12: jbe 0x58517992
        __asm _emit 0x76
        __asm _emit 0x12
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 900h]
        mov dword ptr [eax + 908h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
