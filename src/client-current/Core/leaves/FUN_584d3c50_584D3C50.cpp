// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584D3C50 .. +0xA1 bytes.
extern "C" __declspec(naked) void FUN_584d3c50_584D3C50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0e8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0fch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f8h], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f4h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f0h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0fch], 0
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0f8h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0f4h], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0f0h], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 90h]
        add ecx, 1
        push ecx
        push 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 100h]
        push eax
        ; Exact mapped bytes E8 26 91 37 00: call 0x5884ce10
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0x91
        __asm _emit 0x37
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ret
    }
}
