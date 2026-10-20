// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00543936 .. +0x7C bytes.
extern "C" __declspec(naked) void FUN_00543936_00543936() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 1ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 20h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 28h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 2ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 30h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 38h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 68h], 0
        mov ecx, dword ptr [ebp - 4]
        add ecx, 60h
        push ecx
        ; Exact mapped bytes FF 15 74 25 5E 00: call dword ptr [0x5e2574]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x74
        __asm _emit 0x25
        __asm _emit 0x5e
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 24h], 1
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 58h], 0
        mov esp, ebp
        pop ebp
        ret
    }
}
