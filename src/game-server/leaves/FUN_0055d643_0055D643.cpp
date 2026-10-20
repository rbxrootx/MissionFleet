// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D643 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0055d643_0055D643() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 162h
        push 5cebf0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 03 DB F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xdb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0d0h]
        mov esp, ebp
        pop ebp
        ret
    }
}
