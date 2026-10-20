// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5887CEC0 .. +0xF bytes.
extern "C" __declspec(naked) void FUN_5887cec0() {
    __asm {
        ; Exact mapped bytes 8B 4D E4: mov ecx, dword ptr [ebp - 0x1c]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xe4
        ; Exact mapped bytes 33 CD: xor ecx, ebp
        __asm _emit 0x33
        __asm _emit 0xcd
        ; Exact mapped bytes E8 86 41 FB FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x86
        __asm _emit 0x41
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes E9 E1 58 FB FF: jmp 0x588327b0
        __asm _emit 0xe9
        __asm _emit 0xe1
        __asm _emit 0x58
        __asm _emit 0xfb
        __asm _emit 0xff
    }
}
