// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5882D170 .. +0x3D bytes.
extern "C" __declspec(naked) void FUN_5882d170() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 1
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6B 7F F0 FF: call 0x587350f0
        __asm _emit 0xe8
        __asm _emit 0x6b
        __asm _emit 0x7f
        __asm _emit 0xf0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx], 588be7c8h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 98h], 1ch
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
