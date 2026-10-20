// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588FE9D0 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_588fe9d0() {
    __asm {
        mov eax, dword ptr [esp + 4]
        mov edx, dword ptr [esp + 0ch]
        lea eax, [eax + eax*2]
        lea eax, [ecx + eax*8]
        mov ecx, dword ptr [esp + 8]
        mov dword ptr [eax - 10h], ecx
        mov ecx, dword ptr [esp + 10h]
        mov dword ptr [eax - 0ch], edx
        mov edx, dword ptr [esp + 14h]
        mov dword ptr [eax - 8], ecx
        mov ecx, dword ptr [esp + 18h]
        mov dword ptr [eax - 4], edx
        mov byte ptr [eax - 14h], 1
        mov dword ptr [eax], ecx
        ; Exact mapped bytes C2 18 00: ret 0x18
        __asm _emit 0xc2
        __asm _emit 0x18
        __asm _emit 0x00
    }
}
