// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D736 .. +0x27 bytes.
extern "C" __declspec(naked) void FUN_0055d736_0055D736() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 16fh
        push 5cebf0h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 10 DA F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xda
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov eax, dword ptr [ecx + 0a8h]
        mov esp, ebp
        pop ebp
        ret
    }
}
