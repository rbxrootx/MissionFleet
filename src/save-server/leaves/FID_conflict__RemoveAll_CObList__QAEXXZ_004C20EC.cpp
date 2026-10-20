// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C20EC .. +0x58 bytes.
extern "C" __declspec(naked) void FID_conflict__RemoveAll_CObList__QAEXXZ_004C20EC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 2fh
        push 67c688h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 5D 81 01 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x81
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
        ; Exact mapped bytes E8 D7 9D FF FF: call 0x4bbf0d
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x9d
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 14h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
