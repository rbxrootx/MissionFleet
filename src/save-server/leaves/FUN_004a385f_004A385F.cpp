// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A385F .. +0x26 bytes.
extern "C" __declspec(naked) void FUN_004a385f_004A385F() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 98h
        push 6749f4h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 E7 69 03 00: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x69
        __asm _emit 0x03
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 21 BF 02 00: call 0x4cf7a2
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0xbf
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
