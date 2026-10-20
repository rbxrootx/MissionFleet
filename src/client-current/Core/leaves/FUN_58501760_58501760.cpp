// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58501760 .. +0x2A bytes.
extern "C" __declspec(naked) void FUN_58501760_58501760() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov byte ptr [ebp - 1], 1
        mov dword ptr [ebp - 8], 7ffffffh
        cmp dword ptr [ebp + 8], 7ffffffh
        ; Exact mapped bytes 76 06: jbe 0x58501780
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 F1 67 F8 FF: call 0x58487f70
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0x67
        __asm _emit 0xf8
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp + 8]
        shl eax, 5
        mov esp, ebp
        pop ebp
        ret
    }
}
