// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5889A65D .. +0x29 bytes.
extern "C" __declspec(naked) void Catch_All_5889a65d() {
    __asm {
        mov eax, dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp - 20h]
        mov edx, dword ptr [ecx + 10h]
        lea eax, [eax + eax*2]
        add eax, eax
        add eax, eax
        add eax, eax
        add edx, eax
        push edx
        mov edx, dword ptr [ebp + 0ch]
        add eax, edx
        push eax
        ; Exact mapped bytes E8 33 FA FF FF: call 0x5889a0b0
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        push 0
        push 0
        ; Exact mapped bytes E8 F2 25 0E 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0xf2
        __asm _emit 0x25
        __asm _emit 0x0e
        __asm _emit 0x00
    }
}
