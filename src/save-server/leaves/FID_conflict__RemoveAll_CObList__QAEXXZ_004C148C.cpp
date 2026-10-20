// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C148C .. +0x58 bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveAll_CObList__QAEXXZ_004C148C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2fh
        push 6769ach
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 BD 8D 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0x8d
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 10h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 8], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 37 AA FF FF: call 0x4bbf0d
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0xaa
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
