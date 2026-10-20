// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58832538 .. +0x33 bytes.
extern "C" __declspec(naked) void FUN_58832538_58832538() {
    __asm {
        push eax
        ; Exact mapped bytes 64 FF 35 00 00 00 00: push dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xff
        __asm _emit 0x35
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [esp + 0ch]
        sub esp, dword ptr [esp + 0ch]
        push ebx
        push esi
        push edi
        mov dword ptr [eax], ebp
        mov ebp, eax
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        push dword ptr [ebp - 4]
        mov dword ptr [ebp - 4], 0ffffffffh
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ret
    }
}
