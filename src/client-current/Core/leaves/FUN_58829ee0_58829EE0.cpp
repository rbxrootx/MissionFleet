// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58829EE0 .. +0x50 bytes.
extern "C" __declspec(naked) void FUN_58829ee0_58829EE0() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 5887e060h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push ecx
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        push eax
        lea eax, [ebp - 0ch]
        ; Exact mapped bytes 64 A3 00 00 00 00: mov dword ptr fs:[0], eax
        __asm _emit 0x64
        __asm _emit 0xa3
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        mov dword ptr [eax], 588be4e0h
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 39 E5 F9 FF: call 0x587c8450
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xe5
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D0 AD F9 FF: call 0x587c4cf0
        __asm _emit 0xe8
        __asm _emit 0xd0
        __asm _emit 0xad
        __asm _emit 0xf9
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
