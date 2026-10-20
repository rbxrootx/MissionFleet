// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588461CB .. +0x28 bytes.
extern "C" __declspec(naked) void Catch_All_588461cb_588461CB() {
    __asm {
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 5ch], eax
        mov eax, dword ptr [ebp - 5ch]
        mov dword ptr [ebp - 10ch], eax
        push 4
        push dword ptr [ebp + 8]
        push dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C5 40 FF FF: call 0x5883a2ac
        __asm _emit 0xe8
        __asm _emit 0xc5
        __asm _emit 0x40
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 0ch
        push 0
        push 0
        ; Exact mapped bytes E8 F2 71 00 00: call 0x5884d3e5
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x71
        __asm _emit 0x00
        __asm _emit 0x00
    }
}
