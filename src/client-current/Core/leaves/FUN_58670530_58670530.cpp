// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58670530 .. +0x47 bytes.
extern "C" __declspec(naked) void FUN_58670530_58670530() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0dch], 0ffffffffh
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 0cch]
        mov dword ptr [ebp - 8], edx
        push 0
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 E4 F2 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xe4
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0d0h]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 CE F2 E2 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0xf2
        __asm _emit 0xe2
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
