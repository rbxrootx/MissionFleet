// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004C19E0 .. +0x3F bytes.
extern "C" __declspec(naked) void FID_conflict___open_004C19E0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 4
        mov dword ptr [ebp - 8], ecx
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx - 4]
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 8], 0
        mov ecx, dword ptr [ebp - 4]
        push ecx
        push 40h
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 08 00 00 00: call 0x4c1a20
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov esp, ebp
        pop ebp
        ret
    }
}
