// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58844DAF .. +0x24 bytes.
extern "C" __declspec(naked) void Catch_All_58844daf_58844DAF() {
    __asm {
        mov eax, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 58h], eax
        mov eax, dword ptr [ebp - 58h]
        mov dword ptr [ebp - 68h], eax
        push 60h
        push 1
        push dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 E5 54 FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x54
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push 0
        push 0
        ; Exact mapped bytes E8 12 86 00 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0x12
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
