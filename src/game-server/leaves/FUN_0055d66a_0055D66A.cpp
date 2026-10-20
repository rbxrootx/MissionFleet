// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D66A .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0055d66a_0055D66A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 164h
        push 5cebf0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 DC DA F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xdc
        __asm _emit 0xda
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0c4h]
        mov esp, ebp
        pop ebp
        ret
    }
}
