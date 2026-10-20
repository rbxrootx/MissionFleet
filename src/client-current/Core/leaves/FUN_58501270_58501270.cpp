// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501270 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58501270_58501270() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [eax]
        add ecx, 1
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 BB FF FF FF: call 0x58501250
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        sub eax, 1
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [ecx], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
