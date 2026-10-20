// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58584790 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_58584790_58584790() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 84h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 7F 09: jg 0x585847b0
        __asm _emit 0x7f
        __asm _emit 0x09
        mov dword ptr [ebp - 8], 1
        ; Exact mapped bytes EB 07: jmp 0x585847b7
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx + 0ach], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
