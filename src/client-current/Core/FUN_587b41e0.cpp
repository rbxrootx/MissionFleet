// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x587B41E0 .. +0x4E bytes.
extern "C" __declspec(naked) void FUN_587b41e0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        ; Exact mapped bytes FF 15 FC 41 89 58: call dword ptr [0x588941fc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xfc
        __asm _emit 0x41
        __asm _emit 0x89
        __asm _emit 0x58
        mov dword ptr [ebp - 8], eax
        push 0
        push 0
        lea eax, [ebp - 4]
        push eax
        push 400h
        mov ecx, dword ptr [ebp - 8]
        push ecx
        push 0
        push 1300h
        ; Exact mapped bytes FF 15 8C 43 89 58: call dword ptr [0x5889438c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x8c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        push 10h
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        push eax
        push 0
        ; Exact mapped bytes FF 15 6C 44 89 58: call dword ptr [0x5889446c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x6c
        __asm _emit 0x44
        __asm _emit 0x89
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 88 43 89 58: call dword ptr [0x58894388]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x88
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
