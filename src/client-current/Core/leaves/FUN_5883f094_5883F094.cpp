// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F094 .. +0x2B bytes.
extern "C" __declspec(naked) void FUN_5883f094_5883F094() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ecx
        mov dword ptr [ebp - 8], esp
        push dword ptr [ebp - 0ch]
        push dword ptr [ebp + 14h]
        push dword ptr [ebp + 10h]
        push dword ptr [ebp + 0ch]
        push dword ptr [ebp + 8]
        ; Exact mapped bytes E8 00 FF FF FF: call 0x5883efb2
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 18h
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
