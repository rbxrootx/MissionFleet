// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E7DAC .. +0x58 bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveAll_CObList__QAEXXZ_004E7DAC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2fh
        push 5cfeb0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 9D 33 01 00: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0x33
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
        ; Exact mapped bytes E8 C7 FE FF FF: call 0x4e7cbd
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
