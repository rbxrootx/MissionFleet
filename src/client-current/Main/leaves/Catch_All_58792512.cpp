// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58792512 .. +0x2D bytes.
extern "C" __declspec(naked) void Catch_All_58792512() {
    __asm {
        mov ecx, dword ptr [ebp + 10h]
        lea eax, [ecx*8]
        sub eax, ecx
        mov ecx, dword ptr [ebp - 60h]
        mov edx, dword ptr [ecx + 10h]
        add eax, eax
        add eax, eax
        add edx, eax
        push edx
        mov edx, dword ptr [ebp + 0ch]
        add eax, edx
        push eax
        ; Exact mapped bytes E8 2A FD 16 00: call 0x58902260
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0xfd
        __asm _emit 0x16
        __asm _emit 0x00
        push 0
        push 0
        ; Exact mapped bytes E8 39 A7 1E 00: call 0x5897cc78
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa7
        __asm _emit 0x1e
        __asm _emit 0x00
    }
}
