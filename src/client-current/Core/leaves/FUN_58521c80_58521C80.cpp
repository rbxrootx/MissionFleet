// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58521C80 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_58521c80_58521C80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 41 58 F6 FF: call 0x584874d0
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0x58
        __asm _emit 0xf6
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov byte ptr [eax + 0ch], 0
        mov ecx, dword ptr [ebp - 4]
        mov byte ptr [ecx + 0dh], 1
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
