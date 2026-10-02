// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501A80 .. +0x37 bytes.
extern "C" __declspec(naked) void FUN_58501a80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov eax, dword ptr [ebp + 0ch]
        push eax
        push 18h
        ; Exact mapped bytes E8 EF 5E F8 FF: call 0x58487980
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x5e
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 8
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        ; Exact mapped bytes E8 10 58 F8 FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0xf8
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        mov edx, dword ptr [ebp - 4]
        push edx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FE 37 FC FF: call 0x584c52b0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x37
        __asm _emit 0xfc
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
